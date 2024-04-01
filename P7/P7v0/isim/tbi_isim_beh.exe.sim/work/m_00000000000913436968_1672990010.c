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
static const char *ng0 = "D:/BUAA_Undergraduate/23-24autumn/CO_hw/P7/P7v0/mdu.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {6U, 0U};
static unsigned int ng3[] = {7U, 0U};
static unsigned int ng4[] = {0U, 0U};
static unsigned int ng5[] = {1U, 0U};
static int ng6[] = {5, 0};
static unsigned int ng7[] = {2U, 0U};
static unsigned int ng8[] = {3U, 0U};
static int ng9[] = {10, 0};
static int ng10[] = {1, 0};



static void Initial_39_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(39, ng0);

LAB2:    xsi_set_current_line(40, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2568);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(41, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2728);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(42, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3048);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(43, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3208);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(44, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2888);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 4);

LAB1:    return;
}

static void Always_47_1(char *t0)
{
    char t4[8];
    char t21[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
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
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;

LAB0:    t1 = (t0 + 4376U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 4944);
    *((int *)t2) = 1;
    t3 = (t0 + 4408);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(47, ng0);

LAB5:    xsi_set_current_line(48, ng0);
    t5 = (t0 + 1368U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(48, ng0);

LAB13:    xsi_set_current_line(49, ng0);
    t19 = (t0 + 1528U);
    t20 = *((char **)t19);
    t19 = ((char*)((ng2)));
    memset(t21, 0, 8);
    t22 = (t20 + 4);
    t23 = (t19 + 4);
    t24 = *((unsigned int *)t20);
    t25 = *((unsigned int *)t19);
    t26 = (t24 ^ t25);
    t27 = *((unsigned int *)t22);
    t28 = *((unsigned int *)t23);
    t29 = (t27 ^ t28);
    t30 = (t26 | t29);
    t31 = *((unsigned int *)t22);
    t32 = *((unsigned int *)t23);
    t33 = (t31 | t32);
    t34 = (~(t33));
    t35 = (t30 & t34);
    if (t35 != 0)
        goto LAB17;

LAB14:    if (t33 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t21) = 1;

LAB17:    t37 = (t21 + 4);
    t38 = *((unsigned int *)t37);
    t39 = (~(t38));
    t40 = *((unsigned int *)t21);
    t41 = (t40 & t39);
    t42 = (t41 != 0);
    if (t42 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t6);
    t18 = (t16 | t17);
    t24 = (~(t18));
    t25 = (t15 & t24);
    if (t25 != 0)
        goto LAB24;

LAB21:    if (t18 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t4) = 1;

LAB24:    t13 = (t4 + 4);
    t26 = *((unsigned int *)t13);
    t27 = (~(t26));
    t28 = *((unsigned int *)t4);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB25;

LAB26:
LAB27:
LAB20:    goto LAB12;

LAB16:    t36 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(50, ng0);
    t43 = (t0 + 1688U);
    t44 = *((char **)t43);
    t43 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t43, t44, 0, 0, 32, 0LL);
    goto LAB20;

LAB23:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB24;

LAB25:    xsi_set_current_line(52, ng0);
    t19 = (t0 + 1688U);
    t20 = *((char **)t19);
    t19 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t19, t20, 0, 0, 32, 0LL);
    goto LAB27;

}

static void Always_56_2(char *t0)
{
    char t13[8];
    char t21[8];
    char t52[8];
    char t54[8];
    char t60[8];
    char t95[16];
    char t96[16];
    char t97[16];
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
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
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
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t51;
    unsigned int t53;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    char *t93;
    char *t94;

LAB0:    t1 = (t0 + 4624U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 4960);
    *((int *)t2) = 1;
    t3 = (t0 + 4656);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(56, ng0);

LAB5:    xsi_set_current_line(57, ng0);
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

LAB7:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB13;

LAB11:    if (*((unsigned int *)t2) == 0)
        goto LAB10;

LAB12:    t4 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t4) = 1;

LAB13:    t5 = (t13 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (~(t14));
    t16 = *((unsigned int *)t13);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB14;

LAB15:
LAB16:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(57, ng0);

LAB9:    xsi_set_current_line(58, ng0);
    t11 = ((char*)((ng4)));
    t12 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 4, 0LL);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB8;

