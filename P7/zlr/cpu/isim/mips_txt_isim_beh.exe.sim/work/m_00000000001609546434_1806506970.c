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
static const char *ng0 = "C:/Users/fysszlr/Desktop/The_endless_source_of_evil_comes_from_the_whispers_of_hell/Second_year_up/CO/P7/cpu/e_mdu.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {0U, 0U, 0U, 0U};
static int ng4[] = {5, 0};
static int ng5[] = {2, 0};
static int ng6[] = {3, 0};
static int ng7[] = {10, 0};
static int ng8[] = {4, 0};
static int ng9[] = {6, 0};



static void Always_38_0(char *t0)
{
    char t15[8];
    char t20[8];
    char t35[16];
    char t36[16];
    char t37[16];
    char t38[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t21;
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
    unsigned int t33;
    int t34;

LAB0:    t1 = (t0 + 4424U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 4744);
    *((int *)t2) = 1;
    t3 = (t0 + 4456);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(38, ng0);

LAB5:    t4 = (t0 + 280);
    xsi_vlog_namedbase_setdisablestate(t4, &&LAB6);
    t5 = (t0 + 4232);
    xsi_vlog_namedbase_pushprocess(t4, t5);

LAB7:    xsi_set_current_line(39, ng0);
    t6 = (t0 + 1504U);
    t7 = *((char **)t6);
    t6 = (t7 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (~(t8));
    t10 = *((unsigned int *)t7);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB8;

LAB9:    xsi_set_current_line(47, ng0);

LAB12:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 3504);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t15, 0, 8);
    t6 = (t4 + 4);
    if (*((unsigned int *)t6) != 0)
        goto LAB14;

LAB13:    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB14;

LAB17:    if (*((unsigned int *)t4) > *((unsigned int *)t5))
        goto LAB15;

LAB16:    t14 = (t15 + 4);
    t8 = *((unsigned int *)t14);
    t9 = (~(t8));
    t10 = *((unsigned int *)t15);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 3504);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t15, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t5);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t22 = (t11 ^ t12);
    t23 = (t10 | t22);
    t24 = *((unsigned int *)t6);
    t25 = *((unsigned int *)t7);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t28 = (t23 & t27);
    if (t28 != 0)
        goto LAB24;

LAB21:    if (t26 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t15) = 1;

LAB24:    t14 = (t15 + 4);
    t29 = *((unsigned int *)t14);
    t30 = (~(t29));
    t31 = *((unsigned int *)t15);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB25;

LAB26:    xsi_set_current_line(55, ng0);

LAB29:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1664U);
    t3 = *((char **)t2);
    memset(t15, 0, 8);
    t2 = (t3 + 4);
    t8 = *((unsigned int *)t2);
    t9 = (~(t8));
    t10 = *((unsigned int *)t3);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB33;

LAB31:    if (*((unsigned int *)t2) == 0)
        goto LAB30;

LAB32:    t4 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t4) = 1;

LAB33:    t5 = (t15 + 4);
    t22 = *((unsigned int *)t5);
    t23 = (~(t22));
    t24 = *((unsigned int *)t15);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB34;

LAB35:
LAB36:
LAB27:
LAB20:
LAB10:    t2 = (t0 + 280);
    xsi_vlog_namedbase_popprocess(t2);

LAB6:    t4 = (t0 + 4232);
    xsi_vlog_dispose_process_subprogram_invocation(t4);
    goto LAB2;

LAB8:    xsi_set_current_line(39, ng0);

LAB11:    xsi_set_current_line(40, ng0);
    t13 = ((char*)((ng1)));
    t14 = (t0 + 2704);
    xsi_vlogvar_wait_assign_value(t14, t13, 0, 0, 1, 0LL);
    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2864);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3024);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3184);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3344);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3504);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB10;

LAB14:    t13 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB16;

LAB15:    *((unsigned int *)t15) = 1;
    goto LAB16;

