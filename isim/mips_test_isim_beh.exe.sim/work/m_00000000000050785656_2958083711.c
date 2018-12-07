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
static const char *ng0 = "G:/ComputerOrganization/CPU/WB_Ext.v";
static int ng1[] = {8, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {2U, 0U};
static int ng5[] = {24, 0};
static unsigned int ng6[] = {3U, 0U};
static unsigned int ng7[] = {4U, 0U};
static int ng8[] = {16, 0};



static void NetDecl_28_0(char *t0)
{
    char t6[8];
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 1628U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 692U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 600U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_multiply(t6, 32, t2, 32, t5, 2);
    memset(t7, 0, 8);
    xsi_vlog_unsigned_rshift(t7, 32, t3, 32, t6, 32);
    t4 = (t0 + 2020);
    t8 = (t4 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    memcpy(t11, t7, 8);
    xsi_driver_vfirst_trans(t4, 0, 31U);
    t12 = (t0 + 1968);
    *((int *)t12) = 1;

LAB1:    return;
}

static void Cont_30_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t39[8];
    char t40[8];
    char t42[8];
    char t69[8];
    char t70[8];
    char t85[8];
    char t86[8];
    char t89[8];
    char t116[8];
    char t117[8];
    char t127[8];
    char t129[8];
    char t143[8];
    char t144[8];
    char t147[8];
    char t174[8];
    char t175[8];
    char t190[8];
    char t191[8];
    char t194[8];
    char t221[8];
    char t222[8];
    char t232[8];
    char t234[8];
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
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
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
    char *t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    char *t87;
    char *t88;
    char *t90;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
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
    unsigned int t109;
    unsigned int t110;
    char *t111;
    char *t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    char *t118;
    char *t119;
    char *t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    char *t128;
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
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    char *t145;
    char *t146;
    char *t148;
    char *t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    char *t162;
    char *t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    char *t169;
    char *t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    char *t176;
    char *t177;
    char *t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    char *t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    char *t192;
    char *t193;
    char *t195;
    char *t196;
    unsigned int t197;
    unsigned int t198;
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
    char *t209;
    char *t210;
    unsigned int t211;
    unsigned int t212;
    unsigned int t213;
    unsigned int t214;
    unsigned int t215;
    char *t216;
    char *t217;
    unsigned int t218;
    unsigned int t219;
    unsigned int t220;
    char *t223;
    char *t224;
    char *t225;
    unsigned int t226;
    unsigned int t227;
    unsigned int t228;
    unsigned int t229;
    unsigned int t230;
    unsigned int t231;
    char *t233;
    char *t235;
    char *t236;
    char *t237;
    unsigned int t238;
    unsigned int t239;
    unsigned int t240;
    unsigned int t241;
    unsigned int t242;
    unsigned int t243;
    unsigned int t244;
    unsigned int t245;
    unsigned int t246;
    unsigned int t247;
    char *t248;
    char *t249;
    char *t250;
    char *t251;
    char *t252;
    char *t253;
    char *t254;

LAB0:    t1 = (t0 + 1772U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 784U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng2)));
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

LAB13:    t35 = *((unsigned int *)t4);
    t36 = (~(t35));
    t37 = *((unsigned int *)t29);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t39, 8);

LAB20:    t248 = (t0 + 2056);
    t250 = (t248 + 32U);
    t251 = *((char **)t250);
    t252 = (t251 + 40U);
    t253 = *((char **)t252);
    memcpy(t253, t3, 8);
    xsi_driver_vfirst_trans(t248, 0, 31);
    t254 = (t0 + 1976);
    *((int *)t254) = 1;

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

LAB12:    t33 = (t0 + 968U);
    t34 = *((char **)t33);
    goto LAB13;

LAB14:    t33 = (t0 + 784U);
    t41 = *((char **)t33);
    t33 = ((char*)((ng3)));
    memset(t42, 0, 8);
    t43 = (t41 + 4);
    t44 = (t33 + 4);
    t45 = *((unsigned int *)t41);
    t46 = *((unsigned int *)t33);
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

LAB24:    memset(t40, 0, 8);
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

LAB28:    t65 = (t40 + 4);
    t66 = *((unsigned int *)t40);
    t67 = *((unsigned int *)t65);
    t68 = (t66 || t67);
    if (t68 > 0)
        goto LAB29;

