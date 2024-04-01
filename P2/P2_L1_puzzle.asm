.data
	map: .space 400
	dir: .space 48

.macro get_map(%des, %i, %j, %col)
	mult %i, %col
	mflo %des
	add  %des, %des, %j
	sll  %des, %des, 2
.end_macro

.macro get_dir(%des, %i, %j)
	sll  %des, %i, 1
	add  %des, %des, %j
	sll  %des, %des, 2
.end_macro

.macro push(%src)
	sw   %src, 0($sp)
	subi $sp, $sp, 4
.end_macro

.macro pop(%des)
	addi $sp, $sp, 4
	lw   %des, 0($sp)
.end_macro

.text
li   $s6, -1
li   $s7, 1 # const
li   $t8, 4

init_dir:
	li   $t0, 0
	li   $t1, 0
	get_dir($t9, $t0, $t1)
	sw   $0, dir($t9)
	li   $t1, 1
	get_dir($t9, $t0, $t1)
	sw   $s7, dir($t9)
	
	li   $t0, 1
	li   $t1, 0
	get_dir($t9, $t0, $t1)
	sw   $s7, dir($t9)
	li   $t1, 1
	get_dir($t9, $t0, $t1)
	sw   $0, dir($t9)
	
	li   $t0, 2
	li   $t1, 0
	get_dir($t9, $t0, $t1)
	sw   $0, dir($t9)
	li   $t1, 1
	get_dir($t9, $t0, $t1)
	sw   $s6, dir($t9)
	
	li   $t0, 3
	li   $t1, 0
	get_dir($t9, $t0, $t1)
	sw   $s6, dir($t9)
	li   $t1, 1
	get_dir($t9, $t0, $t1)
	sw   $0, dir($t9)
	
main:
	li   $v0, 5
	syscall
	move $s0, $v0 # n
	li   $v0, 5
	syscall
	move $s1, $v0 # m
	
	li   $t0, 1 # i
	input1:
		bgt  $t0, $s0, input1_end
		li   $t1, 1 # j
		input2:
			bgt  $t1, $s1, input2_end
			get_map($t9, $t0, $t1, $s1)
			li   $v0, 5
			syscall
			sw   $v0, map($t9)
			addi $t1, $t1, 1
			j    input2
		input2_end:
		addi $t0, $t0, 1
		j    input1
	input1_end:
	
	li   $v0, 5
	syscall
	move $s2, $v0 # start_x
	li   $v0, 5
	syscall
	move $s3, $v0 # start_y
	li   $v0, 5
	syscall
	move $s4, $v0 # end_x
	li   $v0, 5
	syscall
	move $s5, $v0 # end_y
	li   $t7, 0 # result
	
	get_map($t9, $s2, $s3, $s1)
	sw   $s6, map($t9)
	move $a1, $s2 # argument x
	move $a2, $s3 # argument y
	
	jal  dfs
	
	li   $v0, 1
	move $a0, $t7
	syscall
	li   $v0, 10
	syscall
	
dfs:
	bne  $a1, $s4, Else
	bne  $a2, $s5, Else
	If0:
		addi $t7, $t7, 1
		jr   $ra
	Else:
	
	li   $t0, 0 # for int i = 0;
	loop:
		bge  $t0, $t8, loop_end
		get_dir($t9, $t0, $0)
		lw   $t1, dir($t9)
		get_dir($t9, $t0, $s7)
		lw   $t2, dir($t9)
		add  $t1, $t1, $a1 #tx
		add  $t2, $t2, $a2 #ty
		
		ble  $t1, $0, If
		ble  $t2, $0, If
		bgt  $t1, $s0, If
		bgt  $t2, $s1, If
		
		get_map($t9, $t1, $t2, $s1)
		lw   $t3, map($t9)
		bne  $t3, $0, If
		
		# possible
		sw   $s6, map($t9)
		push($ra)
		push($a2)
		push($a1)
		push($t2)
		push($t1)
		push($t0)
		move $a1, $t1
		move $a2, $t2
		
		jal  dfs
		
		pop($t0)
		pop($t1)
		pop($t2)
		pop($a1)
		pop($a2)
		pop($ra)
		get_map($t9, $t1, $t2, $s1)
		sw   $0, map($t9)
		
		If:
		addi $t0, $t0, 1
		j    loop
	loop_end:
	jr   $ra