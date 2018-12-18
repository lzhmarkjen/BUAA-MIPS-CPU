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
static const char *ng0 = "G:/ComputerOrganization/CPU/ALU.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {3U, 0U};
static unsigned int ng6[] = {4U, 0U};
static unsigned int ng7[] = {5U, 0U};
static unsigned int ng8[] = {6U, 0U};
static unsigned int ng9[] = {7U, 0U};
static unsigned int ng10[] = {8U, 0U};
static unsigned int ng11[] = {9U, 0U};
static unsigned int ng12[] = {10U, 0U};
static unsigned int ng13[] = {11U, 0U};
static unsigned int ng14[] = {12U, 0U};
static unsigned int ng15[] = {13U, 0U};



static void Always_32_0(char *t0)
{
    char t10[8];
    char t42[16];
    char t43[16];
    char t44[8];
    char t45[16];
    char t46[8];
    char t55[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    int t33;
    int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;

LAB0:    t1 = (t0 + 1812U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 2008);
    *((int *)t2) = 1;
    t3 = (t0 + 1840);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(32, ng0);

LAB5:    xsi_set_current_line(33, ng0);
    t4 = (t0 + 784U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t4, 4);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng15)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB33;

LAB34:
LAB36:
LAB35:
LAB37:    goto LAB2;

LAB7:    xsi_set_current_line(34, ng0);

LAB38:    xsi_set_current_line(35, ng0);
    t7 = (t0 + 600U);
    t8 = *((char **)t7);
    t7 = (t0 + 692U);
    t9 = *((char **)t7);
    t11 = *((unsigned int *)t8);
    t12 = *((unsigned int *)t9);
    t13 = (t11 & t12);
    *((unsigned int *)t10) = t13;
    t7 = (t8 + 4);
    t14 = (t9 + 4);
    t15 = (t10 + 4);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t14);
    t18 = (t16 | t17);
    *((unsigned int *)t15) = t18;
    t19 = *((unsigned int *)t15);
    t20 = (t19 != 0);
    if (t20 == 1)
        goto LAB39;

