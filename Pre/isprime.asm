.text
li $v0, 5
syscall
move $s0, $v0

li $s1, 4
li $s2, 400
li $s3, 100
li $s4, 1

div $s0, $s1 #4
mfhi $t0

div $s0, $s2 #400
mfhi $t1

div $s0, $s3 #100
mfhi $t2

seq $t0, $t0, $0
sne $t2, $t2, $0
and $t0, $t0, $t2

seq $t1, $t1, $0
or $t0, $t0, $t1

beq $t0, 1, is_prime
li $a0, 0
li $v0, 1
syscall
j end


is_prime:
li $a0, 1
li $v0, 1
syscall
end:

li $v0, 10
syscall
