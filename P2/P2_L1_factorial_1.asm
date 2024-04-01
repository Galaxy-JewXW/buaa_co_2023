.data
	a: .space 4000
	
.text
	li   $v0, 5
	syscall
	move $s0, $v0
	
	li   $s6, 1
	li   $s7, 10
	
	li   $t0, 1 # i
	li   $s1, 1 # len
	
	sw   $s6, a($0)
	
	loop1:
		bgt  $t0, $s0, loop1_end
		li   $s2, 0 # jinwei
		
		li   $t1, 0
		loop2:
			beq  $t1, $s1, loop2_end
			sll  $t9, $t1, 2
			lw   $t2, a($t9)
			mult $t2, $t0
			mflo $t2
			add  $t2, $t2, $s2
			div  $t2, $s7
			mfhi $t2
			mflo $s2
			sw   $t2, a($t9)
			addi $t1, $t1, 1
			j    loop2
		loop2_end:
		
		beq  $s2, $0, Else
		If:
			sll  $t9, $s1, 2
			sw   $s2, a($t9)
			addi $s1, $s1, 1
			loop3:
				sub  $t3, $s1, $s6
				sll  $t9, $t3, 2
				lw   $t4, a($t9)
				blt  $t4, $s7, Else
				div  $t4, $s7
				sll  $t8, $s1, 2
				mflo $t5
				sw   $t5, a($t8)
				mfhi $t4
				sw   $t4, a($t9)
				addi $s1, $s1, 1
				j    loop3
		
		Else:
			sub  $t3, $s1, $s6
			sll  $t9, $t3, 2
			lw   $t4, a($t9)
			bne  $t4, $0, End
			ble  $s1, $s6, End
			sub  $s1, $s1, $s6
			j    Else
		End:
		addi $t0, $t0, 1
		j    loop1
	loop1_end:
	
	sub  $t0, $s1, $s6
	li   $v0, 1
	loop4:
		blt  $t0, $0, loop4_end
		sll  $t9, $t0, 2
		lw   $a0, a($t9)
		syscall
		sub  $t0, $t0, $s6
		j    loop4
	loop4_end:
	
	li   $v0, 10
	syscall
