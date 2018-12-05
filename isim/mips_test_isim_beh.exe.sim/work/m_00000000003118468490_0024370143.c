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
static unsigned int ng2[] = {2U, 0U};
static unsigned int ng3[] = {43U, 0U};
static unsigned int ng4[] = {4U, 0U};
static unsigned int ng5[] = {3U, 0U};
static unsigned int ng6[] = {15U, 0U};
static unsigned int ng7[] = {1U, 0U};
static unsigned int ng8[] = {0U, 0U};
static int ng9[] = {1, 0};
static unsigned int ng10[] = {8U, 0U};
static unsigned int ng11[] = {9U, 0U};



static void Cont_30_0(char *t0)
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

LAB0:    t1 = (t0 + 1720U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 692U);
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
    t12 = (t0 + 2416);
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
    t25 = (t0 + 2348);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Cont_31_1(char *t0)
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

LAB0:    t1 = (t0 + 1864U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 692U);
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
    t12 = (t0 + 2452);
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
    t25 = (t0 + 2356);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Cont_33_2(char *t0)
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
    char t110[8];
    char t111[8];
    char t114[8];
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
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    char *t100;
    char *t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    char *t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    char *t112;
    char *t113;
    char *t115;
    char *t116;
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
    unsigned int t127;
    unsigned int t128;
    char *t129;
    char *t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    char *t136;
    char *t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    char *t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    char *t146;
    char *t147;
    char *t148;
    char *t149;
    char *t150;
    char *t151;
    unsigned int t152;
    unsigned int t153;
    char *t154;
    unsigned int t155;
    unsigned int t156;
    char *t157;
    unsigned int t158;
    unsigned int t159;
    char *t160;

LAB0:    t1 = (t0 + 2008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 968U);
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

LAB20:    t147 = (t0 + 2488);
    t148 = (t147 + 32U);
    t149 = *((char **)t148);
    t150 = (t149 + 40U);
    t151 = *((char **)t150);
    memset(t151, 0, 8);
    t152 = 3U;
    t153 = t152;
    t154 = (t3 + 4);
    t155 = *((unsigned int *)t3);
    t152 = (t152 & t155);
    t156 = *((unsigned int *)t154);
    t153 = (t153 & t156);
    t157 = (t151 + 4);
    t158 = *((unsigned int *)t151);
    *((unsigned int *)t151) = (t158 | t152);
    t159 = *((unsigned int *)t157);
    *((unsigned int *)t157) = (t159 | t153);
    xsi_driver_vfirst_trans(t147, 0, 1);
    t160 = (t0 + 2364);
    *((int *)t160) = 1;

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

LAB14:    t40 = (t0 + 968U);
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

LAB29:    t69 = ((char*)((ng2)));
    goto LAB30;

LAB31:    t76 = (t0 + 968U);
    t77 = *((char **)t76);
    t76 = ((char*)((ng4)));
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

LAB41:    memset(t75, 0, 8);
    t94 = (t78 + 4);
    t95 = *((unsigned int *)t94);
    t96 = (~(t95));
    t97 = *((unsigned int *)t78);
    t98 = (t97 & t96);
    t99 = (t98 & 1U);
    if (t99 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t94) != 0)
        goto LAB44;

LAB45:    t101 = (t75 + 4);
    t102 = *((unsigned int *)t75);
    t103 = *((unsigned int *)t101);
    t104 = (t102 || t103);
    if (t104 > 0)
        goto LAB46;

LAB47:    t106 = *((unsigned int *)t75);
    t107 = (~(t106));
    t108 = *((unsigned int *)t101);
    t109 = (t107 || t108);
    if (t109 > 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t101) > 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t75) > 0)
        goto LAB52;

LAB53:    memcpy(t74, t110, 8);

LAB54:    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t38, 2, t69, 2, t74, 2);
    goto LAB37;

LAB35:    memcpy(t38, t69, 8);
    goto LAB37;

LAB40:    t93 = (t78 + 4);
    *((unsigned int *)t78) = 1;
    *((unsigned int *)t93) = 1;
    goto LAB41;

