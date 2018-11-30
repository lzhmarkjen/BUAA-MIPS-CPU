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
static unsigned int ng6[] = {33U, 0U};
static unsigned int ng7[] = {13U, 0U};
static unsigned int ng8[] = {15U, 0U};



static void Cont_104_0(char *t0)
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

LAB2:    xsi_set_current_line(104, ng0);
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

static void Cont_105_1(char *t0)
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

LAB2:    xsi_set_current_line(105, ng0);
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

static void Cont_107_2(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t38[8];
    char t39[8];
    char t42[8];
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
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    char *t85;
    unsigned int t86;
    unsigned int t87;
    char *t88;

LAB0:    t1 = (t0 + 1916U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(107, ng0);
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

LAB20:    t75 = (t0 + 2396);
    t76 = (t75 + 32U);
    t77 = *((char **)t76);
    t78 = (t77 + 40U);
    t79 = *((char **)t78);
    memset(t79, 0, 8);
    t80 = 3U;
    t81 = t80;
    t82 = (t3 + 4);
    t83 = *((unsigned int *)t3);
    t80 = (t80 & t83);
    t84 = *((unsigned int *)t82);
    t81 = (t81 & t84);
    t85 = (t79 + 4);
    t86 = *((unsigned int *)t79);
    *((unsigned int *)t79) = (t86 | t80);
    t87 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t87 | t81);
    xsi_driver_vfirst_trans(t75, 0, 1);
    t88 = (t0 + 2272);
    *((int *)t88) = 1;

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

LAB31:    t74 = ((char*)((ng5)));
    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t38, 2, t69, 2, t74, 2);
    goto LAB37;

LAB35:    memcpy(t38, t69, 8);
    goto LAB37;

}

static void Cont_112_3(char *t0)
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
    char t210[8];
    char t211[8];
    char t214[8];
    char t246[8];
    char t247[8];
    char t250[8];
    char t282[8];
    char t283[8];
    char t286[8];
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
    unsigned int t195;
    unsigned int t196;
    unsigned int t197;
    unsigned int t198;
    unsigned int t199;
    char *t200;
    char *t201;
    unsigned int t202;
    unsigned int t203;
    unsigned int t204;
    char *t205;
    unsigned int t206;
    unsigned int t207;
    unsigned int t208;
    unsigned int t209;
    char *t212;
    char *t213;
    char *t215;
    char *t216;
    unsigned int t217;
    unsigned int t218;
    unsigned int t219;
    unsigned int t220;
    unsigned int t221;
    unsigned int t222;
    unsigned int t223;
    unsigned int t224;
    unsigned int t225;
    unsigned int t226;
    unsigned int t227;
    unsigned int t228;
    char *t229;
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
    unsigned int t267;
    unsigned int t268;
    unsigned int t269;
    unsigned int t270;
    unsigned int t271;
    char *t272;
    char *t273;
    unsigned int t274;
    unsigned int t275;
    unsigned int t276;
    char *t277;
    unsigned int t278;
    unsigned int t279;
    unsigned int t280;
    unsigned int t281;
    char *t284;
    char *t285;
    char *t287;
    char *t288;
    unsigned int t289;
    unsigned int t290;
    unsigned int t291;
    unsigned int t292;
    unsigned int t293;
    unsigned int t294;
    unsigned int t295;
    unsigned int t296;
    unsigned int t297;
    unsigned int t298;
    unsigned int t299;
    unsigned int t300;
    char *t301;
    char *t302;
    unsigned int t303;
    unsigned int t304;
    unsigned int t305;
    unsigned int t306;
    unsigned int t307;
    char *t308;
    char *t309;
    unsigned int t310;
    unsigned int t311;
    unsigned int t312;
    char *t313;
    unsigned int t314;
    unsigned int t315;
    unsigned int t316;
    unsigned int t317;
    char *t318;
    char *t319;
    char *t320;
    char *t321;
    char *t322;
    char *t323;
    unsigned int t324;
    unsigned int t325;
    char *t326;
    unsigned int t327;
    unsigned int t328;
    char *t329;
    unsigned int t330;
    unsigned int t331;
    char *t332;

