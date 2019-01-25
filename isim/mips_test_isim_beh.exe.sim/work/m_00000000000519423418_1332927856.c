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
static const char *ng0 = "G:/ComputerOrganization/CPU/Control.v";
static unsigned int ng1[] = {35U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {3U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {0U, 0U};
static unsigned int ng6[] = {9U, 0U};
static unsigned int ng7[] = {33U, 0U};
static unsigned int ng8[] = {13U, 0U};
static unsigned int ng9[] = {15U, 0U};



static void Cont_106_0(char *t0)
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

LAB0:    t1 = (t0 + 1628U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 600U);
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
    t12 = (t0 + 2324);
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
    xsi_driver_vfirst_trans(t12, 0, 5);
    t25 = (t0 + 2256);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Cont_107_1(char *t0)
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

LAB0:    t1 = (t0 + 1772U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(107, ng0);
    t2 = (t0 + 600U);
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
    t12 = (t0 + 2360);
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
    xsi_driver_vfirst_trans(t12, 0, 5);
    t25 = (t0 + 2264);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Cont_109_2(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t38[8];
    char t39[8];
    char t42[8];
    char t74[8];
    char t75[8];
    char t78[8];
    char t96[8];
    char t112[8];
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
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t40;
    char *t41;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
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
    char *t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t76;
    char *t77;
    char *t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    char *t93;
    char *t94;
    char *t95;
    char *t97;
    char *t98;
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
    unsigned int t109;
    unsigned int t110;
    char *t111;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    char *t116;
    char *t117;
    char *t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    char *t126;
    char *t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    int t136;
    int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    char *t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    char *t150;
    char *t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    char *t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    char *t160;
    char *t161;
    char *t162;
    char *t163;
    char *t164;
    char *t165;
    unsigned int t166;
    unsigned int t167;
    char *t168;
    unsigned int t169;
    unsigned int t170;
    char *t171;
    unsigned int t172;
    unsigned int t173;
    char *t174;

LAB0:    t1 = (t0 + 1916U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(109, ng0);
    t2 = (t0 + 876U);
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

LAB13:    t34 = *((unsigned int *)t4);
    t35 = (~(t34));
    t36 = *((unsigned int *)t29);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t38, 8);

LAB20:    t161 = (t0 + 2396);
    t162 = (t161 + 32U);
    t163 = *((char **)t162);
    t164 = (t163 + 40U);
    t165 = *((char **)t164);
    memset(t165, 0, 8);
    t166 = 3U;
    t167 = t166;
    t168 = (t3 + 4);
    t169 = *((unsigned int *)t3);
    t166 = (t166 & t169);
    t170 = *((unsigned int *)t168);
    t167 = (t167 & t170);
    t171 = (t165 + 4);
    t172 = *((unsigned int *)t165);
    *((unsigned int *)t165) = (t172 | t166);
    t173 = *((unsigned int *)t171);
    *((unsigned int *)t171) = (t173 | t167);
    xsi_driver_vfirst_trans(t161, 0, 1);
    t174 = (t0 + 2272);
    *((int *)t174) = 1;

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

LAB12:    t33 = ((char*)((ng2)));
    goto LAB13;

LAB14:    t40 = (t0 + 876U);
    t41 = *((char **)t40);
    t40 = ((char*)((ng3)));
    memset(t42, 0, 8);
    t43 = (t41 + 4);
    t44 = (t40 + 4);
    t45 = *((unsigned int *)t41);
    t46 = *((unsigned int *)t40);
    t47 = (t45 ^ t46);
    t48 = *((unsigned int *)t43);
    t49 = *((unsigned int *)t44);
    t50 = (t48 ^ t49);
    t51 = (t47 | t50);
    t52 = *((unsigned int *)t43);
    t53 = *((unsigned int *)t44);
    t54 = (t52 | t53);
    t55 = (~(t54));
    t56 = (t51 & t55);
    if (t56 != 0)
        goto LAB24;

LAB21:    if (t54 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t42) = 1;

LAB24:    memset(t39, 0, 8);
    t58 = (t42 + 4);
    t59 = *((unsigned int *)t58);
    t60 = (~(t59));
    t61 = *((unsigned int *)t42);
    t62 = (t61 & t60);
    t63 = (t62 & 1U);
    if (t63 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t58) != 0)
        goto LAB27;

LAB28:    t65 = (t39 + 4);
    t66 = *((unsigned int *)t39);
    t67 = *((unsigned int *)t65);
    t68 = (t66 || t67);
    if (t68 > 0)
        goto LAB29;

LAB30:    t70 = *((unsigned int *)t39);
    t71 = (~(t70));
    t72 = *((unsigned int *)t65);
    t73 = (t71 || t72);
    if (t73 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t65) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t39) > 0)
        goto LAB35;

LAB36:    memcpy(t38, t74, 8);

LAB37:    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 2, t33, 2, t38, 2);
    goto LAB20;

LAB18:    memcpy(t3, t33, 8);
    goto LAB20;

LAB23:    t57 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t39) = 1;
    goto LAB28;

