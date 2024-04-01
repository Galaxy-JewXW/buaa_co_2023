.text
mtc0 $0,$12
ori $at,$0,0x12345678
sb $at,0($0)
srl $at,$at,8
sb $at,0($0)
srl $at,$at,8
sb $at,0($0)
srl $at,$at,8
sb $at,0($0)
.ktext 0x4180
_main_handler:
    mfc0 $k0, $13
    mfc0 $k0, $14
    andi $k0, $k0, 0xfffc
    addi $k0, $k0, 4
    mtc0 $k0, $14
    sb $0, 0x7f20($0)
    eret
