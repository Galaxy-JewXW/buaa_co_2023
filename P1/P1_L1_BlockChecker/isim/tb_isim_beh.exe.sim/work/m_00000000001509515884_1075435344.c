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
static const char *ng0 = "D:/BUAA_Undergraduate/23-24autumn/Computer-Organization/P1/P1_L1_BlockChecker/BlockChecker.v";
static int ng1[] = {65, 0};
static int ng2[] = {90, 0};
static int ng3[] = {97, 0};
static int ng4[] = {0, 0};
static int ng5[] = {98, 0};
static int ng6[] = {1, 0};
static int ng7[] = {101, 0};
static int ng8[] = {6, 0};
static int ng9[] = {32, 0};
static int ng10[] = {9, 0};
static int ng11[] = {2, 0};
static int ng12[] = {103, 0};
static int ng13[] = {3, 0};
static int ng14[] = {105, 0};
static int ng15[] = {4, 0};
static int ng16[] = {110, 0};
static int ng17[] = {5, 0};
static int ng18[] = {7, 0};
static int ng19[] = {100, 0};
static int ng20[] = {8, 0};
static int ng21[] = {10, 0};



static int sp_lower(char *t1, char *t2)
{
    char t7[8];
    char t11[8];
    char t27[8];
    char t31[8];
    char t39[8];
    char t81[8];
    char t83[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t28;
    char *t29;
    char *t30;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
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
    int t63;
    int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    char *t82;
    char *t84;

LAB0:    t0 = 1;
    xsi_set_current_line(34, ng0);

LAB2:    xsi_set_current_line(35, ng0);
    t3 = (t1 + 3160);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng1)));
    memset(t7, 0, 8);
    t8 = (t5 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB4;

LAB3:    t9 = (t6 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB4;

LAB7:    if (*((unsigned int *)t5) < *((unsigned int *)t6))
        goto LAB6;

LAB5:    *((unsigned int *)t7) = 1;

LAB6:    memset(t11, 0, 8);
    t12 = (t7 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t7);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t12) != 0)
        goto LAB10;

LAB11:    t19 = (t11 + 4);
    t20 = *((unsigned int *)t11);
    t21 = *((unsigned int *)t19);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB12;

LAB13:    memcpy(t39, t11, 8);

LAB14:    t71 = (t39 + 4);
    t72 = *((unsigned int *)t71);
    t73 = (~(t72));
    t74 = *((unsigned int *)t39);
    t75 = (t74 & t73);
    t76 = (t75 != 0);
    if (t76 > 0)
        goto LAB27;

LAB28:    xsi_set_current_line(38, ng0);
    t3 = (t1 + 3160);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t1 + 3000);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 8);

LAB29:    t0 = 0;

LAB1:    return t0;
LAB4:    t10 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB6;

LAB8:    *((unsigned int *)t11) = 1;
    goto LAB11;

LAB10:    t18 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB11;

LAB12:    t23 = (t1 + 3160);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = ((char*)((ng2)));
    memset(t27, 0, 8);
    t28 = (t25 + 4);
    if (*((unsigned int *)t28) != 0)
        goto LAB16;

LAB15:    t29 = (t26 + 4);
    if (*((unsigned int *)t29) != 0)
        goto LAB16;

LAB19:    if (*((unsigned int *)t25) > *((unsigned int *)t26))
        goto LAB18;

LAB17:    *((unsigned int *)t27) = 1;

LAB18:    memset(t31, 0, 8);
    t32 = (t27 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (~(t33));
    t35 = *((unsigned int *)t27);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB20;

LAB21:    if (*((unsigned int *)t32) != 0)
        goto LAB22;

LAB23:    t40 = *((unsigned int *)t11);
    t41 = *((unsigned int *)t31);
    t42 = (t40 & t41);
    *((unsigned int *)t39) = t42;
    t43 = (t11 + 4);
    t44 = (t31 + 4);
    t45 = (t39 + 4);
    t46 = *((unsigned int *)t43);
    t47 = *((unsigned int *)t44);
    t48 = (t46 | t47);
    *((unsigned int *)t45) = t48;
    t49 = *((unsigned int *)t45);
    t50 = (t49 != 0);
    if (t50 == 1)
        goto LAB24;

LAB25:
LAB26:    goto LAB14;

LAB16:    t30 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB18;

LAB20:    *((unsigned int *)t31) = 1;
    goto LAB23;

LAB22:    t38 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB23;

LAB24:    t51 = *((unsigned int *)t39);
    t52 = *((unsigned int *)t45);
    *((unsigned int *)t39) = (t51 | t52);
    t53 = (t11 + 4);
    t54 = (t31 + 4);
    t55 = *((unsigned int *)t11);
    t56 = (~(t55));
    t57 = *((unsigned int *)t53);
    t58 = (~(t57));
    t59 = *((unsigned int *)t31);
    t60 = (~(t59));
    t61 = *((unsigned int *)t54);
    t62 = (~(t61));
    t63 = (t56 & t58);
    t64 = (t60 & t62);
    t65 = (~(t63));
    t66 = (~(t64));
    t67 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t67 & t65);
    t68 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t68 & t66);
    t69 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t69 & t65);
    t70 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t70 & t66);
    goto LAB26;

LAB27:    xsi_set_current_line(36, ng0);
    t77 = (t1 + 3160);
    t78 = (t77 + 56U);
    t79 = *((char **)t78);
    t80 = ((char*)((ng1)));
    memset(t81, 0, 8);
    xsi_vlog_unsigned_minus(t81, 8, t79, 8, t80, 8);
    t82 = ((char*)((ng3)));
    memset(t83, 0, 8);
    xsi_vlog_unsigned_add(t83, 8, t81, 8, t82, 8);
    t84 = (t1 + 3000);
    xsi_vlogvar_assign_value(t84, t83, 0, 0, 8);
    goto LAB29;

}