LAB42:    *((unsigned int *)t75) = 1;
    goto LAB45;

LAB44:    t100 = (t75 + 4);
    *((unsigned int *)t75) = 1;
    *((unsigned int *)t100) = 1;
    goto LAB45;

LAB46:    t105 = ((char*)((ng5)));
    goto LAB47;

LAB48:    t112 = (t0 + 968U);
    t113 = *((char **)t112);
    t112 = ((char*)((ng6)));
    memset(t114, 0, 8);
    t115 = (t113 + 4);
    t116 = (t112 + 4);
    t117 = *((unsigned int *)t113);
    t118 = *((unsigned int *)t112);
    t119 = (t117 ^ t118);
    t120 = *((unsigned int *)t115);
    t121 = *((unsigned int *)t116);
    t122 = (t120 ^ t121);
    t123 = (t119 | t122);
    t124 = *((unsigned int *)t115);
    t125 = *((unsigned int *)t116);
    t126 = (t124 | t125);
    t127 = (~(t126));
    t128 = (t123 & t127);
    if (t128 != 0)
        goto LAB58;

LAB55:    if (t126 != 0)
        goto LAB57;

LAB56:    *((unsigned int *)t114) = 1;

LAB58:    memset(t111, 0, 8);
    t130 = (t114 + 4);
    t131 = *((unsigned int *)t130);
    t132 = (~(t131));
    t133 = *((unsigned int *)t114);
    t134 = (t133 & t132);
    t135 = (t134 & 1U);
    if (t135 != 0)
        goto LAB59;

LAB60:    if (*((unsigned int *)t130) != 0)
        goto LAB61;

LAB62:    t137 = (t111 + 4);
    t138 = *((unsigned int *)t111);
    t139 = *((unsigned int *)t137);
    t140 = (t138 || t139);
    if (t140 > 0)
        goto LAB63;

LAB64:    t142 = *((unsigned int *)t111);
    t143 = (~(t142));
    t144 = *((unsigned int *)t137);
    t145 = (t143 || t144);
    if (t145 > 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t137) > 0)
        goto LAB67;

LAB68:    if (*((unsigned int *)t111) > 0)
        goto LAB69;

LAB70:    memcpy(t110, t146, 8);

LAB71:    goto LAB49;

LAB50:    xsi_vlog_unsigned_bit_combine(t74, 2, t105, 2, t110, 2);
    goto LAB54;

LAB52:    memcpy(t74, t105, 8);
    goto LAB54;

LAB57:    t129 = (t114 + 4);
    *((unsigned int *)t114) = 1;
    *((unsigned int *)t129) = 1;
    goto LAB58;

LAB59:    *((unsigned int *)t111) = 1;
    goto LAB62;

LAB61:    t136 = (t111 + 4);
    *((unsigned int *)t111) = 1;
    *((unsigned int *)t136) = 1;
    goto LAB62;

LAB63:    t141 = ((char*)((ng7)));
    goto LAB64;

LAB65:    t146 = ((char*)((ng8)));
    goto LAB66;

LAB67:    xsi_vlog_unsigned_bit_combine(t110, 2, t141, 2, t146, 2);
    goto LAB71;

LAB69:    memcpy(t110, t141, 8);
    goto LAB71;

}

