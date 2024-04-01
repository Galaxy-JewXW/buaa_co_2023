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
static const char *ng0 = "D:/BUAA_Undergraduate/23-24autumn/CO_hw/P6/P6core/M_BE.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {15U, 0U};
static unsigned int ng6[] = {12U, 0U};
static unsigned int ng7[] = {4U, 0U};
static unsigned int ng8[] = {8U, 0U};



static void Always_17_0(char *t0)
{
    char t9[8];
    char t16[8];
    char t38[8];
    char t39[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
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
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;

LAB0:    t1 = (t0 + 3008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(17, ng0);
    t2 = (t0 + 3576);
    *((int *)t2) = 1;
    t3 = (t0 + 3040);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(17, ng0);

LAB5:    xsi_set_current_line(18, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 2);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB11;

LAB12:
LAB14:
LAB13:    xsi_set_current_line(30, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(19, ng0);
    t7 = (t0 + 1368U);
    t8 = *((char **)t7);
    t7 = (t0 + 2088);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 32);
    goto LAB15;

LAB9:    xsi_set_current_line(20, ng0);

LAB16:    xsi_set_current_line(21, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    memset(t9, 0, 8);
    t3 = (t9 + 4);
    t7 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 1);
    t12 = (t11 & 1);
    *((unsigned int *)t9) = t12;
    t13 = *((unsigned int *)t7);
    t14 = (t13 >> 1);
    t15 = (t14 & 1);
    *((unsigned int *)t3) = t15;
    t8 = ((char*)((ng1)));
    memset(t16, 0, 8);
    t17 = (t9 + 4);
    t18 = (t8 + 4);
    t19 = *((unsigned int *)t9);
    t20 = *((unsigned int *)t8);
    t21 = (t19 ^ t20);
    t22 = *((unsigned int *)t17);
    t23 = *((unsigned int *)t18);
    t24 = (t22 ^ t23);
    t25 = (t21 | t24);
    t26 = *((unsigned int *)t17);
    t27 = *((unsigned int *)t18);
    t28 = (t26 | t27);
    t29 = (~(t28));
    t30 = (t25 & t29);
    if (t30 != 0)
        goto LAB20;

LAB17:    if (t28 != 0)
        goto LAB19;

LAB18:    *((unsigned int *)t16) = 1;

LAB20:    t32 = (t16 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (~(t33));
    t35 = *((unsigned int *)t16);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB21;

LAB22:    xsi_set_current_line(22, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    memset(t16, 0, 8);
    t3 = (t16 + 4);
    t7 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 0);
    *((unsigned int *)t16) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 0);
    *((unsigned int *)t3) = t13;
    t14 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t14 & 65535U);
    t15 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t15 & 65535U);
    xsi_vlogtype_concat(t9, 32, 32, 2U, t16, 16, t2, 16);
    t8 = (t0 + 2088);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);

LAB23:    goto LAB15;

LAB11:    xsi_set_current_line(24, ng0);

LAB24:    xsi_set_current_line(25, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    memset(t9, 0, 8);
    t3 = (t9 + 4);
    t7 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 0);
    *((unsigned int *)t9) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 0);
    *((unsigned int *)t3) = t13;
    t14 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t14 & 3U);
    t15 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t15 & 3U);
    t8 = ((char*)((ng1)));
    memset(t16, 0, 8);
    t17 = (t9 + 4);
    t18 = (t8 + 4);
    t19 = *((unsigned int *)t9);
    t20 = *((unsigned int *)t8);
    t21 = (t19 ^ t20);
    t22 = *((unsigned int *)t17);
    t23 = *((unsigned int *)t18);
    t24 = (t22 ^ t23);
    t25 = (t21 | t24);
    t26 = *((unsigned int *)t17);
    t27 = *((unsigned int *)t18);
    t28 = (t26 | t27);
    t29 = (~(t28));
    t30 = (t25 & t29);
    if (t30 != 0)
        goto LAB28;

LAB25:    if (t28 != 0)
        goto LAB27;

LAB26:    *((unsigned int *)t16) = 1;

