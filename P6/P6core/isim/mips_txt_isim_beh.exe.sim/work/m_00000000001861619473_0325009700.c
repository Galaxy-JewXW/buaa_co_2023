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
static const char *ng0 = "D:/BUAA_Undergraduate/23-24autumn/CO_hw/P6/P6core/M_DE.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static int ng3[] = {16, 0};
static int ng4[] = {1, 0};
static int ng5[] = {15, 0};
static unsigned int ng6[] = {3U, 0U};
static unsigned int ng7[] = {2U, 0U};
static int ng8[] = {8, 0};
static int ng9[] = {7, 0};
static int ng10[] = {24, 0};
static unsigned int ng11[] = {4U, 0U};



static void Always_18_0(char *t0)
{
    char t7[8];
    char t18[8];
    char t20[8];
    char t24[8];
    char t26[8];
    char t28[8];
    char t32[8];
    char t38[8];
    char t42[8];
    char t44[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t19;
    char *t21;
    char *t22;
    char *t23;
    char *t25;
    char *t27;
    char *t29;
    char *t30;
    char *t31;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t39;
    char *t40;
    char *t41;
    char *t43;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;

LAB0:    t1 = (t0 + 2688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18, ng0);
    t2 = (t0 + 3008);
    *((int *)t2) = 1;
    t3 = (t0 + 2720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(18, ng0);

LAB5:    xsi_set_current_line(19, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 3);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB15;

LAB16:
LAB17:    goto LAB2;

LAB7:    xsi_set_current_line(20, ng0);
    t8 = (t0 + 1368U);
    t9 = *((char **)t8);
    memset(t7, 0, 8);
    t8 = (t7 + 4);
    t10 = (t9 + 4);
    t11 = *((unsigned int *)t9);
    t12 = (t11 >> 0);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t10);
    t14 = (t13 >> 0);
    *((unsigned int *)t8) = t14;
    t15 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t15 & 4294967295U);
    t16 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t16 & 4294967295U);
    t17 = (t0 + 1768);
    xsi_vlogvar_assign_value(t17, t7, 0, 0, 32);
    goto LAB17;

LAB9:    xsi_set_current_line(21, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    t3 = (t0 + 1328U);
    t8 = (t3 + 72U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng3)));
    t17 = (t0 + 1048U);
    t19 = *((char **)t17);
    t17 = (t0 + 1008U);
    t21 = (t17 + 72U);
    t22 = *((char **)t21);
    t23 = ((char*)((ng4)));
    xsi_vlog_generic_get_index_select_value(t20, 32, t19, t22, 2, t23, 32, 1);
    memset(t24, 0, 8);
    xsi_vlog_unsigned_multiply(t24, 32, t10, 32, t20, 32);
    t25 = ((char*)((ng5)));
    memset(t26, 0, 8);
    xsi_vlog_unsigned_add(t26, 32, t24, 32, t25, 32);
    t27 = ((char*)((ng3)));
    xsi_vlog_get_indexed_partselect(t18, 16, t4, ((int*)(t9)), 2, t26, 32, 2, t27, 32, 1, 0);
    t29 = ((char*)((ng3)));
    t30 = (t0 + 1368U);
    t31 = *((char **)t30);
    t30 = (t0 + 1328U);
    t33 = (t30 + 72U);
    t34 = *((char **)t33);
    t35 = ((char*)((ng3)));
    t36 = (t0 + 1048U);
    t37 = *((char **)t36);
    t36 = (t0 + 1008U);
    t39 = (t36 + 72U);
    t40 = *((char **)t39);
    t41 = ((char*)((ng4)));
    xsi_vlog_generic_get_index_select_value(t38, 32, t37, t40, 2, t41, 32, 1);
    memset(t42, 0, 8);
    xsi_vlog_unsigned_multiply(t42, 32, t35, 32, t38, 32);
    t43 = ((char*)((ng5)));
    memset(t44, 0, 8);
    xsi_vlog_unsigned_add(t44, 32, t42, 32, t43, 32);
    xsi_vlog_generic_get_index_select_value(t32, 1, t31, t34, 2, t44, 32, 2);
    xsi_vlog_mul_concat(t28, 16, 1, t29, 1U, t32, 1);
    xsi_vlogtype_concat(t7, 32, 32, 2U, t28, 16, t18, 16);
    t45 = (t0 + 1768);
    xsi_vlogvar_assign_value(t45, t7, 0, 0, 32);
    goto LAB17;