static void Cont_39_3(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t24[8];
    char t40[8];
    char t88[8];
    char t89[8];
    char t92[8];
    char t124[8];
    char t125[8];
    char t128[8];
    char t160[8];
    char t161[8];
    char t164[8];
    char t182[8];
    char t198[8];
    char t246[8];
    char t247[8];
    char t250[8];
    char t268[8];
    char t284[8];
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
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    char *t114;
    char *t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    char *t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    char *t126;
    char *t127;
    char *t129;
    char *t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    char *t143;
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
    char *t162;
    char *t163;
    char *t165;
    char *t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    unsigned int t178;
    char *t179;
    char *t180;
    char *t181;
    char *t183;
    char *t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    unsigned int t192;
    unsigned int t193;
    unsigned int t194;
    unsigned int t195;
    unsigned int t196;
    char *t197;
    unsigned int t199;
    unsigned int t200;
    unsigned int t201;
    char *t202;
    char *t203;
    char *t204;
    unsigned int t205;
    unsigned int t206;
    unsigned int t207;
    unsigned int t208;
    unsigned int t209;
    unsigned int t210;
    unsigned int t211;
    char *t212;
    char *t213;
    unsigned int t214;
    unsigned int t215;
    unsigned int t216;
    unsigned int t217;
    unsigned int t218;
    unsigned int t219;
    unsigned int t220;
    unsigned int t221;
    int t222;
    int t223;
    unsigned int t224;
    unsigned int t225;
    unsigned int t226;
    unsigned int t227;
    unsigned int t228;
    unsigned int t229;
    char *t230;
    unsigned int t231;
    unsigned int t232;
    unsigned int t233;
    unsigned int t234;
    unsigned int t235;
    char *t236;
    char *t237;
    unsigned int t238;
    unsigned int t239;
    unsigned int t240;
    char *t241;
    unsigned int t242;
    unsigned int t243;
    unsigned int t244;
    unsigned int t245;
    char *t248;
    char *t249;
    char *t251;
    char *t252;
    unsigned int t253;
    unsigned int t254;
    unsigned int t255;
    unsigned int t256;
    unsigned int t257;
    unsigned int t258;
    unsigned int t259;
    unsigned int t260;
    unsigned int t261;
    unsigned int t262;
    unsigned int t263;
    unsigned int t264;
    char *t265;
    char *t266;
    char *t267;
    char *t269;
    char *t270;
    unsigned int t271;
    unsigned int t272;
    unsigned int t273;
    unsigned int t274;
    unsigned int t275;
    unsigned int t276;
    unsigned int t277;
    unsigned int t278;
    unsigned int t279;
    unsigned int t280;
    unsigned int t281;
    unsigned int t282;
    char *t283;
    unsigned int t285;
    unsigned int t286;
    unsigned int t287;
    char *t288;
    char *t289;
    char *t290;
    unsigned int t291;
    unsigned int t292;
    unsigned int t293;
    unsigned int t294;
    unsigned int t295;
    unsigned int t296;
    unsigned int t297;
    char *t298;
    char *t299;
    unsigned int t300;
    unsigned int t301;
    unsigned int t302;
    unsigned int t303;
    unsigned int t304;
    unsigned int t305;
    unsigned int t306;
    unsigned int t307;
    int t308;
    int t309;
    unsigned int t310;
    unsigned int t311;
    unsigned int t312;
    unsigned int t313;
    unsigned int t314;
    unsigned int t315;
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
    char *t332;
    char *t333;
    char *t334;
    char *t335;
    char *t336;
    char *t337;
    unsigned int t338;
    unsigned int t339;
    char *t340;
    unsigned int t341;
    unsigned int t342;
    char *t343;
    unsigned int t344;
    unsigned int t345;
    char *t346;

LAB0:    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 968U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng4)));
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

LAB7:    t22 = (t0 + 600U);
    t23 = *((char **)t22);
    t22 = ((char*)((ng9)));
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

LAB27:    t333 = (t0 + 2524);
    t334 = (t333 + 32U);
    t335 = *((char **)t334);
    t336 = (t335 + 40U);
    t337 = *((char **)t336);
    memset(t337, 0, 8);
    t338 = 3U;
    t339 = t338;
    t340 = (t3 + 4);
    t341 = *((unsigned int *)t3);
    t338 = (t338 & t341);
    t342 = *((unsigned int *)t340);
    t339 = (t339 & t342);
    t343 = (t337 + 4);
    t344 = *((unsigned int *)t337);
    *((unsigned int *)t337) = (t344 | t338);
    t345 = *((unsigned int *)t343);
    *((unsigned int *)t343) = (t345 | t339);
    xsi_driver_vfirst_trans(t333, 0, 1);
    t346 = (t0 + 2372);
    *((int *)t346) = 1;

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

