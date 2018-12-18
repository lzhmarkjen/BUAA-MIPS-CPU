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

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "G:/ComputerOrganization/CPU/Timer_Counter.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {4U, 0U};
static unsigned int ng3[] = {8U, 0U};
static int ng4[] = {0, 0};
static unsigned int ng5[] = {1U, 0U};
static unsigned int ng6[] = {2U, 0U};
static int ng7[] = {1, 0};
static unsigned int ng8[] = {3U, 0U};



static void Cont_42_0(char *t0)
{
    char t5[8];
    char t17[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
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
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    int t41;
    int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;

LAB0:    t1 = (t0 + 2272U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1748);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t6 = (t0 + 1380);
    t7 = (t6 + 36U);
    t8 = *((char **)t7);
    memset(t5, 0, 8);
    t9 = (t5 + 4);
    t10 = (t8 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 3);
    *((unsigned int *)t5) = t12;
    t13 = *((unsigned int *)t10);
    t14 = (t13 >> 3);
    *((unsigned int *)t9) = t14;
    t15 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t15 & 1U);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 & 1U);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t5);
    t20 = (t18 & t19);
    *((unsigned int *)t17) = t20;
    t21 = (t4 + 4);
    t22 = (t5 + 4);
    t23 = (t17 + 4);
    t24 = *((unsigned int *)t21);
    t25 = *((unsigned int *)t22);
    t26 = (t24 | t25);
    *((unsigned int *)t23) = t26;
    t27 = *((unsigned int *)t23);
    t28 = (t27 != 0);
    if (t28 == 1)
        goto LAB4;

LAB5:
LAB6:    t49 = (t0 + 2960);
    t50 = (t49 + 32U);
    t51 = *((char **)t50);
    t52 = (t51 + 40U);
    t53 = *((char **)t52);
    memset(t53, 0, 8);
    t54 = 1U;
    t55 = t54;
    t56 = (t17 + 4);
    t57 = *((unsigned int *)t17);
    t54 = (t54 & t57);
    t58 = *((unsigned int *)t56);
    t55 = (t55 & t58);
    t59 = (t53 + 4);
    t60 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t60 | t54);
    t61 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t61 | t55);
    xsi_driver_vfirst_trans(t49, 0, 0);
    t62 = (t0 + 2900);
    *((int *)t62) = 1;

LAB1:    return;
LAB4:    t29 = *((unsigned int *)t17);
    t30 = *((unsigned int *)t23);
    *((unsigned int *)t17) = (t29 | t30);
    t31 = (t4 + 4);
    t32 = (t5 + 4);
    t33 = *((unsigned int *)t4);
    t34 = (~(t33));
    t35 = *((unsigned int *)t31);
    t36 = (~(t35));
    t37 = *((unsigned int *)t5);
    t38 = (~(t37));
    t39 = *((unsigned int *)t32);
    t40 = (~(t39));
    t41 = (t34 & t36);
    t42 = (t38 & t40);
    t43 = (~(t41));
    t44 = (~(t42));
    t45 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t45 & t43);
    t46 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t46 & t44);
    t47 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t47 & t43);
    t48 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t48 & t44);
    goto LAB6;

}

static void Cont_43_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t40[8];
    char t41[8];
    char t44[8];
    char t78[8];
    char t79[8];
    char t82[8];
    char *t1;
    char *t2;
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
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t42;
    char *t43;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t80;
    char *t81;
    char *t83;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    char *t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    char *t104;
    char *t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    char *t109;
    char *t110;
    char *t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    char *t116;
    char *t117;
    char *t118;
    char *t119;
    char *t120;
    char *t121;
    char *t122;

LAB0:    t1 = (t0 + 2416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 784U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t2 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t2);
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
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    memset(t4, 0, 8);
    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t22) != 0)
        goto LAB10;

LAB11:    t29 = (t4 + 4);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB12;