LAB27:    t64 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t64) = 1;
    goto LAB28;

LAB29:    t69 = ((char*)((ng4)));
    goto LAB30;

LAB31:    t76 = (t0 + 876U);
    t77 = *((char **)t76);
    t76 = ((char*)((ng5)));
    memset(t78, 0, 8);
    t79 = (t77 + 4);
    t80 = (t76 + 4);
    t81 = *((unsigned int *)t77);
    t82 = *((unsigned int *)t76);
    t83 = (t81 ^ t82);
    t84 = *((unsigned int *)t79);
    t85 = *((unsigned int *)t80);
    t86 = (t84 ^ t85);
    t87 = (t83 | t86);
    t88 = *((unsigned int *)t79);
    t89 = *((unsigned int *)t80);
    t90 = (t88 | t89);
    t91 = (~(t90));
    t92 = (t87 & t91);
    if (t92 != 0)
        goto LAB41;

LAB38:    if (t90 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t78) = 1;

LAB41:    t94 = (t0 + 968U);
    t95 = *((char **)t94);
    t94 = ((char*)((ng6)));
    memset(t96, 0, 8);
    t97 = (t95 + 4);
    t98 = (t94 + 4);
    t99 = *((unsigned int *)t95);
    t100 = *((unsigned int *)t94);
    t101 = (t99 ^ t100);
    t102 = *((unsigned int *)t97);
    t103 = *((unsigned int *)t98);
    t104 = (t102 ^ t103);
    t105 = (t101 | t104);
    t106 = *((unsigned int *)t97);
    t107 = *((unsigned int *)t98);
    t108 = (t106 | t107);
    t109 = (~(t108));
    t110 = (t105 & t109);
    if (t110 != 0)
        goto LAB45;

LAB42:    if (t108 != 0)
        goto LAB44;

LAB43:    *((unsigned int *)t96) = 1;

LAB45:    t113 = *((unsigned int *)t78);
    t114 = *((unsigned int *)t96);
    t115 = (t113 & t114);
    *((unsigned int *)t112) = t115;
    t116 = (t78 + 4);
    t117 = (t96 + 4);
    t118 = (t112 + 4);
    t119 = *((unsigned int *)t116);
    t120 = *((unsigned int *)t117);
    t121 = (t119 | t120);
    *((unsigned int *)t118) = t121;
    t122 = *((unsigned int *)t118);
    t123 = (t122 != 0);
    if (t123 == 1)
        goto LAB46;

LAB47:
LAB48:    memset(t75, 0, 8);
    t144 = (t112 + 4);
    t145 = *((unsigned int *)t144);
    t146 = (~(t145));
    t147 = *((unsigned int *)t112);
    t148 = (t147 & t146);
    t149 = (t148 & 1U);
    if (t149 != 0)
        goto LAB49;

LAB50:    if (*((unsigned int *)t144) != 0)
        goto LAB51;

LAB52:    t151 = (t75 + 4);
    t152 = *((unsigned int *)t75);
    t153 = *((unsigned int *)t151);
    t154 = (t152 || t153);
    if (t154 > 0)
        goto LAB53;

LAB54:    t156 = *((unsigned int *)t75);
    t157 = (~(t156));
    t158 = *((unsigned int *)t151);
    t159 = (t157 || t158);
    if (t159 > 0)
        goto LAB55;

LAB56:    if (*((unsigned int *)t151) > 0)
        goto LAB57;

LAB58:    if (*((unsigned int *)t75) > 0)
        goto LAB59;

LAB60:    memcpy(t74, t160, 8);

LAB61:    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t38, 2, t69, 2, t74, 2);
    goto LAB37;

LAB35:    memcpy(t38, t69, 8);
    goto LAB37;

LAB40:    t93 = (t78 + 4);
    *((unsigned int *)t78) = 1;
    *((unsigned int *)t93) = 1;
    goto LAB41;

LAB44:    t111 = (t96 + 4);
    *((unsigned int *)t96) = 1;
    *((unsigned int *)t111) = 1;
    goto LAB45;

LAB46:    t124 = *((unsigned int *)t112);
    t125 = *((unsigned int *)t118);
    *((unsigned int *)t112) = (t124 | t125);
    t126 = (t78 + 4);
    t127 = (t96 + 4);
    t128 = *((unsigned int *)t78);
    t129 = (~(t128));
    t130 = *((unsigned int *)t126);
    t131 = (~(t130));
    t132 = *((unsigned int *)t96);
    t133 = (~(t132));
    t134 = *((unsigned int *)t127);
    t135 = (~(t134));
    t136 = (t129 & t131);
    t137 = (t133 & t135);
    t138 = (~(t136));
    t139 = (~(t137));
    t140 = *((unsigned int *)t118);
    *((unsigned int *)t118) = (t140 & t138);
    t141 = *((unsigned int *)t118);
    *((unsigned int *)t118) = (t141 & t139);
    t142 = *((unsigned int *)t112);
    *((unsigned int *)t112) = (t142 & t138);
    t143 = *((unsigned int *)t112);
    *((unsigned int *)t112) = (t143 & t139);
    goto LAB48;