LAB0:    t1 = (t0 + 2060U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(112, ng0);
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
    t22 = ((char*)((ng6)));
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

LAB27:    t319 = (t0 + 2432);
    t320 = (t319 + 32U);
    t321 = *((char **)t320);
    t322 = (t321 + 40U);
    t323 = *((char **)t322);
    memset(t323, 0, 8);
    t324 = 1U;
    t325 = t324;
    t326 = (t3 + 4);
    t327 = *((unsigned int *)t3);
    t324 = (t324 & t327);
    t328 = *((unsigned int *)t326);
    t325 = (t325 & t328);
    t329 = (t323 + 4);
    t330 = *((unsigned int *)t323);
    *((unsigned int *)t323) = (t330 | t324);
    t331 = *((unsigned int *)t329);
    *((unsigned int *)t329) = (t331 | t325);
    xsi_driver_vfirst_trans(t319, 0, 0);
    t332 = (t0 + 2280);
    *((int *)t332) = 1;

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
    t176 = ((char*)((ng7)));
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

LAB55:    memset(t175, 0, 8);
    t194 = (t178 + 4);
    t195 = *((unsigned int *)t194);
    t196 = (~(t195));
    t197 = *((unsigned int *)t178);
    t198 = (t197 & t196);
    t199 = (t198 & 1U);
    if (t199 != 0)
        goto LAB56;

LAB57:    if (*((unsigned int *)t194) != 0)
        goto LAB58;

LAB59:    t201 = (t175 + 4);
    t202 = *((unsigned int *)t175);
    t203 = *((unsigned int *)t201);
    t204 = (t202 || t203);
    if (t204 > 0)
        goto LAB60;

LAB61:    t206 = *((unsigned int *)t175);
    t207 = (~(t206));
    t208 = *((unsigned int *)t201);
    t209 = (t207 || t208);
    if (t209 > 0)
        goto LAB62;

LAB63:    if (*((unsigned int *)t201) > 0)
        goto LAB64;

LAB65:    if (*((unsigned int *)t175) > 0)
        goto LAB66;

LAB67:    memcpy(t174, t210, 8);

LAB68:    goto LAB46;

LAB47:    xsi_vlog_unsigned_bit_combine(t88, 1, t169, 1, t174, 1);
    goto LAB51;

LAB49:    memcpy(t88, t169, 8);
    goto LAB51;

LAB54:    t193 = (t178 + 4);
    *((unsigned int *)t178) = 1;
    *((unsigned int *)t193) = 1;
    goto LAB55;

LAB56:    *((unsigned int *)t175) = 1;
    goto LAB59;

LAB58:    t200 = (t175 + 4);
    *((unsigned int *)t175) = 1;
    *((unsigned int *)t200) = 1;
    goto LAB59;

LAB60:    t205 = ((char*)((ng2)));
    goto LAB61;

LAB62:    t212 = (t0 + 876U);
    t213 = *((char **)t212);
    t212 = ((char*)((ng1)));
    memset(t214, 0, 8);
    t215 = (t213 + 4);
    t216 = (t212 + 4);
    t217 = *((unsigned int *)t213);
    t218 = *((unsigned int *)t212);
    t219 = (t217 ^ t218);
    t220 = *((unsigned int *)t215);
    t221 = *((unsigned int *)t216);
    t222 = (t220 ^ t221);
    t223 = (t219 | t222);
    t224 = *((unsigned int *)t215);
    t225 = *((unsigned int *)t216);
    t226 = (t224 | t225);
    t227 = (~(t226));
    t228 = (t223 & t227);
    if (t228 != 0)
        goto LAB72;

LAB69:    if (t226 != 0)
        goto LAB71;

LAB70:    *((unsigned int *)t214) = 1;

LAB72:    memset(t211, 0, 8);
    t230 = (t214 + 4);
    t231 = *((unsigned int *)t230);
    t232 = (~(t231));
    t233 = *((unsigned int *)t214);
    t234 = (t233 & t232);
    t235 = (t234 & 1U);
    if (t235 != 0)
        goto LAB73;

LAB74:    if (*((unsigned int *)t230) != 0)
        goto LAB75;

LAB76:    t237 = (t211 + 4);
    t238 = *((unsigned int *)t211);
    t239 = *((unsigned int *)t237);
    t240 = (t238 || t239);
    if (t240 > 0)
        goto LAB77;

LAB78:    t242 = *((unsigned int *)t211);
    t243 = (~(t242));
    t244 = *((unsigned int *)t237);
    t245 = (t243 || t244);
    if (t245 > 0)
        goto LAB79;

LAB80:    if (*((unsigned int *)t237) > 0)
        goto LAB81;

LAB82:    if (*((unsigned int *)t211) > 0)
        goto LAB83;

LAB84:    memcpy(t210, t246, 8);

LAB85:    goto LAB63;

LAB64:    xsi_vlog_unsigned_bit_combine(t174, 1, t205, 1, t210, 1);
    goto LAB68;

LAB66:    memcpy(t174, t205, 8);
    goto LAB68;

LAB71:    t229 = (t214 + 4);
    *((unsigned int *)t214) = 1;
    *((unsigned int *)t229) = 1;
    goto LAB72;

LAB73:    *((unsigned int *)t211) = 1;
    goto LAB76;

LAB75:    t236 = (t211 + 4);
    *((unsigned int *)t211) = 1;
    *((unsigned int *)t236) = 1;
    goto LAB76;

LAB77:    t241 = ((char*)((ng2)));
    goto LAB78;

LAB79:    t248 = (t0 + 876U);
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

LAB89:    memset(t247, 0, 8);
    t266 = (t250 + 4);
    t267 = *((unsigned int *)t266);
    t268 = (~(t267));
    t269 = *((unsigned int *)t250);
    t270 = (t269 & t268);
    t271 = (t270 & 1U);
    if (t271 != 0)
        goto LAB90;

LAB91:    if (*((unsigned int *)t266) != 0)
        goto LAB92;

LAB93:    t273 = (t247 + 4);
    t274 = *((unsigned int *)t247);
    t275 = *((unsigned int *)t273);
    t276 = (t274 || t275);
    if (t276 > 0)
        goto LAB94;

LAB95:    t278 = *((unsigned int *)t247);
    t279 = (~(t278));
    t280 = *((unsigned int *)t273);
    t281 = (t279 || t280);
    if (t281 > 0)
        goto LAB96;

LAB97:    if (*((unsigned int *)t273) > 0)
        goto LAB98;

LAB99:    if (*((unsigned int *)t247) > 0)
        goto LAB100;

LAB101:    memcpy(t246, t282, 8);

LAB102:    goto LAB80;

LAB81:    xsi_vlog_unsigned_bit_combine(t210, 1, t241, 1, t246, 1);
    goto LAB85;

LAB83:    memcpy(t210, t241, 8);
    goto LAB85;

LAB88:    t265 = (t250 + 4);
    *((unsigned int *)t250) = 1;
    *((unsigned int *)t265) = 1;
    goto LAB89;

LAB90:    *((unsigned int *)t247) = 1;
    goto LAB93;

LAB92:    t272 = (t247 + 4);
    *((unsigned int *)t247) = 1;
    *((unsigned int *)t272) = 1;
    goto LAB93;

LAB94:    t277 = ((char*)((ng2)));
    goto LAB95;

LAB96:    t284 = (t0 + 876U);
    t285 = *((char **)t284);
    t284 = ((char*)((ng3)));
    memset(t286, 0, 8);
    t287 = (t285 + 4);
    t288 = (t284 + 4);
    t289 = *((unsigned int *)t285);
    t290 = *((unsigned int *)t284);
    t291 = (t289 ^ t290);
    t292 = *((unsigned int *)t287);
    t293 = *((unsigned int *)t288);
    t294 = (t292 ^ t293);
    t295 = (t291 | t294);
    t296 = *((unsigned int *)t287);
    t297 = *((unsigned int *)t288);
    t298 = (t296 | t297);
    t299 = (~(t298));
    t300 = (t295 & t299);
    if (t300 != 0)
        goto LAB106;

LAB103:    if (t298 != 0)
        goto LAB105;

LAB104:    *((unsigned int *)t286) = 1;

LAB106:    memset(t283, 0, 8);
    t302 = (t286 + 4);
    t303 = *((unsigned int *)t302);
    t304 = (~(t303));
    t305 = *((unsigned int *)t286);
    t306 = (t305 & t304);
    t307 = (t306 & 1U);
    if (t307 != 0)
        goto LAB107;

LAB108:    if (*((unsigned int *)t302) != 0)
        goto LAB109;

LAB110:    t309 = (t283 + 4);
    t310 = *((unsigned int *)t283);
    t311 = *((unsigned int *)t309);
    t312 = (t310 || t311);
    if (t312 > 0)
        goto LAB111;

LAB112:    t314 = *((unsigned int *)t283);
    t315 = (~(t314));
    t316 = *((unsigned int *)t309);
    t317 = (t315 || t316);
    if (t317 > 0)
        goto LAB113;

LAB114:    if (*((unsigned int *)t309) > 0)
        goto LAB115;

LAB116:    if (*((unsigned int *)t283) > 0)
        goto LAB117;

LAB118:    memcpy(t282, t318, 8);

LAB119:    goto LAB97;

LAB98:    xsi_vlog_unsigned_bit_combine(t246, 1, t277, 1, t282, 1);
    goto LAB102;

LAB100:    memcpy(t246, t277, 8);
    goto LAB102;

LAB105:    t301 = (t286 + 4);
    *((unsigned int *)t286) = 1;
    *((unsigned int *)t301) = 1;
    goto LAB106;

LAB107:    *((unsigned int *)t283) = 1;
    goto LAB110;

LAB109:    t308 = (t283 + 4);
    *((unsigned int *)t283) = 1;
    *((unsigned int *)t308) = 1;
    goto LAB110;

LAB111:    t313 = ((char*)((ng2)));
    goto LAB112;

LAB113:    t318 = ((char*)((ng5)));
    goto LAB114;

LAB115:    xsi_vlog_unsigned_bit_combine(t282, 1, t313, 1, t318, 1);
    goto LAB119;

LAB117:    memcpy(t282, t313, 8);
    goto LAB119;

}


extern void work_m_00000000000519423418_1332927856_init()
{
	static char *pe[] = {(void *)Cont_104_0,(void *)Cont_105_1,(void *)Cont_107_2,(void *)Cont_112_3};
	xsi_register_didat("work_m_00000000000519423418_1332927856", "isim/mips_test_isim_beh.exe.sim/work/m_00000000000519423418_1332927856.didat");
	xsi_register_executes(pe);
}
