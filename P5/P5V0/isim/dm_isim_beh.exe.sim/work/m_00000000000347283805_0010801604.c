/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/BUAA_Undergraduate/23-24autumn/CO_hw/P5/P5V0/dm.v";
static int ng1[] = {0, 0};
static int ng2[] = {3072, 0};
static unsigned int ng3[] = {0U, 0U};
static int ng4[] = {1, 0};
static int ng5[] = {15, 0};
static int ng6[] = {16, 0};
static int ng7[] = {7, 0};
static int ng8[] = {8, 0};
static unsigned int ng9[] = {1U, 0U};
static unsigned int ng10[] = {2U, 0U};
static int ng11[] = {24, 0};
static const char *ng12 = "%d@%h: *%h <= %h";
static unsigned int ng13[] = {3U, 0U};



static void Initial_36_0(char *t0)
{
    char t5[8];
    char t14[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    int t34;
    int t35;

LAB0:    xsi_set_current_line(36, ng0);

LAB2:    xsi_set_current_line(37, ng0);
    xsi_set_current_line(37, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3208);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 3208);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng2)));
    memset(t5, 0, 8);
    xsi_vlog_signed_less(t5, 32, t3, 32, t4, 32);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB4;

LAB5:
LAB1:    return;
LAB4:    xsi_set_current_line(37, ng0);

LAB6:    xsi_set_current_line(38, ng0);
    t12 = ((char*)((ng3)));
    t13 = (t0 + 3048);
    t16 = (t0 + 3048);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = (t0 + 3048);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = (t0 + 3208);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    xsi_vlog_generic_convert_array_indices(t14, t15, t18, t21, 2, 1, t24, 32, 1);
    t25 = (t14 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB7;

LAB8:    xsi_set_current_line(37, ng0);
    t1 = (t0 + 3208);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng4)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 3208);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB3;

LAB7:    t32 = *((unsigned int *)t14);
    t33 = *((unsigned int *)t15);
    t34 = (t32 - t33);
    t35 = (t34 + 1);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, *((unsigned int *)t15), t35, 0LL);
    goto LAB8;

}

static void Cont_43_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 4376U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1528U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 2);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 2);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 4095U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 4095U);
    t12 = (t0 + 5832);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 4095U;
    t18 = t17;
    t19 = (t3 + 4);
    t20 = *((unsigned int *)t3);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 11);
    t25 = (t0 + 5688);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Cont_47_2(char *t0)
{
    char t5[8];
    char t14[8];
    char t21[8];
    char t25[8];
    char t26[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    char *t24;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;

LAB0:    t1 = (t0 + 4624U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3048);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3048);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 2328U);
    t13 = *((char **)t12);
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t13, 12, 2);
    t12 = (t0 + 3048);
    t15 = (t12 + 72U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng5)));
    t18 = ((char*)((ng6)));
    t19 = (t0 + 1528U);
    t20 = *((char **)t19);
    t19 = (t0 + 1488U);
    t22 = (t19 + 72U);
    t23 = *((char **)t22);
    t24 = ((char*)((ng4)));
    xsi_vlog_generic_get_index_select_value(t21, 32, t20, t23, 2, t24, 32, 1);
    memset(t25, 0, 8);
    xsi_vlog_unsigned_multiply(t25, 32, t18, 32, t21, 32);
    memset(t26, 0, 8);
    xsi_vlog_unsigned_add(t26, 32, t17, 32, t25, 32);
    t27 = ((char*)((ng6)));
    xsi_vlog_get_indexed_partselect(t14, 16, t5, ((int*)(t16)), 2, t26, 32, 2, t27, 32, 1, 0);
    t28 = (t0 + 5896);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memset(t32, 0, 8);
    t33 = 65535U;
    t34 = t33;
    t35 = (t14 + 4);
    t36 = *((unsigned int *)t14);
    t33 = (t33 & t36);
    t37 = *((unsigned int *)t35);
    t34 = (t34 & t37);
    t38 = (t32 + 4);
    t39 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t39 | t33);
    t40 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t40 | t34);
    xsi_driver_vfirst_trans(t28, 0, 15);
    t41 = (t0 + 5704);
    *((int *)t41) = 1;

LAB1:    return;
}

static void Cont_48_3(char *t0)
{
    char t5[8];
    char t14[8];
    char t19[8];
    char t29[8];
    char t30[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;

LAB0:    t1 = (t0 + 4872U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3048);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3048);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 2328U);
    t13 = *((char **)t12);
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t13, 12, 2);
    t12 = (t0 + 3048);
    t15 = (t12 + 72U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng7)));
    t18 = ((char*)((ng8)));
    t20 = (t0 + 1528U);
    t21 = *((char **)t20);
    memset(t19, 0, 8);
    t20 = (t19 + 4);
    t22 = (t21 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (t23 >> 0);
    *((unsigned int *)t19) = t24;
    t25 = *((unsigned int *)t22);
    t26 = (t25 >> 0);
    *((unsigned int *)t20) = t26;
    t27 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t27 & 3U);
    t28 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t28 & 3U);
    memset(t29, 0, 8);
    xsi_vlog_unsigned_multiply(t29, 32, t18, 32, t19, 32);
    memset(t30, 0, 8);
    xsi_vlog_unsigned_add(t30, 32, t17, 32, t29, 32);
    t31 = ((char*)((ng8)));
    xsi_vlog_get_indexed_partselect(t14, 8, t5, ((int*)(t16)), 2, t30, 32, 2, t31, 32, 1, 0);
    t32 = (t0 + 5960);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    memset(t36, 0, 8);
    t37 = 255U;
    t38 = t37;
    t39 = (t14 + 4);
    t40 = *((unsigned int *)t14);
    t37 = (t37 & t40);
    t41 = *((unsigned int *)t39);
    t38 = (t38 & t41);
    t42 = (t36 + 4);
    t43 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t43 | t37);
    t44 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t44 | t38);
    xsi_driver_vfirst_trans(t32, 0, 7);
    t45 = (t0 + 5720);
    *((int *)t45) = 1;