LAB40:
LAB41:    t41 = (t0 + 1104);
    xsi_vlogvar_assign_value(t41, t10, 0, 0, 32);
    xsi_set_current_line(36, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB37;

LAB9:    xsi_set_current_line(38, ng0);

LAB42:    xsi_set_current_line(39, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = (t0 + 692U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t16 = *((unsigned int *)t3);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    *((unsigned int *)t9) = t18;
    t19 = *((unsigned int *)t9);
    t20 = (t19 != 0);
    if (t20 == 1)
        goto LAB43;

LAB44:
LAB45:    t23 = (t0 + 1104);
    xsi_vlogvar_assign_value(t23, t10, 0, 0, 32);
    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB37;

LAB11:    xsi_set_current_line(42, ng0);

LAB46:    xsi_set_current_line(43, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = (t0 + 600U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t10 + 4);
    t8 = (t7 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 31);
    t13 = (t12 & 1);
    *((unsigned int *)t10) = t13;
    t16 = *((unsigned int *)t8);
    t17 = (t16 >> 31);
    t18 = (t17 & 1);
    *((unsigned int *)t3) = t18;
    xsi_vlogtype_concat(t42, 33, 33, 2U, t10, 1, t4, 32);
    t9 = (t0 + 692U);
    t14 = *((char **)t9);
    t9 = (t0 + 692U);
    t15 = *((char **)t9);
    memset(t44, 0, 8);
    t9 = (t44 + 4);
    t23 = (t15 + 4);
    t19 = *((unsigned int *)t15);
    t20 = (t19 >> 31);
    t21 = (t20 & 1);
    *((unsigned int *)t44) = t21;
    t22 = *((unsigned int *)t23);
    t25 = (t22 >> 31);
    t26 = (t25 & 1);
    *((unsigned int *)t9) = t26;
    xsi_vlogtype_concat(t43, 33, 33, 2U, t44, 1, t14, 32);
    xsi_vlog_unsigned_add(t45, 33, t42, 33, t43, 33);
    t24 = (t0 + 1288);
    xsi_vlogvar_assign_value(t24, t45, 0, 0, 33);
    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1288);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t7 = (t10 + 4);
    t8 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 0);
    *((unsigned int *)t10) = t12;
    t13 = *((unsigned int *)t8);
    t16 = (t13 >> 0);
    *((unsigned int *)t7) = t16;
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t17 & 4294967295U);
    t18 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t18 & 4294967295U);
    t9 = (t0 + 1104);
    xsi_vlogvar_assign_value(t9, t10, 0, 0, 32);
    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1288);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t7 = (t10 + 4);
    t8 = (t4 + 8);
    t9 = (t4 + 12);
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    t13 = (t12 & 1);
    *((unsigned int *)t10) = t13;
    t16 = *((unsigned int *)t9);
    t17 = (t16 >> 0);
    t18 = (t17 & 1);
    *((unsigned int *)t7) = t18;
    t14 = (t0 + 1288);
    t15 = (t14 + 36U);
    t23 = *((char **)t15);
    memset(t44, 0, 8);
    t24 = (t44 + 4);
    t41 = (t23 + 4);
    t19 = *((unsigned int *)t23);
    t20 = (t19 >> 31);
    t21 = (t20 & 1);
    *((unsigned int *)t44) = t21;
    t22 = *((unsigned int *)t41);
    t25 = (t22 >> 31);
    t26 = (t25 & 1);
    *((unsigned int *)t24) = t26;
    memset(t46, 0, 8);
    t47 = (t10 + 4);
    t48 = (t44 + 4);
    t27 = *((unsigned int *)t10);
    t28 = *((unsigned int *)t44);
    t29 = (t27 ^ t28);
    t30 = *((unsigned int *)t47);
    t31 = *((unsigned int *)t48);
    t32 = (t30 ^ t31);
    t35 = (t29 | t32);
    t36 = *((unsigned int *)t47);
    t37 = *((unsigned int *)t48);
    t38 = (t36 | t37);
    t39 = (~(t38));
    t40 = (t35 & t39);
    if (t40 != 0)
        goto LAB48;

LAB47:    if (t38 != 0)
        goto LAB49;

LAB50:    t50 = (t0 + 1196);
    xsi_vlogvar_assign_value(t50, t46, 0, 0, 1);
    goto LAB37;

LAB13:    xsi_set_current_line(47, ng0);

LAB51:    xsi_set_current_line(48, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = (t0 + 692U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 32, t4, 32, t7, 32);
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 32);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB37;

LAB15:    xsi_set_current_line(51, ng0);

LAB52:    xsi_set_current_line(52, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = (t0 + 692U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    *((unsigned int *)t10) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t16 = *((unsigned int *)t3);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    *((unsigned int *)t9) = t18;
    t19 = *((unsigned int *)t9);
    t20 = (t19 != 0);
    if (t20 == 1)
        goto LAB53;

LAB54:
LAB55:    t14 = (t0 + 1104);
    xsi_vlogvar_assign_value(t14, t10, 0, 0, 32);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB37;

LAB17:    xsi_set_current_line(55, ng0);

LAB56:    xsi_set_current_line(56, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = (t0 + 692U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 | t12);
    *((unsigned int *)t44) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t44 + 4);
    t16 = *((unsigned int *)t3);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    *((unsigned int *)t9) = t18;
    t19 = *((unsigned int *)t9);
    t20 = (t19 != 0);
    if (t20 == 1)
        goto LAB57;

LAB58:
LAB59:    memset(t10, 0, 8);
    t23 = (t10 + 4);
    t24 = (t44 + 4);
    t37 = *((unsigned int *)t44);
    t38 = (~(t37));
    *((unsigned int *)t10) = t38;
    *((unsigned int *)t23) = 0;
    if (*((unsigned int *)t24) != 0)
        goto LAB61;

LAB60:    t53 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t53 & 4294967295U);
    t54 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t54 & 4294967295U);
    t41 = (t0 + 1104);
    xsi_vlogvar_assign_value(t41, t10, 0, 0, 32);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB37;

