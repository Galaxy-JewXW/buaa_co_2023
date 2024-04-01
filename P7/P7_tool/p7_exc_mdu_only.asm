.text
    mtc0 $0, $12
    
    lui $t0, 0xf000
    ori $t0, $t0, 0xf000
    ori $t1, $0, 0x001f
    mthi $t0
    mtlo $t1
    syscall
    mult $t0, $t1
    syscall
    multu $t0, $t1
    syscall
    div $t0, $t1
    syscall
    divu $t0, $t1
    lui $t0, 0x1234
    ori $t0, $t0, 0x5678
    syscall
    mthi $t0
    syscall
    mtlo $t0

end:
    beq $0, $0, end
    nop

.ktext 0x4180
_main_handler:
    mfhi $k0
    mflo $k0
    mfc0 $k0, $13
    mfc0 $k0, $14
    addi $k0, $k0, 8
    mtc0 $k0, $14
    eret