LAB49:    *((unsigned int *)t75) = 1;
    goto LAB52;

LAB51:    t150 = (t75 + 4);
    *((unsigned int *)t75) = 1;
    *((unsigned int *)t150) = 1;
    goto LAB52;

LAB53:    t155 = ((char*)((ng4)));
    goto LAB54;

LAB55:    t160 = ((char*)((ng5)));
    goto LAB56;

LAB57:    xsi_vlog_unsigned_bit_combine(t74, 2, t155, 2, t160, 2);
    goto LAB61;

LAB59:    memcpy(t74, t155, 8);
    goto LAB61;

}

static void Cont_115_3(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t24[8];
    char t40[8];
    char t88[8];
    char t89[8];
    char t92[8];
    char t110[8];
    char t126[8];
    char t174[8];
    char t175[8];
    char t178[8];
    char t196[8];
    char t212[8];
    char t260[8];
    char t261[8];
    char t264[8];
    char t296[8];
    char t297[8];
    char t300[8];
    char t332[8];
    char t333[8];
    char t336[8];
    char t368[8];
    char t369[8];
    char t372[8];
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
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    char *t90;
    char *t91;
    char *t93;
    char *t94;
    unsigned int t95;
    unsigned int t96;
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
    char *t107;
    char *t108;
    char *t109;
    char *t111;
    char *t112;
    unsigned int t113;
    unsigned int t114;
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
    char *t125;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    char *t130;
    char *t131;
    char *t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    char *t140;
    char *t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    int t150;
    int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    char *t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    char *t164;
    char *t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    char *t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    char *t176;
    char *t177;
    char *t179;
    char *t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    unsigned int t192;
    char *t193;
    char *t194;
    char *t195;
    char *t197;
    char *t198;
    unsigned int t199;
    unsigned int t200;
    unsigned int t201;
    unsigned int t202;
    unsigned int t203;
    unsigned int t204;
    unsigned int t205;
    unsigned int t206;
    unsigned int t207;
    unsigned int t208;
    unsigned int t209;
    unsigned int t210;
    char *t211;
    unsigned int t213;
    unsigned int t214;
    unsigned int t215;
    char *t216;
    char *t217;
    char *t218;
    unsigned int t219;
    unsigned int t220;
    unsigned int t221;
    unsigned int t222;
    unsigned int t223;
    unsigned int t224;
    unsigned int t225;
    char *t226;
    char *t227;
    unsigned int t228;
    unsigned int t229;
    unsigned int t230;
    unsigned int t231;
    unsigned int t232;
    unsigned int t233;
    unsigned int t234;
    unsigned int t235;
    int t236;
    int t237;
    unsigned int t238;
    unsigned int t239;
    unsigned int t240;
    unsigned int t241;
    unsigned int t242;
    unsigned int t243;
    char *t244;
    unsigned int t245;
    unsigned int t246;
    unsigned int t247;
    unsigned int t248;
    unsigned int t249;
    char *t250;
    char *t251;
    unsigned int t252;
    unsigned int t253;
    unsigned int t254;
    char *t255;
    unsigned int t256;
    unsigned int t257;
    unsigned int t258;
    unsigned int t259;
    char *t262;
    char *t263;
    char *t265;
    char *t266;
    unsigned int t267;
    unsigned int t268;
    unsigned int t269;
    unsigned int t270;
    unsigned int t271;
    unsigned int t272;
    unsigned int t273;
    unsigned int t274;
    unsigned int t275;
    unsigned int t276;
    unsigned int t277;
    unsigned int t278;
    char *t279;
    char *t280;
    unsigned int t281;
    unsigned int t282;
    unsigned int t283;
    unsigned int t284;
    unsigned int t285;
    char *t286;
    char *t287;
    unsigned int t288;
    unsigned int t289;
    unsigned int t290;
    char *t291;
    unsigned int t292;
    unsigned int t293;
    unsigned int t294;
    unsigned int t295;
    char *t298;
    char *t299;
    char *t301;
    char *t302;
    unsigned int t303;
    unsigned int t304;
    unsigned int t305;
    unsigned int t306;
    unsigned int t307;
    unsigned int t308;
    unsigned int t309;
    unsigned int t310;
    unsigned int t311;
    unsigned int t312;
    unsigned int t313;
    unsigned int t314;
    char *t315;
    char *t316;
    unsigned int t317;
    unsigned int t318;
    unsigned int t319;
    unsigned int t320;
    unsigned int t321;
    char *t322;
    char *t323;
    unsigned int t324;
    unsigned int t325;
    unsigned int t326;
    char *t327;
    unsigned int t328;
    unsigned int t329;
    unsigned int t330;
    unsigned int t331;
    char *t334;
    char *t335;
    char *t337;
    char *t338;
    unsigned int t339;
    unsigned int t340;
    unsigned int t341;
    unsigned int t342;
    unsigned int t343;
    unsigned int t344;
    unsigned int t345;
    unsigned int t346;
    unsigned int t347;
    unsigned int t348;
    unsigned int t349;
    unsigned int t350;
    char *t351;
    char *t352;
    unsigned int t353;
    unsigned int t354;
    unsigned int t355;
    unsigned int t356;
    unsigned int t357;
    char *t358;
    char *t359;
    unsigned int t360;
    unsigned int t361;
    unsigned int t362;
    char *t363;
    unsigned int t364;
    unsigned int t365;
    unsigned int t366;
    unsigned int t367;
    char *t370;
    char *t371;
    char *t373;
    char *t374;
    unsigned int t375;
    unsigned int t376;
    unsigned int t377;
    unsigned int t378;
    unsigned int t379;
    unsigned int t380;
    unsigned int t381;
    unsigned int t382;
    unsigned int t383;
    unsigned int t384;
    unsigned int t385;
    unsigned int t386;
    char *t387;
    char *t388;
    unsigned int t389;
    unsigned int t390;
    unsigned int t391;
    unsigned int t392;
    unsigned int t393;
    char *t394;
    char *t395;
    unsigned int t396;
    unsigned int t397;
    unsigned int t398;
    char *t399;
    unsigned int t400;
    unsigned int t401;
    unsigned int t402;
    unsigned int t403;
    char *t404;
    char *t405;
    char *t406;
    char *t407;
    char *t408;
    char *t409;
    unsigned int t410;
    unsigned int t411;
    char *t412;
    unsigned int t413;
    unsigned int t414;
    char *t415;
    unsigned int t416;
    unsigned int t417;
    char *t418;

LAB0:    t1 = (t0 + 2060U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(115, ng0);
    t2 = (t0 + 876U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng5)));
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

