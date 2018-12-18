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
static const char *ng0 = "G:/ComputerOrganization/CPU/MultModule.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {16U, 0U};
static unsigned int ng3[] = {18U, 0U};
static int ng4[] = {0, 0};
static int ng5[] = {1, 0};
static unsigned int ng6[] = {17U, 0U};
static unsigned int ng7[] = {19U, 0U};
static unsigned int ng8[] = {24U, 0U};
static unsigned int ng9[] = {25U, 0U};
static unsigned int ng10[] = {26U, 0U};
static unsigned int ng11[] = {27U, 0U};
static unsigned int ng12[] = {1U, 0U};
static unsigned int ng13[] = {5U, 0U};
static unsigned int ng14[] = {10U, 0U};



static void NetDecl_49_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 3008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 784U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 26);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 26);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 63U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 63U);
    t12 = (t0 + 4000);
    t13 = (t12 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 63U;
    t18 = t17;
    t19 = (t3 + 4);
    t20 = *((unsigned int *)t3);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 5U);
    t25 = (t0 + 3924);
    *((int *)t25) = 1;

LAB1:    return;
}

static void NetDecl_50_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 3152U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 784U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 63U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 63U);
    t12 = (t0 + 4036);
    t13 = (t12 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 63U;
    t18 = t17;
    t19 = (t3 + 4);
    t20 = *((unsigned int *)t3);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 5U);
    t25 = (t0 + 3932);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Cont_52_2(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t24[8];
    char t40[8];
    char t90[8];
    char t91[8];
    char t94[8];
    char t112[8];
    char t128[8];
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
    char *t23;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    char *t46;
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
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    int t64;
    int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    char *t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    char *t84;
    char *t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t92;
    char *t93;
    char *t95;
    char *t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    char *t109;
    char *t110;
    char *t111;
    char *t113;
    char *t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    char *t127;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    char *t132;
    char *t133;
    char *t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    char *t142;
    char *t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    int t152;
    int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    char *t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    char *t166;
    char *t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    char *t171;
    char *t172;
    char *t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    char *t178;
    char *t179;
    char *t180;
    char *t181;
    char *t182;
    char *t183;
    char *t184;

LAB0:    t1 = (t0 + 3296U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1428U);
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

LAB7:    t22 = (t0 + 1520U);
    t23 = *((char **)t22);
    t22 = ((char*)((ng2)));
    memset(t24, 0, 8);
    t25 = (t23 + 4);
    t26 = (t22 + 4);
    t27 = *((unsigned int *)t23);
    t28 = *((unsigned int *)t22);
    t29 = (t27 ^ t28);
    t30 = *((unsigned int *)t25);
    t31 = *((unsigned int *)t26);
    t32 = (t30 ^ t31);
    t33 = (t29 | t32);
    t34 = *((unsigned int *)t25);
    t35 = *((unsigned int *)t26);
    t36 = (t34 | t35);
    t37 = (~(t36));
    t38 = (t33 & t37);
    if (t38 != 0)
        goto LAB11;

LAB8:    if (t36 != 0)
        goto LAB10;

LAB9:    *((unsigned int *)t24) = 1;

LAB11:    t41 = *((unsigned int *)t6);
    t42 = *((unsigned int *)t24);
    t43 = (t41 & t42);
    *((unsigned int *)t40) = t43;
    t44 = (t6 + 4);
    t45 = (t24 + 4);
    t46 = (t40 + 4);
    t47 = *((unsigned int *)t44);
    t48 = *((unsigned int *)t45);
    t49 = (t47 | t48);
    *((unsigned int *)t46) = t49;
    t50 = *((unsigned int *)t46);
    t51 = (t50 != 0);
    if (t51 == 1)
        goto LAB12;

LAB13:
LAB14:    memset(t4, 0, 8);
    t72 = (t40 + 4);
    t73 = *((unsigned int *)t72);
    t74 = (~(t73));
    t75 = *((unsigned int *)t40);
    t76 = (t75 & t74);
    t77 = (t76 & 1U);
    if (t77 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t72) != 0)
        goto LAB17;

LAB18:    t79 = (t4 + 4);
    t80 = *((unsigned int *)t4);
    t81 = *((unsigned int *)t79);
    t82 = (t80 || t81);
    if (t82 > 0)
        goto LAB19;

LAB20:    t86 = *((unsigned int *)t4);
    t87 = (~(t86));
    t88 = *((unsigned int *)t79);
    t89 = (t87 || t88);
    if (t89 > 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t79) > 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t4) > 0)
        goto LAB25;

LAB26:    memcpy(t3, t90, 8);

LAB27:    t179 = (t0 + 4072);
    t180 = (t179 + 32U);
    t181 = *((char **)t180);
    t182 = (t181 + 40U);
    t183 = *((char **)t182);
    memcpy(t183, t3, 8);
    xsi_driver_vfirst_trans(t179, 0, 31);
    t184 = (t0 + 3940);
    *((int *)t184) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB10:    t39 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB11;

LAB12:    t52 = *((unsigned int *)t40);
    t53 = *((unsigned int *)t46);
    *((unsigned int *)t40) = (t52 | t53);
    t54 = (t6 + 4);
    t55 = (t24 + 4);
    t56 = *((unsigned int *)t6);
    t57 = (~(t56));
    t58 = *((unsigned int *)t54);
    t59 = (~(t58));
    t60 = *((unsigned int *)t24);
    t61 = (~(t60));
    t62 = *((unsigned int *)t55);
    t63 = (~(t62));
    t64 = (t57 & t59);
    t65 = (t61 & t63);
    t66 = (~(t64));
    t67 = (~(t65));
    t68 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t68 & t66);
    t69 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t69 & t67);
    t70 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t70 & t66);
    t71 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t71 & t67);
    goto LAB14;

LAB15:    *((unsigned int *)t4) = 1;
    goto LAB18;

LAB17:    t78 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t78) = 1;
    goto LAB18;

LAB19:    t83 = (t0 + 1932);
    t84 = (t83 + 36U);
    t85 = *((char **)t84);
    goto LAB20;