LAB13:    t36 = *((unsigned int *)t4);
    t37 = (~(t36));
    t38 = *((unsigned int *)t29);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t40, 8);

LAB20:    t117 = (t0 + 2996);
    t118 = (t117 + 32U);
    t119 = *((char **)t118);
    t120 = (t119 + 40U);
    t121 = *((char **)t120);
    memcpy(t121, t3, 8);
    xsi_driver_vfirst_trans(t117, 0, 31);
    t122 = (t0 + 2908);
    *((int *)t122) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t28 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB11;

LAB12:    t33 = (t0 + 1380);
    t34 = (t33 + 36U);
    t35 = *((char **)t34);
    goto LAB13;

LAB14:    t42 = (t0 + 784U);
    t43 = *((char **)t42);
    t42 = ((char*)((ng2)));
    memset(t44, 0, 8);
    t45 = (t43 + 4);
    t46 = (t42 + 4);
    t47 = *((unsigned int *)t43);
    t48 = *((unsigned int *)t42);
    t49 = (t47 ^ t48);
    t50 = *((unsigned int *)t45);
    t51 = *((unsigned int *)t46);
    t52 = (t50 ^ t51);
    t53 = (t49 | t52);
    t54 = *((unsigned int *)t45);
    t55 = *((unsigned int *)t46);
    t56 = (t54 | t55);
    t57 = (~(t56));
    t58 = (t53 & t57);
    if (t58 != 0)
        goto LAB24;

LAB21:    if (t56 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t44) = 1;

LAB24:    memset(t41, 0, 8);
    t60 = (t44 + 4);
    t61 = *((unsigned int *)t60);
    t62 = (~(t61));
    t63 = *((unsigned int *)t44);
    t64 = (t63 & t62);
    t65 = (t64 & 1U);
    if (t65 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t60) != 0)
        goto LAB27;

LAB28:    t67 = (t41 + 4);
    t68 = *((unsigned int *)t41);
    t69 = *((unsigned int *)t67);
    t70 = (t68 || t69);
    if (t70 > 0)
        goto LAB29;

LAB30:    t74 = *((unsigned int *)t41);
    t75 = (~(t74));
    t76 = *((unsigned int *)t67);
    t77 = (t75 || t76);
    if (t77 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t67) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t41) > 0)
        goto LAB35;

LAB36:    memcpy(t40, t78, 8);

LAB37:    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t35, 32, t40, 32);
    goto LAB20;

LAB18:    memcpy(t3, t35, 8);
    goto LAB20;

LAB23:    t59 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t41) = 1;
    goto LAB28;

LAB27:    t66 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t66) = 1;
    goto LAB28;

LAB29:    t71 = (t0 + 1472);
    t72 = (t71 + 36U);
    t73 = *((char **)t72);
    goto LAB30;

LAB31:    t80 = (t0 + 784U);
    t81 = *((char **)t80);
    t80 = ((char*)((ng3)));
    memset(t82, 0, 8);
    t83 = (t81 + 4);
    t84 = (t80 + 4);
    t85 = *((unsigned int *)t81);
    t86 = *((unsigned int *)t80);
    t87 = (t85 ^ t86);
    t88 = *((unsigned int *)t83);
    t89 = *((unsigned int *)t84);
    t90 = (t88 ^ t89);
    t91 = (t87 | t90);
    t92 = *((unsigned int *)t83);
    t93 = *((unsigned int *)t84);
    t94 = (t92 | t93);
    t95 = (~(t94));
    t96 = (t91 & t95);
    if (t96 != 0)
        goto LAB41;

LAB38:    if (t94 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t82) = 1;

LAB41:    memset(t79, 0, 8);
    t98 = (t82 + 4);
    t99 = *((unsigned int *)t98);
    t100 = (~(t99));
    t101 = *((unsigned int *)t82);
    t102 = (t101 & t100);
    t103 = (t102 & 1U);
    if (t103 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t98) != 0)
        goto LAB44;