static void Always_42_0(char *t0)
{
    char t29[8];
    char t34[8];
    char t53[8];
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
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t52;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;

LAB0:    t1 = (t0 + 4080U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 4896);
    *((int *)t2) = 1;
    t3 = (t0 + 4112);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(42, ng0);

LAB5:    xsi_set_current_line(43, ng0);
    t4 = (t0 + 1640U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(48, ng0);

LAB10:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 2360);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB11:    t5 = ((char*)((ng4)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t5, 32);
    if (t13 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng6)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 32);
    if (t13 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng11)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 32);
    if (t13 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng13)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 32);
    if (t13 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng15)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 32);
    if (t13 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng17)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 32);
    if (t13 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng8)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 32);
    if (t13 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng18)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 32);
    if (t13 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng20)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 32);
    if (t13 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng10)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 32);
    if (t13 == 1)
        goto LAB30;

LAB31:    t2 = ((char*)((ng21)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 32);
    if (t13 == 1)
        goto LAB32;

LAB33:
LAB34:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(43, ng0);

LAB9:    xsi_set_current_line(44, ng0);
    t11 = ((char*)((ng4)));
    t12 = (t0 + 2360);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 5, 0LL);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2520);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2680);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB8;

LAB12:    xsi_set_current_line(50, ng0);

LAB35:    xsi_set_current_line(51, ng0);
    t11 = (t0 + 1800U);
    t12 = *((char **)t11);
    t11 = (t0 + 3888);
    t14 = (t0 + 848);
    t15 = xsi_create_subprogram_invocation(t11, 0, t0, t14, 0, 0);
    t16 = (t0 + 3160);
    xsi_vlogvar_assign_value(t16, t12, 0, 0, 8);

LAB36:    t17 = (t0 + 3984);
    t18 = *((char **)t17);
    t19 = (t18 + 80U);
    t20 = *((char **)t19);
    t21 = (t20 + 272U);
    t22 = *((char **)t21);
    t23 = (t22 + 0U);
    t24 = *((char **)t23);
    t25 = ((int  (*)(char *, char *))t24)(t0, t18);
    if (t25 != 0)
        goto LAB38;

LAB37:    t18 = (t0 + 3984);
    t26 = *((char **)t18);
    t18 = (t0 + 3000);
    t27 = (t18 + 56U);
    t28 = *((char **)t27);
    memcpy(t29, t28, 8);
    t30 = (t0 + 848);
    t31 = (t0 + 3888);
    t32 = 0;
    xsi_delete_subprogram_invocation(t30, t26, t0, t31, t32);
    t33 = ((char*)((ng5)));
    memset(t34, 0, 8);
    t35 = (t29 + 4);
    t36 = (t33 + 4);
    t6 = *((unsigned int *)t29);
    t7 = *((unsigned int *)t33);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t35);
    t10 = *((unsigned int *)t36);
    t37 = (t9 ^ t10);
    t38 = (t8 | t37);
    t39 = *((unsigned int *)t35);
    t40 = *((unsigned int *)t36);
    t41 = (t39 | t40);
    t42 = (~(t41));
    t43 = (t38 & t42);
    if (t43 != 0)
        goto LAB42;

LAB39:    if (t41 != 0)
        goto LAB41;

LAB40:    *((unsigned int *)t34) = 1;

LAB42:    t45 = (t34 + 4);
    t46 = *((unsigned int *)t45);
    t47 = (~(t46));
    t48 = *((unsigned int *)t34);
    t49 = (t48 & t47);
    t50 = (t49 != 0);
    if (t50 > 0)
        goto LAB43;

LAB44:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1800U);
    t3 = *((char **)t2);
    t2 = (t0 + 3888);
    t5 = (t0 + 848);
    t11 = xsi_create_subprogram_invocation(t2, 0, t0, t5, 0, 0);
    t12 = (t0 + 3160);
    xsi_vlogvar_assign_value(t12, t3, 0, 0, 8);

LAB46:    t14 = (t0 + 3984);
    t15 = *((char **)t14);
    t16 = (t15 + 80U);
    t17 = *((char **)t16);
    t18 = (t17 + 272U);
    t19 = *((char **)t18);
    t20 = (t19 + 0U);
    t21 = *((char **)t20);
    t13 = ((int  (*)(char *, char *))t21)(t0, t15);
    if (t13 != 0)
        goto LAB48;

LAB47:    t15 = (t0 + 3984);
    t22 = *((char **)t15);
    t15 = (t0 + 3000);
    t23 = (t15 + 56U);
    t24 = *((char **)t23);
    memcpy(t29, t24, 8);
    t26 = (t0 + 848);
    t27 = (t0 + 3888);
    t28 = 0;
    xsi_delete_subprogram_invocation(t26, t22, t0, t27, t28);
    t30 = ((char*)((ng7)));
    memset(t34, 0, 8);
    t31 = (t29 + 4);
    t32 = (t30 + 4);
    t6 = *((unsigned int *)t29);
    t7 = *((unsigned int *)t30);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t31);
    t10 = *((unsigned int *)t32);
    t37 = (t9 ^ t10);
    t38 = (t8 | t37);
    t39 = *((unsigned int *)t31);
    t40 = *((unsigned int *)t32);
    t41 = (t39 | t40);
    t42 = (~(t41));
    t43 = (t38 & t42);
    if (t43 != 0)
        goto LAB52;

LAB49:    if (t41 != 0)
        goto LAB51;

LAB50:    *((unsigned int *)t34) = 1;