LAB10:    *((unsigned int *)t13) = 1;
    goto LAB13;

LAB14:    xsi_set_current_line(63, ng0);

LAB17:    xsi_set_current_line(64, ng0);
    t11 = (t0 + 2888);
    t12 = (t11 + 56U);
    t19 = *((char **)t12);
    t20 = ((char*)((ng1)));
    memset(t21, 0, 8);
    t22 = (t19 + 4);
    t23 = (t20 + 4);
    t24 = *((unsigned int *)t19);
    t25 = *((unsigned int *)t20);
    t26 = (t24 ^ t25);
    t27 = *((unsigned int *)t22);
    t28 = *((unsigned int *)t23);
    t29 = (t27 ^ t28);
    t30 = (t26 | t29);
    t31 = *((unsigned int *)t22);
    t32 = *((unsigned int *)t23);
    t33 = (t31 | t32);
    t34 = (~(t33));
    t35 = (t30 & t34);
    if (t35 != 0)
        goto LAB21;

LAB18:    if (t33 != 0)
        goto LAB20;

LAB19:    *((unsigned int *)t21) = 1;

LAB21:    t37 = (t21 + 4);
    t38 = *((unsigned int *)t37);
    t39 = (~(t38));
    t40 = *((unsigned int *)t21);
    t41 = (t40 & t39);
    t42 = (t41 != 0);
    if (t42 > 0)
        goto LAB22;

LAB23:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng10)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t24 = (~(t18));
    t25 = (t15 & t24);
    if (t25 != 0)
        goto LAB113;

LAB110:    if (t18 != 0)
        goto LAB112;

LAB111:    *((unsigned int *)t13) = 1;

LAB113:    t20 = (t13 + 4);
    t26 = *((unsigned int *)t20);
    t27 = (~(t26));
    t28 = *((unsigned int *)t13);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB114;

LAB115:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng10)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_minus(t13, 32, t4, 4, t5, 32);
    t11 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 4, 0LL);

LAB116:
LAB24:    goto LAB16;

LAB20:    t36 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB21;

LAB22:    xsi_set_current_line(64, ng0);

LAB25:    xsi_set_current_line(65, ng0);
    t43 = (t0 + 2008U);
    t44 = *((char **)t43);
    t43 = (t44 + 4);
    t45 = *((unsigned int *)t43);
    t46 = (~(t45));
    t47 = *((unsigned int *)t44);
    t48 = (t47 & t46);
    t49 = (t48 != 0);
    if (t49 > 0)
        goto LAB26;

LAB27:    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB28:    goto LAB24;

LAB26:    xsi_set_current_line(65, ng0);

LAB29:    xsi_set_current_line(66, ng0);
    t50 = ((char*)((ng5)));
    t51 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t51, t50, 0, 0, 1, 0LL);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t24 = (~(t18));
    t25 = (t15 & t24);
    if (t25 != 0)
        goto LAB33;

LAB30:    if (t18 != 0)
        goto LAB32;

LAB31:    *((unsigned int *)t13) = 1;

LAB33:    memset(t21, 0, 8);
    t12 = (t13 + 4);
    t26 = *((unsigned int *)t12);
    t27 = (~(t26));
    t28 = *((unsigned int *)t13);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t12) != 0)
        goto LAB36;

LAB37:    t20 = (t21 + 4);
    t31 = *((unsigned int *)t21);
    t32 = (!(t31));
    t33 = *((unsigned int *)t20);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB38;

LAB39:    memcpy(t60, t21, 8);

LAB40:    t87 = (t60 + 4);
    t88 = *((unsigned int *)t87);
    t89 = (~(t88));
    t90 = *((unsigned int *)t60);
    t91 = (t90 & t89);
    t92 = (t91 != 0);
    if (t92 > 0)
        goto LAB52;

LAB53:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng7)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t24 = (~(t18));
    t25 = (t15 & t24);
    if (t25 != 0)
        goto LAB58;

LAB55:    if (t18 != 0)
        goto LAB57;

LAB56:    *((unsigned int *)t13) = 1;

