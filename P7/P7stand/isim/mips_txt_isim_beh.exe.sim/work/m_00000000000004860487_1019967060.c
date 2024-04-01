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
static const char *ng0 = "D:/BUAA_Undergraduate/23-24autumn/CO_hw/P7/P7stand/E_MDU.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {4U, 0U};
static unsigned int ng3[] = {5U, 0U};
static unsigned int ng4[] = {0U, 0U};
static int ng5[] = {1, 0};
static unsigned int ng6[] = {6U, 0U};
static int ng7[] = {5, 0};
static unsigned int ng8[] = {1U, 0U};
static unsigned int ng9[] = {7U, 0U};
static int ng10[] = {10, 0};



static void Initial_21_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(21, ng0);

LAB2:    xsi_set_current_line(22, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2568);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(23, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2728);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(24, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3048);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(25, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3208);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(26, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2888);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void Always_30_1(char *t0)
{
    char t6[8];
    char t22[8];
    char t34[8];
    char t43[8];
    char t51[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
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
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    char *t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    int t75;
    int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;
    char *t90;

LAB0:    t1 = (t0 + 4376U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 4944);
    *((int *)t2) = 1;
    t3 = (t0 + 4408);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30, ng0);

LAB5:    xsi_set_current_line(31, ng0);
    t4 = (t0 + 1528U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
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
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    memset(t22, 0, 8);
    t23 = (t6 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t6);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t23) != 0)
        goto LAB12;

LAB13:    t30 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t32 = *((unsigned int *)t30);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB14;

LAB15:    memcpy(t51, t22, 8);

LAB16:    t83 = (t51 + 4);
    t84 = *((unsigned int *)t83);
    t85 = (~(t84));
    t86 = *((unsigned int *)t51);
    t87 = (t86 & t85);
    t88 = (t87 != 0);
    if (t88 > 0)
        goto LAB28;

LAB29:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB34;

LAB31:    if (t18 != 0)
        goto LAB33;

LAB32:    *((unsigned int *)t6) = 1;

LAB34:    memset(t22, 0, 8);
    t8 = (t6 + 4);
    t24 = *((unsigned int *)t8);
    t25 = (~(t24));
    t26 = *((unsigned int *)t6);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB35;

LAB36:    if (*((unsigned int *)t8) != 0)
        goto LAB37;

LAB38:    t23 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t32 = *((unsigned int *)t23);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB39;

LAB40:    memcpy(t51, t22, 8);

LAB41:    t65 = (t51 + 4);
    t84 = *((unsigned int *)t65);
    t85 = (~(t84));
    t86 = *((unsigned int *)t51);
    t87 = (t86 & t85);
    t88 = (t87 != 0);
    if (t88 > 0)
        goto LAB53;

LAB54:
LAB55:
LAB30:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    *((unsigned int *)t22) = 1;
    goto LAB13;

LAB12:    t29 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB13;

LAB14:    t35 = (t0 + 1368U);
    t36 = *((char **)t35);
    memset(t34, 0, 8);
    t35 = (t36 + 4);
    t37 = *((unsigned int *)t35);
    t38 = (~(t37));
    t39 = *((unsigned int *)t36);
    t40 = (t39 & t38);
    t41 = (t40 & 1U);
    if (t41 != 0)
        goto LAB20;

LAB18:    if (*((unsigned int *)t35) == 0)
        goto LAB17;

LAB19:    t42 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t42) = 1;

LAB20:    memset(t43, 0, 8);
    t44 = (t34 + 4);
    t45 = *((unsigned int *)t44);
    t46 = (~(t45));
    t47 = *((unsigned int *)t34);
    t48 = (t47 & t46);
    t49 = (t48 & 1U);
    if (t49 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t44) != 0)
        goto LAB23;

LAB24:    t52 = *((unsigned int *)t22);
    t53 = *((unsigned int *)t43);
    t54 = (t52 & t53);
    *((unsigned int *)t51) = t54;
    t55 = (t22 + 4);
    t56 = (t43 + 4);
    t57 = (t51 + 4);
    t58 = *((unsigned int *)t55);
    t59 = *((unsigned int *)t56);
    t60 = (t58 | t59);
    *((unsigned int *)t57) = t60;
    t61 = *((unsigned int *)t57);
    t62 = (t61 != 0);
    if (t62 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB16;

LAB17:    *((unsigned int *)t34) = 1;
    goto LAB20;

LAB21:    *((unsigned int *)t43) = 1;
    goto LAB24;

LAB23:    t50 = (t43 + 4);
    *((unsigned int *)t43) = 1;
    *((unsigned int *)t50) = 1;
    goto LAB24;

LAB25:    t63 = *((unsigned int *)t51);
    t64 = *((unsigned int *)t57);
    *((unsigned int *)t51) = (t63 | t64);
    t65 = (t22 + 4);
    t66 = (t43 + 4);
    t67 = *((unsigned int *)t22);
    t68 = (~(t67));
    t69 = *((unsigned int *)t65);
    t70 = (~(t69));
    t71 = *((unsigned int *)t43);
    t72 = (~(t71));
    t73 = *((unsigned int *)t66);
    t74 = (~(t73));
    t75 = (t68 & t70);
    t76 = (t72 & t74);
    t77 = (~(t75));
    t78 = (~(t76));
    t79 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t79 & t77);
    t80 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t80 & t78);
    t81 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t81 & t77);
    t82 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t82 & t78);
    goto LAB27;