LAB28:    t32 = (t16 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (~(t33));
    t35 = *((unsigned int *)t16);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB29;

LAB30:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t9, 0, 8);
    t2 = (t9 + 4);
    t4 = (t3 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (t10 >> 0);
    *((unsigned int *)t9) = t11;
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 0);
    *((unsigned int *)t2) = t13;
    t14 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t14 & 3U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 3U);
    t7 = ((char*)((ng2)));
    memset(t16, 0, 8);
    t8 = (t9 + 4);
    t17 = (t7 + 4);
    t19 = *((unsigned int *)t9);
    t20 = *((unsigned int *)t7);
    t21 = (t19 ^ t20);
    t22 = *((unsigned int *)t8);
    t23 = *((unsigned int *)t17);
    t24 = (t22 ^ t23);
    t25 = (t21 | t24);
    t26 = *((unsigned int *)t8);
    t27 = *((unsigned int *)t17);
    t28 = (t26 | t27);
    t29 = (~(t28));
    t30 = (t25 & t29);
    if (t30 != 0)
        goto LAB35;

LAB32:    if (t28 != 0)
        goto LAB34;

LAB33:    *((unsigned int *)t16) = 1;

LAB35:    t31 = (t16 + 4);
    t33 = *((unsigned int *)t31);
    t34 = (~(t33));
    t35 = *((unsigned int *)t16);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB36;

LAB37:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t9, 0, 8);
    t2 = (t9 + 4);
    t4 = (t3 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (t10 >> 0);
    *((unsigned int *)t9) = t11;
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 0);
    *((unsigned int *)t2) = t13;
    t14 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t14 & 3U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 3U);
    t7 = ((char*)((ng3)));
    memset(t16, 0, 8);
    t8 = (t9 + 4);
    t17 = (t7 + 4);
    t19 = *((unsigned int *)t9);
    t20 = *((unsigned int *)t7);
    t21 = (t19 ^ t20);
    t22 = *((unsigned int *)t8);
    t23 = *((unsigned int *)t17);
    t24 = (t22 ^ t23);
    t25 = (t21 | t24);
    t26 = *((unsigned int *)t8);
    t27 = *((unsigned int *)t17);
    t28 = (t26 | t27);
    t29 = (~(t28));
    t30 = (t25 & t29);
    if (t30 != 0)
        goto LAB42;

LAB39:    if (t28 != 0)
        goto LAB41;

LAB40:    *((unsigned int *)t16) = 1;

LAB42:    t31 = (t16 + 4);
    t33 = *((unsigned int *)t31);
    t34 = (~(t33));
    t35 = *((unsigned int *)t16);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB43;

LAB44:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t9, 0, 8);
    t2 = (t9 + 4);
    t4 = (t3 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (t10 >> 0);
    *((unsigned int *)t9) = t11;
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 0);
    *((unsigned int *)t2) = t13;
    t14 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t14 & 3U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 3U);
    t7 = ((char*)((ng4)));
    memset(t16, 0, 8);
    t8 = (t9 + 4);
    t17 = (t7 + 4);
    t19 = *((unsigned int *)t9);
    t20 = *((unsigned int *)t7);
    t21 = (t19 ^ t20);
    t22 = *((unsigned int *)t8);
    t23 = *((unsigned int *)t17);
    t24 = (t22 ^ t23);
    t25 = (t21 | t24);
    t26 = *((unsigned int *)t8);
    t27 = *((unsigned int *)t17);
    t28 = (t26 | t27);
    t29 = (~(t28));
    t30 = (t25 & t29);
    if (t30 != 0)
        goto LAB49;

LAB46:    if (t28 != 0)
        goto LAB48;

LAB47:    *((unsigned int *)t16) = 1;

LAB49:    t31 = (t16 + 4);
    t33 = *((unsigned int *)t31);
    t34 = (~(t33));
    t35 = *((unsigned int *)t16);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB50;

LAB51:
LAB52:
LAB45:
LAB38:
LAB31:    goto LAB15;

LAB19:    t31 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB20;

LAB21:    xsi_set_current_line(21, ng0);
    t40 = (t0 + 1368U);
    t41 = *((char **)t40);
    memset(t39, 0, 8);
    t40 = (t39 + 4);
    t42 = (t41 + 4);
    t43 = *((unsigned int *)t41);
    t44 = (t43 >> 0);
    *((unsigned int *)t39) = t44;
    t45 = *((unsigned int *)t42);
    t46 = (t45 >> 0);
    *((unsigned int *)t40) = t46;
    t47 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t47 & 65535U);
    t48 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t48 & 65535U);
    t49 = ((char*)((ng1)));
    xsi_vlogtype_concat(t38, 32, 32, 2U, t49, 16, t39, 16);
    t50 = (t0 + 2088);
    xsi_vlogvar_assign_value(t50, t38, 0, 0, 32);
    goto LAB23;