LAB19:    t83 = ((char*)((ng7)));
    goto LAB20;

LAB21:    t90 = (t0 + 968U);
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

LAB31:    memset(t89, 0, 8);
    t108 = (t92 + 4);
    t109 = *((unsigned int *)t108);
    t110 = (~(t109));
    t111 = *((unsigned int *)t92);
    t112 = (t111 & t110);
    t113 = (t112 & 1U);
    if (t113 != 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t108) != 0)
        goto LAB34;

LAB35:    t115 = (t89 + 4);
    t116 = *((unsigned int *)t89);
    t117 = *((unsigned int *)t115);
    t118 = (t116 || t117);
    if (t118 > 0)
        goto LAB36;

LAB37:    t120 = *((unsigned int *)t89);
    t121 = (~(t120));
    t122 = *((unsigned int *)t115);
    t123 = (t121 || t122);
    if (t123 > 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t115) > 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t89) > 0)
        goto LAB42;

LAB43:    memcpy(t88, t124, 8);

LAB44:    goto LAB22;

LAB23:    xsi_vlog_unsigned_bit_combine(t3, 2, t83, 2, t88, 2);
    goto LAB27;

LAB25:    memcpy(t3, t83, 8);
    goto LAB27;

LAB30:    t107 = (t92 + 4);
    *((unsigned int *)t92) = 1;
    *((unsigned int *)t107) = 1;
    goto LAB31;

LAB32:    *((unsigned int *)t89) = 1;
    goto LAB35;

LAB34:    t114 = (t89 + 4);
    *((unsigned int *)t89) = 1;
    *((unsigned int *)t114) = 1;
    goto LAB35;

LAB36:    t119 = ((char*)((ng2)));
    goto LAB37;

LAB38:    t126 = (t0 + 968U);
    t127 = *((char **)t126);
    t126 = ((char*)((ng2)));
    memset(t128, 0, 8);
    t129 = (t127 + 4);
    t130 = (t126 + 4);
    t131 = *((unsigned int *)t127);
    t132 = *((unsigned int *)t126);
    t133 = (t131 ^ t132);
    t134 = *((unsigned int *)t129);
    t135 = *((unsigned int *)t130);
    t136 = (t134 ^ t135);
    t137 = (t133 | t136);
    t138 = *((unsigned int *)t129);
    t139 = *((unsigned int *)t130);
    t140 = (t138 | t139);
    t141 = (~(t140));
    t142 = (t137 & t141);
    if (t142 != 0)
        goto LAB48;

LAB45:    if (t140 != 0)
        goto LAB47;

LAB46:    *((unsigned int *)t128) = 1;

LAB48:    memset(t125, 0, 8);
    t144 = (t128 + 4);
    t145 = *((unsigned int *)t144);
    t146 = (~(t145));
    t147 = *((unsigned int *)t128);
    t148 = (t147 & t146);
    t149 = (t148 & 1U);
    if (t149 != 0)
        goto LAB49;

LAB50:    if (*((unsigned int *)t144) != 0)
        goto LAB51;

LAB52:    t151 = (t125 + 4);
    t152 = *((unsigned int *)t125);
    t153 = *((unsigned int *)t151);
    t154 = (t152 || t153);
    if (t154 > 0)
        goto LAB53;

LAB54:    t156 = *((unsigned int *)t125);
    t157 = (~(t156));
    t158 = *((unsigned int *)t151);
    t159 = (t157 || t158);
    if (t159 > 0)
        goto LAB55;

LAB56:    if (*((unsigned int *)t151) > 0)
        goto LAB57;

LAB58:    if (*((unsigned int *)t125) > 0)
        goto LAB59;

LAB60:    memcpy(t124, t160, 8);

LAB61:    goto LAB39;

LAB40:    xsi_vlog_unsigned_bit_combine(t88, 2, t119, 2, t124, 2);
    goto LAB44;

LAB42:    memcpy(t88, t119, 8);
    goto LAB44;