LAB21:    t92 = (t0 + 1428U);
    t93 = *((char **)t92);
    t92 = ((char*)((ng1)));
    memset(t94, 0, 8);
    t95 = (t93 + 4);
    t96 = (t92 + 4);
    t97 = *((unsigned int *)t93);
    t98 = *((unsigned int *)t92);
    t99 = (t97 ^ t98);
    t100 = *((unsigned int *)t95);
    t101 = *((unsigned int *)t96);
    t102 = (t100 ^ t101);
    t103 = (t99 | t102);
    t104 = *((unsigned int *)t95);
    t105 = *((unsigned int *)t96);
    t106 = (t104 | t105);
    t107 = (~(t106));
    t108 = (t103 & t107);
    if (t108 != 0)
        goto LAB31;

LAB28:    if (t106 != 0)
        goto LAB30;

LAB29:    *((unsigned int *)t94) = 1;

LAB31:    t110 = (t0 + 1520U);
    t111 = *((char **)t110);
    t110 = ((char*)((ng3)));
    memset(t112, 0, 8);
    t113 = (t111 + 4);
    t114 = (t110 + 4);
    t115 = *((unsigned int *)t111);
    t116 = *((unsigned int *)t110);
    t117 = (t115 ^ t116);
    t118 = *((unsigned int *)t113);
    t119 = *((unsigned int *)t114);
    t120 = (t118 ^ t119);
    t121 = (t117 | t120);
    t122 = *((unsigned int *)t113);
    t123 = *((unsigned int *)t114);
    t124 = (t122 | t123);
    t125 = (~(t124));
    t126 = (t121 & t125);
    if (t126 != 0)
        goto LAB35;

LAB32:    if (t124 != 0)
        goto LAB34;

LAB33:    *((unsigned int *)t112) = 1;

LAB35:    t129 = *((unsigned int *)t94);
    t130 = *((unsigned int *)t112);
    t131 = (t129 & t130);
    *((unsigned int *)t128) = t131;
    t132 = (t94 + 4);
    t133 = (t112 + 4);
    t134 = (t128 + 4);
    t135 = *((unsigned int *)t132);
    t136 = *((unsigned int *)t133);
    t137 = (t135 | t136);
    *((unsigned int *)t134) = t137;
    t138 = *((unsigned int *)t134);
    t139 = (t138 != 0);
    if (t139 == 1)
        goto LAB36;

LAB37:
LAB38:    memset(t91, 0, 8);
    t160 = (t128 + 4);
    t161 = *((unsigned int *)t160);
    t162 = (~(t161));
    t163 = *((unsigned int *)t128);
    t164 = (t163 & t162);
    t165 = (t164 & 1U);
    if (t165 != 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t160) != 0)
        goto LAB41;

LAB42:    t167 = (t91 + 4);
    t168 = *((unsigned int *)t91);
    t169 = *((unsigned int *)t167);
    t170 = (t168 || t169);
    if (t170 > 0)
        goto LAB43;

LAB44:    t174 = *((unsigned int *)t91);
    t175 = (~(t174));
    t176 = *((unsigned int *)t167);
    t177 = (t175 || t176);
    if (t177 > 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t167) > 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t91) > 0)
        goto LAB49;

LAB50:    memcpy(t90, t178, 8);

LAB51:    goto LAB22;

LAB23:    xsi_vlog_unsigned_bit_combine(t3, 32, t85, 32, t90, 32);
    goto LAB27;

LAB25:    memcpy(t3, t85, 8);
    goto LAB27;

LAB30:    t109 = (t94 + 4);
    *((unsigned int *)t94) = 1;
    *((unsigned int *)t109) = 1;
    goto LAB31;

LAB34:    t127 = (t112 + 4);
    *((unsigned int *)t112) = 1;
    *((unsigned int *)t127) = 1;
    goto LAB35;

LAB36:    t140 = *((unsigned int *)t128);
    t141 = *((unsigned int *)t134);
    *((unsigned int *)t128) = (t140 | t141);
    t142 = (t94 + 4);
    t143 = (t112 + 4);
    t144 = *((unsigned int *)t94);
    t145 = (~(t144));
    t146 = *((unsigned int *)t142);
    t147 = (~(t146));
    t148 = *((unsigned int *)t112);
    t149 = (~(t148));
    t150 = *((unsigned int *)t143);
    t151 = (~(t150));
    t152 = (t145 & t147);
    t153 = (t149 & t151);
    t154 = (~(t152));
    t155 = (~(t153));
    t156 = *((unsigned int *)t134);
    *((unsigned int *)t134) = (t156 & t154);
    t157 = *((unsigned int *)t134);
    *((unsigned int *)t134) = (t157 & t155);
    t158 = *((unsigned int *)t128);
    *((unsigned int *)t128) = (t158 & t154);
    t159 = *((unsigned int *)t128);
    *((unsigned int *)t128) = (t159 & t155);
    goto LAB38;

LAB39:    *((unsigned int *)t91) = 1;
    goto LAB42;

LAB41:    t166 = (t91 + 4);
    *((unsigned int *)t91) = 1;
    *((unsigned int *)t166) = 1;
    goto LAB42;

LAB43:    t171 = (t0 + 2024);
    t172 = (t171 + 36U);
    t173 = *((char **)t172);
    goto LAB44;

LAB45:    t178 = ((char*)((ng1)));
    goto LAB46;

LAB47:    xsi_vlog_unsigned_bit_combine(t90, 32, t173, 32, t178, 32);
    goto LAB51;

LAB49:    memcpy(t90, t173, 8);
    goto LAB51;

}