LAB45:    t105 = (t79 + 4);
    t106 = *((unsigned int *)t79);
    t107 = *((unsigned int *)t105);
    t108 = (t106 || t107);
    if (t108 > 0)
        goto LAB46;

LAB47:    t112 = *((unsigned int *)t79);
    t113 = (~(t112));
    t114 = *((unsigned int *)t105);
    t115 = (t113 || t114);
    if (t115 > 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t105) > 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t79) > 0)
        goto LAB52;

LAB53:    memcpy(t78, t116, 8);

LAB54:    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t40, 32, t73, 32, t78, 32);
    goto LAB37;

LAB35:    memcpy(t40, t73, 8);
    goto LAB37;

LAB40:    t97 = (t82 + 4);
    *((unsigned int *)t82) = 1;
    *((unsigned int *)t97) = 1;
    goto LAB41;

LAB42:    *((unsigned int *)t79) = 1;
    goto LAB45;

LAB44:    t104 = (t79 + 4);
    *((unsigned int *)t79) = 1;
    *((unsigned int *)t104) = 1;
    goto LAB45;

LAB46:    t109 = (t0 + 1564);
    t110 = (t109 + 36U);
    t111 = *((char **)t110);
    goto LAB47;

LAB48:    t116 = ((char*)((ng1)));
    goto LAB49;

LAB50:    xsi_vlog_unsigned_bit_combine(t78, 32, t111, 32, t116, 32);
    goto LAB54;

LAB52:    memcpy(t78, t111, 8);
    goto LAB54;

}

static void Initial_48_2(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(48, ng0);

LAB2:    xsi_set_current_line(49, ng0);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 1380);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(50, ng0);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 1472);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(51, ng0);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 1564);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(52, ng0);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 1656);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 2);
    xsi_set_current_line(53, ng0);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 1748);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_56_3(char *t0)
{
    char t13[8];
    char t38[8];
    char t40[8];
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
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    int t35;
    char *t36;
    char *t37;
    char *t39;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    char *t62;
    int t63;
    int t64;
    int t65;
    int t66;
    int t67;
    int t68;

LAB0:    t1 = (t0 + 2704U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 2916);
    *((int *)t2) = 1;
    t3 = (t0 + 2732);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(56, ng0);

LAB5:    xsi_set_current_line(57, ng0);
    t4 = (t0 + 692U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 876U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(72, ng0);

LAB28:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 1656);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);

LAB29:    t5 = ((char*)((ng1)));
    t35 = xsi_vlog_unsigned_case_compare(t4, 2, t5, 2);
    if (t35 == 1)
        goto LAB30;

LAB31:    t2 = ((char*)((ng5)));
    t35 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t35 == 1)
        goto LAB32;

LAB33:    t2 = ((char*)((ng6)));
    t35 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t35 == 1)
        goto LAB34;

LAB35:    t2 = ((char*)((ng8)));
    t35 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t35 == 1)
        goto LAB36;

LAB37:
LAB38:
LAB12:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(57, ng0);

LAB9:    xsi_set_current_line(58, ng0);
    t11 = ((char*)((ng4)));
    t12 = (t0 + 1380);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 32, 0LL);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1472);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1564);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1656);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1748);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB8;

LAB10:    xsi_set_current_line(64, ng0);

LAB13:    xsi_set_current_line(65, ng0);
    t4 = (t0 + 784U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t13, 0, 8);
    t11 = (t5 + 4);
    t12 = (t4 + 4);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t4);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t11);
    t18 = *((unsigned int *)t12);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t11);
    t22 = *((unsigned int *)t12);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB17;

LAB14:    if (t23 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t13) = 1;

LAB17:    t27 = (t13 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t13);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 784U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
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
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB24;

LAB21:    if (t18 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t13) = 1;

LAB24:    t12 = (t13 + 4);
    t21 = *((unsigned int *)t12);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB25;