LAB11:    xsi_set_current_line(22, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    t3 = (t0 + 1328U);
    t8 = (t3 + 72U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng3)));
    t17 = (t0 + 1048U);
    t19 = *((char **)t17);
    t17 = (t0 + 1008U);
    t21 = (t17 + 72U);
    t22 = *((char **)t21);
    t23 = ((char*)((ng4)));
    xsi_vlog_generic_get_index_select_value(t20, 32, t19, t22, 2, t23, 32, 1);
    memset(t24, 0, 8);
    xsi_vlog_unsigned_multiply(t24, 32, t10, 32, t20, 32);
    t25 = ((char*)((ng5)));
    memset(t26, 0, 8);
    xsi_vlog_unsigned_add(t26, 32, t24, 32, t25, 32);
    t27 = ((char*)((ng3)));
    xsi_vlog_get_indexed_partselect(t18, 16, t4, ((int*)(t9)), 2, t26, 32, 2, t27, 32, 1, 0);
    t29 = ((char*)((ng1)));
    xsi_vlogtype_concat(t7, 32, 32, 2U, t29, 16, t18, 16);
    t30 = (t0 + 1768);
    xsi_vlogvar_assign_value(t30, t7, 0, 0, 32);
    goto LAB17;

LAB13:    xsi_set_current_line(23, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    t3 = (t0 + 1328U);
    t8 = (t3 + 72U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng8)));
    t17 = (t0 + 1048U);
    t19 = *((char **)t17);
    memset(t20, 0, 8);
    t17 = (t20 + 4);
    t21 = (t19 + 4);
    t11 = *((unsigned int *)t19);
    t12 = (t11 >> 0);
    *((unsigned int *)t20) = t12;
    t13 = *((unsigned int *)t21);
    t14 = (t13 >> 0);
    *((unsigned int *)t17) = t14;
    t15 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t15 & 3U);
    t16 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t16 & 3U);
    memset(t24, 0, 8);
    xsi_vlog_unsigned_multiply(t24, 32, t10, 32, t20, 32);
    t22 = ((char*)((ng9)));
    memset(t26, 0, 8);
    xsi_vlog_unsigned_add(t26, 32, t24, 32, t22, 32);
    t23 = ((char*)((ng8)));
    xsi_vlog_get_indexed_partselect(t18, 8, t4, ((int*)(t9)), 2, t26, 32, 2, t23, 32, 1, 0);
    t25 = ((char*)((ng10)));
    t27 = (t0 + 1368U);
    t29 = *((char **)t27);
    t27 = (t0 + 1328U);
    t30 = (t27 + 72U);
    t31 = *((char **)t30);
    t33 = ((char*)((ng8)));
    t34 = (t0 + 1048U);
    t35 = *((char **)t34);
    memset(t38, 0, 8);
    t34 = (t38 + 4);
    t36 = (t35 + 4);
    t46 = *((unsigned int *)t35);
    t47 = (t46 >> 0);
    *((unsigned int *)t38) = t47;
    t48 = *((unsigned int *)t36);
    t49 = (t48 >> 0);
    *((unsigned int *)t34) = t49;
    t50 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t50 & 3U);
    t51 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t51 & 3U);
    memset(t42, 0, 8);
    xsi_vlog_unsigned_multiply(t42, 32, t33, 32, t38, 32);
    t37 = ((char*)((ng9)));
    memset(t44, 0, 8);
    xsi_vlog_unsigned_add(t44, 32, t42, 32, t37, 32);
    xsi_vlog_generic_get_index_select_value(t32, 1, t29, t31, 2, t44, 32, 2);
    xsi_vlog_mul_concat(t28, 24, 1, t25, 1U, t32, 1);
    xsi_vlogtype_concat(t7, 32, 32, 2U, t28, 24, t18, 8);
    t39 = (t0 + 1768);
    xsi_vlogvar_assign_value(t39, t7, 0, 0, 32);
    goto LAB17;

LAB15:    xsi_set_current_line(24, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    t3 = (t0 + 1328U);
    t8 = (t3 + 72U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng8)));
    t17 = (t0 + 1048U);
    t19 = *((char **)t17);
    memset(t20, 0, 8);
    t17 = (t20 + 4);
    t21 = (t19 + 4);
    t11 = *((unsigned int *)t19);
    t12 = (t11 >> 0);
    *((unsigned int *)t20) = t12;
    t13 = *((unsigned int *)t21);
    t14 = (t13 >> 0);
    *((unsigned int *)t17) = t14;
    t15 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t15 & 3U);
    t16 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t16 & 3U);
    memset(t24, 0, 8);
    xsi_vlog_unsigned_multiply(t24, 32, t10, 32, t20, 32);
    t22 = ((char*)((ng9)));
    memset(t26, 0, 8);
    xsi_vlog_unsigned_add(t26, 32, t24, 32, t22, 32);
    t23 = ((char*)((ng8)));
    xsi_vlog_get_indexed_partselect(t18, 8, t4, ((int*)(t9)), 2, t26, 32, 2, t23, 32, 1, 0);
    t25 = ((char*)((ng1)));
    xsi_vlogtype_concat(t7, 32, 32, 2U, t25, 24, t18, 8);
    t27 = (t0 + 1768);
    xsi_vlogvar_assign_value(t27, t7, 0, 0, 32);
    goto LAB17;

}


extern void work_m_00000000001861619473_0325009700_init()
{
	static char *pe[] = {(void *)Always_18_0};
	xsi_register_didat("work_m_00000000001861619473_0325009700", "isim/mips_txt_isim_beh.exe.sim/work/m_00000000001861619473_0325009700.didat");
	xsi_register_executes(pe);
}