static void Initial_56_3(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(56, ng0);

LAB2:    xsi_set_current_line(57, ng0);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 1932);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(58, ng0);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 2024);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(59, ng0);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 1748);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(60, ng0);
    t1 = ((char*)((ng5)));
    t2 = (t0 + 1840);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 4);
    xsi_set_current_line(61, ng0);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 2116);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(62, ng0);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 2208);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(63, ng0);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 2300);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(64, ng0);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 2392);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(65, ng0);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 2484);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void Always_68_4(char *t0)
{
    char t13[8];
    char t29[8];
    char t45[8];
    char t85[16];
    char t86[16];
    char t87[16];
    char t88[8];
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
    char *t28;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;
    char *t51;
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
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    int t69;
    int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    char *t84;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;
    char *t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    char *t103;
    char *t104;
    char *t105;
    char *t106;

LAB0:    t1 = (t0 + 3584U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 3948);
    *((int *)t2) = 1;
    t3 = (t0 + 3612);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(68, ng0);

LAB5:    xsi_set_current_line(69, ng0);
    t4 = (t0 + 1932);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = (t0 + 2392);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 32, 0LL);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 2024);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2484);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 692U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t8 = *((unsigned int *)t2);
    t9 = (~(t8));
    t10 = *((unsigned int *)t3);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 1244U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t8 = *((unsigned int *)t2);
    t9 = (~(t8));
    t10 = *((unsigned int *)t3);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 1152U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t8 = *((unsigned int *)t2);
    t9 = (~(t8));
    t10 = *((unsigned int *)t3);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(86, ng0);
    t4 = (t0 + 1428U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t13, 0, 8);
    t6 = (t5 + 4);
    t7 = (t4 + 4);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t4);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t7);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t6);
    t22 = *((unsigned int *)t7);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB20;

LAB17:    if (t23 != 0)
        goto LAB19;

LAB18:    *((unsigned int *)t13) = 1;

LAB20:    t27 = (t0 + 1520U);
    t28 = *((char **)t27);
    t27 = ((char*)((ng6)));
    memset(t29, 0, 8);
    t30 = (t28 + 4);
    t31 = (t27 + 4);
    t32 = *((unsigned int *)t28);
    t33 = *((unsigned int *)t27);
    t34 = (t32 ^ t33);
    t35 = *((unsigned int *)t30);
    t36 = *((unsigned int *)t31);
    t37 = (t35 ^ t36);
    t38 = (t34 | t37);
    t39 = *((unsigned int *)t30);
    t40 = *((unsigned int *)t31);
    t41 = (t39 | t40);
    t42 = (~(t41));
    t43 = (t38 & t42);
    if (t43 != 0)
        goto LAB24;

LAB21:    if (t41 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t29) = 1;

LAB24:    t46 = *((unsigned int *)t13);
    t47 = *((unsigned int *)t29);
    t48 = (t46 & t47);
    *((unsigned int *)t45) = t48;
    t49 = (t13 + 4);
    t50 = (t29 + 4);
    t51 = (t45 + 4);
    t52 = *((unsigned int *)t49);
    t53 = *((unsigned int *)t50);
    t54 = (t52 | t53);
    *((unsigned int *)t51) = t54;
    t55 = *((unsigned int *)t51);
    t56 = (t55 != 0);
    if (t56 == 1)
        goto LAB25;

LAB26:
LAB27:    t77 = (t45 + 4);
    t78 = *((unsigned int *)t77);
    t79 = (~(t78));
    t80 = *((unsigned int *)t45);
    t81 = (t80 & t79);
    t82 = (t81 != 0);
    if (t82 > 0)
        goto LAB28;

LAB29:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 1428U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t8 = *((unsigned int *)t3);
    t9 = *((unsigned int *)t2);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t14 = (t11 ^ t12);
    t15 = (t10 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB34;

LAB31:    if (t18 != 0)
        goto LAB33;

LAB32:    *((unsigned int *)t13) = 1;

LAB34:    t7 = (t0 + 1520U);
    t26 = *((char **)t7);
    t7 = ((char*)((ng7)));
    memset(t29, 0, 8);
    t27 = (t26 + 4);
    t28 = (t7 + 4);
    t21 = *((unsigned int *)t26);
    t22 = *((unsigned int *)t7);
    t23 = (t21 ^ t22);
    t24 = *((unsigned int *)t27);
    t25 = *((unsigned int *)t28);
    t32 = (t24 ^ t25);
    t33 = (t23 | t32);
    t34 = *((unsigned int *)t27);
    t35 = *((unsigned int *)t28);
    t36 = (t34 | t35);
    t37 = (~(t36));
    t38 = (t33 & t37);
    if (t38 != 0)
        goto LAB38;

LAB35:    if (t36 != 0)
        goto LAB37;

LAB36:    *((unsigned int *)t29) = 1;

LAB38:    t39 = *((unsigned int *)t13);
    t40 = *((unsigned int *)t29);
    t41 = (t39 & t40);
    *((unsigned int *)t45) = t41;
    t31 = (t13 + 4);
    t44 = (t29 + 4);
    t49 = (t45 + 4);
    t42 = *((unsigned int *)t31);
    t43 = *((unsigned int *)t44);
    t46 = (t42 | t43);
    *((unsigned int *)t49) = t46;
    t47 = *((unsigned int *)t49);
    t48 = (t47 != 0);
    if (t48 == 1)
        goto LAB39;

LAB40:
LAB41:    t59 = (t45 + 4);
    t72 = *((unsigned int *)t59);
    t73 = (~(t72));
    t74 = *((unsigned int *)t45);
    t75 = (t74 & t73);
    t76 = (t75 != 0);
    if (t76 > 0)
        goto LAB42;

LAB43:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 1060U);
    t3 = *((char **)t2);
    t2 = (t0 + 1748);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    memset(t13, 0, 8);
    t6 = (t5 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (~(t8));
    t10 = *((unsigned int *)t5);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB48;

LAB46:    if (*((unsigned int *)t6) == 0)
        goto LAB45;

LAB47:    t7 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t7) = 1;

LAB48:    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t13);
    t16 = (t14 & t15);
    *((unsigned int *)t29) = t16;
    t26 = (t3 + 4);
    t27 = (t13 + 4);
    t28 = (t29 + 4);
    t17 = *((unsigned int *)t26);
    t18 = *((unsigned int *)t27);
    t19 = (t17 | t18);
    *((unsigned int *)t28) = t19;
    t20 = *((unsigned int *)t28);
    t21 = (t20 != 0);
    if (t21 == 1)
        goto LAB49;

LAB50:
LAB51:    t44 = (t29 + 4);
    t46 = *((unsigned int *)t44);
    t47 = (~(t46));
    t48 = *((unsigned int *)t29);
    t52 = (t48 & t47);
    t53 = (t52 != 0);
    if (t53 > 0)
        goto LAB52;