LAB26:
LAB27:
LAB20:    goto LAB12;

LAB16:    t26 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(66, ng0);
    t33 = (t0 + 968U);
    t34 = *((char **)t33);
    t33 = (t0 + 1380);
    xsi_vlogvar_wait_assign_value(t33, t34, 0, 0, 32, 0LL);
    goto LAB20;

LAB23:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB24;

LAB25:    xsi_set_current_line(68, ng0);
    t26 = (t0 + 968U);
    t27 = *((char **)t26);
    t26 = (t0 + 1472);
    xsi_vlogvar_wait_assign_value(t26, t27, 0, 0, 32, 0LL);
    goto LAB27;

LAB30:    xsi_set_current_line(74, ng0);

LAB39:    xsi_set_current_line(75, ng0);
    t11 = (t0 + 1380);
    t12 = (t11 + 36U);
    t26 = *((char **)t12);
    memset(t13, 0, 8);
    t27 = (t13 + 4);
    t33 = (t26 + 4);
    t6 = *((unsigned int *)t26);
    t7 = (t6 >> 0);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t33);
    t9 = (t8 >> 0);
    *((unsigned int *)t27) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 1U);
    t14 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t14 & 1U);
    t34 = (t13 + 4);
    t15 = *((unsigned int *)t34);
    t16 = (~(t15));
    t17 = *((unsigned int *)t13);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB40;

LAB41:
LAB42:    goto LAB38;

LAB32:    xsi_set_current_line(81, ng0);

LAB44:    xsi_set_current_line(82, ng0);
    t3 = (t0 + 1472);
    t5 = (t3 + 36U);
    t11 = *((char **)t5);
    t12 = (t0 + 1564);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 32, 0LL);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1656);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB38;

LAB34:    xsi_set_current_line(86, ng0);

LAB45:    xsi_set_current_line(87, ng0);
    t3 = (t0 + 1564);
    t5 = (t3 + 36U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng7)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_minus(t13, 32, t11, 32, t12, 32);
    t26 = (t0 + 1564);
    xsi_vlogvar_wait_assign_value(t26, t13, 0, 0, 32, 0LL);
    xsi_set_current_line(88, ng0);
    t2 = (t0 + 1380);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    memset(t38, 0, 8);
    t11 = (t38 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (t6 >> 0);
    *((unsigned int *)t38) = t7;
    t8 = *((unsigned int *)t12);
    t9 = (t8 >> 0);
    *((unsigned int *)t11) = t9;
    t10 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t10 & 1U);
    t14 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t14 & 1U);
    memset(t13, 0, 8);
    t26 = (t38 + 4);
    t15 = *((unsigned int *)t26);
    t16 = (~(t15));
    t17 = *((unsigned int *)t38);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB49;

LAB47:    if (*((unsigned int *)t26) == 0)
        goto LAB46;

LAB48:    t27 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t27) = 1;

LAB49:    t33 = (t13 + 4);
    t20 = *((unsigned int *)t33);
    t21 = (~(t20));
    t22 = *((unsigned int *)t13);
    t23 = (t22 & t21);
    t24 = (t23 != 0);
    if (t24 > 0)
        goto LAB50;

LAB51:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 1380);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    memset(t13, 0, 8);
    t11 = (t13 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (t6 >> 0);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t12);
    t9 = (t8 >> 0);
    *((unsigned int *)t11) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 1U);
    t14 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t14 & 1U);
    t26 = (t0 + 1564);
    t27 = (t26 + 36U);
    t33 = *((char **)t27);
    t34 = ((char*)((ng7)));
    memset(t38, 0, 8);
    t36 = (t33 + 4);
    if (*((unsigned int *)t36) != 0)
        goto LAB54;

LAB53:    t37 = (t34 + 4);
    if (*((unsigned int *)t37) != 0)
        goto LAB54;

LAB57:    if (*((unsigned int *)t33) > *((unsigned int *)t34))
        goto LAB56;

