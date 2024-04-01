.data
	num: .space 4000

.text
	li   $v0, 5
	syscall
	move $s0, $v0 # n
	
	li   $t0, 2 # i = 2
	li   $s5, 1000
	li   $s6, 1
	li   $s7, 10
	sw   $s6, num($0)
	
	loop1:
		bgt  $t0, $s0, loop1_end
		li   $s1, 0 # jinwei
		li   $t1, 0
		loop2:
			beq  $t1, $s5, loop2_end
			sll  $t9, $t1, 2
			lw   $t2, num($t9)
			mult $t2, $t0
			mflo $t2
			add  $t2, $t2, $s1
			div  $t2, $s7
			mflo $s1
			mfhi $t2
			sw   $t2, num($t9)
			addi $t1, $t1, 1
			j    loop2
		loop2_end:
		addi $t0, $t0, 1
		j    loop1
	loop1_end:
	
	subi $t1, $s5, 1
	loop3:
		blt  $t1, $0, loop3_end
		sll  $t9, $t1, 2
		lw   $t2, num($t9)
		bne  $t2, $0, found
		addi $t1, $t1, -1
		j    loop3
	loop3_end:
		
	found:
	li   $v0, 1
	out:
		blt  $t1, $0, out_end
		sll  $t9, $t1, 2
		lw   $a0, num($t9)
		syscall
		addi $t1, $t1, -1
		j    out
	out_end:
	
	li   $v0, 10
	syscall
		
			
			
