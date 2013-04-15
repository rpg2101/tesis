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

/* This file is designed for use with ISim build 0x1048c146 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "//VBOXSVR/tesis/multiplicador/test.v";
static int ng1[] = {0, 0};



static void Always_50_0(char *t0)
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

LAB0:    t1 = (t0 + 3008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 2908);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(50, ng0);
    t4 = (t0 + 1012);
    t5 = (t4 + 36U);
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
    t24 = (t0 + 1012);
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

static void Initial_52_1(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;

LAB0:    t1 = (t0 + 3152U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng0);

LAB4:    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 828);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 24);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 24);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 3052);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 3052);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(60, ng0);
    t3 = (t0 + 1104);
    t5 = (t3 + 36U);
    t6 = *((char **)t5);
    t7 = (t0 + 1196);
    t8 = (t7 + 36U);
    t9 = *((char **)t8);
    t10 = (t0 + 1288);
    t11 = (t10 + 36U);
    t12 = *((char **)t11);
    t13 = (t0 + 1380);
    t14 = (t13 + 36U);
    t15 = *((char **)t14);
    t16 = (t0 + 1472);
    t17 = (t16 + 36U);
    t18 = *((char **)t17);
    t19 = (t0 + 1564);
    t20 = (t19 + 36U);
    t21 = *((char **)t20);
    t22 = (t0 + 1656);
    t23 = (t22 + 36U);
    t24 = *((char **)t23);
    t25 = (t0 + 1748);
    t26 = (t25 + 36U);
    t27 = *((char **)t26);
    xsi_vlogtype_concat(t4, 24, 24, 8U, t27, 3, t24, 3, t21, 3, t18, 3, t15, 3, t12, 3, t9, 3, t6, 3);
    t28 = (t0 + 828);
    xsi_vlogvar_assign_value(t28, t4, 0, 0, 24);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 3052);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(61, ng0);
    t3 = (t0 + 1840);
    t5 = (t3 + 36U);
    t6 = *((char **)t5);
    t7 = (t0 + 1932);
    t8 = (t7 + 36U);
    t9 = *((char **)t8);
    t10 = (t0 + 2024);
    t11 = (t10 + 36U);
    t12 = *((char **)t11);
    t13 = (t0 + 2116);
    t14 = (t13 + 36U);
    t15 = *((char **)t14);
    t16 = (t0 + 2208);
    t17 = (t16 + 36U);
    t18 = *((char **)t17);
    t19 = (t0 + 2300);
    t20 = (t19 + 36U);
    t21 = *((char **)t20);
    t22 = (t0 + 2392);
    t23 = (t22 + 36U);
    t24 = *((char **)t23);
    t25 = (t0 + 2484);
    t26 = (t25 + 36U);
    t27 = *((char **)t26);
    xsi_vlogtype_concat(t4, 24, 24, 8U, t27, 3, t24, 3, t21, 3, t18, 3, t15, 3, t12, 3, t9, 3, t6, 3);
    t28 = (t0 + 920);
    xsi_vlogvar_assign_value(t28, t4, 0, 0, 24);
    goto LAB1;

}


extern void work_m_00000000003176926033_1985558087_init()
{
	static char *pe[] = {(void *)Always_50_0,(void *)Initial_52_1};
	xsi_register_didat("work_m_00000000003176926033_1985558087", "isim/test_isim_beh.exe.sim/work/m_00000000003176926033_1985558087.didat");
	xsi_register_executes(pe);
}
