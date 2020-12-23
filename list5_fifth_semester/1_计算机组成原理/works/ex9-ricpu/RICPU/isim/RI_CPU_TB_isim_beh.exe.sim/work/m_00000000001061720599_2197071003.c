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
static const char *ng0 = "E:/home/shadow/hziee/2-COCP/works/1-final/ex9_ricpu/RICPU/RI_CPU.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {4, 0};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {32U, 0U};
static unsigned int ng5[] = {4U, 0U};
static int ng6[] = {1, 0};
static unsigned int ng7[] = {34U, 0U};
static unsigned int ng8[] = {5U, 0U};
static unsigned int ng9[] = {36U, 0U};
static int ng10[] = {0, 0};
static unsigned int ng11[] = {37U, 0U};
static unsigned int ng12[] = {38U, 0U};
static unsigned int ng13[] = {2U, 0U};
static unsigned int ng14[] = {39U, 0U};
static unsigned int ng15[] = {3U, 0U};
static unsigned int ng16[] = {43U, 0U};
static unsigned int ng17[] = {6U, 0U};
static unsigned int ng18[] = {7U, 0U};
static unsigned int ng19[] = {8U, 0U};
static unsigned int ng20[] = {12U, 0U};
static unsigned int ng21[] = {14U, 0U};
static unsigned int ng22[] = {11U, 0U};
static unsigned int ng23[] = {35U, 0U};
static int ng24[] = {16, 0};



static void Cont_74_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 9088U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 2488U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng1)));
    xsi_vlogtype_concat(t3, 32, 21, 2U, t2, 16, t4, 5);
    t5 = (t0 + 13960);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t3, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 13624);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Initial_75_1(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(75, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 5768);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void Cont_76_2(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 9584U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 5768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 14024);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t6, 8);
    xsi_driver_vfirst_trans(t7, 0, 31);
    t12 = (t0 + 13640);
    *((int *)t12) = 1;

LAB1:    return;
}

static void Always_93_3(char *t0)
{
    char t6[8];
    char t28[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
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
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;

LAB0:    t1 = (t0 + 9832U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 13656);
    *((int *)t2) = 1;
    t3 = (t0 + 9864);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(94, ng0);

LAB5:    xsi_set_current_line(95, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
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
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(96, ng0);
    t29 = (t0 + 1048U);
    t30 = *((char **)t29);
    memset(t28, 0, 8);
    t29 = (t30 + 4);
    t31 = *((unsigned int *)t29);
    t32 = (~(t31));
    t33 = *((unsigned int *)t30);
    t34 = (t33 & t32);
    t35 = (t34 & 1U);
    if (t35 != 0)
        goto LAB16;

LAB14:    if (*((unsigned int *)t29) == 0)
        goto LAB13;

LAB15:    t36 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t36) = 1;

LAB16:    t37 = (t28 + 4);
    t38 = (t30 + 4);
    t39 = *((unsigned int *)t30);
    t40 = (~(t39));
    *((unsigned int *)t28) = t40;
    *((unsigned int *)t37) = 0;
    if (*((unsigned int *)t38) != 0)
        goto LAB18;

LAB17:    t45 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t45 & 1U);
    t46 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t46 & 1U);
    t47 = (t0 + 5608);
    xsi_vlogvar_wait_assign_value(t47, t28, 0, 0, 1, 0LL);
    goto LAB12;

LAB13:    *((unsigned int *)t28) = 1;
    goto LAB16;

LAB18:    t41 = *((unsigned int *)t28);
    t42 = *((unsigned int *)t38);
    *((unsigned int *)t28) = (t41 | t42);
    t43 = *((unsigned int *)t37);
    t44 = *((unsigned int *)t38);
    *((unsigned int *)t37) = (t43 | t44);
    goto LAB17;

}

static void Always_99_4(char *t0)
{
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

LAB0:    t1 = (t0 + 10080U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 13672);
    *((int *)t2) = 1;
    t3 = (t0 + 10112);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(100, ng0);

LAB5:    xsi_set_current_line(101, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 5768);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(102, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 5768);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 32);
    goto LAB8;

}