LAB19:    xsi_set_current_line(59, ng0);

LAB62:    xsi_set_current_line(60, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = (t0 + 600U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t10 + 4);
    t8 = (t7 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 31);
    t13 = (t12 & 1);
    *((unsigned int *)t10) = t13;
    t16 = *((unsigned int *)t8);
    t17 = (t16 >> 31);
    t18 = (t17 & 1);
    *((unsigned int *)t3) = t18;
    xsi_vlogtype_concat(t42, 33, 33, 2U, t10, 1, t4, 32);
    t9 = (t0 + 692U);
    t14 = *((char **)t9);
    t9 = (t0 + 692U);
    t15 = *((char **)t9);
    memset(t44, 0, 8);
    t9 = (t44 + 4);
    t23 = (t15 + 4);
    t19 = *((unsigned int *)t15);
    t20 = (t19 >> 31);
    t21 = (t20 & 1);
    *((unsigned int *)t44) = t21;
    t22 = *((unsigned int *)t23);
    t25 = (t22 >> 31);
    t26 = (t25 & 1);
    *((unsigned int *)t9) = t26;
    xsi_vlogtype_concat(t43, 33, 33, 2U, t44, 1, t14, 32);
    xsi_vlog_unsigned_minus(t45, 33, t42, 33, t43, 33);
    t24 = (t0 + 1288);
    xsi_vlogvar_assign_value(t24, t45, 0, 0, 33);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 1288);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t7 = (t10 + 4);
    t8 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 0);
    *((unsigned int *)t10) = t12;
    t13 = *((unsigned int *)t8);
    t16 = (t13 >> 0);
    *((unsigned int *)t7) = t16;
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t17 & 4294967295U);
    t18 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t18 & 4294967295U);
    t9 = (t0 + 1104);
    xsi_vlogvar_assign_value(t9, t10, 0, 0, 32);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 1288);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t7 = (t10 + 4);
    t8 = (t4 + 8);
    t9 = (t4 + 12);
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    t13 = (t12 & 1);
    *((unsigned int *)t10) = t13;
    t16 = *((unsigned int *)t9);
    t17 = (t16 >> 0);
    t18 = (t17 & 1);
    *((unsigned int *)t7) = t18;
    t14 = (t0 + 1288);
    t15 = (t14 + 36U);
    t23 = *((char **)t15);
    memset(t44, 0, 8);
    t24 = (t44 + 4);
    t41 = (t23 + 4);
    t19 = *((unsigned int *)t23);
    t20 = (t19 >> 31);
    t21 = (t20 & 1);
    *((unsigned int *)t44) = t21;
    t22 = *((unsigned int *)t41);
    t25 = (t22 >> 31);
    t26 = (t25 & 1);
    *((unsigned int *)t24) = t26;
    memset(t46, 0, 8);
    t47 = (t10 + 4);
    t48 = (t44 + 4);
    t27 = *((unsigned int *)t10);
    t28 = *((unsigned int *)t44);
    t29 = (t27 ^ t28);
    t30 = *((unsigned int *)t47);
    t31 = *((unsigned int *)t48);
    t32 = (t30 ^ t31);
    t35 = (t29 | t32);
    t36 = *((unsigned int *)t47);
    t37 = *((unsigned int *)t48);
    t38 = (t36 | t37);
    t39 = (~(t38));
    t40 = (t35 & t39);
    if (t40 != 0)
        goto LAB64;

LAB63:    if (t38 != 0)
        goto LAB65;

LAB66:    t50 = (t0 + 1196);
    xsi_vlogvar_assign_value(t50, t46, 0, 0, 1);
    goto LAB37;

LAB21:    xsi_set_current_line(64, ng0);

