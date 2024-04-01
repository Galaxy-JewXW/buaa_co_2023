.data
	A: .space 400
	B: .space 400
	C: .space 400
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
	
	move $s0, $v0 # s0 contains n
	move $t0, $0 # i
	move $t1, $0 # j
	
	read11:
		beq  $t0, $s0, read11_end
		move $t1, $0
		read12:
			beq  $t1, $s0, read12_end
			li   $v0, 5
			syscall
			calc_addr($t2, $t0, $t1, $s0)	
			sw   $v0, A($t2)
			addi $t1, $t1, 1
			j    read12
		read12_end:
		addi $t0, $t0, 1
		j    read11
	read11_end:
	
	move $t0, $0 # i
	move $t1, $0 # j
	read21:
		beq  $t0, $s0, read21_end
		move $t1, $0
		read22:
			beq  $t1, $s0, read22_end
			li   $v0, 5
			syscall
			calc_addr($t2, $t0, $t1, $s0)	
			sw   $v0, B($t2)
			addi $t1, $t1, 1
			j    read22
		read22_end:
		addi $t0, $t0, 1
		j    read21
	read21_end:
	
	move $t0, $0 # i
	move $t1, $0 # j
	move $t2, $0 # k
	loop1:
		beq  $t0, $s0, loop1_end
		move $t1, $0
		loop2:
			beq  $t1, $s0, loop2_end
			calc_addr($t5, $t0, $t1, $s0)			
			sw   $0, C($t5)
			move $s1, $0
			move $t2, $0
			loop3:
				beq  $t2, $s0, loop3_end
				calc_addr($t3, $t0, $t2, $s0)	
				lw   $t4, A($t3)
				calc_addr($t3, $t2, $t1, $s0)			
				lw   $t6, B($t3)
				multu $t4, $t6
				mflo $t7
				add  $s1, $s1, $t7
				sw   $s1, C($t5)
				addi $t2, $t2, 1
				j    loop3
			loop3_end:
			addi $t1, $t1, 1
			j    loop2
		loop2_end:
		addi $t0, $t0, 1
		j    loop1
	loop1_end:
	
	move $t0, $0 # i
	move $t1, $0 # j
	out1:
		beq  $t0, $s0, out1_end
		move $t1, $0
		out2:
			beq  $t1, $s0, out2_end
			calc_addr($t2, $t0, $t1, $s0)	
			lw   $a0, C($t2)
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