LAB53:
LAB54:
LAB44:
LAB30:
LAB16:
LAB12:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(71, ng0);

LAB9:    xsi_set_current_line(72, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 1932);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2024);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2116);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB8;

LAB10:    xsi_set_current_line(78, ng0);

LAB13:    xsi_set_current_line(81, ng0);
    t4 = (t0 + 2392);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = (t0 + 1932);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 32, 0LL);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 2484);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2024);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    goto LAB12;

LAB14:    goto LAB16;

LAB19:    t26 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB20;

LAB23:    t44 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB24;

LAB25:    t57 = *((unsigned int *)t45);
    t58 = *((unsigned int *)t51);
    *((unsigned int *)t45) = (t57 | t58);
    t59 = (t13 + 4);
    t60 = (t29 + 4);
    t61 = *((unsigned int *)t13);
    t62 = (~(t61));
    t63 = *((unsigned int *)t59);
    t64 = (~(t63));
    t65 = *((unsigned int *)t29);
    t66 = (~(t65));
    t67 = *((unsigned int *)t60);
    t68 = (~(t67));
    t69 = (t62 & t64);
    t70 = (t66 & t68);
    t71 = (~(t69));
    t72 = (~(t70));
    t73 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t73 & t71);
    t74 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t74 & t72);
    t75 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t75 & t71);
    t76 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t76 & t72);
    goto LAB27;

LAB28:    xsi_set_current_line(87, ng0);
    t83 = (t0 + 876U);
    t84 = *((char **)t83);
    t83 = (t0 + 1932);
    xsi_vlogvar_wait_assign_value(t83, t84, 0, 0, 32, 0LL);
    goto LAB30;

LAB33:    t6 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB34;

LAB37:    t30 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB38;

LAB39:    t52 = *((unsigned int *)t45);
    t53 = *((unsigned int *)t49);
    *((unsigned int *)t45) = (t52 | t53);
    t50 = (t13 + 4);
    t51 = (t29 + 4);
    t54 = *((unsigned int *)t13);
    t55 = (~(t54));
    t56 = *((unsigned int *)t50);
    t57 = (~(t56));
    t58 = *((unsigned int *)t29);
    t61 = (~(t58));
    t62 = *((unsigned int *)t51);
    t63 = (~(t62));
    t69 = (t55 & t57);
    t70 = (t61 & t63);
    t64 = (~(t69));
    t65 = (~(t70));
    t66 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t66 & t64);
    t67 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t67 & t65);
    t68 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t68 & t64);
    t71 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t71 & t65);
    goto LAB41;

LAB42:    xsi_set_current_line(89, ng0);
    t60 = (t0 + 876U);
    t77 = *((char **)t60);
    t60 = (t0 + 2024);
    xsi_vlogvar_wait_assign_value(t60, t77, 0, 0, 32, 0LL);
    goto LAB44;

LAB45:    *((unsigned int *)t13) = 1;
    goto LAB48;

LAB49:    t22 = *((unsigned int *)t29);
    t23 = *((unsigned int *)t28);
    *((unsigned int *)t29) = (t22 | t23);
    t30 = (t3 + 4);
    t31 = (t13 + 4);
    t24 = *((unsigned int *)t3);
    t25 = (~(t24));
    t32 = *((unsigned int *)t30);
    t33 = (~(t32));
    t34 = *((unsigned int *)t13);
    t35 = (~(t34));
    t36 = *((unsigned int *)t31);
    t37 = (~(t36));
    t69 = (t25 & t33);
    t70 = (t35 & t37);
    t38 = (~(t69));
    t39 = (~(t70));
    t40 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t40 & t38);
    t41 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t41 & t39);
    t42 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t42 & t38);
    t43 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t43 & t39);
    goto LAB51;

LAB52:    xsi_set_current_line(91, ng0);

