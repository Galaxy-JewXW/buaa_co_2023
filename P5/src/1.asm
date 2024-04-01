ori $28, $0, 0
ori $29, $0, 0
ori $24, $0, 0
lw $8, 8($24)
add $8, $8, $8
beq $23, $23, label1
add $23, $23, $8
ori $24, $0, 0
lw $8, 4($24)
label1: lui $24, 27692
ori $8, $0, 0
sw $24, 0($8)
add $8, $8, $8
jal label2
ori $8, $0, 16
ori $24, $23, 11620
label2: add $8, $8, $31
jr $8
nop
lui $24, 1352
add $24, $8, $8
add $23, $23, $23
add $24, $23, $23
add $23, $23, $8
beq $23, $24, label3
ori $23, $0, 0
sw $8, 12($23)
ori $8, $0, 0
sw $24, 0($8)
label3: add $24, $24, $24
ori $8, $24, 24810
lui $23, 43962
j label4
ori $8, $8, 48854
ori $8, $0, 0
lw $23, 8($8)
label4: lui $8, 51317
ori $8, $0, 0
lw $23, 0($8)
add $23, $24, $8
jal label5
ori $8, $0, 16
lui $23, 50798
label5: add $8, $8, $31
jr $8
nop
sub $8, $23, $24
jal label6
ori $8, $0, 16
sub $24, $23, $8
label6: add $8, $8, $31
jr $8
nop
lui $8, 13440
j label7
ori $23, $0, 0
lw $8, 8($23)
ori $24, $0, 0
lw $8, 8($24)
label7: add $24, $8, $24
add $8, $8, $8
lui $24, 63340
jal label8
ori $8, $0, 16
sub $8, $24, $8
label8: add $8, $8, $31
jr $8
nop
ori $23, $8, 17800
jal label9
ori $8, $0, 16
add $8, $24, $23
label9: add $8, $8, $31
jr $8
nop
ori $8, $0, 0
lw $8, 12($8)
ori $24, $0, 0
lw $8, 4($24)
ori $23, $0, 0
lw $23, 0($23)
add $8, $24, $8
ori $23, $0, 0
sw $8, 0($23)
j label10
add $23, $24, $8
ori $24, $8, 51163
label10: lui $8, 48841
jal label11
ori $8, $0, 16
ori $23, $24, 43116
label11: add $8, $8, $31
jr $8
nop
lui $23, 49876
lui $8, 37124
lui $23, 48138
add $23, $24, $24
j label12
sub $24, $24, $8
ori $23, $24, 37042
label12: ori $24, $23, 15213
jal label13
ori $8, $0, 16
sub $24, $8, $24
label13: add $8, $8, $31
jr $8
nop
lui $23, 27048
sub $24, $24, $23
ori $23, $0, 0
sw $24, 0($23)
ori $8, $0, 0
lw $8, 12($8)
add $8, $23, $8
j label14
ori $8, $24, 46972
ori $23, $0, 0
lw $24, 0($23)
label14: ori $8, $23, 11072
ori $8, $0, 0
sw $24, 4($8)
lui $8, 39154
ori $24, $0, 0
lw $24, 8($24)
ori $8, $0, 0
sw $8, 12($8)
lui $24, 45766
ori $8, $0, 0
lw $8, 0($8)
sub $24, $8, $8
beq $24, $24, label15
ori $24, $0, 0
sw $8, 12($24)
add $8, $24, $23
label15: ori $23, $0, 0
sw $24, 12($23)
ori $8, $0, 0
sw $23, 12($8)
sub $24, $23, $23
sub $23, $24, $24
lui $24, 49859
lui $24, 26171
ori $8, $23, 38926
beq $23, $8, label16
lui $8, 37001
ori $8, $0, 0
sw $8, 12($8)
label16: add $23, $8, $24
add $24, $8, $8
sub $23, $8, $24
add $8, $24, $24
lui $24, 54121
ori $24, $0, 0
sw $23, 4($24)
lui $24, 44782
add $23, $8, $8
sub $24, $24, $8
jal label17
ori $24, $0, 16
sub $8, $23, $24
label17: add $24, $24, $31
jr $24
nop
lui $24, 44057
beq $24, $24, label18
lui $23, 52320
lui $24, 21320
label18: ori $8, $0, 0
lw $8, 4($8)
j label19
lui $8, 24331
sub $23, $8, $8
label19: ori $24, $24, 20290
j label20
lui $23, 10405
ori $23, $0, 0
lw $8, 4($23)
label20: add $24, $23, $23
ori $8, $23, 4987
sub $23, $23, $23
ori $23, $0, 0
lw $24, 4($23)
beq $8, $24, label21
ori $24, $0, 0
sw $23, 8($24)
lui $24, 54032
label21: ori $24, $0, 0
sw $23, 12($24)
ori $8, $0, 0
lw $8, 4($8)
lui $23, 39320
ori $24, $0, 0
lw $24, 8($24)
j label22
sub $23, $8, $24
ori $8, $0, 0
sw $8, 12($8)
label22: sub $8, $8, $24
ori $23, $24, 1346
sub $8, $23, $8
ori $23, $0, 0
lw $23, 4($23)
jal label23
ori $8, $0, 16
add $8, $23, $8
label23: add $8, $8, $31
jr $8
nop
beq $23, $23, label24
add $23, $8, $23
sub $8, $23, $23
label24: sub $8, $24, $8
add $23, $8, $8
beq $8, $8, label25
sub $23, $23, $24
ori $24, $23, 55300
label25: ori $24, $0, 0
lw $23, 12($24)
add $24, $23, $8
lui $24, 58207
ori $8, $0, 0
lw $24, 8($8)
jal label26
ori $8, $0, 16
add $23, $24, $8
label26: add $8, $8, $31
jr $8
nop
lui $23, 15660
ori $8, $24, 26540
add $24, $23, $8
beq $24, $23, label27
ori $23, $0, 0
sw $23, 0($23)
ori $8, $0, 0
sw $8, 4($8)
label27: sub $24, $8, $23
jal label28
ori $24, $0, 16
lui $23, 60164
label28: add $24, $24, $31
jr $24
nop
sub $23, $23, $23
sub $8, $8, $8
j label29
ori $24, $24, 8769
ori $8, $0, 0
sw $23, 12($8)
label29: lui $23, 35902
ori $23, $0, 0
sw $23, 0($23)
ori $24, $0, 0
sw $23, 0($24)
ori $24, $8, 22803
sub $23, $23, $24
jal label30
ori $24, $0, 16
lui $8, 61346
label30: add $24, $24, $31
jr $24
nop
sub $24, $8, $8
ori $23, $0, 0
lw $24, 8($23)
sub $24, $24, $24
ori $24, $23, 52718
add $23, $8, $24
lui $24, 43141
jal label31
ori $23, $0, 16
lui $8, 20367
label31: add $23, $23, $31
jr $23
nop
lui $24, 56600
lui $24, 7733
beq $23, $24, label32
ori $8, $0, 0
sw $24, 4($8)
sub $23, $8, $23
label32: ori $24, $8, 8439
j label33
lui $8, 15290
add $23, $23, $23
label33: ori $24, $23, 37753
sub $8, $23, $24
ori $23, $0, 0
sw $24, 12($23)
sub $24, $8, $8
ori $8, $0, 0
sw $23, 0($8)
beq $24, $24, label34
add $8, $8, $23
ori $24, $23, 6496
label34: lui $8, 28594
add $24, $23, $8
ori $24, $0, 0
sw $8, 0($24)
lui $23, 4284
lui $24, 3325
ori $24, $24, 1464
lui $8, 8245
jal label35
ori $23, $0, 16
lui $8, 49631
label35: add $23, $23, $31
jr $23
nop
sub $24, $23, $24
sub $23, $8, $8
lui $8, 50153
ori $8, $0, 0
sw $24, 0($8)
sub $24, $23, $23
add $24, $8, $23
beq $23, $24, label36
ori $8, $0, 0
lw $8, 0($8)
sub $23, $23, $24
label36: sub $23, $23, $23
ori $23, $23, 20075
add $8, $23, $24
beq $8, $23, label37
lui $8, 32464
add $23, $24, $24
label37: ori $24, $0, 0
lw $8, 8($24)
j label38
ori $24, $0, 0
lw $23, 8($24)
ori $24, $0, 0
sw $8, 4($24)
label38: ori $23, $8, 27713
sub $8, $8, $24
ori $23, $0, 0
sw $23, 12($23)
beq $24, $23, label39
add $23, $8, $8
sub $23, $23, $23
label39: add $23, $24, $23
jal label40
ori $23, $0, 16
add $8, $8, $8
label40: add $23, $23, $31
jr $23
nop
j label41
ori $23, $0, 0
lw $8, 8($23)
ori $24, $0, 0
sw $24, 12($24)
label41: ori $24, $0, 0
lw $8, 4($24)
jal label42
ori $8, $0, 16
lui $24, 901
label42: add $8, $8, $31
jr $8
nop
jal label43
ori $8, $0, 16
add $23, $24, $23
label43: add $8, $8, $31
jr $8
nop
j label44
ori $8, $0, 0
sw $24, 12($8)
lui $24, 59
label44: lui $23, 54362
ori $24, $23, 20361
jal label45
ori $8, $0, 16
lui $24, 9513
label45: add $8, $8, $31
jr $8
nop
jal label46
ori $23, $0, 16
sub $23, $23, $24
label46: add $23, $23, $31
jr $23
nop
j label47
sub $24, $23, $23
ori $24, $8, 29352
label47: sub $8, $24, $24
lui $24, 12948
lui $23, 25604
ori $23, $8, 52794
ori $24, $0, 0
sw $23, 4($24)
beq $8, $23, label48
ori $24, $0, 0
sw $23, 0($24)
ori $24, $24, 60872
label48: ori $23, $0, 0
sw $8, 0($23)
j label49
ori $23, $0, 0
sw $24, 0($23)
ori $24, $8, 56973
label49: sub $8, $23, $23
jal label50
ori $8, $0, 16
add $23, $24, $24
label50: add $8, $8, $31
jr $8
nop
add $23, $23, $23
beq $24, $24, label51
add $24, $23, $8
add $23, $24, $23
label51: ori $8, $0, 0
sw $23, 0($8)
j label52
ori $24, $0, 0
lw $24, 4($24)
lui $23, 6900
label52: add $8, $23, $24
jal label53
ori $8, $0, 16
add $23, $24, $8
label53: add $8, $8, $31
jr $8
nop
sub $23, $24, $24
j label54
ori $8, $0, 0
lw $8, 12($8)
add $8, $8, $23
label54: add $23, $23, $8
j label55
add $24, $8, $23
add $24, $23, $8
label55: sub $24, $8, $23
ori $8, $8, 33559
ori $23, $0, 0
lw $24, 0($23)
jal label56
ori $8, $0, 16
add $23, $23, $23
label56: add $8, $8, $31
jr $8
nop
add $24, $23, $23
ori $8, $0, 0
sw $24, 12($8)
j label57
add $23, $8, $8
add $23, $24, $23
label57: lui $23, 21458
ori $8, $24, 11210
add $23, $24, $8
beq $24, $8, label58
ori $24, $0, 0
lw $24, 0($24)
lui $23, 29083
label58: ori $23, $0, 0
sw $23, 0($23)
j label59
lui $8, 37206
sub $23, $24, $23
label59: ori $23, $24, 41395
ori $23, $8, 35407
add $24, $8, $8
jal label60
ori $23, $0, 16
ori $8, $8, 19192
label60: add $23, $23, $31
jr $23
nop
lui $23, 53213
ori $8, $0, 0
sw $23, 12($8)
ori $23, $24, 38244
j label61
ori $23, $0, 0
sw $8, 4($23)
lui $24, 24105
label61: ori $24, $23, 56131
beq $8, $24, label62
sub $8, $23, $24
lui $23, 22153
label62: ori $24, $23, 46301
ori $24, $0, 0
lw $8, 0($24)
lui $23, 26727
lui $8, 33117
ori $8, $0, 0
lw $24, 12($8)
add $8, $24, $8
sub $8, $23, $24
j label63
ori $24, $0, 0
lw $24, 12($24)
ori $8, $0, 0
lw $24, 4($8)
label63: ori $8, $0, 0
lw $24, 4($8)
lui $24, 6989
jal label64
ori $23, $0, 16
sub $23, $8, $8
label64: add $23, $23, $31
jr $23
nop
jal label65
ori $24, $0, 16
sub $8, $8, $24
label65: add $24, $24, $31
jr $24
nop
sub $24, $23, $23
ori $23, $0, 0
sw $8, 4($23)
beq $23, $8, label66
ori $8, $0, 0
sw $23, 12($8)
ori $24, $24, 7208
label66: sub $24, $24, $23
ori $8, $24, 26823
ori $8, $0, 0
lw $23, 0($8)
ori $24, $0, 0
sw $8, 4($24)
j label67
ori $8, $0, 0
lw $24, 4($8)
ori $24, $0, 0
sw $23, 4($24)
label67: ori $8, $0, 0
lw $8, 12($8)
add $23, $8, $24
lui $8, 47888
beq $23, $24, label68
add $23, $8, $8
ori $23, $0, 0
lw $24, 0($23)
label68: lui $24, 22956
beq $8, $24, label69
ori $24, $0, 0
lw $24, 8($24)
lui $24, 2311
label69: ori $23, $0, 0
lw $23, 0($23)
jal label70
ori $23, $0, 16
sub $23, $23, $23
label70: add $23, $23, $31
jr $23
nop
jal label71
ori $24, $0, 16
add $23, $23, $8
label71: add $24, $24, $31
jr $24
nop
ori $23, $0, 0
lw $24, 0($23)
beq $23, $24, label72
ori $23, $0, 0
lw $8, 0($23)
lui $23, 63155
label72: ori $24, $23, 31534
j label73
ori $23, $23, 49771
ori $24, $0, 0
lw $24, 8($24)
label73: lui $23, 15061
ori $8, $23, 18023
ori $24, $0, 0
sw $24, 8($24)
sub $8, $8, $8
j label74
ori $23, $8, 8794
ori $8, $0, 0
lw $23, 8($8)
label74: lui $8, 23843
jal label75
ori $24, $0, 16
lui $23, 31578
label75: add $24, $24, $31
jr $24
nop
beq $8, $24, label76
sub $23, $8, $24
add $8, $23, $24
label76: add $23, $23, $24
ori $23, $0, 0
lw $23, 4($23)
ori $23, $8, 11870
jal label77
ori $24, $0, 16
add $23, $23, $23
label77: add $24, $24, $31
jr $24
nop
ori $8, $23, 33658
beq $24, $23, label78
lui $8, 8338
ori $24, $0, 0
lw $8, 12($24)
label78: ori $23, $24, 37931
ori $24, $24, 28939
beq $8, $24, label79
sub $23, $24, $24
sub $24, $8, $24
label79: ori $23, $8, 27278
ori $23, $8, 1411
lui $24, 8562
ori $8, $0, 0
sw $24, 0($8)
ori $24, $0, 0
lw $8, 4($24)
ori $24, $0, 0
lw $24, 8($24)
jal label80
ori $8, $0, 16
add $24, $23, $24
label80: add $8, $8, $31
jr $8
nop
jal label81
ori $24, $0, 16
lui $24, 51028
label81: add $24, $24, $31
jr $24
nop
j label82
ori $23, $0, 0
sw $8, 0($23)
lui $23, 26705
label82: ori $8, $8, 24155
ori $23, $0, 0
lw $8, 0($23)
sub $24, $23, $8
beq $24, $23, label83
add $23, $23, $24
add $24, $23, $8
label83: ori $8, $0, 0
lw $24, 0($8)
ori $8, $0, 0
lw $8, 4($8)
beq $23, $8, label84
ori $24, $0, 0
lw $24, 0($24)
lui $24, 49817
label84: ori $8, $8, 11133
lui $24, 50248
beq $24, $24, label85
lui $8, 43388
ori $23, $0, 0
lw $8, 12($23)
label85: add $8, $8, $8
jal label86
ori $23, $0, 16
sub $23, $23, $23
label86: add $23, $23, $31
jr $23
nop
jal label87
ori $24, $0, 16
add $23, $23, $23
label87: add $24, $24, $31
jr $24
nop
beq $23, $23, label88
sub $23, $23, $23
add $23, $24, $23
label88: ori $23, $0, 0
sw $23, 4($23)
lui $24, 6080
j label89
sub $8, $24, $8
sub $8, $8, $24
label89: ori $24, $0, 0
lw $23, 4($24)
ori $23, $24, 19013
ori $8, $0, 0
lw $8, 0($8)
ori $8, $0, 0
sw $24, 0($8)
ori $23, $0, 0
lw $8, 8($23)
ori $8, $24, 39909
ori $24, $0, 0
sw $23, 0($24)
add $23, $23, $23
lui $8, 35101
ori $8, $0, 0
sw $23, 0($8)
ori $24, $0, 0
sw $8, 4($24)
beq $23, $23, label90
add $8, $24, $23
sub $24, $24, $24
label90: ori $23, $0, 0
lw $8, 0($23)
beq $8, $8, label91
sub $24, $24, $8
ori $23, $0, 0
lw $8, 4($23)
label91: lui $23, 5468
beq $8, $8, label92
lui $23, 35903
sub $8, $8, $23
label92: add $24, $23, $8
ori $8, $0, 0
lw $8, 0($8)
jal label93
ori $8, $0, 16
sub $8, $24, $8
label93: add $8, $8, $31
jr $8
nop
j label94
ori $23, $0, 0
sw $24, 8($23)
ori $8, $0, 0
sw $24, 0($8)
label94: ori $8, $0, 0
lw $23, 4($8)
add $23, $23, $23
beq $23, $23, label95
ori $23, $0, 0
sw $24, 8($23)
ori $23, $24, 4100
label95: ori $8, $0, 0
lw $8, 12($8)
ori $24, $0, 0
sw $8, 8($24)
sub $24, $8, $8
jal label96
ori $8, $0, 16
add $23, $24, $23
label96: add $8, $8, $31
jr $8
nop
beq $23, $8, label97
ori $8, $0, 0
sw $24, 4($8)
ori $23, $0, 0
lw $8, 8($23)
label97: ori $23, $8, 59078
beq $8, $23, label98
ori $8, $0, 0
lw $24, 4($8)
ori $23, $0, 0
lw $24, 12($23)
label98: add $24, $23, $8
beq $24, $8, label99
ori $8, $0, 0
sw $23, 4($8)
add $23, $23, $23
label99: add $23, $23, $8
ori $24, $0, 0
sw $23, 8($24)
j label100
ori $23, $24, 59547
lui $24, 59047
label100: sub $8, $23, $24
lui $8, 45301
ori $24, $0, 0
lw $24, 4($24)
ori $23, $0, 0
lw $24, 4($23)
jal label101
ori $8, $0, 16
ori $8, $24, 57699
label101: add $8, $8, $31
jr $8
nop
lui $8, 1981
sub $24, $8, $23
lui $23, 50281
beq $23, $23, label102
add $8, $23, $23
add $23, $8, $23
label102: add $24, $8, $24
jal label103
ori $24, $0, 16
lui $24, 17154
label103: add $24, $24, $31
jr $24
nop
beq $23, $24, label104
lui $24, 27456
add $8, $24, $24
label104: ori $8, $0, 0
lw $8, 4($8)
beq $8, $8, label105
add $8, $23, $8
ori $23, $8, 58895
label105: ori $24, $0, 0
lw $8, 0($24)
ori $24, $0, 0
sw $8, 4($24)
add $24, $24, $24
beq $23, $23, label106
add $23, $8, $8
ori $23, $0, 0
lw $8, 8($23)
label106: ori $24, $0, 0
lw $23, 8($24)
jal label107
ori $8, $0, 16
lui $8, 23340
label107: add $8, $8, $31
jr $8
nop
ori $8, $8, 58223
add $24, $8, $8
add $23, $23, $24
j label108
sub $23, $23, $23
ori $24, $0, 0
sw $8, 0($24)
label108: ori $23, $0, 0
sw $23, 12($23)
j label109
ori $8, $0, 0
lw $24, 0($8)
ori $8, $0, 0
sw $23, 12($8)
label109: ori $23, $0, 0
sw $24, 8($23)
add $8, $23, $24
j label110
sub $8, $8, $23
lui $24, 43485
label110: sub $8, $8, $8
ori $24, $0, 0
lw $24, 8($24)
jal label111
ori $23, $0, 16
lui $23, 11474
label111: add $23, $23, $31
jr $23
nop
ori $23, $0, 0
sw $24, 4($23)
ori $23, $0, 0
lw $8, 0($23)
ori $24, $23, 26785
ori $24, $0, 0
lw $8, 12($24)
ori $8, $0, 0
sw $23, 8($8)
ori $8, $23, 44591
j label112
ori $8, $0, 0
lw $24, 0($8)
add $24, $23, $8
label112: lui $8, 40024
ori $23, $8, 10774
ori $23, $0, 0
sw $8, 8($23)
ori $8, $8, 25773
ori $23, $0, 0
sw $24, 8($23)
ori $24, $0, 0
lw $24, 4($24)
beq $8, $24, label113
lui $23, 21846
add $24, $23, $24
label113: sub $24, $23, $24
beq $8, $8, label114
lui $23, 20802
ori $24, $0, 0
sw $8, 8($24)
label114: ori $24, $0, 0
lw $24, 12($24)
ori $24, $0, 0
sw $8, 4($24)
ori $8, $0, 0
lw $24, 4($8)
ori $24, $8, 59130
beq $24, $8, label115
sub $24, $23, $8
add $8, $8, $23
label115: ori $24, $0, 0
sw $8, 4($24)
add $8, $23, $23
beq $23, $23, label116
sub $23, $24, $24
ori $23, $0, 0
lw $24, 4($23)
label116: lui $23, 53190
lui $23, 2462
jal label117
ori $24, $0, 16
lui $23, 54897
label117: add $24, $24, $31
jr $24
nop
ori $8, $0, 0
sw $24, 0($8)
lui $23, 26233
ori $8, $0, 0
lw $8, 0($8)
sub $8, $23, $8
ori $23, $0, 0
lw $24, 4($23)
ori $24, $23, 39117
lui $23, 13146
jal label118
ori $24, $0, 16
sub $8, $8, $8
label118: add $24, $24, $31
jr $24
nop
lui $8, 31377
j label119
add $8, $24, $8
ori $8, $0, 0
lw $8, 0($8)
label119: ori $23, $0, 0
sw $24, 12($23)
ori $24, $0, 0
lw $24, 8($24)
add $8, $23, $24
sub $23, $8, $23
ori $23, $24, 46383
beq $23, $8, label120
sub $8, $8, $8
add $23, $23, $8
label120: ori $23, $0, 0
sw $23, 8($23)
j label121
sub $8, $8, $23
add $24, $23, $23
label121: ori $23, $0, 0
lw $23, 4($23)
add $24, $24, $24
lui $23, 12796
beq $23, $8, label122
ori $23, $8, 24250
add $8, $24, $8
label122: lui $23, 49394
ori $8, $24, 32168