LAB52:    t35 = (t34 + 4);
    t46 = *((unsigned int *)t35);
    t47 = (~(t46));
    t48 = *((unsigned int *)t34);
    t49 = (t48 & t47);
    t50 = (t49 != 0);
    if (t50 > 0)
        goto LAB53;

LAB54:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1800U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng9)));
    memset(t29, 0, 8);
    t5 = (t3 + 4);
    t11 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t11);
    t37 = (t9 ^ t10);
    t38 = (t8 | t37);
    t39 = *((unsigned int *)t5);
    t40 = *((unsigned int *)t11);
    t41 = (t39 | t40);
    t42 = (~(t41));
    t43 = (t38 & t42);
    if (t43 != 0)
        goto LAB59;

LAB56:    if (t41 != 0)
        goto LAB58;

LAB57:    *((unsigned int *)t29) = 1;

LAB59:    t14 = (t29 + 4);
    t46 = *((unsigned int *)t14);
    t47 = (~(t46));
    t48 = *((unsigned int *)t29);
    t49 = (t48 & t47);
    t50 = (t49 != 0);
    if (t50 > 0)
        goto LAB60;

LAB61:    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 2360);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);

LAB62:
LAB55:
LAB45:    goto LAB34;

LAB14:    xsi_set_current_line(60, ng0);

LAB63:    xsi_set_current_line(61, ng0);
    t3 = (t0 + 1800U);
    t5 = *((char **)t3);
    t3 = (t0 + 3888);
    t11 = (t0 + 848);
    t12 = xsi_create_subprogram_invocation(t3, 0, t0, t11, 0, 0);
    t14 = (t0 + 3160);
    xsi_vlogvar_assign_value(t14, t5, 0, 0, 8);

LAB64:    t15 = (t0 + 3984);
    t16 = *((char **)t15);
    t17 = (t16 + 80U);
    t18 = *((char **)t17);
    t19 = (t18 + 272U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    t22 = *((char **)t21);
    t25 = ((int  (*)(char *, char *))t22)(t0, t16);
    if (t25 != 0)
        goto LAB66;

LAB65:    t16 = (t0 + 3984);
    t23 = *((char **)t16);
    t16 = (t0 + 3000);
    t24 = (t16 + 56U);
    t26 = *((char **)t24);
    memcpy(t29, t26, 8);
    t27 = (t0 + 848);
    t28 = (t0 + 3888);
    t30 = 0;
    xsi_delete_subprogram_invocation(t27, t23, t0, t28, t30);
    t31 = ((char*)((ng7)));
    memset(t34, 0, 8);
    t32 = (t29 + 4);
    t33 = (t31 + 4);
    t6 = *((unsigned int *)t29);
    t7 = *((unsigned int *)t31);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t32);
    t10 = *((unsigned int *)t33);
    t37 = (t9 ^ t10);
    t38 = (t8 | t37);
    t39 = *((unsigned int *)t32);
    t40 = *((unsigned int *)t33);
    t41 = (t39 | t40);
    t42 = (~(t41));
    t43 = (t38 & t42);
    if (t43 != 0)
        goto LAB70;

LAB67:    if (t41 != 0)
        goto LAB69;

LAB68:    *((unsigned int *)t34) = 1;

LAB70:    t36 = (t34 + 4);
    t46 = *((unsigned int *)t36);
    t47 = (~(t46));
    t48 = *((unsigned int *)t34);
    t49 = (t48 & t47);
    t50 = (t49 != 0);
    if (t50 > 0)
        goto LAB71;

LAB72:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 1800U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng9)));
    memset(t29, 0, 8);
    t5 = (t3 + 4);
    t11 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t11);
    t37 = (t9 ^ t10);
    t38 = (t8 | t37);
    t39 = *((unsigned int *)t5);
    t40 = *((unsigned int *)t11);
    t41 = (t39 | t40);
    t42 = (~(t41));
    t43 = (t38 & t42);
    if (t43 != 0)
        goto LAB77;

LAB74:    if (t41 != 0)
        goto LAB76;

LAB75:    *((unsigned int *)t29) = 1;

LAB77:    t14 = (t29 + 4);
    t46 = *((unsigned int *)t14);
    t47 = (~(t46));
    t48 = *((unsigned int *)t29);
    t49 = (t48 & t47);
    t50 = (t49 != 0);
    if (t50 > 0)
        goto LAB78;

LAB79:    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 2360);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);

LAB80:
LAB73:    goto LAB34;

LAB16:    xsi_set_current_line(68, ng0);

LAB81:    xsi_set_current_line(69, ng0);
    t3 = (t0 + 1800U);
    t5 = *((char **)t3);
    t3 = (t0 + 3888);
    t11 = (t0 + 848);
    t12 = xsi_create_subprogram_invocation(t3, 0, t0, t11, 0, 0);
    t14 = (t0 + 3160);
    xsi_vlogvar_assign_value(t14, t5, 0, 0, 8);

LAB82:    t15 = (t0 + 3984);
    t16 = *((char **)t15);
    t17 = (t16 + 80U);
    t18 = *((char **)t17);
    t19 = (t18 + 272U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    t22 = *((char **)t21);
    t25 = ((int  (*)(char *, char *))t22)(t0, t16);
    if (t25 != 0)
        goto LAB84;

LAB83:    t16 = (t0 + 3984);
    t23 = *((char **)t16);
    t16 = (t0 + 3000);
    t24 = (t16 + 56U);
    t26 = *((char **)t24);
    memcpy(t29, t26, 8);
    t27 = (t0 + 848);
    t28 = (t0 + 3888);
    t30 = 0;
    xsi_delete_subprogram_invocation(t27, t23, t0, t28, t30);
    t31 = ((char*)((ng12)));
    memset(t34, 0, 8);
    t32 = (t29 + 4);
    t33 = (t31 + 4);
    t6 = *((unsigned int *)t29);
    t7 = *((unsigned int *)t31);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t32);
    t10 = *((unsigned int *)t33);
    t37 = (t9 ^ t10);
    t38 = (t8 | t37);
    t39 = *((unsigned int *)t32);
    t40 = *((unsigned int *)t33);
    t41 = (t39 | t40);
    t42 = (~(t41));
    t43 = (t38 & t42);
    if (t43 != 0)
        goto LAB88;

