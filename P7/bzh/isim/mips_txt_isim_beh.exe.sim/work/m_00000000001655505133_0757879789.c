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
static const char *ng0 = "H:/BUAA_workshop/verilog/CPU-pipline-P7/NPC.v";
static unsigned int ng1[] = {4U, 0U};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {14, 0};
static unsigned int ng4[] = {16768U, 0U};
static int ng5[] = {4, 0};



static void NetDecl_21_0(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 4448U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(21, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t3, 32, t2, 32);
    t5 = (t0 + 5640);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31U);
    t10 = (t0 + 5512);
    *((int *)t10) = 1;

LAB1:    return;
}

static void NetDecl_22_1(char *t0)
{
    char t4[8];
    char t5[8];
    char t9[8];
    char t12[8];
    char t20[8];
    char *t1;
    char *t2;
    char *t3;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;

LAB0:    t1 = (t0 + 4696U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(22, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t3, 32, t2, 32);
    t6 = ((char*)((ng2)));
    t7 = (t0 + 1688U);
    t8 = *((char **)t7);
    t7 = ((char*)((ng3)));
    t10 = (t0 + 1688U);
    t11 = *((char **)t10);
    memset(t12, 0, 8);
    t10 = (t12 + 4);
    t13 = (t11 + 4);
    t14 = *((unsigned int *)t11);
    t15 = (t14 >> 15);
    t16 = (t15 & 1);
    *((unsigned int *)t12) = t16;
    t17 = *((unsigned int *)t13);
    t18 = (t17 >> 15);
    t19 = (t18 & 1);
    *((unsigned int *)t10) = t19;
    xsi_vlog_mul_concat(t9, 14, 1, t7, 1U, t12, 1);
    xsi_vlogtype_concat(t5, 32, 32, 3U, t9, 14, t8, 16, t6, 2);
    memset(t20, 0, 8);
    xsi_vlog_unsigned_add(t20, 32, t4, 32, t5, 32);
    t21 = (t0 + 5704);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memcpy(t25, t20, 8);
    xsi_driver_vfirst_trans(t21, 0, 31U);
    t26 = (t0 + 5528);
    *((int *)t26) = 1;

LAB1:    return;
}

static void NetDecl_23_2(char *t0)
{
    char t3[8];
    char t4[8];
    char t22[8];
    char t25[8];
    char *t1;
    char *t2;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t23;
    char *t24;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;

LAB0:    t1 = (t0 + 4944U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(23, ng0);
    t2 = (t0 + 2648U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t12);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    t18 = *((unsigned int *)t4);
    t19 = (~(t18));
    t20 = *((unsigned int *)t12);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t22, 8);

LAB16:    t34 = (t0 + 5768);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    memcpy(t38, t3, 8);
    xsi_driver_vfirst_trans(t34, 0, 31U);
    t39 = (t0 + 5544);
    *((int *)t39) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = (t0 + 2488U);
    t17 = *((char **)t16);
    goto LAB9;

LAB10:    t16 = ((char*)((ng2)));
    t23 = (t0 + 1528U);
    t24 = *((char **)t23);
    t23 = (t0 + 1048U);
    t26 = *((char **)t23);
    memset(t25, 0, 8);
    t23 = (t25 + 4);
    t27 = (t26 + 4);
    t28 = *((unsigned int *)t26);
    t29 = (t28 >> 28);
    *((unsigned int *)t25) = t29;
    t30 = *((unsigned int *)t27);
    t31 = (t30 >> 28);
    *((unsigned int *)t23) = t31;
    t32 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t32 & 15U);
    t33 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t33 & 15U);
    xsi_vlogtype_concat(t22, 32, 32, 3U, t25, 4, t24, 26, t16, 2);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 32, t17, 32, t22, 32);
    goto LAB16;

LAB14:    memcpy(t3, t17, 8);
    goto LAB16;

}

static void Cont_25_3(char *t0)
{
    char t3[8];
    char t4[8];
    char t21[8];
    char t22[8];
    char t37[8];
    char t42[8];
    char t43[8];
    char t62[8];
    char t63[8];
    char *t1;
    char *t2;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    char *t86;

LAB0:    t1 = (t0 + 5192U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 1848U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t12);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    t17 = *((unsigned int *)t4);
    t18 = (~(t17));
    t19 = *((unsigned int *)t12);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t21, 8);

LAB16:    t75 = (t0 + 5832);
    t82 = (t75 + 56U);
    t83 = *((char **)t82);
    t84 = (t83 + 56U);
    t85 = *((char **)t84);
    memcpy(t85, t3, 8);
    xsi_driver_vfirst_trans(t75, 0, 31);
    t86 = (t0 + 5560);
    *((int *)t86) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = ((char*)((ng4)));
    goto LAB9;

LAB10:    t23 = (t0 + 2008U);
    t24 = *((char **)t23);
    memset(t22, 0, 8);
    t23 = (t24 + 4);
    t25 = *((unsigned int *)t23);
    t26 = (~(t25));
    t27 = *((unsigned int *)t24);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t23) != 0)
        goto LAB19;

