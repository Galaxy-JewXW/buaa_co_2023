ori $28, $0, 0
ori $29, $0, 0
ori $5, $0, 0
sw $11, 0($5)
beq $13, $11, label1
lui $5, 195
add $5, $5, $13
label1: ori $13, $13, 51593
jal label2
ori $11, $0, 16
ori $13, $5, 17999
label2: add $11, $11, $31
jr $11
nop
ori $13, $0, 0
lw $13, 4($13)
beq $13, $11, label3
ori $13, $11, 45517
ori $5, $13, 13567
label3: add $5, $13, $11
ori $13, $0, 0
lw $5, 4($13)
add $11, $11, $5
lui $11, 31312
sub $11, $5, $13
ori $5, $5, 56723
ori $11, $0, 0
lw $11, 12($11)
ori $11, $0, 0
sw $11, 8($11)
sub $11, $5, $11
j label4
ori $13, $0, 0
lw $11, 4($13)
ori $13, $0, 0
sw $11, 4($13)
label4: ori $5, $0, 0
sw $5, 8($5)
ori $13, $0, 0
lw $11, 12($13)
sub $13, $11, $5
ori $11, $0, 0
sw $11, 8($11)
beq $13, $5, label5
ori $5, $11, 30891
ori $13, $0, 0
sw $5, 4($13)
label5: ori $11, $0, 0
sw $13, 4($11)
lui $5, 52286
j label6
ori $5, $11, 58184
ori $13, $0, 0
lw $11, 0($13)
label6: lui $13, 22168
ori $5, $0, 0
sw $11, 0($5)
ori $11, $13, 2154
ori $13, $13, 7483
j label7
ori $5, $0, 0
sw $5, 4($5)
ori $11, $5, 53724
label7: ori $5, $11, 41640
jal label8
ori $13, $0, 16
ori $5, $5, 53920
label8: add $13, $13, $31
jr $13
nop
sub $13, $5, $13
ori $5, $0, 0
sw $5, 4($5)
ori $5, $0, 0
lw $5, 0($5)
ori $11, $0, 0
sw $5, 12($11)
sub $11, $5, $11
jal label9
ori $11, $0, 16
lui $11, 50258
label9: add $11, $11, $31
jr $11
nop
lui $5, 15305
beq $11, $11, label10
ori $11, $5, 152
ori $11, $0, 0
sw $13, 0($11)
label10: sub $13, $5, $13
jal label11
ori $13, $0, 16
lui $13, 13258
label11: add $13, $13, $31
jr $13
nop
beq $13, $11, label12
add $11, $13, $13
ori $5, $0, 0
lw $13, 0($5)
label12: ori $13, $5, 27629
ori $5, $0, 0
lw $13, 8($5)
sub $5, $11, $5
beq $5, $5, label13
ori $5, $13, 8051
ori $11, $0, 0
lw $11, 0($11)
label13: ori $11, $0, 0
lw $13, 8($11)
j label14
ori $11, $0, 0
lw $13, 0($11)
add $5, $11, $11
label14: ori $13, $5, 35592
beq $11, $5, label15
ori $11, $0, 0
lw $13, 0($11)
lui $11, 54735
label15: add $5, $5, $5
ori $5, $11, 33827
beq $5, $13, label16
ori $13, $13, 31532
lui $11, 21819
label16: lui $5, 36498
j label17
ori $13, $0, 0
lw $5, 8($13)
sub $5, $13, $11
label17: ori $11, $13, 38614
j label18
ori $13, $11, 64200
ori $11, $0, 0
lw $11, 8($11)
label18: add $5, $13, $13
ori $13, $0, 0
lw $11, 12($13)
ori $13, $0, 0
sw $11, 12($13)
lui $5, 20560
jal label19
ori $5, $0, 16
sub $5, $5, $11
label19: add $5, $5, $31
jr $5
nop
lui $5, 22637
j label20
add $11, $13, $13
ori $5, $0, 0
lw $11, 0($5)
label20: sub $13, $11, $5
ori $5, $0, 0
lw $11, 4($5)
ori $13, $0, 0
sw $13, 0($13)
j label21
lui $5, 36959
add $11, $13, $5
label21: sub $5, $11, $11
j label22
ori $5, $0, 0
sw $11, 8($5)
lui $13, 16019
label22: ori $5, $0, 0
lw $5, 4($5)
ori $5, $0, 0
sw $11, 12($5)
sub $13, $11, $5
j label23
ori $5, $0, 0
lw $11, 0($5)
add $13, $5, $5
label23: add $5, $5, $11
ori $5, $11, 52053
ori $11, $0, 0
sw $13, 4($11)
add $11, $5, $11
ori $11, $0, 0
sw $5, 4($11)
add $13, $13, $5
ori $11, $0, 0
sw $11, 12($11)
ori $13, $0, 0
sw $11, 0($13)
add $5, $5, $11
sub $5, $5, $11
add $13, $13, $5
add $11, $13, $13
ori $13, $0, 0
lw $5, 0($13)
ori $13, $0, 0
lw $11, 12($13)
add $13, $5, $5
ori $5, $13, 36810
ori $5, $11, 1813
sub $11, $5, $13
ori $5, $0, 0
sw $11, 0($5)
ori $13, $0, 0
sw $11, 12($13)
sub $5, $5, $11
jal label24
ori $5, $0, 16
lui $13, 46565
label24: add $5, $5, $31
jr $5
nop
jal label25
ori $13, $0, 16
add $13, $11, $13
label25: add $13, $13, $31
jr $13
nop
j label26
lui $13, 32478
ori $11, $13, 46085
label26: lui $5, 2438
sub $13, $13, $5
add $13, $11, $5
lui $5, 42429
ori $13, $13, 17836
ori $11, $0, 0
lw $11, 8($11)
sub $13, $5, $13
ori $13, $0, 0
sw $13, 8($13)
beq $11, $13, label27
lui $13, 24445
lui $5, 3454
label27: ori $5, $0, 0
lw $5, 8($5)
jal label28
ori $5, $0, 16
ori $11, $13, 27339
label28: add $5, $5, $31
jr $5
nop
add $5, $13, $13
j label29
ori $5, $0, 0
sw $13, 4($5)
lui $11, 26839
label29: lui $5, 7649
ori $11, $5, 39156
beq $11, $13, label30
ori $11, $0, 0
lw $13, 12($11)
ori $13, $0, 0
sw $13, 0($13)
label30: ori $5, $0, 0
sw $5, 0($5)
ori $11, $5, 29058
sub $13, $5, $5
ori $13, $5, 24833
jal label31
ori $11, $0, 16
sub $13, $13, $11
label31: add $11, $11, $31
jr $11
nop
add $11, $11, $11
sub $13, $13, $11
j label32
add $5, $13, $13
sub $11, $11, $13
label32: add $5, $11, $13
add $5, $13, $13
ori $13, $0, 0
sw $5, 8($13)
sub $5, $5, $5
beq $5, $5, label33
ori $5, $0, 0
sw $11, 8($5)
add $13, $11, $5
label33: add $5, $13, $13
jal label34
ori $11, $0, 16
ori $11, $13, 2972
label34: add $11, $11, $31
jr $11
nop
jal label35
ori $11, $0, 16
ori $5, $13, 3182
label35: add $11, $11, $31
jr $11
nop
add $5, $5, $5
ori $5, $0, 0
lw $5, 0($5)
beq $11, $13, label36
sub $11, $11, $13
lui $5, 10685
label36: ori $5, $0, 0
sw $5, 12($5)
beq $11, $5, label37
ori $13, $0, 0
lw $13, 8($13)
add $5, $13, $13
label37: add $13, $13, $13
ori $5, $0, 0
sw $5, 4($5)
ori $5, $0, 0
lw $13, 4($5)
jal label38
ori $11, $0, 16
add $11, $11, $13
label38: add $11, $11, $31
jr $11
nop
add $11, $11, $13
beq $5, $11, label39
ori $13, $0, 0
lw $13, 4($13)
lui $11, 19305
label39: add $11, $11, $13
j label40
ori $13, $13, 36169
lui $5, 60784
label40: lui $11, 54824
sub $5, $13, $11
ori $5, $0, 0
lw $5, 12($5)
jal label41
ori $11, $0, 16
sub $13, $11, $11
label41: add $11, $11, $31
jr $11
nop
ori $13, $0, 0
lw $13, 12($13)
lui $5, 14696
ori $11, $0, 0
sw $13, 0($11)
lui $5, 5838
sub $5, $11, $13
ori $11, $0, 0
lw $5, 4($11)
lui $5, 54566
add $13, $11, $13
sub $13, $5, $11
lui $11, 526
sub $13, $13, $11
ori $5, $13, 22273
ori $5, $13, 46582
lui $11, 63097
ori $5, $0, 0
lw $11, 4($5)
jal label42
ori $13, $0, 16
add $13, $13, $13
label42: add $13, $13, $31
jr $13
nop
add $13, $11, $13
ori $5, $0, 0
lw $5, 0($5)
j label43
sub $5, $13, $11
lui $11, 18937
label43: ori $13, $11, 33118
lui $5, 16576
add $13, $11, $13
lui $11, 33225
ori $13, $5, 22124
j label44
ori $11, $0, 0
sw $11, 4($11)
sub $5, $11, $13
label44: add $5, $11, $11
ori $5, $0, 0
sw $5, 0($5)
lui $5, 2057
lui $13, 1148
ori $11, $13, 46651
jal label45
ori $5, $0, 16
sub $13, $5, $11
label45: add $5, $5, $31
jr $5
nop
lui $11, 26941
add $5, $5, $5
jal label46
ori $11, $0, 16
sub $5, $13, $5
label46: add $11, $11, $31
jr $11
nop
ori $13, $5, 34029
ori $5, $0, 0
sw $11, 8($5)
beq $13, $5, label47
ori $11, $13, 23638
sub $11, $11, $11
label47: sub $11, $5, $11
beq $5, $11, label48
ori $11, $13, 34768
ori $5, $13, 43774
label48: lui $5, 54366
beq $13, $5, label49
add $11, $13, $13
ori $13, $11, 48461
label49: lui $5, 49966
lui $5, 64139
ori $13, $5, 19679
sub $13, $11, $5
j label50
ori $13, $0, 0
lw $11, 4($13)
sub $5, $13, $11
label50: add $13, $11, $5
ori $11, $11, 19388
j label51
ori $11, $5, 56310
ori $5, $0, 0
sw $13, 8($5)
label51: ori $5, $0, 0
sw $11, 0($5)
add $13, $13, $13
j label52
ori $5, $0, 0
lw $11, 0($5)
ori $11, $5, 51063
label52: sub $13, $13, $5
ori $11, $0, 0
sw $13, 0($11)
lui $11, 7500
ori $13, $0, 0
sw $13, 12($13)
jal label53
ori $5, $0, 16
lui $5, 50322
label53: add $5, $5, $31
jr $5
nop
j label54
ori $11, $0, 0
sw $11, 8($11)
sub $11, $13, $11
label54: add $13, $5, $13
beq $5, $5, label55
ori $13, $0, 0
sw $13, 0($13)
add $11, $13, $13
label55: sub $13, $5, $5
ori $5, $0, 0
lw $11, 8($5)
add $13, $5, $13
ori $5, $0, 0
sw $5, 4($5)
ori $5, $0, 0
sw $11, 4($5)
ori $11, $0, 0
sw $11, 0($11)
add $11, $13, $11
add $5, $5, $13
beq $13, $13, label56
ori $11, $0, 0
sw $13, 4($11)
sub $5, $11, $11
label56: ori $11, $0, 0
sw $11, 0($11)
j label57
sub $5, $13, $13
lui $5, 8451
label57: ori $11, $0, 0
sw $11, 0($11)
sub $5, $11, $5
jal label58
ori $11, $0, 16
sub $11, $11, $13
label58: add $11, $11, $31
jr $11
nop
jal label59
ori $5, $0, 16
ori $13, $5, 45000
label59: add $5, $5, $31
jr $5
nop
j label60
add $11, $11, $11
sub $11, $5, $13
label60: add $13, $5, $13
jal label61
ori $13, $0, 16
ori $13, $11, 41228
label61: add $13, $13, $31
jr $13
nop
beq $13, $11, label62
add $5, $11, $11
ori $5, $0, 0
sw $11, 0($5)
label62: add $13, $5, $11
ori $11, $0, 0
sw $5, 12($11)
j label63
lui $13, 33079
add $11, $5, $5
label63: ori $5, $13, 42935
ori $5, $0, 0
sw $13, 4($5)
ori $11, $0, 0
lw $11, 8($11)
beq $5, $13, label64
sub $13, $13, $5
add $5, $11, $5
label64: lui $11, 19390
jal label65
ori $11, $0, 16
sub $13, $5, $13
label65: add $11, $11, $31
jr $11
nop
ori $13, $13, 815
ori $13, $0, 0
sw $5, 8($13)
ori $11, $13, 23859
jal label66
ori $13, $0, 16
sub $13, $5, $11
label66: add $13, $13, $31
jr $13
nop
ori $11, $0, 0
lw $13, 4($11)
j label67
ori $11, $0, 0
sw $11, 12($11)
ori $5, $13, 14761
label67: lui $5, 56935
ori $11, $0, 0
sw $11, 12($11)
add $13, $11, $13
beq $5, $5, label68
add $13, $13, $5
ori $11, $0, 0
lw $5, 0($11)
label68: sub $5, $5, $5
ori $13, $0, 0
lw $13, 8($13)
j label69
ori $11, $0, 0
lw $11, 8($11)
ori $11, $0, 0
sw $13, 0($11)
label69: ori $13, $13, 25569
add $5, $5, $5
lui $13, 43288
ori $5, $0, 0
sw $5, 0($5)
jal label70
ori $5, $0, 16
lui $5, 38185
label70: add $5, $5, $31
jr $5
nop
lui $11, 24221
beq $13, $11, label71
sub $13, $5, $5
add $13, $11, $5
label71: add $11, $5, $13
jal label72
ori $11, $0, 16
ori $11, $5, 53071
label72: add $11, $11, $31
jr $11
nop
sub $13, $11, $13
ori $13, $0, 0
lw $5, 12($13)
beq $13, $5, label73
ori $5, $0, 0
sw $11, 0($5)
ori $5, $0, 0
lw $13, 0($5)
label73: ori $11, $5, 9285
sub $13, $5, $13
beq $11, $5, label74
lui $13, 4434
ori $11, $0, 0
sw $11, 4($11)
label74: add $5, $13, $5
lui $11, 9245
ori $5, $11, 4509
j label75
ori $11, $0, 0
sw $13, 0($11)
ori $13, $0, 0
lw $13, 12($13)
label75: ori $11, $0, 0
sw $11, 12($11)
ori $5, $5, 55239
add $11, $5, $11
add $5, $11, $13
lui $11, 39885
sub $11, $13, $5
add $11, $13, $5
sub $5, $11, $13
ori $5, $0, 0
sw $11, 0($5)
jal label76
ori $13, $0, 16
ori $13, $5, 10210
label76: add $13, $13, $31
jr $13
nop
ori $5, $0, 0
lw $11, 8($5)
j label77
ori $5, $0, 0
lw $5, 4($5)
ori $13, $0, 0
lw $13, 4($13)
label77: ori $13, $0, 0
lw $11, 4($13)
sub $11, $11, $11
j label78
ori $11, $0, 0
lw $13, 8($11)
ori $5, $0, 0
lw $13, 12($5)
label78: ori $11, $0, 0
lw $13, 8($11)
ori $11, $0, 0
sw $11, 12($11)
lui $11, 37366
jal label79
ori $5, $0, 16
sub $5, $5, $11
label79: add $5, $5, $31
jr $5
nop
beq $13, $11, label80
lui $13, 34570
ori $13, $0, 0
lw $5, 4($13)
label80: ori $13, $0, 0
sw $5, 8($13)
ori $5, $0, 0
lw $11, 8($5)
sub $5, $11, $11
lui $5, 3112
beq $5, $11, label81
ori $5, $0, 0
sw $11, 0($5)
sub $5, $13, $5
label81: sub $11, $11, $13
ori $13, $0, 0
lw $13, 4($13)
sub $11, $11, $5
add $13, $13, $5
add $13, $13, $13
beq $11, $5, label82
ori $13, $0, 0
lw $11, 8($13)
add $5, $11, $5
label82: add $13, $11, $13
jal label83
ori $13, $0, 16
lui $11, 53877
label83: add $13, $13, $31
jr $13
nop
j label84
sub $13, $11, $11
ori $5, $0, 0
lw $5, 8($5)
label84: sub $5, $13, $5
beq $13, $13, label85
ori $5, $0, 0
lw $11, 0($5)
ori $13, $0, 0
sw $5, 12($13)
label85: ori $5, $5, 64258
sub $13, $13, $11
lui $13, 43466
lui $5, 10483
ori $5, $0, 0
lw $11, 4($5)
add $11, $11, $13
j label86
add $5, $5, $11
lui $5, 17918
label86: ori $11, $0, 0
lw $5, 0($11)
beq $13, $13, label87
sub $5, $13, $11
ori $11, $0, 0
lw $11, 0($11)
label87: sub $5, $11, $13
ori $11, $0, 0
sw $11, 4($11)
ori $5, $5, 57265
ori $5, $11, 50970
lui $5, 48623
ori $13, $0, 0
lw $11, 0($13)
beq $11, $13, label88
ori $11, $0, 0
lw $11, 8($11)
ori $5, $0, 0
lw $11, 4($5)
label88: ori $13, $0, 0
sw $11, 12($13)
beq $11, $11, label89
ori $13, $0, 0
lw $11, 8($13)
sub $11, $5, $5
label89: lui $13, 3079
lui $11, 8523
jal label90
ori $13, $0, 16
lui $13, 52483
label90: add $13, $13, $31
jr $13
nop
ori $13, $0, 0
sw $5, 8($13)
ori $5, $0, 0
sw $5, 0($5)
j label91
ori $13, $0, 0
lw $5, 8($13)
sub $5, $5, $11
label91: ori $13, $0, 0
lw $13, 8($13)
ori $11, $5, 35163
sub $5, $5, $5
lui $11, 7858
sub $11, $13, $5
add $13, $11, $11
ori $13, $0, 0
sw $5, 8($13)
sub $5, $5, $11
ori $5, $5, 43299
ori $13, $0, 0
sw $11, 0($13)
sub $11, $13, $13
jal label92
ori $13, $0, 16
sub $5, $11, $13
label92: add $13, $13, $31
jr $13
nop
sub $13, $11, $13
lui $5, 45520
sub $5, $11, $5
beq $5, $5, label93
sub $13, $5, $5
lui $5, 20681
label93: ori $5, $5, 28680
lui $11, 33344
add $11, $13, $11
ori $11, $13, 59664
beq $5, $5, label94
sub $11, $5, $11
sub $11, $13, $5
label94: sub $5, $13, $11
add $11, $13, $5
ori $13, $0, 0
lw $11, 4($13)
jal label95
ori $13, $0, 16
add $5, $13, $5
label95: add $13, $13, $31
jr $13
nop
jal label96
ori $13, $0, 16
sub $11, $11, $5
label96: add $13, $13, $31
jr $13
nop
sub $13, $13, $5
jal label97
ori $13, $0, 16
lui $13, 25170
label97: add $13, $13, $31
jr $13
nop
jal label98
ori $5, $0, 16
lui $5, 53335
label98: add $5, $5, $31
jr $5
nop
sub $5, $5, $13
beq $11, $5, label99
lui $5, 60333
ori $11, $0, 0
sw $11, 8($11)
label99: lui $13, 9454
add $11, $11, $5
lui $11, 50309
lui $5, 28676
sub $5, $13, $13
j label100
ori $11, $5, 26906
add $5, $13, $11
label100: sub $11, $5, $11
sub $5, $13, $5
jal label101
ori $5, $0, 16
ori $5, $13, 42149
label101: add $5, $5, $31
jr $5
nop
lui $13, 31166
ori $5, $0, 0
lw $5, 8($5)
ori $5, $0, 0
sw $13, 4($5)
add $13, $11, $11
jal label102
ori $13, $0, 16
ori $13, $13, 27942
label102: add $13, $13, $31
jr $13
nop
j label103
sub $11, $13, $13
ori $11, $5, 12496
label103: ori $13, $11, 22227
beq $11, $13, label104
sub $5, $5, $5
add $11, $11, $13
label104: ori $5, $0, 0
sw $13, 12($5)
add $11, $13, $11
ori $13, $0, 0
lw $13, 8($13)
j label105
sub $5, $5, $5
add $5, $11, $13
label105: ori $5, $0, 0
lw $11, 12($5)
ori $5, $0, 0
lw $5, 4($5)
ori $5, $5, 44831
ori $5, $0, 0
lw $5, 0($5)
lui $11, 56883
lui $13, 39965
lui $5, 54378
add $13, $5, $11
ori $13, $0, 0
sw $13, 8($13)
ori $5, $0, 0
lw $13, 0($5)
jal label106
ori $11, $0, 16
ori $13, $11, 46687
label106: add $11, $11, $31
jr $11
nop
ori $5, $0, 0
sw $5, 4($5)
add $13, $11, $13
jal label107
ori $13, $0, 16
add $11, $11, $5
label107: add $13, $13, $31
jr $13
nop
beq $13, $5, label108
sub $11, $13, $13
ori $5, $0, 0
lw $5, 4($5)
label108: ori $5, $11, 42384
beq $5, $5, label109
add $5, $13, $13
ori $11, $0, 0
sw $11, 4($11)
label109: ori $11, $11, 59637
j label110
sub $5, $11, $13
lui $13, 11787
label110: ori $11, $5, 10133
beq $11, $13, label111
add $13, $11, $13
add $11, $13, $13
label111: ori $11, $0, 0
lw $11, 8($11)
add $13, $5, $13
add $5, $11, $13
ori $5, $0, 0
sw $5, 0($5)
ori $11, $0, 0
sw $5, 8($11)
sub $11, $5, $11
ori $5, $0, 0
lw $5, 12($5)
ori $5, $0, 0
lw $13, 8($5)
ori $5, $0, 0
lw $5, 4($5)
jal label112
ori $13, $0, 16
lui $5, 26208
label112: add $13, $13, $31
jr $13
nop
ori $11, $11, 31670
lui $5, 19125
ori $5, $0, 0
lw $13, 0($5)
lui $11, 12335
sub $13, $13, $13
jal label113
ori $13, $0, 16
sub $11, $13, $11
label113: add $13, $13, $31
jr $13
nop
beq $5, $13, label114
ori $5, $11, 49794
lui $11, 44368
label114: ori $13, $11, 29250
ori $13, $0, 0
sw $5, 12($13)
beq $5, $5, label115
ori $13, $13, 11709
sub $11, $13, $5
label115: lui $5, 7555
j label116
lui $11, 20142
add $11, $11, $5
label116: sub $13, $5, $13
ori $11, $0, 0
lw $13, 8($11)
lui $11, 13943
ori $11, $13, 60492
ori $5, $0, 0
sw $5, 8($5)
lui $5, 463
add $13, $5, $13
beq $13, $13, label117
ori $5, $0, 0
lw $5, 0($5)
add $5, $11, $5
label117: sub $13, $11, $13