LAB27:    t31 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB28;

LAB29:    xsi_set_current_line(25, ng0);
    t40 = (t0 + 1368U);
    t41 = *((char **)t40);
    memset(t39, 0, 8);
    t40 = (t39 + 4);
    t42 = (t41 + 4);
    t43 = *((unsigned int *)t41);
    t44 = (t43 >> 0);
    *((unsigned int *)t39) = t44;
    t45 = *((unsigned int *)t42);
    t46 = (t45 >> 0);
    *((unsigned int *)t40) = t46;
    t47 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t47 & 255U);
    t48 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t48 & 255U);
    t49 = ((char*)((ng1)));
    xsi_vlogtype_concat(t38, 32, 32, 2U, t49, 24, t39, 8);
    t50 = (t0 + 2088);
    xsi_vlogvar_assign_value(t50, t38, 0, 0, 32);
    goto LAB31;

LAB34:    t18 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB35;

LAB36:    xsi_set_current_line(26, ng0);
    t32 = ((char*)((ng1)));
    t40 = (t0 + 1368U);
    t41 = *((char **)t40);
    memset(t39, 0, 8);
    t40 = (t39 + 4);
    t42 = (t41 + 4);
    t43 = *((unsigned int *)t41);
    t44 = (t43 >> 0);
    *((unsigned int *)t39) = t44;
    t45 = *((unsigned int *)t42);
    t46 = (t45 >> 0);
    *((unsigned int *)t40) = t46;
    t47 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t47 & 255U);
    t48 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t48 & 255U);
    t49 = ((char*)((ng1)));
    xsi_vlogtype_concat(t38, 32, 32, 3U, t49, 16, t39, 8, t32, 8);
    t50 = (t0 + 2088);
    xsi_vlogvar_assign_value(t50, t38, 0, 0, 32);
    goto LAB38;

LAB41:    t18 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB42;

LAB43:    xsi_set_current_line(27, ng0);
    t32 = ((char*)((ng1)));
    t40 = (t0 + 1368U);
    t41 = *((char **)t40);
    memset(t39, 0, 8);
    t40 = (t39 + 4);
    t42 = (t41 + 4);
    t43 = *((unsigned int *)t41);
    t44 = (t43 >> 0);
    *((unsigned int *)t39) = t44;
    t45 = *((unsigned int *)t42);
    t46 = (t45 >> 0);
    *((unsigned int *)t40) = t46;
    t47 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t47 & 255U);
    t48 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t48 & 255U);
    t49 = ((char*)((ng1)));
    xsi_vlogtype_concat(t38, 32, 32, 3U, t49, 8, t39, 8, t32, 16);
    t50 = (t0 + 2088);
    xsi_vlogvar_assign_value(t50, t38, 0, 0, 32);
    goto LAB45;

LAB48:    t18 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB49;

LAB50:    xsi_set_current_line(28, ng0);
    t32 = ((char*)((ng1)));
    t40 = (t0 + 1368U);
    t41 = *((char **)t40);
    memset(t39, 0, 8);
    t40 = (t39 + 4);
    t42 = (t41 + 4);
    t43 = *((unsigned int *)t41);
    t44 = (t43 >> 0);
    *((unsigned int *)t39) = t44;
    t45 = *((unsigned int *)t42);
    t46 = (t45 >> 0);
    *((unsigned int *)t40) = t46;
    t47 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t47 & 255U);
    t48 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t48 & 255U);
    xsi_vlogtype_concat(t38, 32, 32, 2U, t39, 8, t32, 24);
    t49 = (t0 + 2088);
    xsi_vlogvar_assign_value(t49, t38, 0, 0, 32);
    goto LAB52;

}