LAB55:    *((unsigned int *)t38) = 1;

LAB56:    t15 = *((unsigned int *)t13);
    t16 = *((unsigned int *)t38);
    t17 = (t15 & t16);
    *((unsigned int *)t40) = t17;
    t41 = (t13 + 4);
    t42 = (t38 + 4);
    t43 = (t40 + 4);
    t18 = *((unsigned int *)t41);
    t19 = *((unsigned int *)t42);
    t20 = (t18 | t19);
    *((unsigned int *)t43) = t20;
    t21 = *((unsigned int *)t43);
    t22 = (t21 != 0);
    if (t22 == 1)
        goto LAB58;

LAB59:
LAB60:    t55 = (t40 + 4);
    t56 = *((unsigned int *)t55);
    t57 = (~(t56));
    t58 = *((unsigned int *)t40);
    t59 = (t58 & t57);
    t60 = (t59 != 0);
    if (t60 > 0)
        goto LAB61;

LAB62:
LAB63:
LAB52:    goto LAB38;

LAB36:    xsi_set_current_line(96, ng0);

LAB65:    xsi_set_current_line(97, ng0);
    t3 = (t0 + 1380);
    t5 = (t3 + 36U);
    t11 = *((char **)t5);
    memset(t13, 0, 8);
    t12 = (t13 + 4);
    t26 = (t11 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (t6 >> 1);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t26);
    t9 = (t8 >> 1);
    *((unsigned int *)t12) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 3U);
    t14 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t14 & 3U);
    t27 = ((char*)((ng1)));
    memset(t38, 0, 8);
    t33 = (t13 + 4);
    t34 = (t27 + 4);
    t15 = *((unsigned int *)t13);
    t16 = *((unsigned int *)t27);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t33);
    t19 = *((unsigned int *)t34);
    t20 = (t18 ^ t19);
    t21 = (t17 | t20);
    t22 = *((unsigned int *)t33);
    t23 = *((unsigned int *)t34);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t28 = (t21 & t25);
    if (t28 != 0)
        goto LAB69;

LAB66:    if (t24 != 0)
        goto LAB68;

LAB67:    *((unsigned int *)t38) = 1;

LAB69:    t37 = (t38 + 4);
    t29 = *((unsigned int *)t37);
    t30 = (~(t29));
    t31 = *((unsigned int *)t38);
    t32 = (t31 & t30);
    t46 = (t32 != 0);
    if (t46 > 0)
        goto LAB70;

LAB71:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 1380);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    memset(t13, 0, 8);
    t11 = (t13 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (t6 >> 1);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t12);
    t9 = (t8 >> 1);
    *((unsigned int *)t11) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 3U);
    t14 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t14 & 3U);
    t26 = ((char*)((ng5)));
    memset(t38, 0, 8);
    t27 = (t13 + 4);
    t33 = (t26 + 4);
    t15 = *((unsigned int *)t13);
    t16 = *((unsigned int *)t26);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t27);
    t19 = *((unsigned int *)t33);
    t20 = (t18 ^ t19);
    t21 = (t17 | t20);
    t22 = *((unsigned int *)t27);
    t23 = *((unsigned int *)t33);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t28 = (t21 & t25);
    if (t28 != 0)
        goto LAB79;

LAB76:    if (t24 != 0)
        goto LAB78;

LAB77:    *((unsigned int *)t38) = 1;

LAB79:    t36 = (t38 + 4);
    t29 = *((unsigned int *)t36);
    t30 = (~(t29));
    t31 = *((unsigned int *)t38);
    t32 = (t31 & t30);
    t46 = (t32 != 0);
    if (t46 > 0)
        goto LAB80;

LAB81:
LAB82:
LAB72:    goto LAB38;

LAB40:    xsi_set_current_line(75, ng0);