LAB58:    memset(t21, 0, 8);
    t12 = (t13 + 4);
    t26 = *((unsigned int *)t12);
    t27 = (~(t26));
    t28 = *((unsigned int *)t13);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB59;

LAB60:    if (*((unsigned int *)t12) != 0)
        goto LAB61;

LAB62:    t20 = (t21 + 4);
    t31 = *((unsigned int *)t21);
    t32 = (!(t31));
    t33 = *((unsigned int *)t20);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB63;

LAB64:    memcpy(t60, t21, 8);

LAB65:    t87 = (t60 + 4);
    t88 = *((unsigned int *)t87);
    t89 = (~(t88));
    t90 = *((unsigned int *)t60);
    t91 = (t90 & t89);
    t92 = (t91 != 0);
    if (t92 > 0)
        goto LAB77;

LAB78:
LAB79:
LAB54:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t24 = (~(t18));
    t25 = (t15 & t24);
    if (t25 != 0)
        goto LAB83;

LAB80:    if (t18 != 0)
        goto LAB82;

LAB81:    *((unsigned int *)t13) = 1;

LAB83:    t12 = (t13 + 4);
    t26 = *((unsigned int *)t12);
    t27 = (~(t26));
    t28 = *((unsigned int *)t13);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB84;

LAB85:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t24 = (~(t18));
    t25 = (t15 & t24);
    if (t25 != 0)
        goto LAB90;

LAB87:    if (t18 != 0)
        goto LAB89;

LAB88:    *((unsigned int *)t13) = 1;

LAB90:    t12 = (t13 + 4);
    t26 = *((unsigned int *)t12);
    t27 = (~(t26));
    t28 = *((unsigned int *)t13);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB91;

LAB92:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng7)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t24 = (~(t18));
    t25 = (t15 & t24);
    if (t25 != 0)
        goto LAB97;

LAB94:    if (t18 != 0)
        goto LAB96;

LAB95:    *((unsigned int *)t13) = 1;

LAB97:    t12 = (t13 + 4);
    t26 = *((unsigned int *)t12);
    t27 = (~(t26));
    t28 = *((unsigned int *)t13);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB98;

LAB99:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng8)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t24 = (~(t18));
    t25 = (t15 & t24);
    if (t25 != 0)
        goto LAB105;

LAB102:    if (t18 != 0)
        goto LAB104;

LAB103:    *((unsigned int *)t13) = 1;

LAB105:    t12 = (t13 + 4);
    t26 = *((unsigned int *)t12);
    t27 = (~(t26));
    t28 = *((unsigned int *)t13);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB106;

LAB107:
LAB108:
LAB100:
LAB93:
LAB86:    goto LAB28;

LAB32:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB33;

LAB34:    *((unsigned int *)t21) = 1;
    goto LAB37;

LAB36:    t19 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB37;

LAB38:    t22 = (t0 + 1528U);
    t23 = *((char **)t22);
    t22 = ((char*)((ng5)));
    memset(t52, 0, 8);
    t36 = (t23 + 4);
    t37 = (t22 + 4);
    t35 = *((unsigned int *)t23);
    t38 = *((unsigned int *)t22);
    t39 = (t35 ^ t38);
    t40 = *((unsigned int *)t36);
    t41 = *((unsigned int *)t37);
    t42 = (t40 ^ t41);
    t45 = (t39 | t42);
    t46 = *((unsigned int *)t36);
    t47 = *((unsigned int *)t37);
    t48 = (t46 | t47);
    t49 = (~(t48));
    t53 = (t45 & t49);
    if (t53 != 0)
        goto LAB44;

LAB41:    if (t48 != 0)
        goto LAB43;

LAB42:    *((unsigned int *)t52) = 1;

LAB44:    memset(t54, 0, 8);
    t44 = (t52 + 4);
    t55 = *((unsigned int *)t44);
    t56 = (~(t55));
    t57 = *((unsigned int *)t52);
    t58 = (t57 & t56);
    t59 = (t58 & 1U);
    if (t59 != 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t44) != 0)
        goto LAB47;