LAB30:    t81 = *((unsigned int *)t40);
    t82 = (~(t81));
    t83 = *((unsigned int *)t65);
    t84 = (t82 || t83);
    if (t84 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t65) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t40) > 0)
        goto LAB35;

LAB36:    memcpy(t39, t85, 8);

LAB37:    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t34, 32, t39, 32);
    goto LAB20;

LAB18:    memcpy(t3, t34, 8);
    goto LAB20;

LAB23:    t57 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t40) = 1;
    goto LAB28;

LAB27:    t64 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t64) = 1;
    goto LAB28;

LAB29:    t71 = (t0 + 968U);
    t72 = *((char **)t71);
    memset(t70, 0, 8);
    t71 = (t70 + 4);
    t73 = (t72 + 4);
    t74 = *((unsigned int *)t72);
    t75 = (t74 >> 0);
    *((unsigned int *)t70) = t75;
    t76 = *((unsigned int *)t73);
    t77 = (t76 >> 0);
    *((unsigned int *)t71) = t77;
    t78 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t78 & 255U);
    t79 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t79 & 255U);
    t80 = ((char*)((ng2)));
    xsi_vlogtype_concat(t69, 32, 32, 2U, t80, 24, t70, 8);
    goto LAB30;

LAB31:    t87 = (t0 + 784U);
    t88 = *((char **)t87);
    t87 = ((char*)((ng4)));
    memset(t89, 0, 8);
    t90 = (t88 + 4);
    t91 = (t87 + 4);
    t92 = *((unsigned int *)t88);
    t93 = *((unsigned int *)t87);
    t94 = (t92 ^ t93);
    t95 = *((unsigned int *)t90);
    t96 = *((unsigned int *)t91);
    t97 = (t95 ^ t96);
    t98 = (t94 | t97);
    t99 = *((unsigned int *)t90);
    t100 = *((unsigned int *)t91);
    t101 = (t99 | t100);
    t102 = (~(t101));
    t103 = (t98 & t102);
    if (t103 != 0)
        goto LAB41;

LAB38:    if (t101 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t89) = 1;

LAB41:    memset(t86, 0, 8);
    t105 = (t89 + 4);
    t106 = *((unsigned int *)t105);
    t107 = (~(t106));
    t108 = *((unsigned int *)t89);
    t109 = (t108 & t107);
    t110 = (t109 & 1U);
    if (t110 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t105) != 0)
        goto LAB44;

LAB45:    t112 = (t86 + 4);
    t113 = *((unsigned int *)t86);
    t114 = *((unsigned int *)t112);
    t115 = (t113 || t114);
    if (t115 > 0)
        goto LAB46;

LAB47:    t139 = *((unsigned int *)t86);
    t140 = (~(t139));
    t141 = *((unsigned int *)t112);
    t142 = (t140 || t141);
    if (t142 > 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t112) > 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t86) > 0)
        goto LAB52;

LAB53:    memcpy(t85, t143, 8);

LAB54:    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t39, 32, t69, 32, t85, 32);
    goto LAB37;

LAB35:    memcpy(t39, t69, 8);
    goto LAB37;

LAB40:    t104 = (t89 + 4);
    *((unsigned int *)t89) = 1;
    *((unsigned int *)t104) = 1;
    goto LAB41;

LAB42:    *((unsigned int *)t86) = 1;
    goto LAB45;

LAB44:    t111 = (t86 + 4);
    *((unsigned int *)t86) = 1;
    *((unsigned int *)t111) = 1;
    goto LAB45;

LAB46:    t118 = (t0 + 968U);
    t119 = *((char **)t118);
    memset(t117, 0, 8);
    t118 = (t117 + 4);
    t120 = (t119 + 4);
    t121 = *((unsigned int *)t119);
    t122 = (t121 >> 0);
    *((unsigned int *)t117) = t122;
    t123 = *((unsigned int *)t120);
    t124 = (t123 >> 0);
    *((unsigned int *)t118) = t124;
    t125 = *((unsigned int *)t117);
    *((unsigned int *)t117) = (t125 & 255U);
    t126 = *((unsigned int *)t118);
    *((unsigned int *)t118) = (t126 & 255U);
    t128 = ((char*)((ng5)));
    t130 = (t0 + 968U);
    t131 = *((char **)t130);
    memset(t129, 0, 8);
    t130 = (t129 + 4);
    t132 = (t131 + 4);
    t133 = *((unsigned int *)t131);
    t134 = (t133 >> 7);
    *((unsigned int *)t129) = t134;
    t135 = *((unsigned int *)t132);
    t136 = (t135 >> 7);
    *((unsigned int *)t130) = t136;
    t137 = *((unsigned int *)t129);
    *((unsigned int *)t129) = (t137 & 1U);
    t138 = *((unsigned int *)t130);
    *((unsigned int *)t130) = (t138 & 1U);
    xsi_vlog_mul_concat(t127, 24, 1, t128, 1U, t129, 1);
    xsi_vlogtype_concat(t116, 32, 32, 2U, t127, 24, t117, 8);
    goto LAB47;