LAB1:    return;
}

static void Cont_50_4(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t36[8];
    char t49[8];
    char t50[8];
    char t52[8];
    char t79[8];
    char t82[8];
    char t85[8];
    char t97[8];
    char t98[8];
    char t101[8];
    char t128[8];
    char t131[8];
    char t134[8];
    char t149[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t35;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t51;
    char *t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t80;
    char *t81;
    char *t83;
    char *t84;
    char *t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t99;
    char *t100;
    char *t102;
    char *t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    char *t116;
    char *t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    char *t123;
    char *t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    char *t129;
    char *t130;
    char *t132;
    char *t133;
    char *t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    char *t146;
    char *t147;
    char *t148;
    char *t150;
    char *t151;
    char *t152;
    char *t153;
    char *t154;
    char *t155;
    char *t156;
    char *t157;
    char *t158;
    char *t159;
    char *t160;
    char *t161;
    char *t162;

LAB0:    t1 = (t0 + 5120U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1848U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t2 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    memset(t4, 0, 8);
    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t22) != 0)
        goto LAB10;

LAB11:    t29 = (t4 + 4);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB12;

LAB13:    t45 = *((unsigned int *)t4);
    t46 = (~(t45));
    t47 = *((unsigned int *)t29);
    t48 = (t46 || t47);
    if (t48 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t49, 8);

LAB20:    t156 = (t0 + 6024);
    t158 = (t156 + 56U);
    t159 = *((char **)t158);
    t160 = (t159 + 56U);
    t161 = *((char **)t160);
    memcpy(t161, t3, 8);
    xsi_driver_vfirst_trans(t156, 0, 31);
    t162 = (t0 + 5736);
    *((int *)t162) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t28 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB11;

LAB12:    t33 = (t0 + 3048);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    t37 = (t0 + 3048);
    t38 = (t37 + 72U);
    t39 = *((char **)t38);
    t40 = (t0 + 3048);
    t41 = (t40 + 64U);
    t42 = *((char **)t41);
    t43 = (t0 + 2328U);
    t44 = *((char **)t43);
    xsi_vlog_generic_get_array_select_value(t36, 32, t35, t39, t42, 2, 1, t44, 12, 2);
    goto LAB13;

LAB14:    t43 = (t0 + 1848U);
    t51 = *((char **)t43);
    t43 = ((char*)((ng9)));
    memset(t52, 0, 8);
    t53 = (t51 + 4);
    t54 = (t43 + 4);
    t55 = *((unsigned int *)t51);
    t56 = *((unsigned int *)t43);
    t57 = (t55 ^ t56);
    t58 = *((unsigned int *)t53);
    t59 = *((unsigned int *)t54);
    t60 = (t58 ^ t59);
    t61 = (t57 | t60);
    t62 = *((unsigned int *)t53);
    t63 = *((unsigned int *)t54);
    t64 = (t62 | t63);
    t65 = (~(t64));
    t66 = (t61 & t65);
    if (t66 != 0)
        goto LAB24;

LAB21:    if (t64 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t52) = 1;

LAB24:    memset(t50, 0, 8);
    t68 = (t52 + 4);
    t69 = *((unsigned int *)t68);
    t70 = (~(t69));
    t71 = *((unsigned int *)t52);
    t72 = (t71 & t70);
    t73 = (t72 & 1U);
    if (t73 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t68) != 0)
        goto LAB27;

LAB28:    t75 = (t50 + 4);
    t76 = *((unsigned int *)t50);
    t77 = *((unsigned int *)t75);
    t78 = (t76 || t77);
    if (t78 > 0)
        goto LAB29;

LAB30:    t93 = *((unsigned int *)t50);
    t94 = (~(t93));
    t95 = *((unsigned int *)t75);
    t96 = (t94 || t95);
    if (t96 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t75) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t50) > 0)
        goto LAB35;

LAB36:    memcpy(t49, t97, 8);

LAB37:    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t36, 32, t49, 32);
    goto LAB20;

LAB18:    memcpy(t3, t36, 8);
    goto LAB20;

LAB23:    t67 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t67) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t50) = 1;
    goto LAB28;

LAB27:    t74 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t74) = 1;
    goto LAB28;

LAB29:    t80 = (t0 + 2488U);
    t81 = *((char **)t80);
    t80 = ((char*)((ng6)));
    t83 = (t0 + 2488U);
    t84 = *((char **)t83);
    memset(t85, 0, 8);
    t83 = (t85 + 4);
    t86 = (t84 + 4);
    t87 = *((unsigned int *)t84);
    t88 = (t87 >> 15);
    t89 = (t88 & 1);
    *((unsigned int *)t85) = t89;
    t90 = *((unsigned int *)t86);
    t91 = (t90 >> 15);
    t92 = (t91 & 1);
    *((unsigned int *)t83) = t92;
    xsi_vlog_mul_concat(t82, 16, 1, t80, 1U, t85, 1);
    xsi_vlogtype_concat(t79, 32, 32, 2U, t82, 16, t81, 16);
    goto LAB30;

