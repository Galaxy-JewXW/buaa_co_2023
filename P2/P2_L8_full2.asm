.data
	array: .space 32
	symbol: .space 32
	blank: .asciiz " "
	next_line: .asciiz "\n"
	
.macro push(%src)
	sw   %src, 0($sp)
	subi $sp, $sp, 4
.end_macro

.macro pop(%des)
	addi $sp, $sp, 4
	lw   %des, 0($sp)
.end_macro

.text
main:
	li   $v0, 5
	li   $s1, 1
	li   $t9, 0
	syscall
	move $s0, $v0
	init_loop:
		sll  $t8, $t9, 2
		sw   $0, symbol($t8)
		addi $t9, $t9, 1
		blt  $t9, $s0, init_loop
	li   $t0, 0 # index
	jal  FullArray
	li   $v0, 10
	syscall

FullArray:
	blt  $t0, $s0, search
	print:
		li   $t9, 0
		print_loop:
			sll  $t8, $t9, 2
			lw   $a0, array($t8)
			li   $v0, 1
			syscall
			li   $v0, 4
			la   $a0, blank
			syscall
			addi $t9, $t9, 1
			blt  $t9, $s0, print_loop
		print_end:
			li   $v0, 4
			la   $a0, next_line
			syscall
			jr   $ra
			
	search:
		li   $t1, 0 # i
		loop:
			sll  $t9, $t1, 2
			lw   $t8, symbol($t9)
			bne  $t8, $0, Else
			If:
				addi $t2, $t1, 1
				sll  $t9, $t0, 2
				sw   $t2, array($t9)
				sll  $t9, $t1, 2
				sw   $s1, symbol($t9)
				
				push($ra)
				push($t0)
				push($t1)
				
				addi $t0, $t0, 1
				jal  FullArray
				
				pop($t1)
				pop($t0)
				pop($ra)
				
				sll  $t9, $t1, 2
				sw   $0, symbol($t9)
			
			Else:
				addi $t1, $t1, 1
				blt  $t1, $s0, loop
		loop_end:
		jr   $ra
		
		
		