LAB55:    xsi_set_current_line(92, ng0);
    t49 = ((char*)((ng5)));
    t50 = (t0 + 1748);
    xsi_vlogvar_wait_assign_value(t50, t49, 0, 0, 1, 0LL);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 1428U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t8 = *((unsigned int *)t3);
    t9 = *((unsigned int *)t2);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t14 = (t11 ^ t12);
    t15 = (t10 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB59;

LAB56:    if (t18 != 0)
        goto LAB58;

LAB57:    *((unsigned int *)t13) = 1;

LAB59:    t7 = (t0 + 1520U);
    t26 = *((char **)t7);
    t7 = ((char*)((ng8)));
    memset(t29, 0, 8);
    t27 = (t26 + 4);
    t28 = (t7 + 4);
    t21 = *((unsigned int *)t26);
    t22 = *((unsigned int *)t7);
    t23 = (t21 ^ t22);
    t24 = *((unsigned int *)t27);
    t25 = *((unsigned int *)t28);
    t32 = (t24 ^ t25);
    t33 = (t23 | t32);
    t34 = *((unsigned int *)t27);
    t35 = *((unsigned int *)t28);
    t36 = (t34 | t35);
    t37 = (~(t36));
    t38 = (t33 & t37);
    if (t38 != 0)
        goto LAB63;

LAB60:    if (t36 != 0)
        goto LAB62;

LAB61:    *((unsigned int *)t29) = 1;

LAB63:    t39 = *((unsigned int *)t13);
    t40 = *((unsigned int *)t29);
    t41 = (t39 & t40);
    *((unsigned int *)t45) = t41;
    t31 = (t13 + 4);
    t44 = (t29 + 4);
    t49 = (t45 + 4);
    t42 = *((unsigned int *)t31);
    t43 = *((unsigned int *)t44);
    t46 = (t42 | t43);
    *((unsigned int *)t49) = t46;
    t47 = *((unsigned int *)t49);
    t48 = (t47 != 0);
    if (t48 == 1)
        goto LAB64;

LAB65:
LAB66:    t59 = (t45 + 4);
    t72 = *((unsigned int *)t59);
    t73 = (~(t72));
    t74 = *((unsigned int *)t45);
    t75 = (t74 & t73);
    t76 = (t75 != 0);
    if (t76 > 0)
        goto LAB67;

LAB68:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 1428U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t8 = *((unsigned int *)t3);
    t9 = *((unsigned int *)t2);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t14 = (t11 ^ t12);
    t15 = (t10 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB74;

LAB71:    if (t18 != 0)
        goto LAB73;

LAB72:    *((unsigned int *)t13) = 1;

LAB74:    t7 = (t0 + 1520U);
    t26 = *((char **)t7);
    t7 = ((char*)((ng9)));
    memset(t29, 0, 8);
    t27 = (t26 + 4);
    t28 = (t7 + 4);
    t21 = *((unsigned int *)t26);
    t22 = *((unsigned int *)t7);
    t23 = (t21 ^ t22);
    t24 = *((unsigned int *)t27);
    t25 = *((unsigned int *)t28);
    t32 = (t24 ^ t25);
    t33 = (t23 | t32);
    t34 = *((unsigned int *)t27);
    t35 = *((unsigned int *)t28);
    t36 = (t34 | t35);
    t37 = (~(t36));
    t38 = (t33 & t37);
    if (t38 != 0)
        goto LAB78;

LAB75:    if (t36 != 0)
        goto LAB77;

LAB76:    *((unsigned int *)t29) = 1;

LAB78:    t39 = *((unsigned int *)t13);
    t40 = *((unsigned int *)t29);
    t41 = (t39 & t40);
    *((unsigned int *)t45) = t41;
    t31 = (t13 + 4);
    t44 = (t29 + 4);
    t49 = (t45 + 4);
    t42 = *((unsigned int *)t31);
    t43 = *((unsigned int *)t44);
    t46 = (t42 | t43);
    *((unsigned int *)t49) = t46;
    t47 = *((unsigned int *)t49);
    t48 = (t47 != 0);
    if (t48 == 1)
        goto LAB79;

LAB80:
LAB81:    t59 = (t45 + 4);
    t72 = *((unsigned int *)t59);
    t73 = (~(t72));
    t74 = *((unsigned int *)t45);
    t75 = (t74 & t73);
    t76 = (t75 != 0);
    if (t76 > 0)
        goto LAB82;

LAB83:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 1428U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t8 = *((unsigned int *)t3);
    t9 = *((unsigned int *)t2);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t14 = (t11 ^ t12);
    t15 = (t10 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB89;

LAB86:    if (t18 != 0)
        goto LAB88;

LAB87:    *((unsigned int *)t13) = 1;

LAB89:    t7 = (t0 + 1520U);
    t26 = *((char **)t7);
    t7 = ((char*)((ng10)));
    memset(t29, 0, 8);
    t27 = (t26 + 4);
    t28 = (t7 + 4);
    t21 = *((unsigned int *)t26);
    t22 = *((unsigned int *)t7);
    t23 = (t21 ^ t22);
    t24 = *((unsigned int *)t27);
    t25 = *((unsigned int *)t28);
    t32 = (t24 ^ t25);
    t33 = (t23 | t32);
    t34 = *((unsigned int *)t27);
    t35 = *((unsigned int *)t28);
    t36 = (t34 | t35);
    t37 = (~(t36));
    t38 = (t33 & t37);
    if (t38 != 0)
        goto LAB93;

LAB90:    if (t36 != 0)
        goto LAB92;

LAB91:    *((unsigned int *)t29) = 1;

LAB93:    t39 = *((unsigned int *)t13);
    t40 = *((unsigned int *)t29);
    t41 = (t39 & t40);
    *((unsigned int *)t45) = t41;
    t31 = (t13 + 4);
    t44 = (t29 + 4);
    t49 = (t45 + 4);
    t42 = *((unsigned int *)t31);
    t43 = *((unsigned int *)t44);
    t46 = (t42 | t43);
    *((unsigned int *)t49) = t46;
    t47 = *((unsigned int *)t49);
    t48 = (t47 != 0);
    if (t48 == 1)
        goto LAB94;

LAB95:
LAB96:    t59 = (t45 + 4);
    t72 = *((unsigned int *)t59);
    t73 = (~(t72));
    t74 = *((unsigned int *)t45);
    t75 = (t74 & t73);
    t76 = (t75 != 0);
    if (t76 > 0)
        goto LAB97;

LAB98:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 1428U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t8 = *((unsigned int *)t3);
    t9 = *((unsigned int *)t2);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t14 = (t11 ^ t12);
    t15 = (t10 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB113;

LAB110:    if (t18 != 0)
        goto LAB112;

LAB111:    *((unsigned int *)t13) = 1;

LAB113:    t7 = (t0 + 1520U);
    t26 = *((char **)t7);
    t7 = ((char*)((ng11)));
    memset(t29, 0, 8);
    t27 = (t26 + 4);
    t28 = (t7 + 4);
    t21 = *((unsigned int *)t26);
    t22 = *((unsigned int *)t7);
    t23 = (t21 ^ t22);
    t24 = *((unsigned int *)t27);
    t25 = *((unsigned int *)t28);
    t32 = (t24 ^ t25);
    t33 = (t23 | t32);
    t34 = *((unsigned int *)t27);
    t35 = *((unsigned int *)t28);
    t36 = (t34 | t35);
    t37 = (~(t36));
    t38 = (t33 & t37);
    if (t38 != 0)
        goto LAB117;

LAB114:    if (t36 != 0)
        goto LAB116;

LAB115:    *((unsigned int *)t29) = 1;

LAB117:    t39 = *((unsigned int *)t13);
    t40 = *((unsigned int *)t29);
    t41 = (t39 & t40);
    *((unsigned int *)t45) = t41;
    t31 = (t13 + 4);
    t44 = (t29 + 4);
    t49 = (t45 + 4);
    t42 = *((unsigned int *)t31);
    t43 = *((unsigned int *)t44);
    t46 = (t42 | t43);
    *((unsigned int *)t49) = t46;
    t47 = *((unsigned int *)t49);
    t48 = (t47 != 0);
    if (t48 == 1)
        goto LAB118;

LAB119:
LAB120:    t59 = (t45 + 4);
    t72 = *((unsigned int *)t59);
    t73 = (~(t72));
    t74 = *((unsigned int *)t45);
    t75 = (t74 & t73);
    t76 = (t75 != 0);
    if (t76 > 0)
        goto LAB121;

LAB122:
LAB123:
LAB99:
LAB84:
LAB69:    goto LAB54;

LAB58:    t6 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB59;

LAB62:    t30 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB63;

LAB64:    t52 = *((unsigned int *)t45);
    t53 = *((unsigned int *)t49);
    *((unsigned int *)t45) = (t52 | t53);
    t50 = (t13 + 4);
    t51 = (t29 + 4);
    t54 = *((unsigned int *)t13);
    t55 = (~(t54));
    t56 = *((unsigned int *)t50);
    t57 = (~(t56));
    t58 = *((unsigned int *)t29);
    t61 = (~(t58));
    t62 = *((unsigned int *)t51);
    t63 = (~(t62));
    t69 = (t55 & t57);
    t70 = (t61 & t63);
    t64 = (~(t69));
    t65 = (~(t70));
    t66 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t66 & t64);
    t67 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t67 & t65);
    t68 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t68 & t64);
    t71 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t71 & t65);
    goto LAB66;