LAB31:    t99 = (t0 + 1848U);
    t100 = *((char **)t99);
    t99 = ((char*)((ng10)));
    memset(t101, 0, 8);
    t102 = (t100 + 4);
    t103 = (t99 + 4);
    t104 = *((unsigned int *)t100);
    t105 = *((unsigned int *)t99);
    t106 = (t104 ^ t105);
    t107 = *((unsigned int *)t102);
    t108 = *((unsigned int *)t103);
    t109 = (t107 ^ t108);
    t110 = (t106 | t109);
    t111 = *((unsigned int *)t102);
    t112 = *((unsigned int *)t103);
    t113 = (t111 | t112);
    t114 = (~(t113));
    t115 = (t110 & t114);
    if (t115 != 0)
        goto LAB41;

LAB38:    if (t113 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t101) = 1;

LAB41:    memset(t98, 0, 8);
    t117 = (t101 + 4);
    t118 = *((unsigned int *)t117);
    t119 = (~(t118));
    t120 = *((unsigned int *)t101);
    t121 = (t120 & t119);
    t122 = (t121 & 1U);
    if (t122 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t117) != 0)
        goto LAB44;

LAB45:    t124 = (t98 + 4);
    t125 = *((unsigned int *)t98);
    t126 = *((unsigned int *)t124);
    t127 = (t125 || t126);
    if (t127 > 0)
        goto LAB46;

LAB47:    t142 = *((unsigned int *)t98);
    t143 = (~(t142));
    t144 = *((unsigned int *)t124);
    t145 = (t143 || t144);
    if (t145 > 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t124) > 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t98) > 0)
        goto LAB52;

LAB53:    memcpy(t97, t149, 8);

LAB54:    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t49, 32, t79, 32, t97, 32);
    goto LAB37;

LAB35:    memcpy(t49, t79, 8);
    goto LAB37;

LAB40:    t116 = (t101 + 4);
    *((unsigned int *)t101) = 1;
    *((unsigned int *)t116) = 1;
    goto LAB41;

LAB42:    *((unsigned int *)t98) = 1;
    goto LAB45;

LAB44:    t123 = (t98 + 4);
    *((unsigned int *)t98) = 1;
    *((unsigned int *)t123) = 1;
    goto LAB45;

LAB46:    t129 = (t0 + 2648U);
    t130 = *((char **)t129);
    t129 = ((char*)((ng11)));
    t132 = (t0 + 2648U);
    t133 = *((char **)t132);
    memset(t134, 0, 8);
    t132 = (t134 + 4);
    t135 = (t133 + 4);
    t136 = *((unsigned int *)t133);
    t137 = (t136 >> 7);
    t138 = (t137 & 1);
    *((unsigned int *)t134) = t138;
    t139 = *((unsigned int *)t135);
    t140 = (t139 >> 7);
    t141 = (t140 & 1);
    *((unsigned int *)t132) = t141;
    xsi_vlog_mul_concat(t131, 24, 1, t129, 1U, t134, 1);
    xsi_vlogtype_concat(t128, 32, 32, 2U, t131, 24, t130, 8);
    goto LAB47;

LAB48:    t146 = (t0 + 3048);
    t147 = (t146 + 56U);
    t148 = *((char **)t147);
    t150 = (t0 + 3048);
    t151 = (t150 + 72U);
    t152 = *((char **)t151);
    t153 = (t0 + 3048);
    t154 = (t153 + 64U);
    t155 = *((char **)t154);
    t156 = (t0 + 2328U);
    t157 = *((char **)t156);
    xsi_vlog_generic_get_array_select_value(t149, 32, t148, t152, t155, 2, 1, t157, 12, 2);
    goto LAB49;

LAB50:    xsi_vlog_unsigned_bit_combine(t97, 32, t128, 32, t149, 32);
    goto LAB54;

LAB52:    memcpy(t97, t128, 8);
    goto LAB54;

}