LAB20:    t31 = (t22 + 4);
    t32 = *((unsigned int *)t22);
    t33 = *((unsigned int *)t31);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB21;

LAB22:    t38 = *((unsigned int *)t22);
    t39 = (~(t38));
    t40 = *((unsigned int *)t31);
    t41 = (t39 || t40);
    if (t41 > 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t31) > 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t22) > 0)
        goto LAB27;

LAB28:    memcpy(t21, t42, 8);

LAB29:    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 32, t16, 32, t21, 32);
    goto LAB16;

LAB14:    memcpy(t3, t16, 8);
    goto LAB16;

LAB17:    *((unsigned int *)t22) = 1;
    goto LAB20;

LAB19:    t30 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB20;

LAB21:    t35 = (t0 + 1368U);
    t36 = *((char **)t35);
    t35 = ((char*)((ng5)));
    memset(t37, 0, 8);
    xsi_vlog_unsigned_add(t37, 32, t36, 32, t35, 32);
    goto LAB22;

LAB23:    t44 = (t0 + 2328U);
    t45 = *((char **)t44);
    memset(t43, 0, 8);
    t44 = (t45 + 4);
    t46 = *((unsigned int *)t44);
    t47 = (~(t46));
    t48 = *((unsigned int *)t45);
    t49 = (t48 & t47);
    t50 = (t49 & 1U);
    if (t50 != 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t44) != 0)
        goto LAB32;

LAB33:    t52 = (t43 + 4);
    t53 = *((unsigned int *)t43);
    t54 = *((unsigned int *)t52);
    t55 = (t53 || t54);
    if (t55 > 0)
        goto LAB34;

LAB35:    t58 = *((unsigned int *)t43);
    t59 = (~(t58));
    t60 = *((unsigned int *)t52);
    t61 = (t59 || t60);
    if (t61 > 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t52) > 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t43) > 0)
        goto LAB40;

LAB41:    memcpy(t42, t62, 8);

LAB42:    goto LAB24;

LAB25:    xsi_vlog_unsigned_bit_combine(t21, 32, t37, 32, t42, 32);
    goto LAB29;

LAB27:    memcpy(t21, t37, 8);
    goto LAB29;

LAB30:    *((unsigned int *)t43) = 1;
    goto LAB33;

LAB32:    t51 = (t43 + 4);
    *((unsigned int *)t43) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB33;

LAB34:    t56 = (t0 + 3288U);
    t57 = *((char **)t56);
    goto LAB35;

LAB36:    t56 = (t0 + 2168U);
    t64 = *((char **)t56);
    memset(t63, 0, 8);
    t56 = (t64 + 4);
    t65 = *((unsigned int *)t56);
    t66 = (~(t65));
    t67 = *((unsigned int *)t64);
    t68 = (t67 & t66);
    t69 = (t68 & 1U);
    if (t69 != 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t56) != 0)
        goto LAB45;

LAB46:    t71 = (t63 + 4);
    t72 = *((unsigned int *)t63);
    t73 = *((unsigned int *)t71);
    t74 = (t72 || t73);
    if (t74 > 0)
        goto LAB47;

LAB48:    t77 = *((unsigned int *)t63);
    t78 = (~(t77));
    t79 = *((unsigned int *)t71);
    t80 = (t78 || t79);
    if (t80 > 0)
        goto LAB49;

LAB50:    if (*((unsigned int *)t71) > 0)
        goto LAB51;

LAB52:    if (*((unsigned int *)t63) > 0)
        goto LAB53;

LAB54:    memcpy(t62, t81, 8);

LAB55:    goto LAB37;

LAB38:    xsi_vlog_unsigned_bit_combine(t42, 32, t57, 32, t62, 32);
    goto LAB42;

LAB40:    memcpy(t42, t57, 8);
    goto LAB42;

LAB43:    *((unsigned int *)t63) = 1;
    goto LAB46;

LAB45:    t70 = (t63 + 4);
    *((unsigned int *)t63) = 1;
    *((unsigned int *)t70) = 1;
    goto LAB46;

LAB47:    t75 = (t0 + 3128U);
    t76 = *((char **)t75);
    goto LAB48;

LAB49:    t75 = (t0 + 2968U);
    t81 = *((char **)t75);
    goto LAB50;

LAB51:    xsi_vlog_unsigned_bit_combine(t62, 32, t76, 32, t81, 32);
    goto LAB55;

LAB53:    memcpy(t62, t76, 8);
    goto LAB55;

}


extern void work_m_00000000001655505133_0757879789_init()
{
	static char *pe[] = {(void *)NetDecl_21_0,(void *)NetDecl_22_1,(void *)NetDecl_23_2,(void *)Cont_25_3};
	xsi_register_didat("work_m_00000000001655505133_0757879789", "isim/mips_txt_isim_beh.exe.sim/work/m_00000000001655505133_0757879789.didat");
	xsi_register_executes(pe);
}