LAB28:    xsi_set_current_line(31, ng0);
    t89 = (t0 + 1688U);
    t90 = *((char **)t89);
    t89 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t89, t90, 0, 0, 32, 0LL);
    goto LAB30;

LAB33:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB34;

LAB35:    *((unsigned int *)t22) = 1;
    goto LAB38;

LAB37:    t21 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB38;

LAB39:    t29 = (t0 + 1368U);
    t30 = *((char **)t29);
    memset(t34, 0, 8);
    t29 = (t30 + 4);
    t37 = *((unsigned int *)t29);
    t38 = (~(t37));
    t39 = *((unsigned int *)t30);
    t40 = (t39 & t38);
    t41 = (t40 & 1U);
    if (t41 != 0)
        goto LAB45;

LAB43:    if (*((unsigned int *)t29) == 0)
        goto LAB42;

LAB44:    t35 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t35) = 1;

LAB45:    memset(t43, 0, 8);
    t36 = (t34 + 4);
    t45 = *((unsigned int *)t36);
    t46 = (~(t45));
    t47 = *((unsigned int *)t34);
    t48 = (t47 & t46);
    t49 = (t48 & 1U);
    if (t49 != 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t36) != 0)
        goto LAB48;

LAB49:    t52 = *((unsigned int *)t22);
    t53 = *((unsigned int *)t43);
    t54 = (t52 & t53);
    *((unsigned int *)t51) = t54;
    t44 = (t22 + 4);
    t50 = (t43 + 4);
    t55 = (t51 + 4);
    t58 = *((unsigned int *)t44);
    t59 = *((unsigned int *)t50);
    t60 = (t58 | t59);
    *((unsigned int *)t55) = t60;
    t61 = *((unsigned int *)t55);
    t62 = (t61 != 0);
    if (t62 == 1)
        goto LAB50;

LAB51:
LAB52:    goto LAB41;

LAB42:    *((unsigned int *)t34) = 1;
    goto LAB45;

LAB46:    *((unsigned int *)t43) = 1;
    goto LAB49;

LAB48:    t42 = (t43 + 4);
    *((unsigned int *)t43) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB49;

LAB50:    t63 = *((unsigned int *)t51);
    t64 = *((unsigned int *)t55);
    *((unsigned int *)t51) = (t63 | t64);
    t56 = (t22 + 4);
    t57 = (t43 + 4);
    t67 = *((unsigned int *)t22);
    t68 = (~(t67));
    t69 = *((unsigned int *)t56);
    t70 = (~(t69));
    t71 = *((unsigned int *)t43);
    t72 = (~(t71));
    t73 = *((unsigned int *)t57);
    t74 = (~(t73));
    t75 = (t68 & t70);
    t76 = (t72 & t74);
    t77 = (~(t75));
    t78 = (~(t76));
    t79 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t79 & t77);
    t80 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t80 & t78);
    t81 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t81 & t77);
    t82 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t82 & t78);
    goto LAB52;

LAB53:    xsi_set_current_line(32, ng0);
    t66 = (t0 + 1688U);
    t83 = *((char **)t66);
    t66 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t66, t83, 0, 0, 32, 0LL);
    goto LAB55;

}

static void Always_35_2(char *t0)
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

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 4960);
    *((int *)t2) = 1;
    t3 = (t0 + 4656);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(35, ng0);

LAB5:    xsi_set_current_line(36, ng0);
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

LAB7:    xsi_set_current_line(41, ng0);
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

LAB6:    xsi_set_current_line(36, ng0);

LAB9:    xsi_set_current_line(37, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 32, 0LL);
    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB8;

LAB10:    *((unsigned int *)t13) = 1;
    goto LAB13;

LAB14:    xsi_set_current_line(41, ng0);

LAB17:    xsi_set_current_line(42, ng0);
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