static void Cont_107_5(char *t0)
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

LAB0:    t1 = (t0 + 10328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(107, ng0);
    t2 = (t0 + 1528U);
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
    t12 = (t0 + 14088);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
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
    t25 = (t0 + 13688);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Cont_108_6(char *t0)
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

LAB0:    t1 = (t0 + 10576U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(108, ng0);
    t2 = (t0 + 1528U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 21);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 21);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 31U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 31U);
    t12 = (t0 + 14152);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 31U;
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
    xsi_driver_vfirst_trans(t12, 0, 4);
    t25 = (t0 + 13704);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Cont_109_7(char *t0)
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

LAB0:    t1 = (t0 + 10824U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(109, ng0);
    t2 = (t0 + 1528U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 16);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 16);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 31U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 31U);
    t12 = (t0 + 14216);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 31U;
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
    xsi_driver_vfirst_trans(t12, 0, 4);
    t25 = (t0 + 13720);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Cont_110_8(char *t0)
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

LAB0:    t1 = (t0 + 11072U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(110, ng0);
    t2 = (t0 + 1528U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 11);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 11);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 31U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 31U);
    t12 = (t0 + 14280);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 31U;
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
    xsi_driver_vfirst_trans(t12, 0, 4);
    t25 = (t0 + 13736);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Cont_111_9(char *t0)
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

LAB0:    t1 = (t0 + 11320U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(111, ng0);
    t2 = (t0 + 1528U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 6);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 6);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 31U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 31U);
    t12 = (t0 + 14344);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 31U;
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
    xsi_driver_vfirst_trans(t12, 0, 4);
    t25 = (t0 + 13752);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Cont_112_10(char *t0)
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

LAB0:    t1 = (t0 + 11568U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 1528U);
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
    t12 = (t0 + 14408);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
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
    t25 = (t0 + 13768);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Cont_115_11(char *t0)
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

LAB0:    t1 = (t0 + 11816U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(115, ng0);
    t2 = (t0 + 1528U);
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
    *((unsigned int *)t3) = (t10 & 65535U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 65535U);
    t12 = (t0 + 14472);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 65535U;
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
    xsi_driver_vfirst_trans(t12, 0, 15);
    t25 = (t0 + 13784);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Always_118_12(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
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
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    int t28;

LAB0:    t1 = (t0 + 12064U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(118, ng0);
    t2 = (t0 + 13800);
    *((int *)t2) = 1;
    t3 = (t0 + 12096);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(119, ng0);

LAB5:    xsi_set_current_line(120, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 7048);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(122, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 8168);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(123, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB9;

LAB6:    if (t16 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t20 = (t6 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(153, ng0);

LAB43:    xsi_set_current_line(154, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 7528);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(155, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 5928);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(156, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 6088);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(159, ng0);
    t2 = (t0 + 3288U);
    t4 = *((char **)t2);
    t2 = (t0 + 6408);
    xsi_vlogvar_assign_value(t2, t4, 0, 0, 32);
    xsi_set_current_line(160, ng0);
    t2 = (t0 + 2008U);
    t4 = *((char **)t2);
    t2 = (t0 + 6568);
    xsi_vlogvar_assign_value(t2, t4, 0, 0, 5);
    xsi_set_current_line(161, ng0);
    t2 = (t0 + 2168U);
    t4 = *((char **)t2);
    t2 = (t0 + 6728);
    xsi_vlogvar_assign_value(t2, t4, 0, 0, 5);
    xsi_set_current_line(162, ng0);
    t2 = (t0 + 2168U);
    t4 = *((char **)t2);
    t2 = (t0 + 6888);
    xsi_vlogvar_assign_value(t2, t4, 0, 0, 5);
    xsi_set_current_line(164, ng0);
    t2 = (t0 + 1688U);
    t4 = *((char **)t2);

LAB44:    t2 = ((char*)((ng19)));
    t28 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t28 == 1)
        goto LAB45;

LAB46:    t2 = ((char*)((ng20)));
    t28 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t28 == 1)
        goto LAB47;

LAB48:    t2 = ((char*)((ng21)));
    t28 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t28 == 1)
        goto LAB49;

LAB50:    t2 = ((char*)((ng22)));
    t28 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t28 == 1)
        goto LAB51;

LAB52:    t2 = ((char*)((ng23)));
    t28 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t28 == 1)
        goto LAB53;

LAB54:    t2 = ((char*)((ng16)));
    t28 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t28 == 1)
        goto LAB55;