LAB47:    t143 = (t128 + 4);
    *((unsigned int *)t128) = 1;
    *((unsigned int *)t143) = 1;
    goto LAB48;

LAB49:    *((unsigned int *)t125) = 1;
    goto LAB52;

LAB51:    t150 = (t125 + 4);
    *((unsigned int *)t125) = 1;
    *((unsigned int *)t150) = 1;
    goto LAB52;

LAB53:    t155 = ((char*)((ng2)));
    goto LAB54;

LAB55:    t162 = (t0 + 968U);
    t163 = *((char **)t162);
    t162 = ((char*)((ng8)));
    memset(t164, 0, 8);
    t165 = (t163 + 4);
    t166 = (t162 + 4);
    t167 = *((unsigned int *)t163);
    t168 = *((unsigned int *)t162);
    t169 = (t167 ^ t168);
    t170 = *((unsigned int *)t165);
    t171 = *((unsigned int *)t166);
    t172 = (t170 ^ t171);
    t173 = (t169 | t172);
    t174 = *((unsigned int *)t165);
    t175 = *((unsigned int *)t166);
    t176 = (t174 | t175);
    t177 = (~(t176));
    t178 = (t173 & t177);
    if (t178 != 0)
        goto LAB65;

LAB62:    if (t176 != 0)
        goto LAB64;

LAB63:    *((unsigned int *)t164) = 1;

LAB65:    t180 = (t0 + 1060U);
    t181 = *((char **)t180);
    t180 = ((char*)((ng10)));
    memset(t182, 0, 8);
    t183 = (t181 + 4);
    t184 = (t180 + 4);
    t185 = *((unsigned int *)t181);
    t186 = *((unsigned int *)t180);
    t187 = (t185 ^ t186);
    t188 = *((unsigned int *)t183);
    t189 = *((unsigned int *)t184);
    t190 = (t188 ^ t189);
    t191 = (t187 | t190);
    t192 = *((unsigned int *)t183);
    t193 = *((unsigned int *)t184);
    t194 = (t192 | t193);
    t195 = (~(t194));
    t196 = (t191 & t195);
    if (t196 != 0)
        goto LAB69;

LAB66:    if (t194 != 0)
        goto LAB68;

LAB67:    *((unsigned int *)t182) = 1;

LAB69:    t199 = *((unsigned int *)t164);
    t200 = *((unsigned int *)t182);
    t201 = (t199 & t200);
    *((unsigned int *)t198) = t201;
    t202 = (t164 + 4);
    t203 = (t182 + 4);
    t204 = (t198 + 4);
    t205 = *((unsigned int *)t202);
    t206 = *((unsigned int *)t203);
    t207 = (t205 | t206);
    *((unsigned int *)t204) = t207;
    t208 = *((unsigned int *)t204);
    t209 = (t208 != 0);
    if (t209 == 1)
        goto LAB70;

LAB71:
LAB72:    memset(t161, 0, 8);
    t230 = (t198 + 4);
    t231 = *((unsigned int *)t230);
    t232 = (~(t231));
    t233 = *((unsigned int *)t198);
    t234 = (t233 & t232);
    t235 = (t234 & 1U);
    if (t235 != 0)
        goto LAB73;

LAB74:    if (*((unsigned int *)t230) != 0)
        goto LAB75;

LAB76:    t237 = (t161 + 4);
    t238 = *((unsigned int *)t161);
    t239 = *((unsigned int *)t237);
    t240 = (t238 || t239);
    if (t240 > 0)
        goto LAB77;

LAB78:    t242 = *((unsigned int *)t161);
    t243 = (~(t242));
    t244 = *((unsigned int *)t237);
    t245 = (t243 || t244);
    if (t245 > 0)
        goto LAB79;

LAB80:    if (*((unsigned int *)t237) > 0)
        goto LAB81;

LAB82:    if (*((unsigned int *)t161) > 0)
        goto LAB83;

LAB84:    memcpy(t160, t246, 8);

LAB85:    goto LAB56;

LAB57:    xsi_vlog_unsigned_bit_combine(t124, 2, t155, 2, t160, 2);
    goto LAB61;

