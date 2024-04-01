.data
	str: .space 100
	
.text
	li   $v0, 5
	syscall
	move $s0, $v0
	
	li   $t0, 0
	in:
		li   $v0, 12
		syscall
		move $t5, $v0
		sb   $t5, str($t0)
		addi $t0, $t0, 1
		blt  $t0, $s0, in
	in_end:
	
	li   $t0, 0
	li   $s1, 1
	move $t1, $s0
	
	loop:
		addi $t3, $t1, -1
		
		lb   $t2, str($t0)
		lb   $t3, str($t3)
		seq  $s1, $t2, $t3
		beq  $s1, 0, loop_end
		
		addi $t0, $t0, 1
		addi $t1, $t1, -1
		blt  $t0, $s0, loop
	loop_end:
	
	li   $v0, 1
	move $a0, $s1
	syscall
	li   $v0, 10
	syscall