LAB18:    xsi_set_current_line(48, ng0);
    t16 = (t0 + 3504);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng2)));
    memset(t20, 0, 8);
    xsi_vlog_unsigned_minus(t20, 32, t18, 4, t19, 32);
    t21 = (t0 + 3504);
    xsi_vlogvar_wait_assign_value(t21, t20, 0, 0, 4, 0LL);
    goto LAB20;

LAB23:    t13 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB24;

LAB25:    xsi_set_current_line(49, ng0);

LAB28:    xsi_set_current_line(50, ng0);
    t16 = (t0 + 3184);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t0 + 2864);
    xsi_vlogvar_wait_assign_value(t19, t18, 0, 0, 32, 0LL);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 3344);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3024);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2704);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3504);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB27;

LAB30:    *((unsigned int *)t15) = 1;
    goto LAB33;

LAB34:    xsi_set_current_line(56, ng0);

LAB37:    xsi_set_current_line(57, ng0);
    t6 = (t0 + 2304U);
    t7 = *((char **)t6);
    t6 = (t7 + 4);
    t27 = *((unsigned int *)t6);
    t28 = (~(t27));
    t29 = *((unsigned int *)t7);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB38;

LAB39:    xsi_set_current_line(88, ng0);

LAB59:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 1824U);
    t3 = *((char **)t2);

LAB60:    t2 = ((char*)((ng4)));
    t34 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 32);
    if (t34 == 1)
        goto LAB61;

LAB62:    t2 = ((char*)((ng9)));
    t34 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 32);
    if (t34 == 1)
        goto LAB63;

LAB64:
LAB65:
LAB40:    goto LAB36;

LAB38:    xsi_set_current_line(57, ng0);

LAB41:    xsi_set_current_line(58, ng0);
    t13 = (t0 + 1824U);
    t14 = *((char **)t13);

LAB42:    t13 = ((char*)((ng1)));
    t34 = xsi_vlog_unsigned_case_compare(t14, 4, t13, 32);
    if (t34 == 1)
        goto LAB43;

LAB44:    t2 = ((char*)((ng2)));
    t34 = xsi_vlog_unsigned_case_compare(t14, 4, t2, 32);
    if (t34 == 1)
        goto LAB45;

LAB46:    t2 = ((char*)((ng5)));
    t34 = xsi_vlog_unsigned_case_compare(t14, 4, t2, 32);
    if (t34 == 1)
        goto LAB47;

LAB48:    t2 = ((char*)((ng6)));
    t34 = xsi_vlog_unsigned_case_compare(t14, 4, t2, 32);
    if (t34 == 1)
        goto LAB49;

LAB50:    t2 = ((char*)((ng8)));
    t34 = xsi_vlog_unsigned_case_compare(t14, 4, t2, 32);
    if (t34 == 1)
        goto LAB51;

LAB52:
LAB53:    goto LAB40;

LAB43:    xsi_set_current_line(59, ng0);

LAB54:    xsi_set_current_line(60, ng0);
    t16 = ((char*)((ng3)));
    t17 = (t0 + 3344);
    xsi_vlogvar_wait_assign_value(t17, t16, 0, 0, 32, 0LL);
    t18 = (t0 + 3184);
    xsi_vlogvar_wait_assign_value(t18, t16, 32, 0, 32, 0LL);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3504);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2704);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB53;

LAB45:    xsi_set_current_line(64, ng0);

LAB55:    xsi_set_current_line(65, ng0);
    t3 = (t0 + 1984U);
    t4 = *((char **)t3);
    xsi_vlogtype_sign_extend(t35, 64, t4, 32);
    t3 = (t0 + 2144U);
    t5 = *((char **)t3);
    xsi_vlogtype_sign_extend(t36, 64, t5, 32);
    xsi_vlog_signed_multiply(t37, 64, t35, 64, t36, 64);
    t3 = (t0 + 3344);
    xsi_vlogvar_wait_assign_value(t3, t37, 0, 0, 32, 0LL);
    t6 = (t0 + 3184);
    xsi_vlogvar_wait_assign_value(t6, t37, 32, 0, 32, 0LL);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3504);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2704);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB53;

