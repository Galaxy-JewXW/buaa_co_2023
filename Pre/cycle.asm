.data
	G: .space 280
	book: .space 40
	
.macro get(%des, %i, %j, %col)
	mult %i, %col
	mflo %des
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
	li   $v0, 5
	syscall
	move $s0, $v0 # n
	li   $v0, 5
	syscall
	move $s1, $v0 # m
	li   $s7, 1 # constant
	
	li   $t0, 0
	loop1:
		beq  $t0, $s1, loop1_end
		li   $v0, 5
		syscall
		move $t1, $v0
		subi $t1, $t1, 1
		li   $v0, 5
		syscall
		move $t2, $v0
		subi $t2, $t2, 1
		get($t9, $t1, $t2, $s1)
		sw   $s7, G($t9)
		get($t9, $t2, $t1, $s1)
		sw   $s7, G($t9)
		addi $t0, $t0, 1
		j    loop1
	loop1_end:
	
	li   $a0, 0
	li   $s2, 0 # ans
	jal  dfs
	
	## print answer
	li   $v0, 1
	move $a0, $s2
	syscall
	li   $v0, 10
	syscall
	
dfs:
	sll  $t9, $a0, 2
	sw   $s7, book($t9)
	li   $t8, 0 # i
	li   $t1, 1 # flag
	
	loop2:
		beq  $t8, $s0, loop2_end
		sll  $t9, $t8, 2
		lw   $t9, book($t9)
		and  $t1, $t1, $t9
		addi $t8, $t8, 1
		j    loop2
	loop2_end:
		
	get($t9, $a0, $0, $s1)
	lw   $t9, G($t9)
	bne  $t1, $s7, Nope
	bne  $t9, $s7, Nope
	
	li   $s2, 1
	jr   $ra
	
	Nope:
	li   $t0, 0 # i in stack
	loop3:
		beq  $t0, $s0, loop3_end
		sll  $t9, $t0, 2
		lw   $t9, book($t9)
		bne  $t9, $0, Else
		get($t9, $a0, $t0, $s1)
		lw   $t9, G($t9)
		beq  $t9, $0, Else
		
		push($ra)
		push($t0)
		push($a0)
		
		move $a0, $t0
		jal  dfs
		
		pop($a0)
		pop($t0)
		pop($ra)
		
		Else:
		addi $t0, $t0, 1
		j    loop3
	loop3_end:
	
	sll  $t9, $a0, 2
	sw   $0, book($t9)
	jr   $ra