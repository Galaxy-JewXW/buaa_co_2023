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
static const char *ng0 = "D:/BUAA_Undergraduate/23-24autumn/CO_hw/P6/P6v1/fromRAM.v";
static int ng1[] = {8, 0};
static int ng2[] = {7, 0};
static int ng3[] = {16, 0};
static int ng4[] = {1, 0};
static int ng5[] = {15, 0};
static unsigned int ng6[] = {0U, 0U};
static unsigned int ng7[] = {1U, 0U};
static unsigned int ng8[] = {2U, 0U};
static int ng9[] = {24, 0};



static void Cont_30_0(char *t0)
{
    char t4[8];
    char t8[8];
    char t18[8];
    char t20[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t19;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;

LAB0:    t1 = (t0 + 3008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 1328U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    t9 = (t0 + 1048U);
    t10 = *((char **)t9);
    memset(t8, 0, 8);
    t9 = (t8 + 4);
    t11 = (t10 + 4);
    t12 = *((unsigned int *)t10);
    t13 = (t12 >> 0);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t11);
    t15 = (t14 >> 0);
    *((unsigned int *)t9) = t15;
    t16 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t16 & 3U);
    t17 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t17 & 3U);
    memset(t18, 0, 8);
    xsi_vlog_unsigned_multiply(t18, 32, t7, 32, t8, 32);
    t19 = ((char*)((ng2)));
    memset(t20, 0, 8);
    xsi_vlog_unsigned_add(t20, 32, t18, 32, t19, 32);
    xsi_vlog_generic_get_index_select_value(t4, 1, t3, t6, 2, t20, 32, 2);
    t21 = (t0 + 3936);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memset(t25, 0, 8);
    t26 = 1U;
    t27 = t26;
    t28 = (t4 + 4);
    t29 = *((unsigned int *)t4);
    t26 = (t26 & t29);
    t30 = *((unsigned int *)t28);
    t27 = (t27 & t30);
    t31 = (t25 + 4);
    t32 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t32 | t26);
    t33 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t33 | t27);
    xsi_driver_vfirst_trans(t21, 0, 0);
    t34 = (t0 + 3824);
    *((int *)t34) = 1;

LAB1:    return;
}

static void Cont_31_1(char *t0)
{
    char t4[8];
    char t10[8];
    char t14[8];
    char t16[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;

LAB0:    t1 = (t0 + 3256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 1328U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng3)));
    t8 = (t0 + 1048U);
    t9 = *((char **)t8);
    t8 = (t0 + 1008U);
    t11 = (t8 + 72U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng4)));
    xsi_vlog_generic_get_index_select_value(t10, 32, t9, t12, 2, t13, 32, 1);
    memset(t14, 0, 8);
    xsi_vlog_unsigned_multiply(t14, 32, t7, 32, t10, 32);
    t15 = ((char*)((ng5)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_add(t16, 32, t14, 32, t15, 32);
    xsi_vlog_generic_get_index_select_value(t4, 1, t3, t6, 2, t16, 32, 2);
    t17 = (t0 + 4000);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memset(t21, 0, 8);
    t22 = 1U;
    t23 = t22;
    t24 = (t4 + 4);
    t25 = *((unsigned int *)t4);
    t22 = (t22 & t25);
    t26 = *((unsigned int *)t24);
    t23 = (t23 & t26);
    t27 = (t21 + 4);
    t28 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t28 | t22);
    t29 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t29 | t23);
    xsi_driver_vfirst_trans(t17, 0, 0);
    t30 = (t0 + 3840);
    *((int *)t30) = 1;

LAB1:    return;
}

static void Always_33_2(char *t0)
{
    char t9[8];
    char t10[8];
    char t14[8];
    char t18[8];
    char t20[8];
    char t22[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    char *t21;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;

LAB0:    t1 = (t0 + 3504U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 3856);
    *((int *)t2) = 1;
    t3 = (t0 + 3536);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(33, ng0);

LAB5:    xsi_set_current_line(34, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 3);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB11;

LAB12:
LAB13:    goto LAB2;

LAB7:    xsi_set_current_line(36, ng0);
    t7 = (t0 + 1368U);
    t8 = *((char **)t7);
    t7 = (t0 + 2088);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 32);
    goto LAB13;

LAB9:    xsi_set_current_line(38, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    t3 = (t0 + 1328U);
    t7 = (t3 + 72U);
    t8 = *((char **)t7);
    t11 = ((char*)((ng3)));
    t12 = (t0 + 1048U);
    t13 = *((char **)t12);
    t12 = (t0 + 1008U);
    t15 = (t12 + 72U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng4)));
    xsi_vlog_generic_get_index_select_value(t14, 32, t13, t16, 2, t17, 32, 1);
    memset(t18, 0, 8);
    xsi_vlog_unsigned_multiply(t18, 32, t11, 32, t14, 32);
    t19 = ((char*)((ng5)));
    memset(t20, 0, 8);
    xsi_vlog_unsigned_add(t20, 32, t18, 32, t19, 32);
    t21 = ((char*)((ng3)));
    xsi_vlog_get_indexed_partselect(t10, 16, t4, ((int*)(t8)), 2, t20, 32, 2, t21, 32, 1, 0);
    t23 = ((char*)((ng3)));
    t24 = (t0 + 1688U);
    t25 = *((char **)t24);
    xsi_vlog_mul_concat(t22, 16, 1, t23, 1U, t25, 1);
    xsi_vlogtype_concat(t9, 32, 32, 2U, t22, 16, t10, 16);
    t24 = (t0 + 2088);
    xsi_vlogvar_assign_value(t24, t9, 0, 0, 32);
    goto LAB13;

LAB11:    xsi_set_current_line(40, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    t3 = (t0 + 1328U);
    t7 = (t3 + 72U);
    t8 = *((char **)t7);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1048U);
    t13 = *((char **)t12);
    memset(t14, 0, 8);
    t12 = (t14 + 4);
    t15 = (t13 + 4);
    t26 = *((unsigned int *)t13);
    t27 = (t26 >> 0);
    *((unsigned int *)t14) = t27;
    t28 = *((unsigned int *)t15);
    t29 = (t28 >> 0);
    *((unsigned int *)t12) = t29;
    t30 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t30 & 3U);
    t31 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t31 & 3U);
    memset(t18, 0, 8);
    xsi_vlog_unsigned_multiply(t18, 32, t11, 32, t14, 32);
    t16 = ((char*)((ng2)));
    memset(t20, 0, 8);
    xsi_vlog_unsigned_add(t20, 32, t18, 32, t16, 32);
    t17 = ((char*)((ng1)));
    xsi_vlog_get_indexed_partselect(t10, 8, t4, ((int*)(t8)), 2, t20, 32, 2, t17, 32, 1, 0);
    t19 = ((char*)((ng9)));
    t21 = (t0 + 1528U);
    t23 = *((char **)t21);
    xsi_vlog_mul_concat(t22, 24, 1, t19, 1U, t23, 1);
    xsi_vlogtype_concat(t9, 32, 32, 2U, t22, 24, t10, 8);
    t21 = (t0 + 2088);
    xsi_vlogvar_assign_value(t21, t9, 0, 0, 32);
    goto LAB13;

}


extern void work_m_00000000002051298723_0926063982_init()
{
	static char *pe[] = {(void *)Cont_30_0,(void *)Cont_31_1,(void *)Always_33_2};
	xsi_register_didat("work_m_00000000002051298723_0926063982", "isim/mips_txt_isim_beh.exe.sim/work/m_00000000002051298723_0926063982.didat");
	xsi_register_executes(pe);
}