static void Always_54_5(char *t0)
{
    char t13[8];
    char t15[8];
    char t16[8];
    char t38[16];
    char t39[8];
    char t40[8];
    char t41[8];
    char t44[8];
    char t48[8];
    char t49[8];
    char t73[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t14;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    int t28;
    char *t29;
    unsigned int t30;
    int t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    int t35;
    int t36;
    int t37;
    char *t42;
    char *t43;
    char *t45;
    char *t46;
    char *t47;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    unsigned int t55;
    int t56;
    int t57;
    char *t58;
    unsigned int t59;
    int t60;
    int t61;
    unsigned int t62;
    int t63;
    unsigned int t64;
    unsigned int t65;
    int t66;
    unsigned int t67;
    unsigned int t68;
    int t69;
    int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    char *t79;
    char *t80;

LAB0:    t1 = (t0 + 5368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 5752);
    *((int *)t2) = 1;
    t3 = (t0 + 5400);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(54, ng0);

LAB5:    xsi_set_current_line(55, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB16;

LAB17:    xsi_set_current_line(94, ng0);

LAB58:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t11 = (t0 + 3048);
    t12 = (t11 + 72U);
    t14 = *((char **)t12);
    t17 = (t0 + 3048);
    t18 = (t17 + 64U);
    t19 = *((char **)t18);
    t20 = (t0 + 2328U);
    t21 = *((char **)t20);
    xsi_vlog_generic_get_array_select_value(t16, 32, t4, t14, t19, 2, 1, t21, 12, 2);
    t20 = (t0 + 3048);
    t22 = (t0 + 3048);
    t23 = (t22 + 72U);
    t24 = *((char **)t23);
    t25 = (t0 + 3048);
    t26 = (t25 + 64U);
    t29 = *((char **)t26);
    t42 = (t0 + 2328U);
    t43 = *((char **)t42);
    xsi_vlog_generic_convert_array_indices(t39, t40, t24, t29, 2, 1, t43, 12, 2);
    t42 = (t39 + 4);
    t6 = *((unsigned int *)t42);
    t28 = (!(t6));
    t45 = (t40 + 4);
    t7 = *((unsigned int *)t45);
    t31 = (!(t7));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB59;

LAB60:
LAB18:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(55, ng0);

LAB9:    xsi_set_current_line(56, ng0);
    xsi_set_current_line(56, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3208);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 32);

LAB10:    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_signed_less(t13, 32, t4, 32, t5, 32);
    t11 = (t13 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB11;

LAB12:    goto LAB8;

LAB11:    xsi_set_current_line(56, ng0);

LAB13:    xsi_set_current_line(57, ng0);
    t12 = ((char*)((ng3)));
    t14 = (t0 + 3048);
    t17 = (t0 + 3048);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 3048);
    t21 = (t20 + 64U);
    t22 = *((char **)t21);
    t23 = (t0 + 3208);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    xsi_vlog_generic_convert_array_indices(t15, t16, t19, t22, 2, 1, t25, 32, 1);
    t26 = (t15 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (!(t27));
    t29 = (t16 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (!(t30));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB14;

LAB15:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t13, 0, 8);
    xsi_vlog_signed_add(t13, 32, t4, 32, t5, 32);
    t11 = (t0 + 3208);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 32);
    goto LAB10;

LAB14:    t33 = *((unsigned int *)t15);
    t34 = *((unsigned int *)t16);
    t35 = (t33 - t34);
    t36 = (t35 + 1);
    xsi_vlogvar_wait_assign_value(t14, t12, 0, *((unsigned int *)t16), t36, 0LL);
    goto LAB15;

LAB16:    xsi_set_current_line(60, ng0);

LAB19:    xsi_set_current_line(61, ng0);
    t4 = (t0 + 1848U);
    t5 = *((char **)t4);

LAB20:    t4 = ((char*)((ng3)));
    t28 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 2);
    if (t28 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng9)));
    t28 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t28 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng10)));
    t28 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t28 == 1)
        goto LAB25;

LAB26:
LAB28:
LAB27:    xsi_set_current_line(88, ng0);

LAB55:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t0 + 3048);
    t4 = (t0 + 3048);
    t11 = (t4 + 72U);
    t12 = *((char **)t11);
    t14 = (t0 + 3048);
    t17 = (t14 + 64U);
    t18 = *((char **)t17);
    t19 = (t0 + 2328U);
    t20 = *((char **)t19);
    xsi_vlog_generic_convert_array_indices(t16, t39, t12, t18, 2, 1, t20, 12, 2);
    t19 = (t16 + 4);
    t6 = *((unsigned int *)t19);
    t28 = (!(t6));
    t21 = (t39 + 4);
    t7 = *((unsigned int *)t21);
    t31 = (!(t7));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB56;

LAB57:    xsi_set_current_line(90, ng0);
    t2 = xsi_vlog_time(t38, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 2008U);
    t4 = *((char **)t3);
    t3 = (t0 + 1528U);
    t11 = *((char **)t3);
    t3 = (t0 + 1688U);
    t12 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng12, 5, t0, (char)118, t38, 64, (char)118, t4, 32, (char)118, t11, 32, (char)118, t12, 32);

LAB29:    goto LAB18;

LAB21:    xsi_set_current_line(62, ng0);

LAB30:    xsi_set_current_line(63, ng0);
    t11 = (t0 + 1688U);
    t12 = *((char **)t11);
    t11 = (t0 + 3048);
    t14 = (t0 + 3048);
    t17 = (t14 + 72U);
    t18 = *((char **)t17);
    t19 = (t0 + 3048);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = (t0 + 2328U);
    t23 = *((char **)t22);
    xsi_vlog_generic_convert_array_indices(t13, t15, t18, t21, 2, 1, t23, 12, 2);
    t22 = (t13 + 4);
    t27 = *((unsigned int *)t22);
    t31 = (!(t27));
    t24 = (t15 + 4);
    t30 = *((unsigned int *)t24);
    t32 = (!(t30));
    t35 = (t31 && t32);
    if (t35 == 1)
        goto LAB31;

LAB32:    xsi_set_current_line(64, ng0);
    t2 = xsi_vlog_time(t38, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 2008U);
    t4 = *((char **)t3);
    t3 = (t0 + 1528U);
    t11 = *((char **)t3);
    t3 = (t0 + 1688U);
    t12 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng12, 5, t0, (char)118, t38, 64, (char)118, t4, 32, (char)118, t11, 32, (char)118, t12, 32);
    goto LAB29;

LAB23:    xsi_set_current_line(66, ng0);