LAB67:    xsi_set_current_line(93, ng0);

LAB70:    xsi_set_current_line(94, ng0);
    t60 = (t0 + 876U);
    t77 = *((char **)t60);
    xsi_vlogtype_sign_extend(t85, 64, t77, 32);
    t60 = (t0 + 968U);
    t83 = *((char **)t60);
    xsi_vlogtype_sign_extend(t86, 64, t83, 32);
    xsi_vlog_signed_multiply(t87, 64, t85, 64, t86, 64);
    t60 = (t0 + 2208);
    xsi_vlogvar_assign_value(t60, t87, 0, 0, 32);
    t84 = (t0 + 2116);
    xsi_vlogvar_assign_value(t84, t87, 32, 0, 32);
    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2300);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB69;

LAB73:    t6 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB74;

LAB77:    t30 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB78;

LAB79:    t52 = *((unsigned int *)t45);
    t53 = *((unsigned int *)t49);
    *((unsigned int *)t45) = (t52 | t53);
    t50 = (t13 + 4);
    t51 = (t29 + 4);
    t54 = *((unsigned int *)t13);
    t55 = (~(t54));
    t56 = *((unsigned int *)t50);
    t57 = (~(t56));
    t58 = *((unsigned int *)t29);
    t61 = (~(t58));
    t62 = *((unsigned int *)t51);
    t63 = (~(t62));
    t69 = (t55 & t57);
    t70 = (t61 & t63);
    t64 = (~(t69));
    t65 = (~(t70));
    t66 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t66 & t64);
    t67 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t67 & t65);
    t68 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t68 & t64);
    t71 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t71 & t65);
    goto LAB81;

LAB82:    xsi_set_current_line(97, ng0);

LAB85:    xsi_set_current_line(98, ng0);
    t60 = (t0 + 876U);
    t77 = *((char **)t60);
    t60 = (t0 + 968U);
    t83 = *((char **)t60);
    xsi_vlog_unsigned_multiply(t85, 64, t77, 32, t83, 32);
    t60 = (t0 + 2208);
    xsi_vlogvar_assign_value(t60, t85, 0, 0, 32);
    t84 = (t0 + 2116);
    xsi_vlogvar_assign_value(t84, t85, 32, 0, 32);
    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2300);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB84;

LAB88:    t6 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB89;

LAB92:    t30 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB93;

LAB94:    t52 = *((unsigned int *)t45);
    t53 = *((unsigned int *)t49);
    *((unsigned int *)t45) = (t52 | t53);
    t50 = (t13 + 4);
    t51 = (t29 + 4);
    t54 = *((unsigned int *)t13);
    t55 = (~(t54));
    t56 = *((unsigned int *)t50);
    t57 = (~(t56));
    t58 = *((unsigned int *)t29);
    t61 = (~(t58));
    t62 = *((unsigned int *)t51);
    t63 = (~(t62));
    t69 = (t55 & t57);
    t70 = (t61 & t63);
    t64 = (~(t69));
    t65 = (~(t70));
    t66 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t66 & t64);
    t67 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t67 & t65);
    t68 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t68 & t64);
    t71 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t71 & t65);
    goto LAB96;

LAB97:    xsi_set_current_line(101, ng0);

LAB100:    xsi_set_current_line(102, ng0);
    t60 = (t0 + 968U);
    t77 = *((char **)t60);
    t60 = ((char*)((ng1)));
    memset(t88, 0, 8);
    t83 = (t77 + 4);
    t84 = (t60 + 4);
    t78 = *((unsigned int *)t77);
    t79 = *((unsigned int *)t60);
    t80 = (t78 ^ t79);
    t81 = *((unsigned int *)t83);
    t82 = *((unsigned int *)t84);
    t89 = (t81 ^ t82);
    t90 = (t80 | t89);
    t91 = *((unsigned int *)t83);
    t92 = *((unsigned int *)t84);
    t93 = (t91 | t92);
    t94 = (~(t93));
    t95 = (t90 & t94);
    if (t95 != 0)
        goto LAB104;

LAB101:    if (t93 != 0)
        goto LAB103;

LAB102:    *((unsigned int *)t88) = 1;

LAB104:    t97 = (t88 + 4);
    t98 = *((unsigned int *)t97);
    t99 = (~(t98));
    t100 = *((unsigned int *)t88);
    t101 = (t100 & t99);
    t102 = (t101 != 0);
    if (t102 > 0)
        goto LAB105;

LAB106:    xsi_set_current_line(106, ng0);

LAB109:    xsi_set_current_line(107, ng0);
    t2 = (t0 + 876U);
    t3 = *((char **)t2);
    t2 = (t0 + 968U);
    t4 = *((char **)t2);
    memset(t45, 0, 8);
    xsi_vlog_signed_divide(t45, 32, t3, 32, t4, 32);
    t2 = (t0 + 2208);
    xsi_vlogvar_assign_value(t2, t45, 0, 0, 32);
    xsi_set_current_line(108, ng0);
    t2 = (t0 + 876U);
    t3 = *((char **)t2);
    t2 = (t0 + 968U);
    t4 = *((char **)t2);
    memset(t45, 0, 8);
    xsi_vlog_signed_mod(t45, 32, t3, 32, t4, 32);
    t2 = (t0 + 2116);
    xsi_vlogvar_assign_value(t2, t45, 0, 0, 32);