LAB85:    if (t41 != 0)
        goto LAB87;

LAB86:    *((unsigned int *)t34) = 1;

LAB88:    t36 = (t34 + 4);
    t46 = *((unsigned int *)t36);
    t47 = (~(t46));
    t48 = *((unsigned int *)t34);
    t49 = (t48 & t47);
    t50 = (t49 != 0);
    if (t50 > 0)
        goto LAB89;

LAB90:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 1800U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng9)));
    memset(t29, 0, 8);
    t5 = (t3 + 4);
    t11 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t11);
    t37 = (t9 ^ t10);
    t38 = (t8 | t37);
    t39 = *((unsigned int *)t5);
    t40 = *((unsigned int *)t11);
    t41 = (t39 | t40);
    t42 = (~(t41));
    t43 = (t38 & t42);
    if (t43 != 0)
        goto LAB95;

LAB92:    if (t41 != 0)
        goto LAB94;

LAB93:    *((unsigned int *)t29) = 1;

LAB95:    t14 = (t29 + 4);
    t46 = *((unsigned int *)t14);
    t47 = (~(t46));
    t48 = *((unsigned int *)t29);
    t49 = (t48 & t47);
    t50 = (t49 != 0);
    if (t50 > 0)
        goto LAB96;

LAB97:    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 2360);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);

LAB98:
LAB91:    goto LAB34;

LAB18:    xsi_set_current_line(76, ng0);

LAB99:    xsi_set_current_line(77, ng0);
    t3 = (t0 + 1800U);
    t5 = *((char **)t3);
    t3 = (t0 + 3888);
    t11 = (t0 + 848);
    t12 = xsi_create_subprogram_invocation(t3, 0, t0, t11, 0, 0);
    t14 = (t0 + 3160);
    xsi_vlogvar_assign_value(t14, t5, 0, 0, 8);

LAB100:    t15 = (t0 + 3984);
    t16 = *((char **)t15);
    t17 = (t16 + 80U);
    t18 = *((char **)t17);
    t19 = (t18 + 272U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    t22 = *((char **)t21);
    t25 = ((int  (*)(char *, char *))t22)(t0, t16);
    if (t25 != 0)
        goto LAB102;

LAB101:    t16 = (t0 + 3984);
    t23 = *((char **)t16);
    t16 = (t0 + 3000);
    t24 = (t16 + 56U);
    t26 = *((char **)t24);
    memcpy(t29, t26, 8);
    t27 = (t0 + 848);
    t28 = (t0 + 3888);
    t30 = 0;
    xsi_delete_subprogram_invocation(t27, t23, t0, t28, t30);
    t31 = ((char*)((ng14)));
    memset(t34, 0, 8);
    t32 = (t29 + 4);
    t33 = (t31 + 4);
    t6 = *((unsigned int *)t29);
    t7 = *((unsigned int *)t31);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t32);
    t10 = *((unsigned int *)t33);
    t37 = (t9 ^ t10);
    t38 = (t8 | t37);
    t39 = *((unsigned int *)t32);
    t40 = *((unsigned int *)t33);
    t41 = (t39 | t40);
    t42 = (~(t41));
    t43 = (t38 & t42);
    if (t43 != 0)
        goto LAB106;

LAB103:    if (t41 != 0)
        goto LAB105;

LAB104:    *((unsigned int *)t34) = 1;

LAB106:    t36 = (t34 + 4);
    t46 = *((unsigned int *)t36);
    t47 = (~(t46));
    t48 = *((unsigned int *)t34);
    t49 = (t48 & t47);
    t50 = (t49 != 0);
    if (t50 > 0)
        goto LAB107;

LAB108:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 1800U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng9)));
    memset(t29, 0, 8);
    t5 = (t3 + 4);
    t11 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t11);
    t37 = (t9 ^ t10);
    t38 = (t8 | t37);
    t39 = *((unsigned int *)t5);
    t40 = *((unsigned int *)t11);
    t41 = (t39 | t40);
    t42 = (~(t41));
    t43 = (t38 & t42);
    if (t43 != 0)
        goto LAB113;

LAB110:    if (t41 != 0)
        goto LAB112;

LAB111:    *((unsigned int *)t29) = 1;

LAB113:    t14 = (t29 + 4);
    t46 = *((unsigned int *)t14);
    t47 = (~(t46));
    t48 = *((unsigned int *)t29);
    t49 = (t48 & t47);
    t50 = (t49 != 0);
    if (t50 > 0)
        goto LAB114;

LAB115:    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 2360);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);

LAB116:
LAB109:    goto LAB34;

LAB20:    xsi_set_current_line(84, ng0);

LAB117:    xsi_set_current_line(85, ng0);
    t3 = (t0 + 1800U);
    t5 = *((char **)t3);
    t3 = (t0 + 3888);
    t11 = (t0 + 848);
    t12 = xsi_create_subprogram_invocation(t3, 0, t0, t11, 0, 0);
    t14 = (t0 + 3160);
    xsi_vlogvar_assign_value(t14, t5, 0, 0, 8);