LAB48:    t61 = *((unsigned int *)t21);
    t62 = *((unsigned int *)t54);
    t63 = (t61 | t62);
    *((unsigned int *)t60) = t63;
    t51 = (t21 + 4);
    t64 = (t54 + 4);
    t65 = (t60 + 4);
    t66 = *((unsigned int *)t51);
    t67 = *((unsigned int *)t64);
    t68 = (t66 | t67);
    *((unsigned int *)t65) = t68;
    t69 = *((unsigned int *)t65);
    t70 = (t69 != 0);
    if (t70 == 1)
        goto LAB49;

LAB50:
LAB51:    goto LAB40;

LAB43:    t43 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB44;

LAB45:    *((unsigned int *)t54) = 1;
    goto LAB48;

LAB47:    t50 = (t54 + 4);
    *((unsigned int *)t54) = 1;
    *((unsigned int *)t50) = 1;
    goto LAB48;

LAB49:    t71 = *((unsigned int *)t60);
    t72 = *((unsigned int *)t65);
    *((unsigned int *)t60) = (t71 | t72);
    t73 = (t21 + 4);
    t74 = (t54 + 4);
    t75 = *((unsigned int *)t73);
    t76 = (~(t75));
    t77 = *((unsigned int *)t21);
    t78 = (t77 & t76);
    t79 = *((unsigned int *)t74);
    t80 = (~(t79));
    t81 = *((unsigned int *)t54);
    t82 = (t81 & t80);
    t83 = (~(t78));
    t84 = (~(t82));
    t85 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t85 & t83);
    t86 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t86 & t84);
    goto LAB51;

LAB52:    xsi_set_current_line(68, ng0);
    t93 = ((char*)((ng6)));
    t94 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t94, t93, 0, 0, 4, 0LL);
    goto LAB54;

LAB57:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB58;

LAB59:    *((unsigned int *)t21) = 1;
    goto LAB62;

LAB61:    t19 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB62;

LAB63:    t22 = (t0 + 1528U);
    t23 = *((char **)t22);
    t22 = ((char*)((ng8)));
    memset(t52, 0, 8);
    t36 = (t23 + 4);
    t37 = (t22 + 4);
    t35 = *((unsigned int *)t23);
    t38 = *((unsigned int *)t22);
    t39 = (t35 ^ t38);
    t40 = *((unsigned int *)t36);
    t41 = *((unsigned int *)t37);
    t42 = (t40 ^ t41);
    t45 = (t39 | t42);
    t46 = *((unsigned int *)t36);
    t47 = *((unsigned int *)t37);
    t48 = (t46 | t47);
    t49 = (~(t48));
    t53 = (t45 & t49);
    if (t53 != 0)
        goto LAB69;

LAB66:    if (t48 != 0)
        goto LAB68;

LAB67:    *((unsigned int *)t52) = 1;

LAB69:    memset(t54, 0, 8);
    t44 = (t52 + 4);
    t55 = *((unsigned int *)t44);
    t56 = (~(t55));
    t57 = *((unsigned int *)t52);
    t58 = (t57 & t56);
    t59 = (t58 & 1U);
    if (t59 != 0)
        goto LAB70;

LAB71:    if (*((unsigned int *)t44) != 0)
        goto LAB72;

LAB73:    t61 = *((unsigned int *)t21);
    t62 = *((unsigned int *)t54);
    t63 = (t61 | t62);
    *((unsigned int *)t60) = t63;
    t51 = (t21 + 4);
    t64 = (t54 + 4);
    t65 = (t60 + 4);
    t66 = *((unsigned int *)t51);
    t67 = *((unsigned int *)t64);
    t68 = (t66 | t67);
    *((unsigned int *)t65) = t68;
    t69 = *((unsigned int *)t65);
    t70 = (t69 != 0);
    if (t70 == 1)
        goto LAB74;

LAB75:
LAB76:    goto LAB65;

LAB68:    t43 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB69;

LAB70:    *((unsigned int *)t54) = 1;
    goto LAB73;

LAB72:    t50 = (t54 + 4);
    *((unsigned int *)t54) = 1;
    *((unsigned int *)t50) = 1;
    goto LAB73;