LAB7:    t22 = (t0 + 968U);
    t23 = *((char **)t22);
    t22 = ((char*)((ng7)));
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

LAB20:    t84 = *((unsigned int *)t4);
    t85 = (~(t84));
    t86 = *((unsigned int *)t79);
    t87 = (t85 || t86);
    if (t87 > 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t79) > 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t4) > 0)
        goto LAB25;

LAB26:    memcpy(t3, t88, 8);

LAB27:    t405 = (t0 + 2432);
    t406 = (t405 + 32U);
    t407 = *((char **)t406);
    t408 = (t407 + 40U);
    t409 = *((char **)t408);
    memset(t409, 0, 8);
    t410 = 1U;
    t411 = t410;
    t412 = (t3 + 4);
    t413 = *((unsigned int *)t3);
    t410 = (t410 & t413);
    t414 = *((unsigned int *)t412);
    t411 = (t411 & t414);
    t415 = (t409 + 4);
    t416 = *((unsigned int *)t409);
    *((unsigned int *)t409) = (t416 | t410);
    t417 = *((unsigned int *)t415);
    *((unsigned int *)t415) = (t417 | t411);
    xsi_driver_vfirst_trans(t405, 0, 0);
    t418 = (t0 + 2280);
    *((int *)t418) = 1;

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

LAB19:    t83 = ((char*)((ng2)));
    goto LAB20;

LAB21:    t90 = (t0 + 876U);
    t91 = *((char **)t90);
    t90 = ((char*)((ng5)));
    memset(t92, 0, 8);
    t93 = (t91 + 4);
    t94 = (t90 + 4);
    t95 = *((unsigned int *)t91);
    t96 = *((unsigned int *)t90);
    t97 = (t95 ^ t96);
    t98 = *((unsigned int *)t93);
    t99 = *((unsigned int *)t94);
    t100 = (t98 ^ t99);
    t101 = (t97 | t100);
    t102 = *((unsigned int *)t93);
    t103 = *((unsigned int *)t94);
    t104 = (t102 | t103);
    t105 = (~(t104));
    t106 = (t101 & t105);
    if (t106 != 0)
        goto LAB31;

LAB28:    if (t104 != 0)
        goto LAB30;

LAB29:    *((unsigned int *)t92) = 1;

LAB31:    t108 = (t0 + 968U);
    t109 = *((char **)t108);
    t108 = ((char*)((ng1)));
    memset(t110, 0, 8);
    t111 = (t109 + 4);
    t112 = (t108 + 4);
    t113 = *((unsigned int *)t109);
    t114 = *((unsigned int *)t108);
    t115 = (t113 ^ t114);
    t116 = *((unsigned int *)t111);
    t117 = *((unsigned int *)t112);
    t118 = (t116 ^ t117);
    t119 = (t115 | t118);
    t120 = *((unsigned int *)t111);
    t121 = *((unsigned int *)t112);
    t122 = (t120 | t121);
    t123 = (~(t122));
    t124 = (t119 & t123);
    if (t124 != 0)
        goto LAB35;

LAB32:    if (t122 != 0)
        goto LAB34;

LAB33:    *((unsigned int *)t110) = 1;

