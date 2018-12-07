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
static const char *ng0 = "G:/ComputerOrganization/CPU/EXT.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {65535U, 0U};
static int ng5[] = {1, 0};
static unsigned int ng6[] = {16383U, 0U};



static void Always_29_0(char *t0)
{
    char t7[8];
    char t22[8];
    char t39[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t8;
    char *t9;
    char *t10;
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
    unsigned int t21;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;

LAB0:    t1 = (t0 + 1536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 1732);
    *((int *)t2) = 1;
    t3 = (t0 + 1564);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(29, ng0);

LAB5:    xsi_set_current_line(30, ng0);
    t4 = (t0 + 692U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 2);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB11;

LAB12:
LAB14:
LAB13:    xsi_set_current_line(43, ng0);

LAB20:    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    xsi_vlogtype_concat(t7, 18, 18, 2U, t4, 16, t2, 2);
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t7, 0, 0, 18);
    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1012);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t7, 0, 8);
    t8 = (t7 + 4);
    t9 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 17);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t9);
    t14 = (t13 >> 17);
    *((unsigned int *)t8) = t14;
    t15 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t15 & 1U);
    t16 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t16 & 1U);
    t10 = ((char*)((ng5)));
    memset(t22, 0, 8);
    t23 = (t7 + 4);
    t24 = (t10 + 4);
    t17 = *((unsigned int *)t7);
    t18 = *((unsigned int *)t10);
    t19 = (t17 ^ t18);
    t20 = *((unsigned int *)t23);
    t21 = *((unsigned int *)t24);
    t25 = (t20 ^ t21);
    t26 = (t19 | t25);
    t27 = *((unsigned int *)t23);
    t28 = *((unsigned int *)t24);
    t29 = (t27 | t28);
    t30 = (~(t29));
    t31 = (t26 & t30);
    if (t31 != 0)
        goto LAB24;

LAB21:    if (t29 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t22) = 1;

LAB24:    t33 = (t22 + 4);
    t34 = *((unsigned int *)t33);
    t35 = (~(t34));
    t36 = *((unsigned int *)t22);
    t37 = (t36 & t35);
    t38 = (t37 != 0);
    if (t38 > 0)
        goto LAB25;

LAB26:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1012);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t8 = ((char*)((ng1)));
    xsi_vlogtype_concat(t7, 32, 32, 2U, t8, 14, t4, 18);
    t9 = (t0 + 920);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 32);

LAB27:
LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(32, ng0);
    t8 = (t0 + 600U);
    t9 = *((char **)t8);
    t8 = ((char*)((ng1)));
    xsi_vlogtype_concat(t7, 32, 32, 2U, t8, 16, t9, 16);
    t10 = (t0 + 920);
    xsi_vlogvar_assign_value(t10, t7, 0, 0, 32);
    goto LAB15;

LAB9:    xsi_set_current_line(34, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 600U);
    t8 = *((char **)t4);
    xsi_vlogtype_concat(t7, 32, 32, 2U, t8, 16, t3, 16);
    t4 = (t0 + 920);
    xsi_vlogvar_assign_value(t4, t7, 0, 0, 32);
    goto LAB15;

LAB11:    xsi_set_current_line(36, ng0);

LAB16:    xsi_set_current_line(37, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    memset(t7, 0, 8);
    t3 = (t7 + 4);
    t8 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 15);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t8);
    t14 = (t13 >> 15);
    *((unsigned int *)t3) = t14;
    t15 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t15 & 1U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 1U);
    t9 = (t7 + 4);
    t17 = *((unsigned int *)t9);
    t18 = (~(t17));
    t19 = *((unsigned int *)t7);
    t20 = (t19 & t18);
    t21 = (t20 != 0);
    if (t21 > 0)
        goto LAB17;

LAB18:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    xsi_vlogtype_concat(t7, 32, 32, 2U, t2, 16, t3, 16);
    t4 = (t0 + 920);
    xsi_vlogvar_assign_value(t4, t7, 0, 0, 32);

LAB19:    goto LAB15;

LAB17:    xsi_set_current_line(38, ng0);
    t10 = (t0 + 600U);
    t23 = *((char **)t10);
    t10 = ((char*)((ng4)));
    xsi_vlogtype_concat(t22, 32, 32, 2U, t10, 16, t23, 16);
    t24 = (t0 + 920);
    xsi_vlogvar_assign_value(t24, t22, 0, 0, 32);
    goto LAB19;

LAB23:    t32 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB24;

LAB25:    xsi_set_current_line(46, ng0);
    t40 = (t0 + 1012);
    t41 = (t40 + 36U);
    t42 = *((char **)t41);
    t43 = ((char*)((ng6)));
    xsi_vlogtype_concat(t39, 32, 32, 2U, t43, 14, t42, 18);
    t44 = (t0 + 920);
    xsi_vlogvar_assign_value(t44, t39, 0, 0, 32);
    goto LAB27;

}


extern void work_m_00000000003597489664_1785967555_init()
{
	static char *pe[] = {(void *)Always_29_0};
	xsi_register_didat("work_m_00000000003597489664_1785967555", "isim/mips_isim_beh.exe.sim/work/m_00000000003597489664_1785967555.didat");
	xsi_register_executes(pe);
}