LAB107:    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2300);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB99;

LAB103:    t96 = (t88 + 4);
    *((unsigned int *)t88) = 1;
    *((unsigned int *)t96) = 1;
    goto LAB104;

LAB105:    xsi_set_current_line(102, ng0);

LAB108:    xsi_set_current_line(103, ng0);
    t103 = (t0 + 2024);
    t104 = (t103 + 36U);
    t105 = *((char **)t104);
    t106 = (t0 + 2208);
    xsi_vlogvar_assign_value(t106, t105, 0, 0, 32);
    xsi_set_current_line(104, ng0);
    t2 = (t0 + 1932);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2116);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    goto LAB107;

LAB112:    t6 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB113;

LAB116:    t30 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB117;

LAB118:    t52 = *((unsigned int *)t45);
    t53 = *((unsigned int *)t49);
    *((unsigned int *)t45) = (t52 | t53);
    t50 = (t13 + 4);
    t51 = (t29 + 4);
    t54 = *((unsigned int *)t13);
    t55 = (~(t54));
    t56 = *((unsigned int *)t50);
    t57 = (~(t56));
    t58 = *((unsigned int *)t29);
    t61 = (~(t58));
    t62 = *((unsigned int *)t51);
    t63 = (~(t62));
    t69 = (t55 & t57);
    t70 = (t61 & t63);
    t64 = (~(t69));
    t65 = (~(t70));
    t66 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t66 & t64);
    t67 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t67 & t65);
    t68 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t68 & t64);
    t71 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t71 & t65);
    goto LAB120;

LAB121:    xsi_set_current_line(112, ng0);

LAB124:    xsi_set_current_line(113, ng0);
    t60 = (t0 + 968U);
    t77 = *((char **)t60);
    t60 = ((char*)((ng1)));
    memset(t88, 0, 8);
    t83 = (t77 + 4);
    t84 = (t60 + 4);
    t78 = *((unsigned int *)t77);
    t79 = *((unsigned int *)t60);
    t80 = (t78 ^ t79);
    t81 = *((unsigned int *)t83);
    t82 = *((unsigned int *)t84);
    t89 = (t81 ^ t82);
    t90 = (t80 | t89);
    t91 = *((unsigned int *)t83);
    t92 = *((unsigned int *)t84);
    t93 = (t91 | t92);
    t94 = (~(t93));
    t95 = (t90 & t94);
    if (t95 != 0)
        goto LAB128;

LAB125:    if (t93 != 0)
        goto LAB127;

LAB126:    *((unsigned int *)t88) = 1;

LAB128:    t97 = (t88 + 4);
    t98 = *((unsigned int *)t97);
    t99 = (~(t98));
    t100 = *((unsigned int *)t88);
    t101 = (t100 & t99);
    t102 = (t101 != 0);
    if (t102 > 0)
        goto LAB129;

LAB130:    xsi_set_current_line(117, ng0);

LAB133:    xsi_set_current_line(118, ng0);
    t2 = (t0 + 876U);
    t3 = *((char **)t2);
    t2 = (t0 + 968U);
    t4 = *((char **)t2);
    memset(t13, 0, 8);
    xsi_vlog_unsigned_divide(t13, 32, t3, 32, t4, 32);
    t2 = (t0 + 2208);
    xsi_vlogvar_assign_value(t2, t13, 0, 0, 32);
    xsi_set_current_line(119, ng0);
    t2 = (t0 + 876U);
    t3 = *((char **)t2);
    t2 = (t0 + 968U);
    t4 = *((char **)t2);
    memset(t13, 0, 8);
    xsi_vlog_unsigned_mod(t13, 32, t3, 32, t4, 32);
    t2 = (t0 + 2116);
    xsi_vlogvar_assign_value(t2, t13, 0, 0, 32);

LAB131:    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2300);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB123;

LAB127:    t96 = (t88 + 4);
    *((unsigned int *)t88) = 1;
    *((unsigned int *)t96) = 1;
    goto LAB128;

LAB129:    xsi_set_current_line(113, ng0);

LAB132:    xsi_set_current_line(114, ng0);
    t103 = (t0 + 2024);
    t104 = (t103 + 36U);
    t105 = *((char **)t104);
    t106 = (t0 + 2208);
    xsi_vlogvar_assign_value(t106, t105, 0, 0, 32);
    xsi_set_current_line(115, ng0);
    t2 = (t0 + 1932);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2116);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    goto LAB131;

}

static void Always_126_5(char *t0)
{
    char t15[8];
    char t24[8];
    char t33[8];
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
    char *t13;
    char *t14;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    int t57;
    int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    char *t72;

LAB0:    t1 = (t0 + 3728U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(126, ng0);
    t2 = (t0 + 3956);
    *((int *)t2) = 1;
    t3 = (t0 + 3756);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(126, ng0);

LAB5:    xsi_set_current_line(127, ng0);
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

LAB7:    xsi_set_current_line(132, ng0);
    t2 = (t0 + 1244U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(137, ng0);
    t2 = (t0 + 1748);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB14;

LAB15:
LAB16:
LAB12:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(127, ng0);

LAB9:    xsi_set_current_line(128, ng0);
    t11 = ((char*)((ng5)));
    t12 = (t0 + 1840);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 4, 0LL);
    xsi_set_current_line(129, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1748);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(130, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2300);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB8;

LAB10:    xsi_set_current_line(132, ng0);

LAB13:    xsi_set_current_line(133, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t0 + 1840);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);
    xsi_set_current_line(134, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1748);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(135, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2300);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB12;

LAB14:    xsi_set_current_line(137, ng0);

LAB17:    xsi_set_current_line(138, ng0);
    t11 = (t0 + 1840);
    t12 = (t11 + 36U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng12)));
    memset(t15, 0, 8);
    xsi_vlog_unsigned_add(t15, 4, t13, 4, t14, 4);
    t16 = (t0 + 1840);
    xsi_vlogvar_wait_assign_value(t16, t15, 0, 0, 4, 0LL);
    xsi_set_current_line(139, ng0);
    t2 = (t0 + 1840);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng13)));
    memset(t15, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t12);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB21;