static void Always_34_1(char *t0)
{
    char t9[8];
    char t16[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
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
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;

LAB0:    t1 = (t0 + 3256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 3592);
    *((int *)t2) = 1;
    t3 = (t0 + 3288);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(34, ng0);

LAB5:    xsi_set_current_line(35, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 2);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB11;

LAB12:
LAB14:
LAB13:    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(36, ng0);
    t7 = ((char*)((ng5)));
    t8 = (t0 + 1928);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 4);
    goto LAB15;

LAB9:    xsi_set_current_line(37, ng0);

LAB16:    xsi_set_current_line(38, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    memset(t9, 0, 8);
    t3 = (t9 + 4);
    t7 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 1);
    t12 = (t11 & 1);
    *((unsigned int *)t9) = t12;
    t13 = *((unsigned int *)t7);
    t14 = (t13 >> 1);
    t15 = (t14 & 1);
    *((unsigned int *)t3) = t15;
    t8 = ((char*)((ng1)));
    memset(t16, 0, 8);
    t17 = (t9 + 4);
    t18 = (t8 + 4);
    t19 = *((unsigned int *)t9);
    t20 = *((unsigned int *)t8);
    t21 = (t19 ^ t20);
    t22 = *((unsigned int *)t17);
    t23 = *((unsigned int *)t18);
    t24 = (t22 ^ t23);
    t25 = (t21 | t24);
    t26 = *((unsigned int *)t17);
    t27 = *((unsigned int *)t18);
    t28 = (t26 | t27);
    t29 = (~(t28));
    t30 = (t25 & t29);
    if (t30 != 0)
        goto LAB20;

LAB17:    if (t28 != 0)
        goto LAB19;

LAB18:    *((unsigned int *)t16) = 1;

LAB20:    t32 = (t16 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (~(t33));
    t35 = *((unsigned int *)t16);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB21;

LAB22:    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB23:    goto LAB15;

LAB11:    xsi_set_current_line(41, ng0);

LAB24:    xsi_set_current_line(42, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    memset(t9, 0, 8);
    t3 = (t9 + 4);
    t7 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 0);
    *((unsigned int *)t9) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 0);
    *((unsigned int *)t3) = t13;
    t14 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t14 & 3U);
    t15 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t15 & 3U);
    t8 = ((char*)((ng1)));
    memset(t16, 0, 8);
    t17 = (t9 + 4);
    t18 = (t8 + 4);
    t19 = *((unsigned int *)t9);
    t20 = *((unsigned int *)t8);
    t21 = (t19 ^ t20);
    t22 = *((unsigned int *)t17);
    t23 = *((unsigned int *)t18);
    t24 = (t22 ^ t23);
    t25 = (t21 | t24);
    t26 = *((unsigned int *)t17);
    t27 = *((unsigned int *)t18);
    t28 = (t26 | t27);
    t29 = (~(t28));
    t30 = (t25 & t29);
    if (t30 != 0)
        goto LAB28;

LAB25:    if (t28 != 0)
        goto LAB27;

LAB26:    *((unsigned int *)t16) = 1;

LAB28:    t32 = (t16 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (~(t33));
    t35 = *((unsigned int *)t16);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB29;

LAB30:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t9, 0, 8);
    t2 = (t9 + 4);
    t4 = (t3 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (t10 >> 0);
    *((unsigned int *)t9) = t11;
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 0);
    *((unsigned int *)t2) = t13;
    t14 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t14 & 3U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 3U);
    t7 = ((char*)((ng2)));
    memset(t16, 0, 8);
    t8 = (t9 + 4);
    t17 = (t7 + 4);
    t19 = *((unsigned int *)t9);
    t20 = *((unsigned int *)t7);
    t21 = (t19 ^ t20);
    t22 = *((unsigned int *)t8);
    t23 = *((unsigned int *)t17);
    t24 = (t22 ^ t23);
    t25 = (t21 | t24);
    t26 = *((unsigned int *)t8);
    t27 = *((unsigned int *)t17);
    t28 = (t26 | t27);
    t29 = (~(t28));
    t30 = (t25 & t29);
    if (t30 != 0)
        goto LAB35;

LAB32:    if (t28 != 0)
        goto LAB34;

LAB33:    *((unsigned int *)t16) = 1;

LAB35:    t31 = (t16 + 4);
    t33 = *((unsigned int *)t31);
    t34 = (~(t33));
    t35 = *((unsigned int *)t16);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB36;

