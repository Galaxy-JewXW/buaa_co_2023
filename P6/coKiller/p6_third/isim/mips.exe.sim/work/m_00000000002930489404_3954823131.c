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
static unsigned int ng0[] = {1U, 0U};
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {16, 0};
static unsigned int ng3[] = {2U, 0U};
static int ng4[] = {24, 0};
static unsigned int ng5[] = {3U, 0U};



static void Always_12_0(char *t0)
{
    char t6[8];
    char t30[8];
    char t39[8];
    char t61[8];
    char t62[8];
    char t63[8];
    char t73[8];
    char t77[8];
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
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t64;
    char *t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t74;
    char *t75;
    char *t76;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    char *t85;

LAB0:    t1 = (t0 + 2688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 3008);
    *((int *)t2) = 1;
    t3 = (t0 + 2720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng0)));
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

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    t2 = (t0 + 1208U);
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
        goto LAB33;

LAB30:    if (t18 != 0)
        goto LAB32;

LAB31:    *((unsigned int *)t6) = 1;

LAB33:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB34;

LAB35:
LAB66:    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1768);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);

LAB36:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:
LAB13:    t28 = (t0 + 1368U);
    t29 = *((char **)t28);
    memset(t30, 0, 8);
    t28 = (t30 + 4);
    t31 = (t29 + 4);
    t32 = *((unsigned int *)t29);
    t33 = (t32 >> 1);
    t34 = (t33 & 1);
    *((unsigned int *)t30) = t34;
    t35 = *((unsigned int *)t31);
    t36 = (t35 >> 1);
    t37 = (t36 & 1);
    *((unsigned int *)t28) = t37;
    t38 = ((char*)((ng1)));
    memset(t39, 0, 8);
    t40 = (t30 + 4);
    t41 = (t38 + 4);
    t42 = *((unsigned int *)t30);
    t43 = *((unsigned int *)t38);
    t44 = (t42 ^ t43);
    t45 = *((unsigned int *)t40);
    t46 = *((unsigned int *)t41);
    t47 = (t45 ^ t46);
    t48 = (t44 | t47);
    t49 = *((unsigned int *)t40);
    t50 = *((unsigned int *)t41);
    t51 = (t49 | t50);
    t52 = (~(t51));
    t53 = (t48 & t52);
    if (t53 != 0)
        goto LAB17;

LAB14:    if (t51 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t39) = 1;

LAB17:    t55 = (t39 + 4);
    t56 = *((unsigned int *)t55);
    t57 = (~(t56));
    t58 = *((unsigned int *)t39);
    t59 = (t58 & t57);
    t60 = (t59 != 0);
    if (t60 > 0)
        goto LAB18;

LAB19:    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 1);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 1);
    t14 = (t13 & 1);
    *((unsigned int *)t2) = t14;
    t5 = ((char*)((ng0)));
    memset(t30, 0, 8);
    t7 = (t6 + 4);
    t8 = (t5 + 4);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t5);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t8);
    t20 = (t18 ^ t19);
    t23 = (t17 | t20);
    t24 = *((unsigned int *)t7);
    t25 = *((unsigned int *)t8);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t32 = (t23 & t27);
    if (t32 != 0)
        goto LAB25;

LAB22:    if (t26 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t30) = 1;

LAB25:    t22 = (t30 + 4);
    t33 = *((unsigned int *)t22);
    t34 = (~(t33));
    t35 = *((unsigned int *)t30);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB26;

LAB27:
LAB28:
LAB20:    goto LAB12;

LAB16:    t54 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB17;

LAB18:
LAB21:    t64 = (t0 + 1048U);
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
    xsi_vlogtype_concat(t62, 16, 16, 1U, t63, 16);
    t74 = ((char*)((ng2)));
    t75 = (t0 + 1048U);
    t76 = *((char **)t75);
    memset(t77, 0, 8);
    t75 = (t77 + 4);
    t78 = (t76 + 4);
    t79 = *((unsigned int *)t76);
    t80 = (t79 >> 15);
    t81 = (t80 & 1);
    *((unsigned int *)t77) = t81;
    t82 = *((unsigned int *)t78);
    t83 = (t82 >> 15);
    t84 = (t83 & 1);
    *((unsigned int *)t75) = t84;
    xsi_vlog_mul_concat(t73, 16, 1, t74, 1U, t77, 1);
    xsi_vlogtype_concat(t61, 32, 32, 2U, t73, 16, t62, 16);
    t85 = (t0 + 1768);
    xsi_vlogvar_assign_value(t85, t61, 0, 0, 32);
    goto LAB20;

LAB24:    t21 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB25;