LAB118:    t15 = (t0 + 3984);
    t16 = *((char **)t15);
    t17 = (t16 + 80U);
    t18 = *((char **)t17);
    t19 = (t18 + 272U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    t22 = *((char **)t21);
    t25 = ((int  (*)(char *, char *))t22)(t0, t16);
    if (t25 != 0)
        goto LAB120;

LAB119:    t16 = (t0 + 3984);
    t23 = *((char **)t16);
    t16 = (t0 + 3000);
    t24 = (t16 + 56U);
    t26 = *((char **)t24);
    memcpy(t29, t26, 8);
    t27 = (t0 + 848);
    t28 = (t0 + 3888);
    t30 = 0;
    xsi_delete_subprogram_invocation(t27, t23, t0, t28, t30);
    t31 = ((char*)((ng16)));
    memset(t34, 0, 8);
    t32 = (t29 + 4);
    t33 = (t31 + 4);
    t6 = *((unsigned int *)t29);
    t7 = *((unsigned int *)t31);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t32);
    t10 = *((unsigned int *)t33);
    t37 = (t9 ^ t10);
    t38 = (t8 | t37);
    t39 = *((unsigned int *)t32);
    t40 = *((unsigned int *)t33);
    t41 = (t39 | t40);
    t42 = (~(t41));
    t43 = (t38 & t42);
    if (t43 != 0)
        goto LAB124;

LAB121:    if (t41 != 0)
        goto LAB123;

LAB122:    *((unsigned int *)t34) = 1;

LAB124:    t36 = (t34 + 4);
    t46 = *((unsigned int *)t36);
    t47 = (~(t46));
    t48 = *((unsigned int *)t34);
    t49 = (t48 & t47);
    t50 = (t49 != 0);
    if (t50 > 0)
        goto LAB125;

LAB126:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 1800U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng9)));
    memset(t29, 0, 8);
    t5 = (t3 + 4);
    t11 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t11);
    t37 = (t9 ^ t10);
    t38 = (t8 | t37);
    t39 = *((unsigned int *)t5);
    t40 = *((unsigned int *)t11);
    t41 = (t39 | t40);
    t42 = (~(t41));
    t43 = (t38 & t42);
    if (t43 != 0)
        goto LAB132;

LAB129:    if (t41 != 0)
        goto LAB131;

LAB130:    *((unsigned int *)t29) = 1;

LAB132:    t14 = (t29 + 4);
    t46 = *((unsigned int *)t14);
    t47 = (~(t46));
    t48 = *((unsigned int *)t29);
    t49 = (t48 & t47);
    t50 = (t49 != 0);
    if (t50 > 0)
        goto LAB133;

LAB134:    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 2360);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);

LAB135:
LAB127:    goto LAB34;

LAB22:    xsi_set_current_line(94, ng0);

LAB136:    xsi_set_current_line(95, ng0);
    t3 = (t0 + 1800U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng9)));
    memset(t29, 0, 8);
    t11 = (t5 + 4);
    t12 = (t3 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t3);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t37 = (t9 ^ t10);
    t38 = (t8 | t37);
    t39 = *((unsigned int *)t11);
    t40 = *((unsigned int *)t12);
    t41 = (t39 | t40);
    t42 = (~(t41));
    t43 = (t38 & t42);
    if (t43 != 0)
        goto LAB140;

LAB137:    if (t41 != 0)
        goto LAB139;

LAB138:    *((unsigned int *)t29) = 1;

LAB140:    t15 = (t29 + 4);
    t46 = *((unsigned int *)t15);
    t47 = (~(t46));
    t48 = *((unsigned int *)t29);
    t49 = (t48 & t47);
    t50 = (t49 != 0);
    if (t50 > 0)
        goto LAB141;

LAB142:    xsi_set_current_line(97, ng0);

LAB144:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 2520);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng6)));
    memset(t29, 0, 8);
    xsi_vlog_unsigned_minus(t29, 32, t5, 32, t11, 32);
    t12 = (t0 + 2520);
    xsi_vlogvar_wait_assign_value(t12, t29, 0, 0, 32, 0LL);
    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 2360);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);

LAB143:    goto LAB34;

LAB24:    xsi_set_current_line(102, ng0);

LAB145:    xsi_set_current_line(103, ng0);
    t3 = (t0 + 1800U);
    t5 = *((char **)t3);
    t3 = (t0 + 3888);
    t11 = (t0 + 848);
    t12 = xsi_create_subprogram_invocation(t3, 0, t0, t11, 0, 0);
    t14 = (t0 + 3160);
    xsi_vlogvar_assign_value(t14, t5, 0, 0, 8);

LAB146:    t15 = (t0 + 3984);
    t16 = *((char **)t15);
    t17 = (t16 + 80U);
    t18 = *((char **)t17);
    t19 = (t18 + 272U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    t22 = *((char **)t21);
    t25 = ((int  (*)(char *, char *))t22)(t0, t16);
    if (t25 != 0)
        goto LAB148;

LAB147:    t16 = (t0 + 3984);
    t23 = *((char **)t16);
    t16 = (t0 + 3000);
    t24 = (t16 + 56U);
    t26 = *((char **)t24);
    memcpy(t29, t26, 8);
    t27 = (t0 + 848);
    t28 = (t0 + 3888);
    t30 = 0;
    xsi_delete_subprogram_invocation(t27, t23, t0, t28, t30);
    t31 = ((char*)((ng16)));
    memset(t34, 0, 8);
    t32 = (t29 + 4);
    t33 = (t31 + 4);
    t6 = *((unsigned int *)t29);
    t7 = *((unsigned int *)t31);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t32);
    t10 = *((unsigned int *)t33);
    t37 = (t9 ^ t10);
    t38 = (t8 | t37);
    t39 = *((unsigned int *)t32);
    t40 = *((unsigned int *)t33);
    t41 = (t39 | t40);
    t42 = (~(t41));
    t43 = (t38 & t42);
    if (t43 != 0)
        goto LAB152;