LAB18:    if (t21 != 0)
        goto LAB20;

LAB19:    *((unsigned int *)t15) = 1;

LAB21:    t14 = (t0 + 2300);
    t16 = (t14 + 36U);
    t25 = *((char **)t16);
    memset(t24, 0, 8);
    t26 = (t25 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (~(t27));
    t29 = *((unsigned int *)t25);
    t30 = (t29 & t28);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB25;

LAB23:    if (*((unsigned int *)t26) == 0)
        goto LAB22;

LAB24:    t32 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t32) = 1;

LAB25:    t34 = *((unsigned int *)t15);
    t35 = *((unsigned int *)t24);
    t36 = (t34 & t35);
    *((unsigned int *)t33) = t36;
    t37 = (t15 + 4);
    t38 = (t24 + 4);
    t39 = (t33 + 4);
    t40 = *((unsigned int *)t37);
    t41 = *((unsigned int *)t38);
    t42 = (t40 | t41);
    *((unsigned int *)t39) = t42;
    t43 = *((unsigned int *)t39);
    t44 = (t43 != 0);
    if (t44 == 1)
        goto LAB26;

LAB27:
LAB28:    t65 = (t33 + 4);
    t66 = *((unsigned int *)t65);
    t67 = (~(t66));
    t68 = *((unsigned int *)t33);
    t69 = (t68 & t67);
    t70 = (t69 != 0);
    if (t70 > 0)
        goto LAB29;

LAB30:    xsi_set_current_line(145, ng0);
    t2 = (t0 + 1840);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng14)));
    memset(t15, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t12);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB36;

LAB33:    if (t21 != 0)
        goto LAB35;

LAB34:    *((unsigned int *)t15) = 1;

LAB36:    t14 = (t0 + 2300);
    t16 = (t14 + 36U);
    t25 = *((char **)t16);
    t27 = *((unsigned int *)t15);
    t28 = *((unsigned int *)t25);
    t29 = (t27 & t28);
    *((unsigned int *)t24) = t29;
    t26 = (t15 + 4);
    t32 = (t25 + 4);
    t37 = (t24 + 4);
    t30 = *((unsigned int *)t26);
    t31 = *((unsigned int *)t32);
    t34 = (t30 | t31);
    *((unsigned int *)t37) = t34;
    t35 = *((unsigned int *)t37);
    t36 = (t35 != 0);
    if (t36 == 1)
        goto LAB37;

LAB38:
LAB39:    t47 = (t24 + 4);
    t60 = *((unsigned int *)t47);
    t61 = (~(t60));
    t62 = *((unsigned int *)t24);
    t63 = (t62 & t61);
    t64 = (t63 != 0);
    if (t64 > 0)
        goto LAB40;

LAB41:
LAB42:
LAB31:    goto LAB16;

LAB20:    t13 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB21;

LAB22:    *((unsigned int *)t24) = 1;
    goto LAB25;

LAB26:    t45 = *((unsigned int *)t33);
    t46 = *((unsigned int *)t39);
    *((unsigned int *)t33) = (t45 | t46);
    t47 = (t15 + 4);
    t48 = (t24 + 4);
    t49 = *((unsigned int *)t15);
    t50 = (~(t49));
    t51 = *((unsigned int *)t47);
    t52 = (~(t51));
    t53 = *((unsigned int *)t24);
    t54 = (~(t53));
    t55 = *((unsigned int *)t48);
    t56 = (~(t55));
    t57 = (t50 & t52);
    t58 = (t54 & t56);
    t59 = (~(t57));
    t60 = (~(t58));
    t61 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t61 & t59);
    t62 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t62 & t60);
    t63 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t63 & t59);
    t64 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t64 & t60);
    goto LAB28;

LAB29:    xsi_set_current_line(139, ng0);

LAB32:    xsi_set_current_line(140, ng0);
    t71 = ((char*)((ng5)));
    t72 = (t0 + 1840);
    xsi_vlogvar_wait_assign_value(t72, t71, 0, 0, 4, 0LL);
    xsi_set_current_line(141, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1748);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(142, ng0);
    t2 = (t0 + 2116);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1932);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(143, ng0);
    t2 = (t0 + 2208);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2024);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    goto LAB31;

LAB35:    t13 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB36;

LAB37:    t40 = *((unsigned int *)t24);
    t41 = *((unsigned int *)t37);
    *((unsigned int *)t24) = (t40 | t41);
    t38 = (t15 + 4);
    t39 = (t25 + 4);
    t42 = *((unsigned int *)t15);
    t43 = (~(t42));
    t44 = *((unsigned int *)t38);
    t45 = (~(t44));
    t46 = *((unsigned int *)t25);
    t49 = (~(t46));
    t50 = *((unsigned int *)t39);
    t51 = (~(t50));
    t57 = (t43 & t45);
    t58 = (t49 & t51);
    t52 = (~(t57));
    t53 = (~(t58));
    t54 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t54 & t52);
    t55 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t55 & t53);
    t56 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t56 & t52);
    t59 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t59 & t53);
    goto LAB39;

LAB40:    xsi_set_current_line(145, ng0);

LAB43:    xsi_set_current_line(146, ng0);
    t48 = ((char*)((ng5)));
    t65 = (t0 + 1840);
    xsi_vlogvar_wait_assign_value(t65, t48, 0, 0, 4, 0LL);
    xsi_set_current_line(147, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1748);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(148, ng0);
    t2 = (t0 + 2116);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1932);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(149, ng0);
    t2 = (t0 + 2208);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2024);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(150, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2300);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB42;

}


extern void work_m_00000000002842317864_3816511794_init()
{
	static char *pe[] = {(void *)NetDecl_49_0,(void *)NetDecl_50_1,(void *)Cont_52_2,(void *)Initial_56_3,(void *)Always_68_4,(void *)Always_126_5};
	xsi_register_didat("work_m_00000000002842317864_3816511794", "isim/mips_test_isim_beh.exe.sim/work/m_00000000002842317864_3816511794.didat");
	xsi_register_executes(pe);
}