LAB59:    memcpy(t124, t155, 8);
    goto LAB61;

LAB64:    t179 = (t164 + 4);
    *((unsigned int *)t164) = 1;
    *((unsigned int *)t179) = 1;
    goto LAB65;

LAB68:    t197 = (t182 + 4);
    *((unsigned int *)t182) = 1;
    *((unsigned int *)t197) = 1;
    goto LAB69;

LAB70:    t210 = *((unsigned int *)t198);
    t211 = *((unsigned int *)t204);
    *((unsigned int *)t198) = (t210 | t211);
    t212 = (t164 + 4);
    t213 = (t182 + 4);
    t214 = *((unsigned int *)t164);
    t215 = (~(t214));
    t216 = *((unsigned int *)t212);
    t217 = (~(t216));
    t218 = *((unsigned int *)t182);
    t219 = (~(t218));
    t220 = *((unsigned int *)t213);
    t221 = (~(t220));
    t222 = (t215 & t217);
    t223 = (t219 & t221);
    t224 = (~(t222));
    t225 = (~(t223));
    t226 = *((unsigned int *)t204);
    *((unsigned int *)t204) = (t226 & t224);
    t227 = *((unsigned int *)t204);
    *((unsigned int *)t204) = (t227 & t225);
    t228 = *((unsigned int *)t198);
    *((unsigned int *)t198) = (t228 & t224);
    t229 = *((unsigned int *)t198);
    *((unsigned int *)t198) = (t229 & t225);
    goto LAB72;

LAB73:    *((unsigned int *)t161) = 1;
    goto LAB76;

LAB75:    t236 = (t161 + 4);
    *((unsigned int *)t161) = 1;
    *((unsigned int *)t236) = 1;
    goto LAB76;

LAB77:    t241 = ((char*)((ng5)));
    goto LAB78;

LAB79:    t248 = (t0 + 968U);
    t249 = *((char **)t248);
    t248 = ((char*)((ng8)));
    memset(t250, 0, 8);
    t251 = (t249 + 4);
    t252 = (t248 + 4);
    t253 = *((unsigned int *)t249);
    t254 = *((unsigned int *)t248);
    t255 = (t253 ^ t254);
    t256 = *((unsigned int *)t251);
    t257 = *((unsigned int *)t252);
    t258 = (t256 ^ t257);
    t259 = (t255 | t258);
    t260 = *((unsigned int *)t251);
    t261 = *((unsigned int *)t252);
    t262 = (t260 | t261);
    t263 = (~(t262));
    t264 = (t259 & t263);
    if (t264 != 0)
        goto LAB89;

LAB86:    if (t262 != 0)
        goto LAB88;

LAB87:    *((unsigned int *)t250) = 1;

LAB89:    t266 = (t0 + 1060U);
    t267 = *((char **)t266);
    t266 = ((char*)((ng11)));
    memset(t268, 0, 8);
    t269 = (t267 + 4);
    t270 = (t266 + 4);
    t271 = *((unsigned int *)t267);
    t272 = *((unsigned int *)t266);
    t273 = (t271 ^ t272);
    t274 = *((unsigned int *)t269);
    t275 = *((unsigned int *)t270);
    t276 = (t274 ^ t275);
    t277 = (t273 | t276);
    t278 = *((unsigned int *)t269);
    t279 = *((unsigned int *)t270);
    t280 = (t278 | t279);
    t281 = (~(t280));
    t282 = (t277 & t281);
    if (t282 != 0)
        goto LAB93;

LAB90:    if (t280 != 0)
        goto LAB92;

LAB91:    *((unsigned int *)t268) = 1;

LAB93:    t285 = *((unsigned int *)t250);
    t286 = *((unsigned int *)t268);
    t287 = (t285 & t286);
    *((unsigned int *)t284) = t287;
    t288 = (t250 + 4);
    t289 = (t268 + 4);
    t290 = (t284 + 4);
    t291 = *((unsigned int *)t288);
    t292 = *((unsigned int *)t289);
    t293 = (t291 | t292);
    *((unsigned int *)t290) = t293;
    t294 = *((unsigned int *)t290);
    t295 = (t294 != 0);
    if (t295 == 1)
        goto LAB94;