LAB48:    t145 = (t0 + 784U);
    t146 = *((char **)t145);
    t145 = ((char*)((ng6)));
    memset(t147, 0, 8);
    t148 = (t146 + 4);
    t149 = (t145 + 4);
    t150 = *((unsigned int *)t146);
    t151 = *((unsigned int *)t145);
    t152 = (t150 ^ t151);
    t153 = *((unsigned int *)t148);
    t154 = *((unsigned int *)t149);
    t155 = (t153 ^ t154);
    t156 = (t152 | t155);
    t157 = *((unsigned int *)t148);
    t158 = *((unsigned int *)t149);
    t159 = (t157 | t158);
    t160 = (~(t159));
    t161 = (t156 & t160);
    if (t161 != 0)
        goto LAB58;

LAB55:    if (t159 != 0)
        goto LAB57;

LAB56:    *((unsigned int *)t147) = 1;

LAB58:    memset(t144, 0, 8);
    t163 = (t147 + 4);
    t164 = *((unsigned int *)t163);
    t165 = (~(t164));
    t166 = *((unsigned int *)t147);
    t167 = (t166 & t165);
    t168 = (t167 & 1U);
    if (t168 != 0)
        goto LAB59;

LAB60:    if (*((unsigned int *)t163) != 0)
        goto LAB61;

LAB62:    t170 = (t144 + 4);
    t171 = *((unsigned int *)t144);
    t172 = *((unsigned int *)t170);
    t173 = (t171 || t172);
    if (t173 > 0)
        goto LAB63;

LAB64:    t186 = *((unsigned int *)t144);
    t187 = (~(t186));
    t188 = *((unsigned int *)t170);
    t189 = (t187 || t188);
    if (t189 > 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t170) > 0)
        goto LAB67;

LAB68:    if (*((unsigned int *)t144) > 0)
        goto LAB69;

LAB70:    memcpy(t143, t190, 8);

LAB71:    goto LAB49;

LAB50:    xsi_vlog_unsigned_bit_combine(t85, 32, t116, 32, t143, 32);
    goto LAB54;

LAB52:    memcpy(t85, t116, 8);
    goto LAB54;

LAB57:    t162 = (t147 + 4);
    *((unsigned int *)t147) = 1;
    *((unsigned int *)t162) = 1;
    goto LAB58;

LAB59:    *((unsigned int *)t144) = 1;
    goto LAB62;

LAB61:    t169 = (t144 + 4);
    *((unsigned int *)t144) = 1;
    *((unsigned int *)t169) = 1;
    goto LAB62;

LAB63:    t176 = (t0 + 968U);
    t177 = *((char **)t176);
    memset(t175, 0, 8);
    t176 = (t175 + 4);
    t178 = (t177 + 4);
    t179 = *((unsigned int *)t177);
    t180 = (t179 >> 0);
    *((unsigned int *)t175) = t180;
    t181 = *((unsigned int *)t178);
    t182 = (t181 >> 0);
    *((unsigned int *)t176) = t182;
    t183 = *((unsigned int *)t175);
    *((unsigned int *)t175) = (t183 & 65535U);
    t184 = *((unsigned int *)t176);
    *((unsigned int *)t176) = (t184 & 65535U);
    t185 = ((char*)((ng2)));
    xsi_vlogtype_concat(t174, 32, 32, 2U, t185, 16, t175, 16);
    goto LAB64;

LAB65:    t192 = (t0 + 784U);
    t193 = *((char **)t192);
    t192 = ((char*)((ng7)));
    memset(t194, 0, 8);
    t195 = (t193 + 4);
    t196 = (t192 + 4);
    t197 = *((unsigned int *)t193);
    t198 = *((unsigned int *)t192);
    t199 = (t197 ^ t198);
    t200 = *((unsigned int *)t195);
    t201 = *((unsigned int *)t196);
    t202 = (t200 ^ t201);
    t203 = (t199 | t202);
    t204 = *((unsigned int *)t195);
    t205 = *((unsigned int *)t196);
    t206 = (t204 | t205);
    t207 = (~(t206));
    t208 = (t203 & t207);
    if (t208 != 0)
        goto LAB75;

