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
static const char *ng0 = "D:/BUAA_Undergraduate/23-24autumn/CO_hw/P6/P6v0/toRAM.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {15U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {12U, 0U};
static unsigned int ng6[] = {2U, 0U};
static unsigned int ng7[] = {4U, 0U};
static unsigned int ng8[] = {8U, 0U};



static void Always_31_0(char *t0)
{
    char t16[8];
    char t17[8];
    char t18[8];
    char t20[8];
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
    int t13;
    char *t14;
    char *t15;
    unsigned int t19;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t51;
    int t52;

LAB0:    t1 = (t0 + 3008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 3576);
    *((int *)t2) = 1;
    t3 = (t0 + 3040);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(31, ng0);

LAB5:    xsi_set_current_line(32, ng0);
    t4 = (t0 + 1528U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(32, ng0);

LAB9:    xsi_set_current_line(33, ng0);
    t11 = (t0 + 1368U);
    t12 = *((char **)t11);

LAB10:    t11 = ((char*)((ng1)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 2, t11, 2);
    if (t13 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng3)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 2, t2, 2);
    if (t13 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng6)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 2, t2, 2);
    if (t13 == 1)
        goto LAB15;

LAB16:
LAB17:    goto LAB8;

LAB11:    xsi_set_current_line(35, ng0);
    t14 = ((char*)((ng2)));
    t15 = (t0 + 1928);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 4);
    goto LAB17;

LAB13:    xsi_set_current_line(36, ng0);

LAB18:    xsi_set_current_line(37, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    memset(t18, 0, 8);
    t3 = (t18 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 1);
    t8 = (t7 & 1);
    *((unsigned int *)t18) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 1);
    t19 = (t10 & 1);
    *((unsigned int *)t3) = t19;
    t11 = ((char*)((ng1)));
    memset(t20, 0, 8);
    t14 = (t18 + 4);
    t15 = (t11 + 4);
    t21 = *((unsigned int *)t18);
    t22 = *((unsigned int *)t11);
    t23 = (t21 ^ t22);
    t24 = *((unsigned int *)t14);
    t25 = *((unsigned int *)t15);
    t26 = (t24 ^ t25);
    t27 = (t23 | t26);
    t28 = *((unsigned int *)t14);
    t29 = *((unsigned int *)t15);
    t30 = (t28 | t29);
    t31 = (~(t30));
    t32 = (t27 & t31);
    if (t32 != 0)
        goto LAB22;

LAB19:    if (t30 != 0)
        goto LAB21;

LAB20:    *((unsigned int *)t20) = 1;

LAB22:    memset(t17, 0, 8);
    t34 = (t20 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (~(t35));
    t37 = *((unsigned int *)t20);
    t38 = (t37 & t36);
    t39 = (t38 & 1U);
    if (t39 != 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t34) != 0)
        goto LAB25;

LAB26:    t41 = (t17 + 4);
    t42 = *((unsigned int *)t17);
    t43 = *((unsigned int *)t41);
    t44 = (t42 || t43);
    if (t44 > 0)
        goto LAB27;

LAB28:    t46 = *((unsigned int *)t17);
    t47 = (~(t46));
    t48 = *((unsigned int *)t41);
    t49 = (t47 || t48);
    if (t49 > 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t41) > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t17) > 0)
        goto LAB33;

LAB34:    memcpy(t16, t50, 8);

LAB35:    t51 = (t0 + 1928);
    xsi_vlogvar_assign_value(t51, t16, 0, 0, 4);
    goto LAB17;

LAB15:    xsi_set_current_line(39, ng0);

LAB36:    xsi_set_current_line(40, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    memset(t16, 0, 8);
    t3 = (t16 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t16) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t10 & 3U);
    t19 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t19 & 3U);

LAB37:    t11 = ((char*)((ng1)));
    t52 = xsi_vlog_unsigned_case_compare(t16, 2, t11, 2);
    if (t52 == 1)
        goto LAB38;

LAB39:    t2 = ((char*)((ng3)));
    t13 = xsi_vlog_unsigned_case_compare(t16, 2, t2, 2);
    if (t13 == 1)
        goto LAB40;

LAB41:    t2 = ((char*)((ng6)));
    t13 = xsi_vlog_unsigned_case_compare(t16, 2, t2, 2);
    if (t13 == 1)
        goto LAB42;

LAB43:    t2 = ((char*)((ng4)));
    t13 = xsi_vlog_unsigned_case_compare(t16, 2, t2, 2);
    if (t13 == 1)
        goto LAB44;

LAB45:
LAB46:    goto LAB17;

LAB21:    t33 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB22;

LAB23:    *((unsigned int *)t17) = 1;
    goto LAB26;

LAB25:    t40 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB26;

