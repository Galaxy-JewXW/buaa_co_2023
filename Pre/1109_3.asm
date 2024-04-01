.data
	a: .space 10000
	blank: .asciiz " "
	enter: .asciiz "\n"
	
.macro get(%des, %i, %j, %col)
	mult %i, %col
	mflo %des
	add  %des, %des, %j
	sll  %des, %des, 2
.end_macro

.text
	li   $v0, 5
	syscall
	move $s0, $v0 # n
	li   $v0, 5
	syscall
	move $s1, $v0 # m
	
	li   $t0, 0
	loop1:
		beq  $t0, $s0, loop1_end
		li   $t1, 0
		loop2:
			beq  $t1, $s1, loop2_end
			get($t9, $t0, $t1, $s1)
			li   $v0, 5
			syscall
			sw   $v0, a($t9)
			addi $t1, $t1, 1
			j    loop2
		loop2_end:
		addi $t0, $t0, 1
		j    loop1
	loop1_end:
	
	subi $t0, $s0, 1
	loop3:
		blt  $t0, $0, loop3_end
		subi $t1, $s1, 1
		loop4:
			blt  $t1, $0, loop4_end
			get($t9, $t0, $t1, $s1)
			lw   $t2, a($t9)
			beq  $t2, $0, Else
			
			li   $v0, 1
			addi $a0, $t0, 1
			syscall
			li   $v0, 4
			la   $a0, blank
			syscall
			li   $v0, 1
			addi $a0, $t1, 1
			syscall
			li   $v0, 4
			la   $a0, blank
			syscall
			li   $v0, 1
			move $a0, $t2
			syscall
			li   $v0, 4
			la   $a0, enter
			syscall
			
			Else:
			subi $t1, $t1, 1
			j    loop4
		loop4_end:
		subi $t0, $t0, 1
		j    loop3
	loop3_end:
	
	li   $v0, 10
	syscall