LAB35:    t127 = *((unsigned int *)t92);
    t128 = *((unsigned int *)t110);
    t129 = (t127 & t128);
    *((unsigned int *)t126) = t129;
    t130 = (t92 + 4);
    t131 = (t110 + 4);
    t132 = (t126 + 4);
    t133 = *((unsigned int *)t130);
    t134 = *((unsigned int *)t131);
    t135 = (t133 | t134);
    *((unsigned int *)t132) = t135;
    t136 = *((unsigned int *)t132);
    t137 = (t136 != 0);
    if (t137 == 1)
        goto LAB36;

LAB37:
LAB38:    memset(t89, 0, 8);
    t158 = (t126 + 4);
    t159 = *((unsigned int *)t158);
    t160 = (~(t159));
    t161 = *((unsigned int *)t126);
    t162 = (t161 & t160);
    t163 = (t162 & 1U);
    if (t163 != 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t158) != 0)
        goto LAB41;

LAB42:    t165 = (t89 + 4);
    t166 = *((unsigned int *)t89);
    t167 = *((unsigned int *)t165);
    t168 = (t166 || t167);
    if (t168 > 0)
        goto LAB43;

LAB44:    t170 = *((unsigned int *)t89);
    t171 = (~(t170));
    t172 = *((unsigned int *)t165);
    t173 = (t171 || t172);
    if (t173 > 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t165) > 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t89) > 0)
        goto LAB49;

LAB50:    memcpy(t88, t174, 8);

LAB51:    goto LAB22;

LAB23:    xsi_vlog_unsigned_bit_combine(t3, 1, t83, 1, t88, 1);
    goto LAB27;

LAB25:    memcpy(t3, t83, 8);
    goto LAB27;

LAB30:    t107 = (t92 + 4);
    *((unsigned int *)t92) = 1;
    *((unsigned int *)t107) = 1;
    goto LAB31;

LAB34:    t125 = (t110 + 4);
    *((unsigned int *)t110) = 1;
    *((unsigned int *)t125) = 1;
    goto LAB35;

LAB36:    t138 = *((unsigned int *)t126);
    t139 = *((unsigned int *)t132);
    *((unsigned int *)t126) = (t138 | t139);
    t140 = (t92 + 4);
    t141 = (t110 + 4);
    t142 = *((unsigned int *)t92);
    t143 = (~(t142));
    t144 = *((unsigned int *)t140);
    t145 = (~(t144));
    t146 = *((unsigned int *)t110);
    t147 = (~(t146));
    t148 = *((unsigned int *)t141);
    t149 = (~(t148));
    t150 = (t143 & t145);
    t151 = (t147 & t149);
    t152 = (~(t150));
    t153 = (~(t151));
    t154 = *((unsigned int *)t132);
    *((unsigned int *)t132) = (t154 & t152);
    t155 = *((unsigned int *)t132);
    *((unsigned int *)t132) = (t155 & t153);
    t156 = *((unsigned int *)t126);
    *((unsigned int *)t126) = (t156 & t152);
    t157 = *((unsigned int *)t126);
    *((unsigned int *)t126) = (t157 & t153);
    goto LAB38;

LAB39:    *((unsigned int *)t89) = 1;
    goto LAB42;

LAB41:    t164 = (t89 + 4);
    *((unsigned int *)t89) = 1;
    *((unsigned int *)t164) = 1;
    goto LAB42;

LAB43:    t169 = ((char*)((ng2)));
    goto LAB44;

LAB45:    t176 = (t0 + 876U);
    t177 = *((char **)t176);
    t176 = ((char*)((ng5)));
    memset(t178, 0, 8);
    t179 = (t177 + 4);
    t180 = (t176 + 4);
    t181 = *((unsigned int *)t177);
    t182 = *((unsigned int *)t176);
    t183 = (t181 ^ t182);
    t184 = *((unsigned int *)t179);
    t185 = *((unsigned int *)t180);
    t186 = (t184 ^ t185);
    t187 = (t183 | t186);
    t188 = *((unsigned int *)t179);
    t189 = *((unsigned int *)t180);
    t190 = (t188 | t189);
    t191 = (~(t190));
    t192 = (t187 & t191);
    if (t192 != 0)
        goto LAB55;

LAB52:    if (t190 != 0)
        goto LAB54;

LAB53:    *((unsigned int *)t178) = 1;

LAB55:    t194 = (t0 + 968U);
    t195 = *((char **)t194);
    t194 = ((char*)((ng6)));
    memset(t196, 0, 8);
    t197 = (t195 + 4);
    t198 = (t194 + 4);
    t199 = *((unsigned int *)t195);
    t200 = *((unsigned int *)t194);
    t201 = (t199 ^ t200);
    t202 = *((unsigned int *)t197);
    t203 = *((unsigned int *)t198);
    t204 = (t202 ^ t203);
    t205 = (t201 | t204);
    t206 = *((unsigned int *)t197);
    t207 = *((unsigned int *)t198);
    t208 = (t206 | t207);
    t209 = (~(t208));
    t210 = (t205 & t209);
    if (t210 != 0)
        goto LAB59;

LAB56:    if (t208 != 0)
        goto LAB58;

LAB57:    *((unsigned int *)t196) = 1;