LAB33:    xsi_set_current_line(67, ng0);
    t3 = (t0 + 1688U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t3 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 65535U);
    t27 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t27 & 65535U);
    t12 = (t0 + 3048);
    t14 = (t0 + 3048);
    t17 = (t14 + 72U);
    t18 = *((char **)t17);
    t19 = (t0 + 3048);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = (t0 + 2328U);
    t23 = *((char **)t22);
    xsi_vlog_generic_convert_array_indices(t15, t16, t18, t21, 2, 1, t23, 12, 2);
    t22 = (t0 + 3048);
    t24 = (t22 + 72U);
    t25 = *((char **)t24);
    t26 = ((char*)((ng5)));
    t29 = ((char*)((ng6)));
    t42 = (t0 + 1528U);
    t43 = *((char **)t42);
    t42 = (t0 + 1488U);
    t45 = (t42 + 72U);
    t46 = *((char **)t45);
    t47 = ((char*)((ng4)));
    xsi_vlog_generic_get_index_select_value(t44, 32, t43, t46, 2, t47, 32, 1);
    memset(t48, 0, 8);
    xsi_vlog_unsigned_multiply(t48, 32, t29, 32, t44, 32);
    memset(t49, 0, 8);
    xsi_vlog_unsigned_add(t49, 32, t26, 32, t48, 32);
    t50 = ((char*)((ng6)));
    xsi_vlog_convert_indexed_partindices(t39, t40, t41, ((int*)(t25)), 2, t49, 32, 2, t50, 32, 1, 0);
    t51 = (t15 + 4);
    t30 = *((unsigned int *)t51);
    t31 = (!(t30));
    t52 = (t16 + 4);
    t33 = *((unsigned int *)t52);
    t32 = (!(t33));
    t35 = (t31 && t32);
    t53 = (t39 + 4);
    t34 = *((unsigned int *)t53);
    t36 = (!(t34));
    t37 = (t35 && t36);
    t54 = (t40 + 4);
    t55 = *((unsigned int *)t54);
    t56 = (!(t55));
    t57 = (t37 && t56);
    t58 = (t41 + 4);
    t59 = *((unsigned int *)t58);
    t60 = (!(t59));
    t61 = (t57 && t60);
    if (t61 == 1)
        goto LAB34;

LAB35:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 1);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 1);
    t27 = (t10 & 1);
    *((unsigned int *)t2) = t27;

LAB36:    t11 = ((char*)((ng3)));
    t28 = xsi_vlog_unsigned_case_compare(t13, 1, t11, 1);
    if (t28 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng9)));
    t28 = xsi_vlog_unsigned_case_compare(t13, 1, t2, 1);
    if (t28 == 1)
        goto LAB39;

LAB40:
LAB41:    goto LAB29;

LAB25:    xsi_set_current_line(75, ng0);

LAB42:    xsi_set_current_line(76, ng0);
    t3 = (t0 + 1688U);
    t4 = *((char **)t3);
    memset(t15, 0, 8);
    t3 = (t15 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t15) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t10 & 255U);
    t27 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t27 & 255U);
    t12 = (t0 + 3048);
    t14 = (t0 + 3048);
    t17 = (t14 + 72U);
    t18 = *((char **)t17);
    t19 = (t0 + 3048);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = (t0 + 2328U);
    t23 = *((char **)t22);
    xsi_vlog_generic_convert_array_indices(t16, t39, t18, t21, 2, 1, t23, 12, 2);
    t22 = (t0 + 3048);
    t24 = (t22 + 72U);
    t25 = *((char **)t24);
    t26 = ((char*)((ng7)));
    t29 = ((char*)((ng8)));
    t42 = (t0 + 1528U);
    t43 = *((char **)t42);
    memset(t48, 0, 8);
    t42 = (t48 + 4);
    t45 = (t43 + 4);
    t30 = *((unsigned int *)t43);
    t33 = (t30 >> 0);
    *((unsigned int *)t48) = t33;
    t34 = *((unsigned int *)t45);
    t55 = (t34 >> 0);
    *((unsigned int *)t42) = t55;
    t59 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t59 & 3U);
    t62 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t62 & 3U);
    memset(t49, 0, 8);
    xsi_vlog_unsigned_multiply(t49, 32, t29, 32, t48, 32);
    memset(t73, 0, 8);
    xsi_vlog_unsigned_add(t73, 32, t26, 32, t49, 32);
    t46 = ((char*)((ng8)));
    xsi_vlog_convert_indexed_partindices(t40, t41, t44, ((int*)(t25)), 2, t73, 32, 2, t46, 32, 1, 0);
    t47 = (t16 + 4);
    t64 = *((unsigned int *)t47);
    t31 = (!(t64));
    t50 = (t39 + 4);
    t65 = *((unsigned int *)t50);
    t32 = (!(t65));
    t35 = (t31 && t32);
    t51 = (t40 + 4);
    t67 = *((unsigned int *)t51);
    t36 = (!(t67));
    t37 = (t35 && t36);
    t52 = (t41 + 4);
    t68 = *((unsigned int *)t52);
    t56 = (!(t68));
    t57 = (t37 && t56);
    t53 = (t44 + 4);
    t71 = *((unsigned int *)t53);
    t60 = (!(t71));
    t61 = (t57 && t60);
    if (t61 == 1)
        goto LAB43;

LAB44:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    memset(t15, 0, 8);
    t2 = (t15 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 0);
    *((unsigned int *)t15) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t10 & 3U);
    t27 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t27 & 3U);

LAB45:    t11 = ((char*)((ng3)));
    t28 = xsi_vlog_unsigned_case_compare(t15, 2, t11, 2);
    if (t28 == 1)
        goto LAB46;

LAB47:    t2 = ((char*)((ng9)));
    t28 = xsi_vlog_unsigned_case_compare(t15, 2, t2, 2);
    if (t28 == 1)
        goto LAB48;

LAB49:    t2 = ((char*)((ng10)));
    t28 = xsi_vlog_unsigned_case_compare(t15, 2, t2, 2);
    if (t28 == 1)
        goto LAB50;

LAB51:    t2 = ((char*)((ng13)));
    t28 = xsi_vlog_unsigned_case_compare(t15, 2, t2, 2);
    if (t28 == 1)
        goto LAB52;