LAB27:    t45 = ((char*)((ng4)));
    goto LAB28;

LAB29:    t50 = ((char*)((ng5)));
    goto LAB30;

LAB31:    xsi_vlog_unsigned_bit_combine(t16, 4, t45, 4, t50, 4);
    goto LAB35;

LAB33:    memcpy(t16, t45, 8);
    goto LAB35;

LAB38:    xsi_set_current_line(42, ng0);
    t14 = ((char*)((ng3)));
    t15 = (t0 + 1928);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 4);
    goto LAB46;

LAB40:    xsi_set_current_line(44, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB46;

LAB42:    xsi_set_current_line(46, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB46;

LAB44:    xsi_set_current_line(48, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB46;

}

static void Always_57_1(char *t0)
{
    char t16[8];
    char t17[8];
    char t18[8];
    char t20[8];
    char t45[8];
    char t46[8];
    char t61[8];
    char t63[8];
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
    int t13;
    char *t14;
    char *t15;
    unsigned int t19;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t62;
    char *t64;
    char *t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    int t74;

LAB0:    t1 = (t0 + 3256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 3592);
    *((int *)t2) = 1;
    t3 = (t0 + 3288);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(57, ng0);

LAB5:    xsi_set_current_line(58, ng0);
    t4 = (t0 + 1528U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(58, ng0);

LAB9:    xsi_set_current_line(59, ng0);
    t11 = (t0 + 1368U);
    t12 = *((char **)t11);

LAB10:    t11 = ((char*)((ng1)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 2, t11, 2);
    if (t13 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng3)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 2, t2, 2);
    if (t13 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng6)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 2, t2, 2);
    if (t13 == 1)
        goto LAB15;

LAB16:
LAB17:    goto LAB8;

LAB11:    xsi_set_current_line(61, ng0);
    t14 = (t0 + 1208U);
    t15 = *((char **)t14);
    t14 = (t0 + 2088);
    xsi_vlogvar_assign_value(t14, t15, 0, 0, 32);
    goto LAB17;

LAB13:    xsi_set_current_line(63, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    memset(t18, 0, 8);
    t3 = (t18 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 1);
    t8 = (t7 & 1);
    *((unsigned int *)t18) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 1);
    t19 = (t10 & 1);
    *((unsigned int *)t3) = t19;
    t11 = ((char*)((ng1)));
    memset(t20, 0, 8);
    t14 = (t18 + 4);
    t15 = (t11 + 4);
    t21 = *((unsigned int *)t18);
    t22 = *((unsigned int *)t11);
    t23 = (t21 ^ t22);
    t24 = *((unsigned int *)t14);
    t25 = *((unsigned int *)t15);
    t26 = (t24 ^ t25);
    t27 = (t23 | t26);
    t28 = *((unsigned int *)t14);
    t29 = *((unsigned int *)t15);
    t30 = (t28 | t29);
    t31 = (~(t30));
    t32 = (t27 & t31);
    if (t32 != 0)
        goto LAB21;

LAB18:    if (t30 != 0)
        goto LAB20;

LAB19:    *((unsigned int *)t20) = 1;

LAB21:    memset(t17, 0, 8);
    t34 = (t20 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (~(t35));
    t37 = *((unsigned int *)t20);
    t38 = (t37 & t36);
    t39 = (t38 & 1U);
    if (t39 != 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t34) != 0)
        goto LAB24;

LAB25:    t41 = (t17 + 4);
    t42 = *((unsigned int *)t17);
    t43 = *((unsigned int *)t41);
    t44 = (t42 || t43);
    if (t44 > 0)
        goto LAB26;

LAB27:    t57 = *((unsigned int *)t17);
    t58 = (~(t57));
    t59 = *((unsigned int *)t41);
    t60 = (t58 || t59);
    if (t60 > 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t41) > 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t17) > 0)
        goto LAB32;

LAB33:    memcpy(t16, t61, 8);

LAB34:    t73 = (t0 + 2088);
    xsi_vlogvar_assign_value(t73, t16, 0, 0, 32);
    goto LAB17;

LAB15:    xsi_set_current_line(65, ng0);

LAB35:    xsi_set_current_line(66, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    memset(t16, 0, 8);
    t3 = (t16 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t16) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t10 & 3U);
    t19 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t19 & 3U);

LAB36:    t11 = ((char*)((ng1)));
    t74 = xsi_vlog_unsigned_case_compare(t16, 2, t11, 2);
    if (t74 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng3)));
    t13 = xsi_vlog_unsigned_case_compare(t16, 2, t2, 2);
    if (t13 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng6)));
    t13 = xsi_vlog_unsigned_case_compare(t16, 2, t2, 2);
    if (t13 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng4)));
    t13 = xsi_vlog_unsigned_case_compare(t16, 2, t2, 2);
    if (t13 == 1)
        goto LAB43;