LAB26:
LAB29:    t28 = (t0 + 1048U);
    t29 = *((char **)t28);
    memset(t62, 0, 8);
    t28 = (t62 + 4);
    t31 = (t29 + 4);
    t42 = *((unsigned int *)t29);
    t43 = (t42 >> 16);
    *((unsigned int *)t62) = t43;
    t44 = *((unsigned int *)t31);
    t45 = (t44 >> 16);
    *((unsigned int *)t28) = t45;
    t46 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t46 & 65535U);
    t47 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t47 & 65535U);
    xsi_vlogtype_concat(t61, 16, 16, 1U, t62, 16);
    t38 = ((char*)((ng2)));
    t40 = (t0 + 1048U);
    t41 = *((char **)t40);
    memset(t73, 0, 8);
    t40 = (t73 + 4);
    t54 = (t41 + 4);
    t48 = *((unsigned int *)t41);
    t49 = (t48 >> 31);
    t50 = (t49 & 1);
    *((unsigned int *)t73) = t50;
    t51 = *((unsigned int *)t54);
    t52 = (t51 >> 31);
    t53 = (t52 & 1);
    *((unsigned int *)t40) = t53;
    xsi_vlog_mul_concat(t63, 16, 1, t38, 1U, t73, 1);
    xsi_vlogtype_concat(t39, 32, 32, 2U, t63, 16, t61, 16);
    t55 = (t0 + 1768);
    xsi_vlogvar_assign_value(t55, t39, 0, 0, 32);
    goto LAB28;

LAB32:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB33;

LAB34:
LAB37:    t21 = (t0 + 1368U);
    t22 = *((char **)t21);
    t21 = ((char*)((ng1)));
    memset(t30, 0, 8);
    t28 = (t22 + 4);
    t29 = (t21 + 4);
    t32 = *((unsigned int *)t22);
    t33 = *((unsigned int *)t21);
    t34 = (t32 ^ t33);
    t35 = *((unsigned int *)t28);
    t36 = *((unsigned int *)t29);
    t37 = (t35 ^ t36);
    t42 = (t34 | t37);
    t43 = *((unsigned int *)t28);
    t44 = *((unsigned int *)t29);
    t45 = (t43 | t44);
    t46 = (~(t45));
    t47 = (t42 & t46);
    if (t47 != 0)
        goto LAB41;

LAB38:    if (t45 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t30) = 1;

LAB41:    t38 = (t30 + 4);
    t48 = *((unsigned int *)t38);
    t49 = (~(t48));
    t50 = *((unsigned int *)t30);
    t51 = (t50 & t49);
    t52 = (t51 != 0);
    if (t52 > 0)
        goto LAB42;

LAB43:    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng0)));
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
        goto LAB48;

LAB45:    if (t18 != 0)
        goto LAB47;

LAB46:    *((unsigned int *)t6) = 1;

LAB48:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB49;

LAB50:    t2 = (t0 + 1368U);
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
        goto LAB55;

LAB52:    if (t18 != 0)
        goto LAB54;

LAB53:    *((unsigned int *)t6) = 1;

LAB55:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB56;

LAB57:    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
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
        goto LAB62;

LAB59:    if (t18 != 0)
        goto LAB61;

LAB60:    *((unsigned int *)t6) = 1;

LAB62:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB63;

LAB64:
LAB65:
LAB58:
LAB51:
LAB44:    goto LAB36;

LAB40:    t31 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB41;

LAB42:    t40 = (t0 + 1048U);
    t41 = *((char **)t40);
    memset(t62, 0, 8);
    t40 = (t62 + 4);
    t54 = (t41 + 4);
    t53 = *((unsigned int *)t41);
    t56 = (t53 >> 0);
    *((unsigned int *)t62) = t56;
    t57 = *((unsigned int *)t54);
    t58 = (t57 >> 0);
    *((unsigned int *)t40) = t58;
    t59 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t59 & 255U);
    t60 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t60 & 255U);
    xsi_vlogtype_concat(t61, 8, 8, 1U, t62, 8);
    t55 = ((char*)((ng4)));
    t64 = (t0 + 1048U);
    t65 = *((char **)t64);
    memset(t73, 0, 8);
    t64 = (t73 + 4);
    t66 = (t65 + 4);
    t67 = *((unsigned int *)t65);
    t68 = (t67 >> 7);
    t69 = (t68 & 1);
    *((unsigned int *)t73) = t69;
    t70 = *((unsigned int *)t66);
    t71 = (t70 >> 7);
    t72 = (t71 & 1);
    *((unsigned int *)t64) = t72;
    xsi_vlog_mul_concat(t63, 24, 1, t55, 1U, t73, 1);
    xsi_vlogtype_concat(t39, 32, 32, 2U, t63, 24, t61, 8);
    t74 = (t0 + 1768);
    xsi_vlogvar_assign_value(t74, t39, 0, 0, 32);
    goto LAB44;

LAB47:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB48;