LAB53:
LAB54:    goto LAB29;

LAB31:    t33 = *((unsigned int *)t13);
    t34 = *((unsigned int *)t15);
    t36 = (t33 - t34);
    t37 = (t36 + 1);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, *((unsigned int *)t15), t37, 0LL);
    goto LAB32;

LAB34:    t62 = *((unsigned int *)t41);
    t63 = (t62 + 0);
    t64 = *((unsigned int *)t16);
    t65 = *((unsigned int *)t40);
    t66 = (t64 + t65);
    t67 = *((unsigned int *)t39);
    t68 = *((unsigned int *)t40);
    t69 = (t67 - t68);
    t70 = (t69 + 1);
    xsi_vlogvar_wait_assign_value(t12, t13, t63, t66, t70, 0LL);
    goto LAB35;

LAB37:    xsi_set_current_line(70, ng0);
    t12 = xsi_vlog_time(t38, 1000.0000000000000, 1000.0000000000000);
    t14 = (t0 + 2008U);
    t17 = *((char **)t14);
    t14 = (t0 + 1528U);
    t18 = *((char **)t14);
    t14 = (t0 + 1688U);
    t19 = *((char **)t14);
    memset(t16, 0, 8);
    t14 = (t16 + 4);
    t20 = (t19 + 4);
    t30 = *((unsigned int *)t19);
    t33 = (t30 >> 0);
    *((unsigned int *)t16) = t33;
    t34 = *((unsigned int *)t20);
    t55 = (t34 >> 0);
    *((unsigned int *)t14) = t55;
    t59 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t59 & 65535U);
    t62 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t62 & 65535U);
    t21 = (t0 + 3048);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t0 + 3048);
    t25 = (t24 + 72U);
    t26 = *((char **)t25);
    t29 = (t0 + 3048);
    t42 = (t29 + 64U);
    t43 = *((char **)t42);
    t45 = (t0 + 2328U);
    t46 = *((char **)t45);
    xsi_vlog_generic_get_array_select_value(t39, 32, t23, t26, t43, 2, 1, t46, 12, 2);
    memset(t40, 0, 8);
    t45 = (t40 + 4);
    t47 = (t39 + 4);
    t64 = *((unsigned int *)t39);
    t65 = (t64 >> 16);
    *((unsigned int *)t40) = t65;
    t67 = *((unsigned int *)t47);
    t68 = (t67 >> 16);
    *((unsigned int *)t45) = t68;
    t71 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t71 & 65535U);
    t72 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t72 & 65535U);
    xsi_vlogtype_concat(t15, 32, 32, 2U, t40, 16, t16, 16);
    xsi_vlogfile_write(1, 0, 0, ng12, 5, t0, (char)118, t38, 64, (char)118, t17, 32, (char)118, t18, 32, (char)118, t15, 32);
    goto LAB41;

LAB39:    xsi_set_current_line(72, ng0);
    t3 = xsi_vlog_time(t38, 1000.0000000000000, 1000.0000000000000);
    t4 = (t0 + 2008U);
    t11 = *((char **)t4);
    t4 = (t0 + 1528U);
    t12 = *((char **)t4);
    t4 = (t0 + 3048);
    t14 = (t4 + 56U);
    t17 = *((char **)t14);
    t18 = (t0 + 3048);
    t19 = (t18 + 72U);
    t20 = *((char **)t19);
    t21 = (t0 + 3048);
    t22 = (t21 + 64U);
    t23 = *((char **)t22);
    t24 = (t0 + 2328U);
    t25 = *((char **)t24);
    xsi_vlog_generic_get_array_select_value(t16, 32, t17, t20, t23, 2, 1, t25, 12, 2);
    memset(t39, 0, 8);
    t24 = (t39 + 4);
    t26 = (t16 + 4);
    t6 = *((unsigned int *)t16);
    t7 = (t6 >> 0);
    *((unsigned int *)t39) = t7;
    t8 = *((unsigned int *)t26);
    t9 = (t8 >> 0);
    *((unsigned int *)t24) = t9;
    t10 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t10 & 65535U);
    t27 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t27 & 65535U);
    t29 = (t0 + 1688U);
    t42 = *((char **)t29);
    memset(t40, 0, 8);
    t29 = (t40 + 4);
    t43 = (t42 + 4);
    t30 = *((unsigned int *)t42);
    t33 = (t30 >> 0);
    *((unsigned int *)t40) = t33;
    t34 = *((unsigned int *)t43);
    t55 = (t34 >> 0);
    *((unsigned int *)t29) = t55;
    t59 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t59 & 65535U);
    t62 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t62 & 65535U);
    xsi_vlogtype_concat(t15, 32, 32, 2U, t40, 16, t39, 16);
    xsi_vlogfile_write(1, 0, 0, ng12, 5, t0, (char)118, t38, 64, (char)118, t11, 32, (char)118, t12, 32, (char)118, t15, 32);
    goto LAB41;

LAB43:    t72 = *((unsigned int *)t44);
    t63 = (t72 + 0);
    t74 = *((unsigned int *)t39);
    t75 = *((unsigned int *)t41);
    t66 = (t74 + t75);
    t76 = *((unsigned int *)t40);
    t77 = *((unsigned int *)t41);
    t69 = (t76 - t77);
    t70 = (t69 + 1);
    xsi_vlogvar_wait_assign_value(t12, t15, t63, t66, t70, 0LL);
    goto LAB44;