LAB23:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
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
        goto LAB114;

LAB111:    if (t18 != 0)
        goto LAB113;

LAB112:    *((unsigned int *)t13) = 1;

LAB114:    t20 = (t13 + 4);
    t26 = *((unsigned int *)t20);
    t27 = (~(t26));
    t28 = *((unsigned int *)t13);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB115;

LAB116:    xsi_set_current_line(65, ng0);

LAB119:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_minus(t13, 32, t4, 32, t5, 32);
    t11 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 32, 0LL);

LAB117:
LAB24:    goto LAB16;

LAB20:    t36 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB21;

LAB22:    xsi_set_current_line(42, ng0);

LAB25:    xsi_set_current_line(43, ng0);
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

LAB27:    xsi_set_current_line(57, ng0);

LAB110:    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);

LAB28:    goto LAB24;

LAB26:    xsi_set_current_line(43, ng0);

LAB29:    xsi_set_current_line(44, ng0);
    t50 = ((char*)((ng5)));
    t51 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t51, t50, 0, 0, 1, 0LL);
    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
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

LAB53:    xsi_set_current_line(46, ng0);
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
LAB54:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
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

LAB85:    xsi_set_current_line(49, ng0);
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

LAB92:    xsi_set_current_line(50, ng0);
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

LAB99:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng9)));
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
    t22 = ((char*)((ng4)));
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

LAB52:    xsi_set_current_line(45, ng0);
    t93 = ((char*)((ng7)));
    t94 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t94, t93, 0, 0, 32, 0LL);
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
    t22 = ((char*)((ng9)));
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

LAB77:    xsi_set_current_line(46, ng0);
    t93 = ((char*)((ng10)));
    t94 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t94, t93, 0, 0, 32, 0LL);
    goto LAB79;

LAB82:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB83;

LAB84:    xsi_set_current_line(48, ng0);
    t19 = (t0 + 1688U);
    t20 = *((char **)t19);
    t19 = (t0 + 1848U);
    t22 = *((char **)t19);
    xsi_vlog_unsigned_multiply(t95, 64, t20, 32, t22, 32);
    t19 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t19, t95, 0, 0, 32, 0LL);
    t23 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t23, t95, 32, 0, 32, 0LL);
    goto LAB86;

LAB89:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB90;

LAB91:    xsi_set_current_line(49, ng0);
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
    goto LAB93;

LAB96:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB97;

LAB98:    xsi_set_current_line(50, ng0);

LAB101:    xsi_set_current_line(51, ng0);
    t19 = (t0 + 1688U);
    t20 = *((char **)t19);
    t19 = (t0 + 1848U);
    t22 = *((char **)t19);
    memset(t54, 0, 8);
    xsi_vlog_signed_divide(t54, 32, t20, 32, t22, 32);
    t19 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t19, t54, 0, 0, 32, 0LL);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t0 + 1848U);
    t4 = *((char **)t2);
    memset(t52, 0, 8);
    xsi_vlog_signed_mod(t52, 32, t3, 32, t4, 32);
    t2 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t2, t52, 0, 0, 32, 0LL);
    goto LAB100;

LAB104:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB105;

LAB106:    xsi_set_current_line(53, ng0);

LAB109:    xsi_set_current_line(54, ng0);
    t19 = (t0 + 1688U);
    t20 = *((char **)t19);
    t19 = (t0 + 1848U);
    t22 = *((char **)t19);
    memset(t21, 0, 8);
    xsi_vlog_unsigned_divide(t21, 32, t20, 32, t22, 32);
    t19 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t19, t21, 0, 0, 32, 0LL);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t0 + 1848U);
    t4 = *((char **)t2);
    memset(t13, 0, 8);
    xsi_vlog_unsigned_mod(t13, 32, t3, 32, t4, 32);
    t2 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t2, t13, 0, 0, 32, 0LL);
    goto LAB108;

LAB113:    t19 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB114;

LAB115:    xsi_set_current_line(60, ng0);

LAB118:    xsi_set_current_line(61, ng0);
    t22 = (t0 + 3208);
    t23 = (t22 + 56U);
    t36 = *((char **)t23);
    t37 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t37, t36, 0, 0, 32, 0LL);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB117;

}


extern void work_m_00000000000004860487_1019967060_init()
{
	static char *pe[] = {(void *)Initial_21_0,(void *)Always_30_1,(void *)Always_35_2};
	xsi_register_didat("work_m_00000000000004860487_1019967060", "isim/mips_txt_isim_beh.exe.sim/work/m_00000000000004860487_1019967060.didat");
	xsi_register_executes(pe);
}