LAB59:    t213 = *((unsigned int *)t178);
    t214 = *((unsigned int *)t196);
    t215 = (t213 & t214);
    *((unsigned int *)t212) = t215;
    t216 = (t178 + 4);
    t217 = (t196 + 4);
    t218 = (t212 + 4);
    t219 = *((unsigned int *)t216);
    t220 = *((unsigned int *)t217);
    t221 = (t219 | t220);
    *((unsigned int *)t218) = t221;
    t222 = *((unsigned int *)t218);
    t223 = (t222 != 0);
    if (t223 == 1)
        goto LAB60;

LAB61:
LAB62:    memset(t175, 0, 8);
    t244 = (t212 + 4);
    t245 = *((unsigned int *)t244);
    t246 = (~(t245));
    t247 = *((unsigned int *)t212);
    t248 = (t247 & t246);
    t249 = (t248 & 1U);
    if (t249 != 0)
        goto LAB63;

LAB64:    if (*((unsigned int *)t244) != 0)
        goto LAB65;

LAB66:    t251 = (t175 + 4);
    t252 = *((unsigned int *)t175);
    t253 = *((unsigned int *)t251);
    t254 = (t252 || t253);
    if (t254 > 0)
        goto LAB67;

LAB68:    t256 = *((unsigned int *)t175);
    t257 = (~(t256));
    t258 = *((unsigned int *)t251);
    t259 = (t257 || t258);
    if (t259 > 0)
        goto LAB69;

LAB70:    if (*((unsigned int *)t251) > 0)
        goto LAB71;

LAB72:    if (*((unsigned int *)t175) > 0)
        goto LAB73;

LAB74:    memcpy(t174, t260, 8);

LAB75:    goto LAB46;

LAB47:    xsi_vlog_unsigned_bit_combine(t88, 1, t169, 1, t174, 1);
    goto LAB51;

LAB49:    memcpy(t88, t169, 8);
    goto LAB51;

LAB54:    t193 = (t178 + 4);
    *((unsigned int *)t178) = 1;
    *((unsigned int *)t193) = 1;
    goto LAB55;

LAB58:    t211 = (t196 + 4);
    *((unsigned int *)t196) = 1;
    *((unsigned int *)t211) = 1;
    goto LAB59;

LAB60:    t224 = *((unsigned int *)t212);
    t225 = *((unsigned int *)t218);
    *((unsigned int *)t212) = (t224 | t225);
    t226 = (t178 + 4);
    t227 = (t196 + 4);
    t228 = *((unsigned int *)t178);
    t229 = (~(t228));
    t230 = *((unsigned int *)t226);
    t231 = (~(t230));
    t232 = *((unsigned int *)t196);
    t233 = (~(t232));
    t234 = *((unsigned int *)t227);
    t235 = (~(t234));
    t236 = (t229 & t231);
    t237 = (t233 & t235);
    t238 = (~(t236));
    t239 = (~(t237));
    t240 = *((unsigned int *)t218);
    *((unsigned int *)t218) = (t240 & t238);
    t241 = *((unsigned int *)t218);
    *((unsigned int *)t218) = (t241 & t239);
    t242 = *((unsigned int *)t212);
    *((unsigned int *)t212) = (t242 & t238);
    t243 = *((unsigned int *)t212);
    *((unsigned int *)t212) = (t243 & t239);
    goto LAB62;

LAB63:    *((unsigned int *)t175) = 1;
    goto LAB66;

LAB65:    t250 = (t175 + 4);
    *((unsigned int *)t175) = 1;
    *((unsigned int *)t250) = 1;
    goto LAB66;

LAB67:    t255 = ((char*)((ng2)));
    goto LAB68;

LAB69:    t262 = (t0 + 876U);
    t263 = *((char **)t262);
    t262 = ((char*)((ng8)));
    memset(t264, 0, 8);
    t265 = (t263 + 4);
    t266 = (t262 + 4);
    t267 = *((unsigned int *)t263);
    t268 = *((unsigned int *)t262);
    t269 = (t267 ^ t268);
    t270 = *((unsigned int *)t265);
    t271 = *((unsigned int *)t266);
    t272 = (t270 ^ t271);
    t273 = (t269 | t272);
    t274 = *((unsigned int *)t265);
    t275 = *((unsigned int *)t266);
    t276 = (t274 | t275);
    t277 = (~(t276));
    t278 = (t273 & t277);
    if (t278 != 0)
        goto LAB79;

LAB76:    if (t276 != 0)
        goto LAB78;

LAB77:    *((unsigned int *)t264) = 1;

LAB79:    memset(t261, 0, 8);
    t280 = (t264 + 4);
    t281 = *((unsigned int *)t280);
    t282 = (~(t281));
    t283 = *((unsigned int *)t264);
    t284 = (t283 & t282);
    t285 = (t284 & 1U);
    if (t285 != 0)
        goto LAB80;

LAB81:    if (*((unsigned int *)t280) != 0)
        goto LAB82;