LAB67:    xsi_set_current_line(65, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = (t0 + 692U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_minus(t10, 32, t4, 32, t7, 32);
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 32);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB37;

LAB23:    xsi_set_current_line(68, ng0);

LAB68:    xsi_set_current_line(69, ng0);
    t3 = (t0 + 692U);
    t4 = *((char **)t3);
    t3 = (t0 + 600U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t10 + 4);
    t8 = (t7 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    *((unsigned int *)t10) = t12;
    t13 = *((unsigned int *)t8);
    t16 = (t13 >> 0);
    *((unsigned int *)t3) = t16;
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t17 & 31U);
    t18 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t18 & 31U);
    t9 = (t0 + 876U);
    t14 = *((char **)t9);
    memset(t44, 0, 8);
    xsi_vlog_unsigned_add(t44, 5, t10, 5, t14, 5);
    memset(t46, 0, 8);
    xsi_vlog_unsigned_lshift(t46, 32, t4, 32, t44, 5);
    t9 = (t0 + 1104);
    xsi_vlogvar_assign_value(t9, t46, 0, 0, 32);
    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB37;

LAB25:    xsi_set_current_line(72, ng0);

LAB69:    xsi_set_current_line(73, ng0);
    t3 = (t0 + 692U);
    t4 = *((char **)t3);
    t3 = (t0 + 600U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t10 + 4);
    t8 = (t7 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    *((unsigned int *)t10) = t12;
    t13 = *((unsigned int *)t8);
    t16 = (t13 >> 0);
    *((unsigned int *)t3) = t16;
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t17 & 31U);
    t18 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t18 & 31U);
    t9 = (t0 + 876U);
    t14 = *((char **)t9);
    memset(t44, 0, 8);
    xsi_vlog_unsigned_add(t44, 5, t10, 5, t14, 5);
    memset(t46, 0, 8);
    xsi_vlog_unsigned_rshift(t46, 32, t4, 32, t44, 5);
    t9 = (t0 + 1104);
    xsi_vlogvar_assign_value(t9, t46, 0, 0, 32);
    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB37;

LAB27:    xsi_set_current_line(76, ng0);

LAB70:    xsi_set_current_line(77, ng0);
    t3 = (t0 + 692U);
    t4 = *((char **)t3);
    t3 = (t0 + 600U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t10 + 4);
    t8 = (t7 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    *((unsigned int *)t10) = t12;
    t13 = *((unsigned int *)t8);
    t16 = (t13 >> 0);
    *((unsigned int *)t3) = t16;
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t17 & 31U);
    t18 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t18 & 31U);
    t9 = (t0 + 876U);
    t14 = *((char **)t9);
    memset(t44, 0, 8);
    xsi_vlog_unsigned_add(t44, 5, t10, 5, t14, 5);
    memset(t46, 0, 8);
    xsi_vlog_unsigned_arith_lshift(t46, 32, t4, 32, t44, 5);
    t9 = (t0 + 1104);
    xsi_vlogvar_assign_value(t9, t46, 0, 0, 32);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB37;

LAB29:    xsi_set_current_line(80, ng0);

LAB71:    xsi_set_current_line(81, ng0);
    t3 = (t0 + 692U);
    t4 = *((char **)t3);
    t3 = (t0 + 600U);
    t7 = *((char **)t3);
    memset(t44, 0, 8);
    t3 = (t44 + 4);
    t8 = (t7 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    *((unsigned int *)t44) = t12;
    t13 = *((unsigned int *)t8);
    t16 = (t13 >> 0);
    *((unsigned int *)t3) = t16;
    t17 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t17 & 31U);
    t18 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t18 & 31U);
    t9 = (t0 + 876U);
    t14 = *((char **)t9);
    memset(t46, 0, 8);
    xsi_vlog_unsigned_add(t46, 5, t44, 5, t14, 5);
    memset(t55, 0, 8);
    xsi_vlog_signed_arith_rshift(t55, 32, t4, 32, t46, 5);
    t9 = (t0 + 1104);
    xsi_vlogvar_assign_value(t9, t55, 0, 0, 32);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB37;

LAB31:    xsi_set_current_line(84, ng0);

