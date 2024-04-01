.data
	F: .space 576
	G: .space 576
	H: .space 576
	blank: .asciiz " "
	next_line: .asciiz "\n"
	
.macro calc_addr(%dst, %row, %column, %rank)
    # dts: the register to save the calculated address
    # row: the row that element is in
    # column: the column that element is in
    # rank: the number of lines(rows) in the matrix
    multu %row, %rank
    mflo  %dst
    addu  %dst, %dst, %column
    sll   %dst, %dst, 2
.end_macro

.text
	li   $v0, 5
	syscall
	move $s0, $v0
	
	li   $v0, 5
	syscall
	move $s1, $v0
	
	li   $v0, 5
	syscall
	move $s2, $v0
	
	li   $v0, 5
	syscall
	move $s3, $v0
	
	sub  $s4, $s0, $s2
	addi $s4, $s4, 1
	
	sub  $s5, $s1, $s3
	addi $s5, $s5, 1
	
	li   $t0, 0
	li   $t1, 0
	
	read11:
		beq  $t0, $s0, read11_end
		move $t1, $0
		read12:
			beq  $t1, $s1, read12_end
			li   $v0, 5
			syscall
			calc_addr($t2, $t0, $t1, $s1)	
			sw   $v0, F($t2)
			addi $t1, $t1, 1
			j    read12
		read12_end:
		addi $t0, $t0, 1
		j    read11
	read11_end:
	
	move $t0, $0 # i
	move $t1, $0 # j
	read21:
		beq  $t0, $s2, read21_end
		move $t1, $0
		read22:
			beq  $t1, $s3, read22_end
			li   $v0, 5
			syscall
			calc_addr($t2, $t0, $t1, $s3)	
			sw   $v0, H($t2)
			addi $t1, $t1, 1
			j    read22
		read22_end:
		addi $t0, $t0, 1
		j    read21
	read21_end:
	
	li   $t1, 0
	li   $t2, 0
	li   $t3, 0
	
	li   $t0, 0 # i
	loop1:
		li   $t1, 0 # j
		loop2:
			li   $t2, 0 # k
			li   $s6, 0
			loop3:
				li   $t3, 0 # l
				loop4:
					calc_addr($t7, $t2, $t3, $s3)
					lw   $t5, H($t7)
					add  $a2, $t0, $t2
					add  $a3, $t1, $t3
					calc_addr($t7, $a2, $a3, $s1)
					lw   $t6, F($t7)
					multu $t5, $t6
					mflo $t7
					add  $s6, $s6, $t7
					addi $t3, $t3, 1
					blt  $t3, $s3, loop4
				loop4_end:
				addi $t2, $t2, 1
				blt  $t2, $s2, loop3
			loop3_end:
			calc_addr($t9, $t0, $t1, $s5)
			sw   $s6, G($t9)
			addi $t1, $t1, 1
			blt  $t1, $s5, loop2
		loop2_end:
		addi $t0, $t0, 1
		blt  $t0, $s4, loop1
	loop1_end:
	
	move $t0, $0 # i
	move $t1, $0 # j
	out1:
		beq  $t0, $s4, out1_end
		move $t1, $0
		out2:
			beq  $t1, $s5, out2_end
			calc_addr($t2, $t0, $t1, $s5)	
			lw   $a0, G($t2)
			li   $v0, 1
			syscall
			la   $a0, blank
			li   $v0, 4
			syscall
			addi $t1, $t1, 1
			j    out2
		out2_end:
		la   $a0, next_line
		li   $v0, 4
		syscall
		addi $t0, $t0, 1
		j    out1
	out1_end:
	
	li   $v0, 10
	syscall
	
	
	