LAB37:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t9, 0, 8);
    t2 = (t9 + 4);
    t4 = (t3 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (t10 >> 0);
    *((unsigned int *)t9) = t11;
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 0);
    *((unsigned int *)t2) = t13;
    t14 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t14 & 3U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 3U);
    t7 = ((char*)((ng3)));
    memset(t16, 0, 8);
    t8 = (t9 + 4);
    t17 = (t7 + 4);
    t19 = *((unsigned int *)t9);
    t20 = *((unsigned int *)t7);
    t21 = (t19 ^ t20);
    t22 = *((unsigned int *)t8);
    t23 = *((unsigned int *)t17);
    t24 = (t22 ^ t23);
    t25 = (t21 | t24);
    t26 = *((unsigned int *)t8);
    t27 = *((unsigned int *)t17);
    t28 = (t26 | t27);
    t29 = (~(t28));
    t30 = (t25 & t29);
    if (t30 != 0)
        goto LAB42;

LAB39:    if (t28 != 0)
        goto LAB41;

LAB40:    *((unsigned int *)t16) = 1;

LAB42:    t31 = (t16 + 4);
    t33 = *((unsigned int *)t31);
    t34 = (~(t33));
    t35 = *((unsigned int *)t16);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB43;

LAB44:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t9, 0, 8);
    t2 = (t9 + 4);
    t4 = (t3 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (t10 >> 0);
    *((unsigned int *)t9) = t11;
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 0);
    *((unsigned int *)t2) = t13;
    t14 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t14 & 3U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 3U);
    t7 = ((char*)((ng4)));
    memset(t16, 0, 8);
    t8 = (t9 + 4);
    t17 = (t7 + 4);
    t19 = *((unsigned int *)t9);
    t20 = *((unsigned int *)t7);
    t21 = (t19 ^ t20);
    t22 = *((unsigned int *)t8);
    t23 = *((unsigned int *)t17);
    t24 = (t22 ^ t23);
    t25 = (t21 | t24);
    t26 = *((unsigned int *)t8);
    t27 = *((unsigned int *)t17);
    t28 = (t26 | t27);
    t29 = (~(t28));
    t30 = (t25 & t29);
    if (t30 != 0)
        goto LAB49;

LAB46:    if (t28 != 0)
        goto LAB48;

LAB47:    *((unsigned int *)t16) = 1;

LAB49:    t31 = (t16 + 4);
    t33 = *((unsigned int *)t31);
    t34 = (~(t33));
    t35 = *((unsigned int *)t16);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB50;

LAB51:
LAB52:
LAB45:
LAB38:
LAB31:    goto LAB15;

LAB19:    t31 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB20;

LAB21:    xsi_set_current_line(38, ng0);
    t38 = ((char*)((ng4)));
    t39 = (t0 + 1928);
    xsi_vlogvar_assign_value(t39, t38, 0, 0, 4);
    goto LAB23;

LAB27:    t31 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB28;

LAB29:    xsi_set_current_line(42, ng0);
    t38 = ((char*)((ng2)));
    t39 = (t0 + 1928);
    xsi_vlogvar_assign_value(t39, t38, 0, 0, 4);
    goto LAB31;

LAB34:    t18 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB35;

LAB36:    xsi_set_current_line(43, ng0);
    t32 = ((char*)((ng3)));
    t38 = (t0 + 1928);
    xsi_vlogvar_assign_value(t38, t32, 0, 0, 4);
    goto LAB38;

LAB41:    t18 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB42;

LAB43:    xsi_set_current_line(44, ng0);
    t32 = ((char*)((ng7)));
    t38 = (t0 + 1928);
    xsi_vlogvar_assign_value(t38, t32, 0, 0, 4);
    goto LAB45;

LAB48:    t18 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB49;

LAB50:    xsi_set_current_line(45, ng0);
    t32 = ((char*)((ng8)));
    t38 = (t0 + 1928);
    xsi_vlogvar_assign_value(t38, t32, 0, 0, 4);
    goto LAB52;

}


extern void work_m_00000000000898964425_1158014626_init()
{
	static char *pe[] = {(void *)Always_17_0,(void *)Always_34_1};
	xsi_register_didat("work_m_00000000000898964425_1158014626", "isim/mips_txt_isim_beh.exe.sim/work/m_00000000000898964425_1158014626.didat");
	xsi_register_executes(pe);
}