LAB46:    xsi_set_current_line(79, ng0);
    t12 = xsi_vlog_time(t38, 1000.0000000000000, 1000.0000000000000);
    t14 = (t0 + 2008U);
    t17 = *((char **)t14);
    t14 = (t0 + 1528U);
    t18 = *((char **)t14);
    t14 = (t0 + 1688U);
    t19 = *((char **)t14);
    memset(t39, 0, 8);
    t14 = (t39 + 4);
    t20 = (t19 + 4);
    t30 = *((unsigned int *)t19);
    t33 = (t30 >> 0);
    *((unsigned int *)t39) = t33;
    t34 = *((unsigned int *)t20);
    t55 = (t34 >> 0);
    *((unsigned int *)t14) = t55;
    t59 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t59 & 255U);
    t62 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t62 & 255U);
    t21 = (t0 + 3048);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t0 + 3048);
    t25 = (t24 + 72U);
    t26 = *((char **)t25);
    t29 = (t0 + 3048);
    t42 = (t29 + 64U);
    t43 = *((char **)t42);
    t45 = (t0 + 2328U);
    t46 = *((char **)t45);
    xsi_vlog_generic_get_array_select_value(t40, 32, t23, t26, t43, 2, 1, t46, 12, 2);
    memset(t41, 0, 8);
    t45 = (t41 + 4);
    t47 = (t40 + 4);
    t64 = *((unsigned int *)t40);
    t65 = (t64 >> 8);
    *((unsigned int *)t41) = t65;
    t67 = *((unsigned int *)t47);
    t68 = (t67 >> 8);
    *((unsigned int *)t45) = t68;
    t71 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t71 & 16777215U);
    t72 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t72 & 16777215U);
    xsi_vlogtype_concat(t16, 32, 32, 2U, t41, 24, t39, 8);
    xsi_vlogfile_write(1, 0, 0, ng12, 5, t0, (char)118, t38, 64, (char)118, t17, 32, (char)118, t18, 32, (char)118, t16, 32);
    goto LAB54;

LAB48:    xsi_set_current_line(81, ng0);
    t3 = xsi_vlog_time(t38, 1000.0000000000000, 1000.0000000000000);
    t4 = (t0 + 2008U);
    t11 = *((char **)t4);
    t4 = (t0 + 1528U);
    t12 = *((char **)t4);
    t4 = (t0 + 3048);
    t14 = (t4 + 56U);
    t17 = *((char **)t14);
    t18 = (t0 + 3048);
    t19 = (t18 + 72U);
    t20 = *((char **)t19);
    t21 = (t0 + 3048);
    t22 = (t21 + 64U);
    t23 = *((char **)t22);
    t24 = (t0 + 2328U);
    t25 = *((char **)t24);
    xsi_vlog_generic_get_array_select_value(t39, 32, t17, t20, t23, 2, 1, t25, 12, 2);
    memset(t40, 0, 8);
    t24 = (t40 + 4);
    t26 = (t39 + 4);
    t6 = *((unsigned int *)t39);
    t7 = (t6 >> 0);
    *((unsigned int *)t40) = t7;
    t8 = *((unsigned int *)t26);
    t9 = (t8 >> 0);
    *((unsigned int *)t24) = t9;
    t10 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t10 & 255U);
    t27 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t27 & 255U);
    t29 = (t0 + 1688U);
    t42 = *((char **)t29);
    memset(t41, 0, 8);
    t29 = (t41 + 4);
    t43 = (t42 + 4);
    t30 = *((unsigned int *)t42);
    t33 = (t30 >> 0);
    *((unsigned int *)t41) = t33;
    t34 = *((unsigned int *)t43);
    t55 = (t34 >> 0);
    *((unsigned int *)t29) = t55;
    t59 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t59 & 255U);
    t62 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t62 & 255U);
    t45 = (t0 + 3048);
    t46 = (t45 + 56U);
    t47 = *((char **)t46);
    t50 = (t0 + 3048);
    t51 = (t50 + 72U);
    t52 = *((char **)t51);
    t53 = (t0 + 3048);
    t54 = (t53 + 64U);
    t58 = *((char **)t54);
    t78 = (t0 + 2328U);
    t79 = *((char **)t78);
    xsi_vlog_generic_get_array_select_value(t44, 32, t47, t52, t58, 2, 1, t79, 12, 2);
    memset(t48, 0, 8);
    t78 = (t48 + 4);
    t80 = (t44 + 4);
    t64 = *((unsigned int *)t44);
    t65 = (t64 >> 16);
    *((unsigned int *)t48) = t65;
    t67 = *((unsigned int *)t80);
    t68 = (t67 >> 16);
    *((unsigned int *)t78) = t68;
    t71 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t71 & 65535U);
    t72 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t72 & 65535U);
    xsi_vlogtype_concat(t16, 32, 32, 3U, t48, 16, t41, 8, t40, 8);
    xsi_vlogfile_write(1, 0, 0, ng12, 5, t0, (char)118, t38, 64, (char)118, t11, 32, (char)118, t12, 32, (char)118, t16, 32);
    goto LAB54;