LAB43:    xsi_set_current_line(76, ng0);
    t36 = ((char*)((ng4)));
    t37 = (t0 + 1748);
    xsi_vlogvar_wait_assign_value(t37, t36, 0, 0, 1, 0LL);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1656);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB42;

LAB46:    *((unsigned int *)t13) = 1;
    goto LAB49;

LAB50:    xsi_set_current_line(89, ng0);
    t34 = ((char*)((ng1)));
    t36 = (t0 + 1656);
    xsi_vlogvar_wait_assign_value(t36, t34, 0, 0, 2, 0LL);
    goto LAB52;

LAB54:    t39 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB56;

LAB58:    t23 = *((unsigned int *)t40);
    t24 = *((unsigned int *)t43);
    *((unsigned int *)t40) = (t23 | t24);
    t44 = (t13 + 4);
    t45 = (t38 + 4);
    t25 = *((unsigned int *)t13);
    t28 = (~(t25));
    t29 = *((unsigned int *)t44);
    t30 = (~(t29));
    t31 = *((unsigned int *)t38);
    t32 = (~(t31));
    t46 = *((unsigned int *)t45);
    t47 = (~(t46));
    t35 = (t28 & t30);
    t48 = (t32 & t47);
    t49 = (~(t35));
    t50 = (~(t48));
    t51 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t51 & t49);
    t52 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t52 & t50);
    t53 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t53 & t49);
    t54 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t54 & t50);
    goto LAB60;

LAB61:    xsi_set_current_line(90, ng0);

LAB64:    xsi_set_current_line(91, ng0);
    t61 = ((char*)((ng7)));
    t62 = (t0 + 1748);
    xsi_vlogvar_wait_assign_value(t62, t61, 0, 0, 1, 0LL);
    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 1656);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB63;

LAB68:    t36 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB69;

LAB70:    xsi_set_current_line(97, ng0);

LAB73:    xsi_set_current_line(98, ng0);
    t39 = ((char*)((ng1)));
    t41 = (t0 + 1656);
    xsi_vlogvar_wait_assign_value(t41, t39, 0, 0, 2, 0LL);
    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1380);
    t5 = (t0 + 1380);
    t11 = (t5 + 44U);
    t12 = *((char **)t11);
    t26 = ((char*)((ng4)));
    t27 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t13, t38, t40, ((int*)(t12)), 2, t26, 32, 1, t27, 32, 1);
    t33 = (t13 + 4);
    t6 = *((unsigned int *)t33);
    t35 = (!(t6));
    t34 = (t38 + 4);
    t7 = *((unsigned int *)t34);
    t48 = (!(t7));
    t63 = (t35 && t48);
    t36 = (t40 + 4);
    t8 = *((unsigned int *)t36);
    t64 = (!(t8));
    t65 = (t63 && t64);
    if (t65 == 1)
        goto LAB74;

LAB75:    goto LAB72;

LAB74:    t9 = *((unsigned int *)t40);
    t66 = (t9 + 0);
    t10 = *((unsigned int *)t13);
    t14 = *((unsigned int *)t38);
    t67 = (t10 - t14);
    t68 = (t67 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, t66, *((unsigned int *)t38), t68, 0LL);
    goto LAB75;

LAB78:    t34 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB79;

LAB80:    xsi_set_current_line(101, ng0);

LAB83:    xsi_set_current_line(102, ng0);
    t37 = ((char*)((ng1)));
    t39 = (t0 + 1656);
    xsi_vlogvar_wait_assign_value(t39, t37, 0, 0, 2, 0LL);
    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1748);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB82;

}


extern void work_m_00000000001186611495_1456080808_init()
{
	static char *pe[] = {(void *)Cont_42_0,(void *)Cont_43_1,(void *)Initial_48_2,(void *)Always_56_3};
	xsi_register_didat("work_m_00000000001186611495_1456080808", "isim/mips_test_isim_beh.exe.sim/work/m_00000000001186611495_1456080808.didat");
	xsi_register_executes(pe);
}