LAB149:    if (t41 != 0)
        goto LAB151;

LAB150:    *((unsigned int *)t34) = 1;

LAB152:    t36 = (t34 + 4);
    t46 = *((unsigned int *)t36);
    t47 = (~(t46));
    t48 = *((unsigned int *)t34);
    t49 = (t48 & t47);
    t50 = (t49 != 0);
    if (t50 > 0)
        goto LAB153;

LAB154:    xsi_set_current_line(105, ng0);
    t2 = (t0 + 1800U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng9)));
    memset(t29, 0, 8);
    t5 = (t3 + 4);
    t11 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t11);
    t37 = (t9 ^ t10);
    t38 = (t8 | t37);
    t39 = *((unsigned int *)t5);
    t40 = *((unsigned int *)t11);
    t41 = (t39 | t40);
    t42 = (~(t41));
    t43 = (t38 & t42);
    if (t43 != 0)
        goto LAB159;

LAB156:    if (t41 != 0)
        goto LAB158;

LAB157:    *((unsigned int *)t29) = 1;

LAB159:    t14 = (t29 + 4);
    t46 = *((unsigned int *)t14);
    t47 = (~(t46));
    t48 = *((unsigned int *)t29);
    t49 = (t48 & t47);
    t50 = (t49 != 0);
    if (t50 > 0)
        goto LAB160;

LAB161:    xsi_set_current_line(108, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 2360);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);

LAB162:
LAB155:    goto LAB34;

LAB26:    xsi_set_current_line(110, ng0);

LAB163:    xsi_set_current_line(111, ng0);
    t3 = (t0 + 1800U);
    t5 = *((char **)t3);
    t3 = (t0 + 3888);
    t11 = (t0 + 848);
    t12 = xsi_create_subprogram_invocation(t3, 0, t0, t11, 0, 0);
    t14 = (t0 + 3160);
    xsi_vlogvar_assign_value(t14, t5, 0, 0, 8);

LAB164:    t15 = (t0 + 3984);
    t16 = *((char **)t15);
    t17 = (t16 + 80U);
    t18 = *((char **)t17);
    t19 = (t18 + 272U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    t22 = *((char **)t21);
    t25 = ((int  (*)(char *, char *))t22)(t0, t16);
    if (t25 != 0)
        goto LAB166;

LAB165:    t16 = (t0 + 3984);
    t23 = *((char **)t16);
    t16 = (t0 + 3000);
    t24 = (t16 + 56U);
    t26 = *((char **)t24);
    memcpy(t29, t26, 8);
    t27 = (t0 + 848);
    t28 = (t0 + 3888);
    t30 = 0;
    xsi_delete_subprogram_invocation(t27, t23, t0, t28, t30);
    t31 = ((char*)((ng19)));
    memset(t34, 0, 8);
    t32 = (t29 + 4);
    t33 = (t31 + 4);
    t6 = *((unsigned int *)t29);
    t7 = *((unsigned int *)t31);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t32);
    t10 = *((unsigned int *)t33);
    t37 = (t9 ^ t10);
    t38 = (t8 | t37);
    t39 = *((unsigned int *)t32);
    t40 = *((unsigned int *)t33);
    t41 = (t39 | t40);
    t42 = (~(t41));
    t43 = (t38 & t42);
    if (t43 != 0)
        goto LAB170;

LAB167:    if (t41 != 0)
        goto LAB169;

LAB168:    *((unsigned int *)t34) = 1;

LAB170:    t36 = (t34 + 4);
    t46 = *((unsigned int *)t36);
    t47 = (~(t46));
    t48 = *((unsigned int *)t34);
    t49 = (t48 & t47);
    t50 = (t49 != 0);
    if (t50 > 0)
        goto LAB171;

LAB172:    xsi_set_current_line(115, ng0);
    t2 = (t0 + 1800U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng9)));
    memset(t29, 0, 8);
    t5 = (t3 + 4);
    t11 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t11);
    t37 = (t9 ^ t10);
    t38 = (t8 | t37);
    t39 = *((unsigned int *)t5);
    t40 = *((unsigned int *)t11);
    t41 = (t39 | t40);
    t42 = (~(t41));
    t43 = (t38 & t42);
    if (t43 != 0)
        goto LAB178;

LAB175:    if (t41 != 0)
        goto LAB177;

LAB176:    *((unsigned int *)t29) = 1;

LAB178:    t14 = (t29 + 4);
    t46 = *((unsigned int *)t14);
    t47 = (~(t46));
    t48 = *((unsigned int *)t29);
    t49 = (t48 & t47);
    t50 = (t49 != 0);
    if (t50 > 0)
        goto LAB179;

LAB180:    xsi_set_current_line(118, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 2360);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);

LAB181:
LAB173:    goto LAB34;

LAB28:    xsi_set_current_line(120, ng0);

LAB182:    xsi_set_current_line(121, ng0);
    t3 = (t0 + 1800U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng9)));
    memset(t29, 0, 8);
    t11 = (t5 + 4);
    t12 = (t3 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t3);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t37 = (t9 ^ t10);
    t38 = (t8 | t37);
    t39 = *((unsigned int *)t11);
    t40 = *((unsigned int *)t12);
    t41 = (t39 | t40);
    t42 = (~(t41));
    t43 = (t38 & t42);
    if (t43 != 0)
        goto LAB186;

LAB183:    if (t41 != 0)
        goto LAB185;

LAB184:    *((unsigned int *)t29) = 1;

LAB186:    t15 = (t29 + 4);
    t46 = *((unsigned int *)t15);
    t47 = (~(t46));
    t48 = *((unsigned int *)t29);
    t49 = (t48 & t47);
    t50 = (t49 != 0);
    if (t50 > 0)
        goto LAB187;