LAB50:    xsi_set_current_line(83, ng0);
    t3 = xsi_vlog_time(t38, 1000.0000000000000, 1000.0000000000000);
    t4 = (t0 + 2008U);
    t11 = *((char **)t4);
    t4 = (t0 + 1528U);
    t12 = *((char **)t4);
    t4 = (t0 + 3048);
    t14 = (t4 + 56U);
    t17 = *((char **)t14);
    t18 = (t0 + 3048);
    t19 = (t18 + 72U);
    t20 = *((char **)t19);
    t21 = (t0 + 3048);
    t22 = (t21 + 64U);
    t23 = *((char **)t22);
    t24 = (t0 + 2328U);
    t25 = *((char **)t24);
    xsi_vlog_generic_get_array_select_value(t39, 32, t17, t20, t23, 2, 1, t25, 12, 2);
    memset(t40, 0, 8);
    t24 = (t40 + 4);
    t26 = (t39 + 4);
    t6 = *((unsigned int *)t39);
    t7 = (t6 >> 0);
    *((unsigned int *)t40) = t7;
    t8 = *((unsigned int *)t26);
    t9 = (t8 >> 0);
    *((unsigned int *)t24) = t9;
    t10 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t10 & 65535U);
    t27 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t27 & 65535U);
    t29 = (t0 + 1688U);
    t42 = *((char **)t29);
    memset(t41, 0, 8);
    t29 = (t41 + 4);
    t43 = (t42 + 4);
    t30 = *((unsigned int *)t42);
    t33 = (t30 >> 0);
    *((unsigned int *)t41) = t33;
    t34 = *((unsigned int *)t43);
    t55 = (t34 >> 0);
    *((unsigned int *)t29) = t55;
    t59 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t59 & 255U);
    t62 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t62 & 255U);
    t45 = (t0 + 3048);
    t46 = (t45 + 56U);
    t47 = *((char **)t46);
    t50 = (t0 + 3048);
    t51 = (t50 + 72U);
    t52 = *((char **)t51);
    t53 = (t0 + 3048);
    t54 = (t53 + 64U);
    t58 = *((char **)t54);
    t78 = (t0 + 2328U);
    t79 = *((char **)t78);
    xsi_vlog_generic_get_array_select_value(t44, 32, t47, t52, t58, 2, 1, t79, 12, 2);
    memset(t48, 0, 8);
    t78 = (t48 + 4);
    t80 = (t44 + 4);
    t64 = *((unsigned int *)t44);
    t65 = (t64 >> 24);
    *((unsigned int *)t48) = t65;
    t67 = *((unsigned int *)t80);
    t68 = (t67 >> 24);
    *((unsigned int *)t78) = t68;
    t71 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t71 & 255U);
    t72 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t72 & 255U);
    xsi_vlogtype_concat(t16, 32, 32, 3U, t48, 8, t41, 8, t40, 16);
    xsi_vlogfile_write(1, 0, 0, ng12, 5, t0, (char)118, t38, 64, (char)118, t11, 32, (char)118, t12, 32, (char)118, t16, 32);
    goto LAB54;

LAB52:    xsi_set_current_line(85, ng0);
    t3 = xsi_vlog_time(t38, 1000.0000000000000, 1000.0000000000000);
    t4 = (t0 + 2008U);
    t11 = *((char **)t4);
    t4 = (t0 + 1528U);
    t12 = *((char **)t4);
    t4 = (t0 + 3048);
    t14 = (t4 + 56U);
    t17 = *((char **)t14);
    t18 = (t0 + 3048);
    t19 = (t18 + 72U);
    t20 = *((char **)t19);
    t21 = (t0 + 3048);
    t22 = (t21 + 64U);
    t23 = *((char **)t22);
    t24 = (t0 + 2328U);
    t25 = *((char **)t24);
    xsi_vlog_generic_get_array_select_value(t39, 32, t17, t20, t23, 2, 1, t25, 12, 2);
    memset(t40, 0, 8);
    t24 = (t40 + 4);
    t26 = (t39 + 4);
    t6 = *((unsigned int *)t39);
    t7 = (t6 >> 0);
    *((unsigned int *)t40) = t7;
    t8 = *((unsigned int *)t26);
    t9 = (t8 >> 0);
    *((unsigned int *)t24) = t9;
    t10 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t10 & 16777215U);
    t27 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t27 & 16777215U);
    t29 = (t0 + 1688U);
    t42 = *((char **)t29);
    memset(t41, 0, 8);
    t29 = (t41 + 4);
    t43 = (t42 + 4);
    t30 = *((unsigned int *)t42);
    t33 = (t30 >> 0);
    *((unsigned int *)t41) = t33;
    t34 = *((unsigned int *)t43);
    t55 = (t34 >> 0);
    *((unsigned int *)t29) = t55;
    t59 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t59 & 255U);
    t62 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t62 & 255U);
    xsi_vlogtype_concat(t16, 32, 32, 2U, t41, 8, t40, 24);
    xsi_vlogfile_write(1, 0, 0, ng12, 5, t0, (char)118, t38, 64, (char)118, t11, 32, (char)118, t12, 32, (char)118, t16, 32);
    goto LAB54;

LAB56:    t8 = *((unsigned int *)t16);
    t9 = *((unsigned int *)t39);
    t35 = (t8 - t9);
    t36 = (t35 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t39), t36, 0LL);
    goto LAB57;

LAB59:    t8 = *((unsigned int *)t39);
    t9 = *((unsigned int *)t40);
    t35 = (t8 - t9);
    t36 = (t35 + 1);
    xsi_vlogvar_wait_assign_value(t20, t16, 0, *((unsigned int *)t40), t36, 0LL);
    goto LAB60;

}


extern void work_m_00000000000347283805_0010801604_init()
{
	static char *pe[] = {(void *)Initial_36_0,(void *)Cont_43_1,(void *)Cont_47_2,(void *)Cont_48_3,(void *)Cont_50_4,(void *)Always_54_5};
	xsi_register_didat("work_m_00000000000347283805_0010801604", "isim/dm_isim_beh.exe.sim/work/m_00000000000347283805_0010801604.didat");
	xsi_register_executes(pe);
}