LAB47:    xsi_set_current_line(69, ng0);

LAB56:    xsi_set_current_line(70, ng0);
    t3 = (t0 + 1984U);
    t4 = *((char **)t3);
    t3 = (t0 + 2144U);
    t5 = *((char **)t3);
    xsi_vlog_unsigned_multiply(t35, 64, t4, 32, t5, 32);
    t3 = (t0 + 3344);
    xsi_vlogvar_wait_assign_value(t3, t35, 0, 0, 32, 0LL);
    t6 = (t0 + 3184);
    xsi_vlogvar_wait_assign_value(t6, t35, 32, 0, 32, 0LL);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3504);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2704);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB53;

LAB49:    xsi_set_current_line(74, ng0);

LAB57:    xsi_set_current_line(75, ng0);
    t3 = (t0 + 1984U);
    t4 = *((char **)t3);
    t3 = (t0 + 2144U);
    t5 = *((char **)t3);
    memset(t38, 0, 8);
    xsi_vlog_signed_mod(t38, 32, t4, 32, t5, 32);
    t3 = (t0 + 3184);
    xsi_vlogvar_wait_assign_value(t3, t38, 0, 0, 32, 0LL);
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 1984U);
    t3 = *((char **)t2);
    t2 = (t0 + 2144U);
    t4 = *((char **)t2);
    memset(t38, 0, 8);
    xsi_vlog_signed_divide(t38, 32, t3, 32, t4, 32);
    t2 = (t0 + 3344);
    xsi_vlogvar_wait_assign_value(t2, t38, 0, 0, 32, 0LL);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3504);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2704);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB53;

LAB51:    xsi_set_current_line(80, ng0);

LAB58:    xsi_set_current_line(81, ng0);
    t3 = (t0 + 1984U);
    t4 = *((char **)t3);
    t3 = (t0 + 2144U);
    t5 = *((char **)t3);
    memset(t15, 0, 8);
    xsi_vlog_unsigned_mod(t15, 32, t4, 32, t5, 32);
    t3 = (t0 + 3184);
    xsi_vlogvar_wait_assign_value(t3, t15, 0, 0, 32, 0LL);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 1984U);
    t3 = *((char **)t2);
    t2 = (t0 + 2144U);
    t4 = *((char **)t2);
    memset(t15, 0, 8);
    xsi_vlog_unsigned_divide(t15, 32, t3, 32, t4, 32);
    t2 = (t0 + 3344);
    xsi_vlogvar_wait_assign_value(t2, t15, 0, 0, 32, 0LL);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3504);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2704);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB53;

LAB61:    xsi_set_current_line(90, ng0);

LAB66:    xsi_set_current_line(91, ng0);
    t4 = (t0 + 1984U);
    t5 = *((char **)t4);
    t4 = (t0 + 2864);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 32, 0LL);
    xsi_set_current_line(92, ng0);
    t2 = (t0 + 3024);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 3024);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 32, 0LL);
    goto LAB65;

LAB63:    xsi_set_current_line(94, ng0);

LAB67:    xsi_set_current_line(95, ng0);
    t4 = (t0 + 2864);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 2864);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 32, 0LL);
    xsi_set_current_line(96, ng0);
    t2 = (t0 + 1984U);
    t4 = *((char **)t2);
    t2 = (t0 + 3024);
    xsi_vlogvar_wait_assign_value(t2, t4, 0, 0, 32, 0LL);
    goto LAB65;

}


extern void work_m_00000000001609546434_1806506970_init()
{
	static char *pe[] = {(void *)Always_38_0};
	xsi_register_didat("work_m_00000000001609546434_1806506970", "isim/mips_txt_isim_beh.exe.sim/work/m_00000000001609546434_1806506970.didat");
	xsi_register_executes(pe);
}