LAB83:    t287 = (t261 + 4);
    t288 = *((unsigned int *)t261);
    t289 = *((unsigned int *)t287);
    t290 = (t288 || t289);
    if (t290 > 0)
        goto LAB84;

LAB85:    t292 = *((unsigned int *)t261);
    t293 = (~(t292));
    t294 = *((unsigned int *)t287);
    t295 = (t293 || t294);
    if (t295 > 0)
        goto LAB86;

LAB87:    if (*((unsigned int *)t287) > 0)
        goto LAB88;

LAB89:    if (*((unsigned int *)t261) > 0)
        goto LAB90;

LAB91:    memcpy(t260, t296, 8);

LAB92:    goto LAB70;

LAB71:    xsi_vlog_unsigned_bit_combine(t174, 1, t255, 1, t260, 1);
    goto LAB75;

LAB73:    memcpy(t174, t255, 8);
    goto LAB75;

LAB78:    t279 = (t264 + 4);
    *((unsigned int *)t264) = 1;
    *((unsigned int *)t279) = 1;
    goto LAB79;

LAB80:    *((unsigned int *)t261) = 1;
    goto LAB83;

LAB82:    t286 = (t261 + 4);
    *((unsigned int *)t261) = 1;
    *((unsigned int *)t286) = 1;
    goto LAB83;

LAB84:    t291 = ((char*)((ng2)));
    goto LAB85;

LAB86:    t298 = (t0 + 876U);
    t299 = *((char **)t298);
    t298 = ((char*)((ng1)));
    memset(t300, 0, 8);
    t301 = (t299 + 4);
    t302 = (t298 + 4);
    t303 = *((unsigned int *)t299);
    t304 = *((unsigned int *)t298);
    t305 = (t303 ^ t304);
    t306 = *((unsigned int *)t301);
    t307 = *((unsigned int *)t302);
    t308 = (t306 ^ t307);
    t309 = (t305 | t308);
    t310 = *((unsigned int *)t301);
    t311 = *((unsigned int *)t302);
    t312 = (t310 | t311);
    t313 = (~(t312));
    t314 = (t309 & t313);
    if (t314 != 0)
        goto LAB96;

LAB93:    if (t312 != 0)
        goto LAB95;

LAB94:    *((unsigned int *)t300) = 1;

LAB96:    memset(t297, 0, 8);
    t316 = (t300 + 4);
    t317 = *((unsigned int *)t316);
    t318 = (~(t317));
    t319 = *((unsigned int *)t300);
    t320 = (t319 & t318);
    t321 = (t320 & 1U);
    if (t321 != 0)
        goto LAB97;

LAB98:    if (*((unsigned int *)t316) != 0)
        goto LAB99;

LAB100:    t323 = (t297 + 4);
    t324 = *((unsigned int *)t297);
    t325 = *((unsigned int *)t323);
    t326 = (t324 || t325);
    if (t326 > 0)
        goto LAB101;

LAB102:    t328 = *((unsigned int *)t297);
    t329 = (~(t328));
    t330 = *((unsigned int *)t323);
    t331 = (t329 || t330);
    if (t331 > 0)
        goto LAB103;

LAB104:    if (*((unsigned int *)t323) > 0)
        goto LAB105;

LAB106:    if (*((unsigned int *)t297) > 0)
        goto LAB107;

LAB108:    memcpy(t296, t332, 8);

LAB109:    goto LAB87;

LAB88:    xsi_vlog_unsigned_bit_combine(t260, 1, t291, 1, t296, 1);
    goto LAB92;

LAB90:    memcpy(t260, t291, 8);
    goto LAB92;

LAB95:    t315 = (t300 + 4);
    *((unsigned int *)t300) = 1;
    *((unsigned int *)t315) = 1;
    goto LAB96;

LAB97:    *((unsigned int *)t297) = 1;
    goto LAB100;

LAB99:    t322 = (t297 + 4);
    *((unsigned int *)t297) = 1;
    *((unsigned int *)t322) = 1;
    goto LAB100;

LAB101:    t327 = ((char*)((ng2)));
    goto LAB102;

LAB103:    t334 = (t0 + 876U);
    t335 = *((char **)t334);
    t334 = ((char*)((ng9)));
    memset(t336, 0, 8);
    t337 = (t335 + 4);
    t338 = (t334 + 4);
    t339 = *((unsigned int *)t335);
    t340 = *((unsigned int *)t334);
    t341 = (t339 ^ t340);
    t342 = *((unsigned int *)t337);
    t343 = *((unsigned int *)t338);
    t344 = (t342 ^ t343);
    t345 = (t341 | t344);
    t346 = *((unsigned int *)t337);
    t347 = *((unsigned int *)t338);
    t348 = (t346 | t347);
    t349 = (~(t348));
    t350 = (t345 & t349);
    if (t350 != 0)
        goto LAB113;

LAB110:    if (t348 != 0)
        goto LAB112;

LAB111:    *((unsigned int *)t336) = 1;

LAB113:    memset(t333, 0, 8);
    t352 = (t336 + 4);
    t353 = *((unsigned int *)t352);
    t354 = (~(t353));
    t355 = *((unsigned int *)t336);
    t356 = (t355 & t354);
    t357 = (t356 & 1U);
    if (t357 != 0)
        goto LAB114;

