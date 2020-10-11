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
static const char *ng0 = "D:/HZIEE/2-COCP/ChipVerify/P0-3/dff/dff_tb.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {100, 0};
static int ng4[] = {2, 0};
static int ng5[] = {3, 0};
static int ng6[] = {4, 0};
static int ng7[] = {5, 0};



static void Always_37_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 2656);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(37, ng0);
    t4 = (t0 + 1448);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB10;

LAB9:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 1448);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

LAB10:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB9;

}

static void Initial_40_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    double t5;
    double t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    t1 = (t0 + 3096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);

LAB4:    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(45, ng0);
    t2 = (t0 + 2904);
    xsi_process_wait(t2, 15000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(45, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 2904);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(46, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = xsi_vlog_convert_to_real(t4, 3, 2);
    t5 = (t5 * 1000.0000000000000);
    t6 = (t5 < 0.00000000000000000);
    if (t6 == 1)
        goto LAB7;

LAB8:    t5 = (t5 + 0.50000000000000000);
    t5 = ((int64)(t5));

LAB9:    t5 = (t5 * 1.0000000000000000);
    t7 = (t0 + 2904);
    xsi_process_wait(t7, t5);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB7:    t5 = 0.00000000000000000;
    goto LAB9;

LAB10:    xsi_set_current_line(48, ng0);
    t8 = ((char*)((ng2)));
    t9 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t9, t8, 0, 0, 1, 0LL);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = xsi_vlog_convert_to_real(t4, 3, 2);
    t5 = (t5 * 1000.0000000000000);
    t6 = (t5 < 0.00000000000000000);
    if (t6 == 1)
        goto LAB11;

LAB12:    t5 = (t5 + 0.50000000000000000);
    t5 = ((int64)(t5));

LAB13:    t5 = (t5 * 1.0000000000000000);
    t7 = (t0 + 2904);
    xsi_process_wait(t7, t5);
    *((char **)t1) = &&LAB14;
    goto LAB1;

LAB11:    t5 = 0.00000000000000000;
    goto LAB13;

LAB14:    xsi_set_current_line(51, ng0);
    t8 = ((char*)((ng4)));
    t9 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t9, t8, 0, 0, 1, 0LL);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = xsi_vlog_convert_to_real(t4, 3, 2);
    t5 = (t5 * 1000.0000000000000);
    t6 = (t5 < 0.00000000000000000);
    if (t6 == 1)
        goto LAB15;

LAB16:    t5 = (t5 + 0.50000000000000000);
    t5 = ((int64)(t5));

LAB17:    t5 = (t5 * 1.0000000000000000);
    t7 = (t0 + 2904);
    xsi_process_wait(t7, t5);
    *((char **)t1) = &&LAB18;
    goto LAB1;

LAB15:    t5 = 0.00000000000000000;
    goto LAB17;

LAB18:    xsi_set_current_line(54, ng0);
    t8 = ((char*)((ng5)));
    t9 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t9, t8, 0, 0, 1, 0LL);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = xsi_vlog_convert_to_real(t4, 3, 2);
    t5 = (t5 * 1000.0000000000000);
    t6 = (t5 < 0.00000000000000000);
    if (t6 == 1)
        goto LAB19;

LAB20:    t5 = (t5 + 0.50000000000000000);
    t5 = ((int64)(t5));

LAB21:    t5 = (t5 * 1.0000000000000000);
    t7 = (t0 + 2904);
    xsi_process_wait(t7, t5);
    *((char **)t1) = &&LAB22;
    goto LAB1;

LAB19:    t5 = 0.00000000000000000;
    goto LAB21;

LAB22:    xsi_set_current_line(57, ng0);
    t8 = ((char*)((ng6)));
    t9 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t9, t8, 0, 0, 1, 0LL);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = xsi_vlog_convert_to_real(t4, 3, 2);
    t5 = (t5 * 1000.0000000000000);
    t6 = (t5 < 0.00000000000000000);
    if (t6 == 1)
        goto LAB23;

LAB24:    t5 = (t5 + 0.50000000000000000);
    t5 = ((int64)(t5));

LAB25:    t5 = (t5 * 1.0000000000000000);
    t7 = (t0 + 2904);
    xsi_process_wait(t7, t5);
    *((char **)t1) = &&LAB26;
    goto LAB1;

LAB23:    t5 = 0.00000000000000000;
    goto LAB25;

LAB26:    xsi_set_current_line(60, ng0);
    t8 = ((char*)((ng7)));
    t9 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t9, t8, 0, 0, 1, 0LL);
    goto LAB1;

}


extern void work_m_00000000000535929896_3255587176_init()
{
	static char *pe[] = {(void *)Always_37_0,(void *)Initial_40_1};
	xsi_register_didat("work_m_00000000000535929896_3255587176", "isim/dff_tb_isim_beh.exe.sim/work/m_00000000000535929896_3255587176.didat");
	xsi_register_executes(pe);
}