LAB95:
LAB96:    memset(t247, 0, 8);
    t316 = (t284 + 4);
    t317 = *((unsigned int *)t316);
    t318 = (~(t317));
    t319 = *((unsigned int *)t284);
    t320 = (t319 & t318);
    t321 = (t320 & 1U);
    if (t321 != 0)
        goto LAB97;

LAB98:    if (*((unsigned int *)t316) != 0)
        goto LAB99;

LAB100:    t323 = (t247 + 4);
    t324 = *((unsigned int *)t247);
    t325 = *((unsigned int *)t323);
    t326 = (t324 || t325);
    if (t326 > 0)
        goto LAB101;

LAB102:    t328 = *((unsigned int *)t247);
    t329 = (~(t328));
    t330 = *((unsigned int *)t323);
    t331 = (t329 || t330);
    if (t331 > 0)
        goto LAB103;

LAB104:    if (*((unsigned int *)t323) > 0)
        goto LAB105;

LAB106:    if (*((unsigned int *)t247) > 0)
        goto LAB107;

LAB108:    memcpy(t246, t332, 8);

LAB109:    goto LAB80;

LAB81:    xsi_vlog_unsigned_bit_combine(t160, 2, t241, 2, t246, 2);
    goto LAB85;

LAB83:    memcpy(t160, t241, 8);
    goto LAB85;

LAB88:    t265 = (t250 + 4);
    *((unsigned int *)t250) = 1;
    *((unsigned int *)t265) = 1;
    goto LAB89;

LAB92:    t283 = (t268 + 4);
    *((unsigned int *)t268) = 1;
    *((unsigned int *)t283) = 1;
    goto LAB93;

LAB94:    t296 = *((unsigned int *)t284);
    t297 = *((unsigned int *)t290);
    *((unsigned int *)t284) = (t296 | t297);
    t298 = (t250 + 4);
    t299 = (t268 + 4);
    t300 = *((unsigned int *)t250);
    t301 = (~(t300));
    t302 = *((unsigned int *)t298);
    t303 = (~(t302));
    t304 = *((unsigned int *)t268);
    t305 = (~(t304));
    t306 = *((unsigned int *)t299);
    t307 = (~(t306));
    t308 = (t301 & t303);
    t309 = (t305 & t307);
    t310 = (~(t308));
    t311 = (~(t309));
    t312 = *((unsigned int *)t290);
    *((unsigned int *)t290) = (t312 & t310);
    t313 = *((unsigned int *)t290);
    *((unsigned int *)t290) = (t313 & t311);
    t314 = *((unsigned int *)t284);
    *((unsigned int *)t284) = (t314 & t310);
    t315 = *((unsigned int *)t284);
    *((unsigned int *)t284) = (t315 & t311);
    goto LAB96;

LAB97:    *((unsigned int *)t247) = 1;
    goto LAB100;

LAB99:    t322 = (t247 + 4);
    *((unsigned int *)t247) = 1;
    *((unsigned int *)t322) = 1;
    goto LAB100;

LAB101:    t327 = ((char*)((ng5)));
    goto LAB102;

LAB103:    t332 = ((char*)((ng8)));
    goto LAB104;

LAB105:    xsi_vlog_unsigned_bit_combine(t246, 2, t327, 2, t332, 2);
    goto LAB109;

LAB107:    memcpy(t246, t327, 8);
    goto LAB109;

}


extern void work_m_00000000003118468490_0024370143_init()
{
	static char *pe[] = {(void *)Cont_30_0,(void *)Cont_31_1,(void *)Cont_33_2,(void *)Cont_39_3};
	xsi_register_didat("work_m_00000000003118468490_0024370143", "isim/mips_test_isim_beh.exe.sim/work/m_00000000003118468490_0024370143.didat");
	xsi_register_executes(pe);
}