LAB72:    if (t206 != 0)
        goto LAB74;

LAB73:    *((unsigned int *)t194) = 1;

LAB75:    memset(t191, 0, 8);
    t210 = (t194 + 4);
    t211 = *((unsigned int *)t210);
    t212 = (~(t211));
    t213 = *((unsigned int *)t194);
    t214 = (t213 & t212);
    t215 = (t214 & 1U);
    if (t215 != 0)
        goto LAB76;

LAB77:    if (*((unsigned int *)t210) != 0)
        goto LAB78;

LAB79:    t217 = (t191 + 4);
    t218 = *((unsigned int *)t191);
    t219 = *((unsigned int *)t217);
    t220 = (t218 || t219);
    if (t220 > 0)
        goto LAB80;

LAB81:    t244 = *((unsigned int *)t191);
    t245 = (~(t244));
    t246 = *((unsigned int *)t217);
    t247 = (t245 || t246);
    if (t247 > 0)
        goto LAB82;

LAB83:    if (*((unsigned int *)t217) > 0)
        goto LAB84;

LAB85:    if (*((unsigned int *)t191) > 0)
        goto LAB86;

LAB87:    memcpy(t190, t249, 8);

LAB88:    goto LAB66;

LAB67:    xsi_vlog_unsigned_bit_combine(t143, 32, t174, 32, t190, 32);
    goto LAB71;

LAB69:    memcpy(t143, t174, 8);
    goto LAB71;

LAB74:    t209 = (t194 + 4);
    *((unsigned int *)t194) = 1;
    *((unsigned int *)t209) = 1;
    goto LAB75;

LAB76:    *((unsigned int *)t191) = 1;
    goto LAB79;

LAB78:    t216 = (t191 + 4);
    *((unsigned int *)t191) = 1;
    *((unsigned int *)t216) = 1;
    goto LAB79;

LAB80:    t223 = (t0 + 968U);
    t224 = *((char **)t223);
    memset(t222, 0, 8);
    t223 = (t222 + 4);
    t225 = (t224 + 4);
    t226 = *((unsigned int *)t224);
    t227 = (t226 >> 0);
    *((unsigned int *)t222) = t227;
    t228 = *((unsigned int *)t225);
    t229 = (t228 >> 0);
    *((unsigned int *)t223) = t229;
    t230 = *((unsigned int *)t222);
    *((unsigned int *)t222) = (t230 & 65535U);
    t231 = *((unsigned int *)t223);
    *((unsigned int *)t223) = (t231 & 65535U);
    t233 = ((char*)((ng8)));
    t235 = (t0 + 968U);
    t236 = *((char **)t235);
    memset(t234, 0, 8);
    t235 = (t234 + 4);
    t237 = (t236 + 4);
    t238 = *((unsigned int *)t236);
    t239 = (t238 >> 15);
    *((unsigned int *)t234) = t239;
    t240 = *((unsigned int *)t237);
    t241 = (t240 >> 15);
    *((unsigned int *)t235) = t241;
    t242 = *((unsigned int *)t234);
    *((unsigned int *)t234) = (t242 & 1U);
    t243 = *((unsigned int *)t235);
    *((unsigned int *)t235) = (t243 & 1U);
    xsi_vlog_mul_concat(t232, 16, 1, t233, 1U, t234, 1);
    xsi_vlogtype_concat(t221, 32, 32, 2U, t232, 16, t222, 16);
    goto LAB81;

LAB82:    t248 = (t0 + 968U);
    t249 = *((char **)t248);
    goto LAB83;

LAB84:    xsi_vlog_unsigned_bit_combine(t190, 32, t221, 32, t249, 32);
    goto LAB88;

LAB86:    memcpy(t190, t221, 8);
    goto LAB88;

}


extern void work_m_00000000000050785656_2958083711_init()
{
	static char *pe[] = {(void *)NetDecl_28_0,(void *)Cont_30_1};
	xsi_register_didat("work_m_00000000000050785656_2958083711", "isim/mips_test_isim_beh.exe.sim/work/m_00000000000050785656_2958083711.didat");
	xsi_register_executes(pe);
}