LAB49:    t21 = (t0 + 1048U);
    t22 = *((char **)t21);
    memset(t61, 0, 8);
    t21 = (t61 + 4);
    t28 = (t22 + 4);
    t32 = *((unsigned int *)t22);
    t33 = (t32 >> 8);
    *((unsigned int *)t61) = t33;
    t34 = *((unsigned int *)t28);
    t35 = (t34 >> 8);
    *((unsigned int *)t21) = t35;
    t36 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t36 & 255U);
    t37 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t37 & 255U);
    xsi_vlogtype_concat(t39, 8, 8, 1U, t61, 8);
    t29 = ((char*)((ng4)));
    t31 = (t0 + 1048U);
    t38 = *((char **)t31);
    memset(t63, 0, 8);
    t31 = (t63 + 4);
    t40 = (t38 + 4);
    t42 = *((unsigned int *)t38);
    t43 = (t42 >> 15);
    t44 = (t43 & 1);
    *((unsigned int *)t63) = t44;
    t45 = *((unsigned int *)t40);
    t46 = (t45 >> 15);
    t47 = (t46 & 1);
    *((unsigned int *)t31) = t47;
    xsi_vlog_mul_concat(t62, 24, 1, t29, 1U, t63, 1);
    xsi_vlogtype_concat(t30, 32, 32, 2U, t62, 24, t39, 8);
    t41 = (t0 + 1768);
    xsi_vlogvar_assign_value(t41, t30, 0, 0, 32);
    goto LAB51;

LAB54:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB55;

LAB56:    t21 = (t0 + 1048U);
    t22 = *((char **)t21);
    memset(t61, 0, 8);
    t21 = (t61 + 4);
    t28 = (t22 + 4);
    t32 = *((unsigned int *)t22);
    t33 = (t32 >> 16);
    *((unsigned int *)t61) = t33;
    t34 = *((unsigned int *)t28);
    t35 = (t34 >> 16);
    *((unsigned int *)t21) = t35;
    t36 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t36 & 255U);
    t37 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t37 & 255U);
    xsi_vlogtype_concat(t39, 8, 8, 1U, t61, 8);
    t29 = ((char*)((ng4)));
    t31 = (t0 + 1048U);
    t38 = *((char **)t31);
    memset(t63, 0, 8);
    t31 = (t63 + 4);
    t40 = (t38 + 4);
    t42 = *((unsigned int *)t38);
    t43 = (t42 >> 23);
    t44 = (t43 & 1);
    *((unsigned int *)t63) = t44;
    t45 = *((unsigned int *)t40);
    t46 = (t45 >> 23);
    t47 = (t46 & 1);
    *((unsigned int *)t31) = t47;
    xsi_vlog_mul_concat(t62, 24, 1, t29, 1U, t63, 1);
    xsi_vlogtype_concat(t30, 32, 32, 2U, t62, 24, t39, 8);
    t41 = (t0 + 1768);
    xsi_vlogvar_assign_value(t41, t30, 0, 0, 32);
    goto LAB58;

LAB61:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB62;

LAB63:    t21 = (t0 + 1048U);
    t22 = *((char **)t21);
    memset(t61, 0, 8);
    t21 = (t61 + 4);
    t28 = (t22 + 4);
    t32 = *((unsigned int *)t22);
    t33 = (t32 >> 24);
    *((unsigned int *)t61) = t33;
    t34 = *((unsigned int *)t28);
    t35 = (t34 >> 24);
    *((unsigned int *)t21) = t35;
    t36 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t36 & 255U);
    t37 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t37 & 255U);
    xsi_vlogtype_concat(t39, 8, 8, 1U, t61, 8);
    t29 = ((char*)((ng4)));
    t31 = (t0 + 1048U);
    t38 = *((char **)t31);
    memset(t63, 0, 8);
    t31 = (t63 + 4);
    t40 = (t38 + 4);
    t42 = *((unsigned int *)t38);
    t43 = (t42 >> 31);
    t44 = (t43 & 1);
    *((unsigned int *)t63) = t44;
    t45 = *((unsigned int *)t40);
    t46 = (t45 >> 31);
    t47 = (t46 & 1);
    *((unsigned int *)t31) = t47;
    xsi_vlog_mul_concat(t62, 24, 1, t29, 1U, t63, 1);
    xsi_vlogtype_concat(t30, 32, 32, 2U, t62, 24, t39, 8);
    t41 = (t0 + 1768);
    xsi_vlogvar_assign_value(t41, t30, 0, 0, 32);
    goto LAB65;

}


extern void work_m_00000000002930489404_3954823131_init()
{
	static char *pe[] = {(void *)Always_12_0};
	xsi_register_didat("work_m_00000000002930489404_3954823131", "isim/mips.exe.sim/work/m_00000000002930489404_3954823131.didat");
	xsi_register_executes(pe);
}