LAB188:    xsi_set_current_line(127, ng0);

LAB199:    xsi_set_current_line(128, ng0);
    t2 = (t0 + 2680);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng6)));
    memset(t29, 0, 8);
    xsi_vlog_unsigned_minus(t29, 32, t5, 32, t11, 32);
    t12 = (t0 + 2680);
    xsi_vlogvar_wait_assign_value(t12, t29, 0, 0, 32, 0LL);
    xsi_set_current_line(129, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 2360);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);

LAB189:    goto LAB34;

LAB30:    xsi_set_current_line(132, ng0);

LAB200:    xsi_set_current_line(133, ng0);
    t3 = (t0 + 1800U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng9)));
    memset(t29, 0, 8);
    t11 = (t5 + 4);
    t12 = (t3 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t3);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t37 = (t9 ^ t10);
    t38 = (t8 | t37);
    t39 = *((unsigned int *)t11);
    t40 = *((unsigned int *)t12);
    t41 = (t39 | t40);
    t42 = (~(t41));
    t43 = (t38 & t42);
    if (t43 != 0)
        goto LAB204;

LAB201:    if (t41 != 0)
        goto LAB203;

LAB202:    *((unsigned int *)t29) = 1;

LAB204:    t15 = (t29 + 4);
    t46 = *((unsigned int *)t15);
    t47 = (~(t46));
    t48 = *((unsigned int *)t29);
    t49 = (t48 & t47);
    t50 = (t49 != 0);
    if (t50 > 0)
        goto LAB205;

LAB206:    xsi_set_current_line(136, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 2360);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);

LAB207:    goto LAB34;

LAB32:    xsi_set_current_line(138, ng0);

LAB208:    xsi_set_current_line(139, ng0);
    t3 = ((char*)((ng21)));
    t5 = (t0 + 2360);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 5, 0LL);
    goto LAB34;

LAB38:    t17 = (t0 + 4080U);
    *((char **)t17) = &&LAB36;
    goto LAB1;

LAB41:    t44 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB42;

LAB43:    xsi_set_current_line(52, ng0);
    t51 = ((char*)((ng6)));
    t52 = (t0 + 2360);
    xsi_vlogvar_wait_assign_value(t52, t51, 0, 0, 5, 0LL);
    goto LAB45;

LAB48:    t14 = (t0 + 4080U);
    *((char **)t14) = &&LAB46;
    goto LAB1;

LAB51:    t33 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB52;

LAB53:    xsi_set_current_line(54, ng0);
    t36 = ((char*)((ng8)));
    t44 = (t0 + 2360);
    xsi_vlogvar_wait_assign_value(t44, t36, 0, 0, 5, 0LL);
    goto LAB55;

LAB58:    t12 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB59;

LAB60:    xsi_set_current_line(56, ng0);
    t15 = ((char*)((ng4)));
    t16 = (t0 + 2360);
    xsi_vlogvar_wait_assign_value(t16, t15, 0, 0, 5, 0LL);
    goto LAB62;

LAB66:    t15 = (t0 + 4080U);
    *((char **)t15) = &&LAB64;
    goto LAB1;

LAB69:    t35 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB70;

LAB71:    xsi_set_current_line(62, ng0);
    t44 = ((char*)((ng11)));
    t45 = (t0 + 2360);
    xsi_vlogvar_wait_assign_value(t45, t44, 0, 0, 5, 0LL);
    goto LAB73;

LAB76:    t12 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB77;

LAB78:    xsi_set_current_line(64, ng0);
    t15 = ((char*)((ng4)));
    t16 = (t0 + 2360);
    xsi_vlogvar_wait_assign_value(t16, t15, 0, 0, 5, 0LL);
    goto LAB80;

LAB84:    t15 = (t0 + 4080U);
    *((char **)t15) = &&LAB82;
    goto LAB1;

LAB87:    t35 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB88;

LAB89:    xsi_set_current_line(70, ng0);
    t44 = ((char*)((ng13)));
    t45 = (t0 + 2360);
    xsi_vlogvar_wait_assign_value(t45, t44, 0, 0, 5, 0LL);
    goto LAB91;

LAB94:    t12 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB95;

LAB96:    xsi_set_current_line(72, ng0);
    t15 = ((char*)((ng4)));
    t16 = (t0 + 2360);
    xsi_vlogvar_wait_assign_value(t16, t15, 0, 0, 5, 0LL);
    goto LAB98;

LAB102:    t15 = (t0 + 4080U);
    *((char **)t15) = &&LAB100;
    goto LAB1;

LAB105:    t35 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB106;

LAB107:    xsi_set_current_line(78, ng0);
    t44 = ((char*)((ng15)));
    t45 = (t0 + 2360);
    xsi_vlogvar_wait_assign_value(t45, t44, 0, 0, 5, 0LL);
    goto LAB109;

LAB112:    t12 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB113;

LAB114:    xsi_set_current_line(80, ng0);
    t15 = ((char*)((ng4)));
    t16 = (t0 + 2360);
    xsi_vlogvar_wait_assign_value(t16, t15, 0, 0, 5, 0LL);
    goto LAB116;

LAB120:    t15 = (t0 + 4080U);
    *((char **)t15) = &&LAB118;
    goto LAB1;

LAB123:    t35 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB124;

LAB125:    xsi_set_current_line(85, ng0);

LAB128:    xsi_set_current_line(86, ng0);
    t44 = (t0 + 2520);
    t45 = (t44 + 56U);
    t51 = *((char **)t45);
    t52 = ((char*)((ng6)));
    memset(t53, 0, 8);
    xsi_vlog_unsigned_add(t53, 32, t51, 32, t52, 32);
    t54 = (t0 + 2520);
    xsi_vlogvar_wait_assign_value(t54, t53, 0, 0, 32, 0LL);
    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 2360);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB127;