LAB44:
LAB45:    goto LAB17;

LAB20:    t33 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB21;

LAB22:    *((unsigned int *)t17) = 1;
    goto LAB25;

LAB24:    t40 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB25;

LAB26:    t47 = (t0 + 1208U);
    t48 = *((char **)t47);
    memset(t46, 0, 8);
    t47 = (t46 + 4);
    t49 = (t48 + 4);
    t50 = *((unsigned int *)t48);
    t51 = (t50 >> 0);
    *((unsigned int *)t46) = t51;
    t52 = *((unsigned int *)t49);
    t53 = (t52 >> 0);
    *((unsigned int *)t47) = t53;
    t54 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t54 & 65535U);
    t55 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t55 & 65535U);
    t56 = ((char*)((ng1)));
    xsi_vlogtype_concat(t45, 32, 32, 2U, t56, 16, t46, 16);
    goto LAB27;

LAB28:    t62 = ((char*)((ng1)));
    t64 = (t0 + 1208U);
    t65 = *((char **)t64);
    memset(t63, 0, 8);
    t64 = (t63 + 4);
    t66 = (t65 + 4);
    t67 = *((unsigned int *)t65);
    t68 = (t67 >> 0);
    *((unsigned int *)t63) = t68;
    t69 = *((unsigned int *)t66);
    t70 = (t69 >> 0);
    *((unsigned int *)t64) = t70;
    t71 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t71 & 65535U);
    t72 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t72 & 65535U);
    xsi_vlogtype_concat(t61, 32, 32, 2U, t63, 16, t62, 16);
    goto LAB29;

LAB30:    xsi_vlog_unsigned_bit_combine(t16, 32, t45, 32, t61, 32);
    goto LAB34;

LAB32:    memcpy(t16, t45, 8);
    goto LAB34;

LAB37:    xsi_set_current_line(68, ng0);
    t14 = (t0 + 1208U);
    t15 = *((char **)t14);
    memset(t18, 0, 8);
    t14 = (t18 + 4);
    t33 = (t15 + 4);
    t21 = *((unsigned int *)t15);
    t22 = (t21 >> 0);
    *((unsigned int *)t18) = t22;
    t23 = *((unsigned int *)t33);
    t24 = (t23 >> 0);
    *((unsigned int *)t14) = t24;
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 & 255U);
    t26 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t26 & 255U);
    t34 = ((char*)((ng1)));
    xsi_vlogtype_concat(t17, 32, 32, 2U, t34, 24, t18, 8);
    t40 = (t0 + 2088);
    xsi_vlogvar_assign_value(t40, t17, 0, 0, 32);
    goto LAB45;

LAB39:    xsi_set_current_line(70, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    memset(t18, 0, 8);
    t4 = (t18 + 4);
    t11 = (t5 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (t6 >> 0);
    *((unsigned int *)t18) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 0);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t10 & 255U);
    t19 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t19 & 255U);
    t14 = ((char*)((ng1)));
    xsi_vlogtype_concat(t17, 32, 32, 3U, t14, 16, t18, 8, t3, 8);
    t15 = (t0 + 2088);
    xsi_vlogvar_assign_value(t15, t17, 0, 0, 32);
    goto LAB45;

LAB41:    xsi_set_current_line(72, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    memset(t18, 0, 8);
    t4 = (t18 + 4);
    t11 = (t5 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (t6 >> 0);
    *((unsigned int *)t18) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 0);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t10 & 255U);
    t19 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t19 & 255U);
    t14 = ((char*)((ng1)));
    xsi_vlogtype_concat(t17, 32, 32, 3U, t14, 8, t18, 8, t3, 16);
    t15 = (t0 + 2088);
    xsi_vlogvar_assign_value(t15, t17, 0, 0, 32);
    goto LAB45;

LAB43:    xsi_set_current_line(74, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    memset(t18, 0, 8);
    t4 = (t18 + 4);
    t11 = (t5 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (t6 >> 0);
    *((unsigned int *)t18) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 0);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t10 & 255U);
    t19 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t19 & 255U);
    xsi_vlogtype_concat(t17, 32, 32, 2U, t18, 8, t3, 24);
    t14 = (t0 + 2088);
    xsi_vlogvar_assign_value(t14, t17, 0, 0, 32);
    goto LAB45;

}


extern void work_m_00000000002956264773_0700487581_init()
{
	static char *pe[] = {(void *)Always_31_0,(void *)Always_57_1};
	xsi_register_didat("work_m_00000000002956264773_0700487581", "isim/mips_txt_isim_beh.exe.sim/work/m_00000000002956264773_0700487581.didat");
	xsi_register_executes(pe);
}
