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
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {6U, 0U};



static void Always_29_0(char *t0)
{
    char t10[8];
    char t42[8];
    char t43[8];
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

LAB0:    t1 = (t0 + 1628U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 1824);
    *((int *)t2) = 1;
    t3 = (t0 + 1656);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(29, ng0);

LAB5:    xsi_set_current_line(30, ng0);
    t4 = (t0 + 784U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t4, 4);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB15;

LAB16:
LAB18:
LAB17:
LAB19:    goto LAB2;

LAB7:    xsi_set_current_line(32, ng0);
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
        goto LAB20;

LAB21:
LAB22:    t41 = (t0 + 1012);
    xsi_vlogvar_assign_value(t41, t10, 0, 0, 32);
    goto LAB19;

LAB9:    xsi_set_current_line(34, ng0);
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
        goto LAB23;

LAB24:
LAB25:    t23 = (t0 + 1012);
    xsi_vlogvar_assign_value(t23, t10, 0, 0, 32);
    goto LAB19;

LAB11:    xsi_set_current_line(36, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = (t0 + 692U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 32, t4, 32, t7, 32);
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 32);
    goto LAB19;

LAB13:    xsi_set_current_line(38, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = (t0 + 692U);
    t7 = *((char **)t3);
    memset(t43, 0, 8);
    xsi_vlog_signed_add(t43, 32, t4, 32, t7, 32);
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t43, 0, 0, 32);
    goto LAB19;

LAB15:    xsi_set_current_line(39, ng0);

LAB26:    xsi_set_current_line(40, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = (t0 + 692U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_minus(t10, 32, t4, 32, t7, 32);
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 32);
    xsi_set_current_line(41, ng0);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);
    t2 = (t0 + 692U);
    t4 = *((char **)t2);
    memset(t43, 0, 8);
    t2 = (t3 + 4);
    t7 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = *((unsigned int *)t4);
    t13 = (t11 ^ t12);
    t16 = *((unsigned int *)t2);
    t17 = *((unsigned int *)t7);
    t18 = (t16 ^ t17);
    t19 = (t13 | t18);
    t20 = *((unsigned int *)t2);
    t21 = *((unsigned int *)t7);
    t22 = (t20 | t21);
    t25 = (~(t22));
    t26 = (t19 & t25);
    if (t26 != 0)
        goto LAB30;

LAB27:    if (t22 != 0)
        goto LAB29;

LAB28:    *((unsigned int *)t43) = 1;

LAB30:    memset(t42, 0, 8);
    t9 = (t43 + 4);
    t27 = *((unsigned int *)t9);
    t28 = (~(t27));
    t29 = *((unsigned int *)t43);
    t30 = (t29 & t28);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t9) != 0)
        goto LAB33;

LAB34:    t15 = (t42 + 4);
    t32 = *((unsigned int *)t42);
    t35 = *((unsigned int *)t15);
    t36 = (t32 || t35);
    if (t36 > 0)
        goto LAB35;

LAB36:    t37 = *((unsigned int *)t42);
    t38 = (~(t37));
    t39 = *((unsigned int *)t15);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB37;

LAB38:    if (*((unsigned int *)t15) > 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t42) > 0)
        goto LAB41;

LAB42:    memcpy(t10, t24, 8);

LAB43:    t41 = (t0 + 1104);
    xsi_vlogvar_assign_value(t41, t10, 0, 0, 1);
    goto LAB19;

LAB20:    t21 = *((unsigned int *)t10);
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
    goto LAB22;

LAB23:    t21 = *((unsigned int *)t10);
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
    goto LAB25;

LAB29:    t8 = (t43 + 4);
    *((unsigned int *)t43) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB30;

LAB31:    *((unsigned int *)t42) = 1;
    goto LAB34;

LAB33:    t14 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB34;

LAB35:    t23 = ((char*)((ng2)));
    goto LAB36;

LAB37:    t24 = ((char*)((ng1)));
    goto LAB38;

LAB39:    xsi_vlog_unsigned_bit_combine(t10, 1, t23, 1, t24, 1);
    goto LAB43;

LAB41:    memcpy(t10, t23, 8);
    goto LAB43;

}


extern void work_m_00000000000827251286_0886308060_init()
{
	static char *pe[] = {(void *)Always_29_0};
	xsi_register_didat("work_m_00000000000827251286_0886308060", "isim/mips_test_isim_beh.exe.sim/work/m_00000000000827251286_0886308060.didat");
	xsi_register_executes(pe);
}