LAB72:    xsi_set_current_line(85, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = (t0 + 692U);
    t7 = *((char **)t3);
    memset(t46, 0, 8);
    xsi_vlog_signed_less(t46, 32, t4, 32, t7, 32);
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t46, 0, 0, 32);
    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB37;

LAB33:    xsi_set_current_line(88, ng0);

LAB73:    xsi_set_current_line(89, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = (t0 + 692U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t4 + 4);
    if (*((unsigned int *)t3) != 0)
        goto LAB75;

LAB74:    t8 = (t7 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB75;

LAB78:    if (*((unsigned int *)t4) < *((unsigned int *)t7))
        goto LAB76;

LAB77:    t14 = (t0 + 1104);
    xsi_vlogvar_assign_value(t14, t10, 0, 0, 32);
    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB37;

LAB39:    t21 = *((unsigned int *)t10);
    t22 = *((unsigned int *)t15);
    *((unsigned int *)t10) = (t21 | t22);
    t23 = (t8 + 4);
    t24 = (t9 + 4);
    t25 = *((unsigned int *)t8);
    t26 = (~(t25));
    t27 = *((unsigned int *)t23);
    t28 = (~(t27));
    t29 = *((unsigned int *)t9);
    t30 = (~(t29));
    t31 = *((unsigned int *)t24);
    t32 = (~(t31));
    t33 = (t26 & t28);
    t34 = (t30 & t32);
    t35 = (~(t33));
    t36 = (~(t34));
    t37 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t37 & t35);
    t38 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t38 & t36);
    t39 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t39 & t35);
    t40 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t40 & t36);
    goto LAB41;

LAB43:    t21 = *((unsigned int *)t10);
    t22 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t21 | t22);
    t14 = (t4 + 4);
    t15 = (t7 + 4);
    t25 = *((unsigned int *)t14);
    t26 = (~(t25));
    t27 = *((unsigned int *)t4);
    t33 = (t27 & t26);
    t28 = *((unsigned int *)t15);
    t29 = (~(t28));
    t30 = *((unsigned int *)t7);
    t34 = (t30 & t29);
    t31 = (~(t33));
    t32 = (~(t34));
    t35 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t35 & t31);
    t36 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t36 & t32);
    goto LAB45;

LAB48:    *((unsigned int *)t46) = 1;
    goto LAB50;

LAB49:    t49 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB50;

LAB53:    t21 = *((unsigned int *)t10);
    t22 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t21 | t22);
    goto LAB55;

LAB57:    t21 = *((unsigned int *)t44);
    t22 = *((unsigned int *)t9);
    *((unsigned int *)t44) = (t21 | t22);
    t14 = (t4 + 4);
    t15 = (t7 + 4);
    t25 = *((unsigned int *)t14);
    t26 = (~(t25));
    t27 = *((unsigned int *)t4);
    t33 = (t27 & t26);
    t28 = *((unsigned int *)t15);
    t29 = (~(t28));
    t30 = *((unsigned int *)t7);
    t34 = (t30 & t29);
    t31 = (~(t33));
    t32 = (~(t34));
    t35 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t35 & t31);
    t36 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t36 & t32);
    goto LAB59;

LAB61:    t39 = *((unsigned int *)t10);
    t40 = *((unsigned int *)t24);
    *((unsigned int *)t10) = (t39 | t40);
    t51 = *((unsigned int *)t23);
    t52 = *((unsigned int *)t24);
    *((unsigned int *)t23) = (t51 | t52);
    goto LAB60;

LAB64:    *((unsigned int *)t46) = 1;
    goto LAB66;

LAB65:    t49 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB66;

LAB75:    t9 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB77;

LAB76:    *((unsigned int *)t10) = 1;
    goto LAB77;

}


extern void work_m_00000000001123196656_0886308060_init()
{
	static char *pe[] = {(void *)Always_32_0};
	xsi_register_didat("work_m_00000000001123196656_0886308060", "isim/mips_test_isim_beh.exe.sim/work/m_00000000001123196656_0886308060.didat");
	xsi_register_executes(pe);
}