LAB74:    t71 = *((unsigned int *)t60);
    t72 = *((unsigned int *)t65);
    *((unsigned int *)t60) = (t71 | t72);
    t73 = (t21 + 4);
    t74 = (t54 + 4);
    t75 = *((unsigned int *)t73);
    t76 = (~(t75));
    t77 = *((unsigned int *)t21);
    t78 = (t77 & t76);
    t79 = *((unsigned int *)t74);
    t80 = (~(t79));
    t81 = *((unsigned int *)t54);
    t82 = (t81 & t80);
    t83 = (~(t78));
    t84 = (~(t82));
    t85 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t85 & t83);
    t86 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t86 & t84);
    goto LAB76;

LAB77:    xsi_set_current_line(70, ng0);
    t93 = ((char*)((ng9)));
    t94 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t94, t93, 0, 0, 4, 0LL);
    goto LAB79;

LAB82:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB83;

LAB84:    xsi_set_current_line(73, ng0);
    t19 = (t0 + 1688U);
    t20 = *((char **)t19);
    xsi_vlogtype_sign_extend(t95, 64, t20, 32);
    t19 = (t0 + 1848U);
    t22 = *((char **)t19);
    xsi_vlogtype_sign_extend(t96, 64, t22, 32);
    xsi_vlog_signed_multiply(t97, 64, t95, 64, t96, 64);
    t19 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t19, t97, 0, 0, 32, 0LL);
    t23 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t23, t97, 32, 0, 32, 0LL);
    goto LAB86;

LAB89:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB90;

LAB91:    xsi_set_current_line(75, ng0);
    t19 = (t0 + 1688U);
    t20 = *((char **)t19);
    t19 = (t0 + 1848U);
    t22 = *((char **)t19);
    xsi_vlog_unsigned_multiply(t95, 64, t20, 32, t22, 32);
    t19 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t19, t95, 0, 0, 32, 0LL);
    t23 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t23, t95, 32, 0, 32, 0LL);
    goto LAB93;

LAB96:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB97;

LAB98:    xsi_set_current_line(76, ng0);

LAB101:    xsi_set_current_line(77, ng0);
    t19 = (t0 + 1688U);
    t20 = *((char **)t19);
    t19 = (t0 + 1848U);
    t22 = *((char **)t19);
    memset(t54, 0, 8);
    xsi_vlog_signed_mod(t54, 32, t20, 32, t22, 32);
    t19 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t19, t54, 0, 0, 32, 0LL);
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t0 + 1848U);
    t4 = *((char **)t2);
    memset(t52, 0, 8);
    xsi_vlog_signed_divide(t52, 32, t3, 32, t4, 32);
    t2 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t2, t52, 0, 0, 32, 0LL);
    goto LAB100;

LAB104:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB105;

LAB106:    xsi_set_current_line(80, ng0);

LAB109:    xsi_set_current_line(81, ng0);
    t19 = (t0 + 1688U);
    t20 = *((char **)t19);
    t19 = (t0 + 1848U);
    t22 = *((char **)t19);
    memset(t21, 0, 8);
    xsi_vlog_unsigned_mod(t21, 32, t20, 32, t22, 32);
    t19 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t19, t21, 0, 0, 32, 0LL);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t0 + 1848U);
    t4 = *((char **)t2);
    memset(t13, 0, 8);
    xsi_vlog_unsigned_divide(t13, 32, t3, 32, t4, 32);
    t2 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t2, t13, 0, 0, 32, 0LL);
    goto LAB108;

LAB112:    t19 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB113;

LAB114:    xsi_set_current_line(88, ng0);

LAB117:    xsi_set_current_line(89, ng0);
    t22 = (t0 + 2888);
    t23 = (t22 + 56U);
    t36 = *((char **)t23);
    t37 = ((char*)((ng10)));
    memset(t21, 0, 8);
    xsi_vlog_unsigned_minus(t21, 32, t36, 4, t37, 32);
    t43 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t43, t21, 0, 0, 4, 0LL);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(91, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB116;

}


extern void work_m_00000000000913436968_1672990010_init()
{
	static char *pe[] = {(void *)Initial_39_0,(void *)Always_47_1,(void *)Always_56_2};
	xsi_register_didat("work_m_00000000000913436968_1672990010", "isim/tbi_isim_beh.exe.sim/work/m_00000000000913436968_1672990010.didat");
	xsi_register_executes(pe);
}