LAB115:    if (*((unsigned int *)t352) != 0)
        goto LAB116;

LAB117:    t359 = (t333 + 4);
    t360 = *((unsigned int *)t333);
    t361 = *((unsigned int *)t359);
    t362 = (t360 || t361);
    if (t362 > 0)
        goto LAB118;

LAB119:    t364 = *((unsigned int *)t333);
    t365 = (~(t364));
    t366 = *((unsigned int *)t359);
    t367 = (t365 || t366);
    if (t367 > 0)
        goto LAB120;

LAB121:    if (*((unsigned int *)t359) > 0)
        goto LAB122;

LAB123:    if (*((unsigned int *)t333) > 0)
        goto LAB124;

LAB125:    memcpy(t332, t368, 8);

LAB126:    goto LAB104;

LAB105:    xsi_vlog_unsigned_bit_combine(t296, 1, t327, 1, t332, 1);
    goto LAB109;

LAB107:    memcpy(t296, t327, 8);
    goto LAB109;

LAB112:    t351 = (t336 + 4);
    *((unsigned int *)t336) = 1;
    *((unsigned int *)t351) = 1;
    goto LAB113;

LAB114:    *((unsigned int *)t333) = 1;
    goto LAB117;

LAB116:    t358 = (t333 + 4);
    *((unsigned int *)t333) = 1;
    *((unsigned int *)t358) = 1;
    goto LAB117;

LAB118:    t363 = ((char*)((ng2)));
    goto LAB119;

LAB120:    t370 = (t0 + 876U);
    t371 = *((char **)t370);
    t370 = ((char*)((ng3)));
    memset(t372, 0, 8);
    t373 = (t371 + 4);
    t374 = (t370 + 4);
    t375 = *((unsigned int *)t371);
    t376 = *((unsigned int *)t370);
    t377 = (t375 ^ t376);
    t378 = *((unsigned int *)t373);
    t379 = *((unsigned int *)t374);
    t380 = (t378 ^ t379);
    t381 = (t377 | t380);
    t382 = *((unsigned int *)t373);
    t383 = *((unsigned int *)t374);
    t384 = (t382 | t383);
    t385 = (~(t384));
    t386 = (t381 & t385);
    if (t386 != 0)
        goto LAB130;

LAB127:    if (t384 != 0)
        goto LAB129;

LAB128:    *((unsigned int *)t372) = 1;

LAB130:    memset(t369, 0, 8);
    t388 = (t372 + 4);
    t389 = *((unsigned int *)t388);
    t390 = (~(t389));
    t391 = *((unsigned int *)t372);
    t392 = (t391 & t390);
    t393 = (t392 & 1U);
    if (t393 != 0)
        goto LAB131;

LAB132:    if (*((unsigned int *)t388) != 0)
        goto LAB133;

LAB134:    t395 = (t369 + 4);
    t396 = *((unsigned int *)t369);
    t397 = *((unsigned int *)t395);
    t398 = (t396 || t397);
    if (t398 > 0)
        goto LAB135;

LAB136:    t400 = *((unsigned int *)t369);
    t401 = (~(t400));
    t402 = *((unsigned int *)t395);
    t403 = (t401 || t402);
    if (t403 > 0)
        goto LAB137;

LAB138:    if (*((unsigned int *)t395) > 0)
        goto LAB139;

LAB140:    if (*((unsigned int *)t369) > 0)
        goto LAB141;

LAB142:    memcpy(t368, t404, 8);

LAB143:    goto LAB121;

LAB122:    xsi_vlog_unsigned_bit_combine(t332, 1, t363, 1, t368, 1);
    goto LAB126;

LAB124:    memcpy(t332, t363, 8);
    goto LAB126;

LAB129:    t387 = (t372 + 4);
    *((unsigned int *)t372) = 1;
    *((unsigned int *)t387) = 1;
    goto LAB130;

LAB131:    *((unsigned int *)t369) = 1;
    goto LAB134;

LAB133:    t394 = (t369 + 4);
    *((unsigned int *)t369) = 1;
    *((unsigned int *)t394) = 1;
    goto LAB134;

LAB135:    t399 = ((char*)((ng2)));
    goto LAB136;

LAB137:    t404 = ((char*)((ng5)));
    goto LAB138;

LAB139:    xsi_vlog_unsigned_bit_combine(t368, 1, t399, 1, t404, 1);
    goto LAB143;

LAB141:    memcpy(t368, t399, 8);
    goto LAB143;

}


extern void work_m_00000000000519423418_1332927856_init()
{
	static char *pe[] = {(void *)Cont_106_0,(void *)Cont_107_1,(void *)Cont_109_2,(void *)Cont_115_3};
	xsi_register_didat("work_m_00000000000519423418_1332927856", "isim/mips_test_isim_beh.exe.sim/work/m_00000000000519423418_1332927856.didat");
	xsi_register_executes(pe);
}