LAB56:
LAB57:
LAB12:    goto LAB2;

LAB8:    t19 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(124, ng0);

LAB13:    xsi_set_current_line(125, ng0);
    t26 = ((char*)((ng3)));
    t27 = (t0 + 7528);
    xsi_vlogvar_assign_value(t27, t26, 0, 0, 1);
    xsi_set_current_line(127, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(129, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(132, ng0);
    t2 = (t0 + 3288U);
    t3 = *((char **)t2);
    t2 = (t0 + 6408);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(133, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t0 + 6568);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 5);
    xsi_set_current_line(134, ng0);
    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    t2 = (t0 + 6728);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 5);
    xsi_set_current_line(135, ng0);
    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    t2 = (t0 + 6888);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 5);
    xsi_set_current_line(140, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);

LAB14:    t2 = ((char*)((ng4)));
    t28 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t28 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng7)));
    t28 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t28 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng9)));
    t28 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t28 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng11)));
    t28 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t28 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng12)));
    t28 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t28 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng14)));
    t28 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t28 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng16)));
    t28 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t28 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng5)));
    t28 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t28 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng1)));
    t28 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t28 == 1)
        goto LAB31;

LAB32:
LAB33:    goto LAB12;

LAB15:    xsi_set_current_line(141, ng0);

LAB34:    xsi_set_current_line(141, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t0 + 7048);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    xsi_set_current_line(141, ng0);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 7848);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(141, ng0);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 8008);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB33;

LAB17:    xsi_set_current_line(142, ng0);

LAB35:    xsi_set_current_line(142, ng0);
    t4 = ((char*)((ng8)));
    t5 = (t0 + 7048);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    xsi_set_current_line(142, ng0);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 7848);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(142, ng0);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 8008);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB33;

LAB19:    xsi_set_current_line(143, ng0);

LAB36:    xsi_set_current_line(143, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 7048);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    xsi_set_current_line(143, ng0);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 7848);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(143, ng0);
    t2 = ((char*)((ng10)));
    t4 = (t0 + 8008);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB33;

LAB21:    xsi_set_current_line(144, ng0);

LAB37:    xsi_set_current_line(144, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 7048);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    xsi_set_current_line(144, ng0);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 7848);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(144, ng0);
    t2 = ((char*)((ng10)));
    t4 = (t0 + 8008);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB33;

LAB23:    xsi_set_current_line(145, ng0);

LAB38:    xsi_set_current_line(145, ng0);
    t4 = ((char*)((ng13)));
    t5 = (t0 + 7048);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    xsi_set_current_line(145, ng0);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 7848);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(145, ng0);
    t2 = ((char*)((ng10)));
    t4 = (t0 + 8008);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB33;

LAB25:    xsi_set_current_line(146, ng0);

LAB39:    xsi_set_current_line(146, ng0);
    t4 = ((char*)((ng15)));
    t5 = (t0 + 7048);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    xsi_set_current_line(146, ng0);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 7848);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(146, ng0);
    t2 = ((char*)((ng10)));
    t4 = (t0 + 8008);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB33;

LAB27:    xsi_set_current_line(147, ng0);

LAB40:    xsi_set_current_line(147, ng0);
    t4 = ((char*)((ng17)));
    t5 = (t0 + 7048);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    xsi_set_current_line(147, ng0);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 7848);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(147, ng0);
    t2 = ((char*)((ng10)));
    t4 = (t0 + 8008);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB33;