LAB131:    t12 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB132;

LAB133:    xsi_set_current_line(90, ng0);
    t15 = ((char*)((ng4)));
    t16 = (t0 + 2360);
    xsi_vlogvar_wait_assign_value(t16, t15, 0, 0, 5, 0LL);
    goto LAB135;

LAB139:    t14 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB140;

LAB141:    xsi_set_current_line(96, ng0);
    t16 = ((char*)((ng4)));
    t17 = (t0 + 2360);
    xsi_vlogvar_wait_assign_value(t17, t16, 0, 0, 5, 0LL);
    goto LAB143;

LAB148:    t15 = (t0 + 4080U);
    *((char **)t15) = &&LAB146;
    goto LAB1;

LAB151:    t35 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB152;

LAB153:    xsi_set_current_line(104, ng0);
    t44 = ((char*)((ng18)));
    t45 = (t0 + 2360);
    xsi_vlogvar_wait_assign_value(t45, t44, 0, 0, 5, 0LL);
    goto LAB155;

LAB158:    t12 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB159;

LAB160:    xsi_set_current_line(106, ng0);
    t15 = ((char*)((ng4)));
    t16 = (t0 + 2360);
    xsi_vlogvar_wait_assign_value(t16, t15, 0, 0, 5, 0LL);
    goto LAB162;

LAB166:    t15 = (t0 + 4080U);
    *((char **)t15) = &&LAB164;
    goto LAB1;

LAB169:    t35 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB170;

LAB171:    xsi_set_current_line(111, ng0);

LAB174:    xsi_set_current_line(112, ng0);
    t44 = (t0 + 2680);
    t45 = (t44 + 56U);
    t51 = *((char **)t45);
    t52 = ((char*)((ng6)));
    memset(t53, 0, 8);
    xsi_vlog_unsigned_add(t53, 32, t51, 32, t52, 32);
    t54 = (t0 + 2680);
    xsi_vlogvar_wait_assign_value(t54, t53, 0, 0, 32, 0LL);
    xsi_set_current_line(113, ng0);
    t2 = ((char*)((ng20)));
    t3 = (t0 + 2360);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB173;

LAB177:    t12 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB178;

LAB179:    xsi_set_current_line(116, ng0);
    t15 = ((char*)((ng4)));
    t16 = (t0 + 2360);
    xsi_vlogvar_wait_assign_value(t16, t15, 0, 0, 5, 0LL);
    goto LAB181;

LAB185:    t14 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB186;

LAB187:    xsi_set_current_line(121, ng0);

LAB190:    xsi_set_current_line(122, ng0);
    t16 = (t0 + 2520);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t0 + 2680);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memset(t34, 0, 8);
    t22 = (t18 + 4);
    if (*((unsigned int *)t22) != 0)
        goto LAB192;

LAB191:    t23 = (t21 + 4);
    if (*((unsigned int *)t23) != 0)
        goto LAB192;

LAB195:    if (*((unsigned int *)t18) < *((unsigned int *)t21))
        goto LAB193;

LAB194:    t26 = (t34 + 4);
    t55 = *((unsigned int *)t26);
    t56 = (~(t55));
    t57 = *((unsigned int *)t34);
    t58 = (t57 & t56);
    t59 = (t58 != 0);
    if (t59 > 0)
        goto LAB196;

LAB197:    xsi_set_current_line(125, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2360);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);

LAB198:    goto LAB189;

LAB192:    t24 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB194;

LAB193:    *((unsigned int *)t34) = 1;
    goto LAB194;

LAB196:    xsi_set_current_line(123, ng0);
    t27 = ((char*)((ng21)));
    t28 = (t0 + 2360);
    xsi_vlogvar_wait_assign_value(t28, t27, 0, 0, 5, 0LL);
    goto LAB198;

LAB203:    t14 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB204;

LAB205:    xsi_set_current_line(134, ng0);
    t16 = ((char*)((ng4)));
    t17 = (t0 + 2360);
    xsi_vlogvar_wait_assign_value(t17, t16, 0, 0, 5, 0LL);
    goto LAB207;

}

static void Always_147_1(char *t0)
{
    char t10[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;

LAB0:    t1 = (t0 + 4328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(147, ng0);
    t2 = (t0 + 4912);
    *((int *)t2) = 1;
    t3 = (t0 + 4360);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(147, ng0);

LAB5:    xsi_set_current_line(148, ng0);
    t4 = (t0 + 2520);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 2680);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t10, 0, 8);
    t11 = (t6 + 4);
    t12 = (t9 + 4);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t9);
    t15 = (t13 ^ t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 ^ t17);
    t19 = (t15 | t18);
    t20 = *((unsigned int *)t11);
    t21 = *((unsigned int *)t12);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB9;

LAB6:    if (t22 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t10) = 1;

LAB9:    t26 = (t10 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (~(t27));
    t29 = *((unsigned int *)t10);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(151, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB12:    goto LAB2;

LAB8:    t25 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(149, ng0);
    t32 = ((char*)((ng6)));
    t33 = (t0 + 2840);
    xsi_vlogvar_assign_value(t33, t32, 0, 0, 1);
    goto LAB12;

}

static void Cont_154_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 4576U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(154, ng0);
    t2 = (t0 + 2840);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5008);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 4928);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_00000000001509515884_1075435344_init()
{
	static char *pe[] = {(void *)Always_42_0,(void *)Always_147_1,(void *)Cont_154_2};
	static char *se[] = {(void *)sp_lower};
	xsi_register_didat("work_m_00000000001509515884_1075435344", "isim/tb_isim_beh.exe.sim/work/m_00000000001509515884_1075435344.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