LAB29:    xsi_set_current_line(148, ng0);

LAB41:    xsi_set_current_line(148, ng0);
    t4 = ((char*)((ng18)));
    t5 = (t0 + 7048);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    xsi_set_current_line(148, ng0);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 7848);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(148, ng0);
    t2 = ((char*)((ng10)));
    t4 = (t0 + 8008);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB33;

LAB31:    xsi_set_current_line(149, ng0);

LAB42:    xsi_set_current_line(149, ng0);
    t4 = ((char*)((ng18)));
    t5 = (t0 + 7048);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    xsi_set_current_line(149, ng0);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 7848);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(149, ng0);
    t2 = ((char*)((ng10)));
    t4 = (t0 + 8008);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(149, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 8168);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB33;

LAB45:    xsi_set_current_line(165, ng0);

LAB58:    xsi_set_current_line(165, ng0);
    t5 = ((char*)((ng3)));
    t19 = (t0 + 6248);
    xsi_vlogvar_assign_value(t19, t5, 0, 0, 1);
    xsi_set_current_line(165, ng0);
    t2 = ((char*)((ng5)));
    t5 = (t0 + 7048);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 3);
    xsi_set_current_line(165, ng0);
    t2 = ((char*)((ng6)));
    t5 = (t0 + 7848);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(165, ng0);
    t2 = ((char*)((ng6)));
    t5 = (t0 + 8008);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    goto LAB57;

LAB47:    xsi_set_current_line(166, ng0);

LAB59:    xsi_set_current_line(166, ng0);
    t5 = ((char*)((ng1)));
    t19 = (t0 + 6248);
    xsi_vlogvar_assign_value(t19, t5, 0, 0, 1);
    xsi_set_current_line(166, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 7048);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 3);
    xsi_set_current_line(166, ng0);
    t2 = ((char*)((ng6)));
    t5 = (t0 + 7848);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(166, ng0);
    t2 = ((char*)((ng6)));
    t5 = (t0 + 8008);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    goto LAB57;

LAB49:    xsi_set_current_line(167, ng0);

LAB60:    xsi_set_current_line(167, ng0);
    t5 = ((char*)((ng1)));
    t19 = (t0 + 6248);
    xsi_vlogvar_assign_value(t19, t5, 0, 0, 1);
    xsi_set_current_line(167, ng0);
    t2 = ((char*)((ng13)));
    t5 = (t0 + 7048);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 3);
    xsi_set_current_line(167, ng0);
    t2 = ((char*)((ng6)));
    t5 = (t0 + 7848);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(167, ng0);
    t2 = ((char*)((ng10)));
    t5 = (t0 + 8008);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    goto LAB57;

LAB51:    xsi_set_current_line(168, ng0);

LAB61:    xsi_set_current_line(168, ng0);
    t5 = ((char*)((ng1)));
    t19 = (t0 + 6248);
    xsi_vlogvar_assign_value(t19, t5, 0, 0, 1);
    xsi_set_current_line(168, ng0);
    t2 = ((char*)((ng17)));
    t5 = (t0 + 7048);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 3);
    xsi_set_current_line(168, ng0);
    t2 = ((char*)((ng6)));
    t5 = (t0 + 7848);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(168, ng0);
    t2 = ((char*)((ng10)));
    t5 = (t0 + 8008);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    goto LAB57;

LAB53:    xsi_set_current_line(171, ng0);

LAB62:    xsi_set_current_line(171, ng0);
    t5 = ((char*)((ng1)));
    t19 = (t0 + 6248);
    xsi_vlogvar_assign_value(t19, t5, 0, 0, 1);
    xsi_set_current_line(171, ng0);
    t2 = ((char*)((ng17)));
    t5 = (t0 + 7048);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 3);
    xsi_set_current_line(171, ng0);
    t2 = ((char*)((ng6)));
    t5 = (t0 + 7848);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(171, ng0);
    t2 = ((char*)((ng10)));
    t5 = (t0 + 8008);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    goto LAB57;

LAB55:    xsi_set_current_line(172, ng0);

LAB63:    xsi_set_current_line(172, ng0);
    t5 = ((char*)((ng1)));
    t19 = (t0 + 6248);
    xsi_vlogvar_assign_value(t19, t5, 0, 0, 1);
    xsi_set_current_line(172, ng0);
    t2 = ((char*)((ng17)));
    t5 = (t0 + 7048);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 3);
    xsi_set_current_line(172, ng0);
    t2 = ((char*)((ng6)));
    t5 = (t0 + 7848);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(172, ng0);
    t2 = ((char*)((ng10)));
    t5 = (t0 + 8008);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    goto LAB57;

}

static void Cont_187_13(char *t0)
{
    char t3[8];
    char t4[8];
    char t18[8];
    char t21[8];
    char t24[8];
    char t36[8];
    char *t1;
    char *t2;
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
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;

LAB0:    t1 = (t0 + 12312U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(187, ng0);
    t2 = (t0 + 6248);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t7) != 0)
        goto LAB6;

LAB7:    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t14);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB8;

LAB9:    t32 = *((unsigned int *)t4);
    t33 = (~(t32));
    t34 = *((unsigned int *)t14);
    t35 = (t33 || t34);
    if (t35 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t14) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t36, 8);

LAB16:    t39 = (t0 + 14536);
    t40 = (t39 + 56U);
    t41 = *((char **)t40);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    memcpy(t43, t3, 8);
    xsi_driver_vfirst_trans(t39, 0, 31);
    t44 = (t0 + 13816);
    *((int *)t44) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB7;

LAB8:    t19 = (t0 + 2648U);
    t20 = *((char **)t19);
    t19 = ((char*)((ng24)));
    t22 = (t0 + 2648U);
    t23 = *((char **)t22);
    memset(t24, 0, 8);
    t22 = (t24 + 4);
    t25 = (t23 + 4);
    t26 = *((unsigned int *)t23);
    t27 = (t26 >> 15);
    t28 = (t27 & 1);
    *((unsigned int *)t24) = t28;
    t29 = *((unsigned int *)t25);
    t30 = (t29 >> 15);
    t31 = (t30 & 1);
    *((unsigned int *)t22) = t31;
    xsi_vlog_mul_concat(t21, 16, 1, t19, 1U, t24, 1);
    xsi_vlogtype_concat(t18, 32, 32, 2U, t21, 16, t20, 16);
    goto LAB9;

LAB10:    t37 = (t0 + 2648U);
    t38 = *((char **)t37);
    t37 = ((char*)((ng1)));
    xsi_vlogtype_concat(t36, 32, 32, 2U, t37, 16, t38, 16);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 32, t18, 32, t36, 32);
    goto LAB16;

LAB14:    memcpy(t3, t18, 8);
    goto LAB16;

}

static void Cont_188_14(char *t0)
{
    char t3[8];
    char t4[8];
    char *t1;
    char *t2;
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
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;

LAB0:    t1 = (t0 + 12560U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(188, ng0);
    t2 = (t0 + 8168);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t7) != 0)
        goto LAB6;

LAB7:    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t14);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB8;

LAB9:    t20 = *((unsigned int *)t4);
    t21 = (~(t20));
    t22 = *((unsigned int *)t14);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t14) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t24, 8);

LAB16:    t18 = (t0 + 14600);
    t25 = (t18 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memcpy(t28, t3, 8);
    xsi_driver_vfirst_trans(t18, 0, 31);
    t29 = (t0 + 13832);
    *((int *)t29) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB7;

LAB8:    t18 = (t0 + 4408U);
    t19 = *((char **)t18);
    goto LAB9;

LAB10:    t18 = (t0 + 4088U);
    t24 = *((char **)t18);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 32, t19, 32, t24, 32);
    goto LAB16;

LAB14:    memcpy(t3, t19, 8);
    goto LAB16;

}

static void Cont_189_15(char *t0)
{
    char t3[8];
    char t4[8];
    char *t1;
    char *t2;
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
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;

LAB0:    t1 = (t0 + 12808U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(189, ng0);
    t2 = (t0 + 6088);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t7) != 0)
        goto LAB6;

LAB7:    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t14);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB8;

LAB9:    t20 = *((unsigned int *)t4);
    t21 = (~(t20));
    t22 = *((unsigned int *)t14);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t14) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t24, 8);

LAB16:    t18 = (t0 + 14664);
    t25 = (t18 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memcpy(t28, t3, 8);
    xsi_driver_vfirst_trans(t18, 0, 31);
    t29 = (t0 + 13848);
    *((int *)t29) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB7;

LAB8:    t18 = (t0 + 2968U);
    t19 = *((char **)t18);
    goto LAB9;

LAB10:    t18 = (t0 + 4248U);
    t24 = *((char **)t18);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 32, t19, 32, t24, 32);
    goto LAB16;

LAB14:    memcpy(t3, t19, 8);
    goto LAB16;

}

static void Always_192_16(char *t0)
{
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

LAB0:    t1 = (t0 + 13056U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(192, ng0);
    t2 = (t0 + 13864);
    *((int *)t2) = 1;
    t3 = (t0 + 13088);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(193, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(199, ng0);

LAB9:    xsi_set_current_line(200, ng0);
    t2 = (t0 + 7848);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:
LAB12:    xsi_set_current_line(202, ng0);
    t2 = (t0 + 8008);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB13;

LAB14:
LAB15:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(194, ng0);

LAB8:    xsi_set_current_line(195, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 7368);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(196, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB7;

LAB10:    xsi_set_current_line(201, ng0);
    t11 = (t0 + 3448U);
    t12 = *((char **)t11);
    t11 = (t0 + 7208);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, 0, 1, 0LL);
    goto LAB12;

LAB13:    xsi_set_current_line(203, ng0);
    t11 = (t0 + 3608U);
    t12 = *((char **)t11);
    t11 = (t0 + 7368);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, 0, 1, 0LL);
    goto LAB15;

}

static void implSig1_execute(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;

LAB0:    t1 = (t0 + 13304U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 5608);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t6) == 0)
        goto LAB4;

LAB6:    t12 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t12) = 1;

LAB7:    t13 = (t3 + 4);
    t14 = (t5 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (~(t15));
    *((unsigned int *)t3) = t16;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB9;

LAB8:    t21 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t21 & 1U);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t23 = (t0 + 14728);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    memset(t27, 0, 8);
    t28 = 1U;
    t29 = t28;
    t30 = (t3 + 4);
    t31 = *((unsigned int *)t3);
    t28 = (t28 & t31);
    t32 = *((unsigned int *)t30);
    t29 = (t29 & t32);
    t33 = (t27 + 4);
    t34 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t34 | t28);
    t35 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t35 | t29);
    xsi_driver_vfirst_trans(t23, 0, 0);
    t36 = (t0 + 13880);
    *((int *)t36) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

LAB9:    t17 = *((unsigned int *)t3);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t3) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB8;

}


extern void work_m_00000000001061720599_2197071003_init()
{
	static char *pe[] = {(void *)Cont_74_0,(void *)Initial_75_1,(void *)Cont_76_2,(void *)Always_93_3,(void *)Always_99_4,(void *)Cont_107_5,(void *)Cont_108_6,(void *)Cont_109_7,(void *)Cont_110_8,(void *)Cont_111_9,(void *)Cont_112_10,(void *)Cont_115_11,(void *)Always_118_12,(void *)Cont_187_13,(void *)Cont_188_14,(void *)Cont_189_15,(void *)Always_192_16,(void *)implSig1_execute};
	xsi_register_didat("work_m_00000000001061720599_2197071003", "isim/RI_CPU_TB_isim_beh.exe.sim/work/m_00000000001061720599_2197071003.didat");
	xsi_register_executes(pe);
}
