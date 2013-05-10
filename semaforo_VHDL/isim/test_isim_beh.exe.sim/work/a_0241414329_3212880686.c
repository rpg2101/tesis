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
static const char *ng0 = "//VBOXSVR/tesis/semaforo_VHDL/semaforo.vhd";
extern char *IEEE_P_3620187407;

unsigned char ieee_p_3620187407_sub_2599119909_3965413181(char *, int , char *, char *);
char *ieee_p_3620187407_sub_436279890_3965413181(char *, char *, char *, char *, int );
int ieee_p_3620187407_sub_514432868_3965413181(char *, char *, char *);


static void work_a_0241414329_3212880686_p_0(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 684U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 2852);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(53, ng0);
    t7 = (t0 + 776U);
    t8 = *((char **)t7);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 1420U);
    t3 = *((char **)t2);
    t1 = *((unsigned char *)t3);
    t4 = (t1 == (unsigned char)3);
    if (t4 != 0)
        goto LAB11;

LAB12:
LAB9:    goto LAB3;

LAB5:    t2 = (t0 + 660U);
    t6 = xsi_signal_has_event(t2);
    t1 = t6;
    goto LAB7;

LAB8:    xsi_set_current_line(54, ng0);
    t7 = (t0 + 2928);
    t11 = (t7 + 32U);
    t12 = *((char **)t11);
    t13 = (t12 + 40U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)0;
    xsi_driver_first_trans_fast(t7);
    goto LAB9;

LAB11:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1052U);
    t7 = *((char **)t2);
    t5 = *((unsigned char *)t7);
    t2 = (t0 + 2928);
    t8 = (t2 + 32U);
    t11 = *((char **)t8);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t5;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

}

static void work_a_0241414329_3212880686_p_1(char *t0)
{
    char t18[16];
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    int t9;
    char *t10;
    char *t11;
    unsigned char t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t19;
    unsigned int t20;

LAB0:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 684U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 2860);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(65, ng0);
    t7 = (t0 + 1144U);
    t8 = *((char **)t7);
    t7 = (t0 + 4960U);
    t9 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t8, t7);
    t10 = (t0 + 1328U);
    t11 = *((char **)t10);
    t10 = (t0 + 4976U);
    t12 = ieee_p_3620187407_sub_2599119909_3965413181(IEEE_P_3620187407, t9, t11, t10);
    if (t12 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 2964);
    t3 = (t2 + 32U);
    t7 = *((char **)t3);
    t8 = (t7 + 40U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 1144U);
    t3 = *((char **)t2);
    t2 = (t0 + 4960U);
    t7 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t18, t3, t2, 1);
    t8 = (t18 + 12U);
    t19 = *((unsigned int *)t8);
    t20 = (1U * t19);
    t1 = (4U != t20);
    if (t1 == 1)
        goto LAB11;

LAB12:    t10 = (t0 + 3000);
    t11 = (t10 + 32U);
    t13 = *((char **)t11);
    t14 = (t13 + 40U);
    t15 = *((char **)t14);
    memcpy(t15, t7, 4U);
    xsi_driver_first_trans_fast(t10);

LAB9:    goto LAB3;

LAB5:    t2 = (t0 + 660U);
    t6 = xsi_signal_has_event(t2);
    t1 = t6;
    goto LAB7;

LAB8:    xsi_set_current_line(66, ng0);
    t13 = (t0 + 2964);
    t14 = (t13 + 32U);
    t15 = *((char **)t14);
    t16 = (t15 + 40U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)3;
    xsi_driver_first_trans_fast(t13);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 5015);
    t7 = (t0 + 3000);
    t8 = (t7 + 32U);
    t10 = *((char **)t8);
    t11 = (t10 + 40U);
    t13 = *((char **)t11);
    memcpy(t13, t2, 4U);
    xsi_driver_first_trans_fast(t7);
    goto LAB9;

LAB11:    xsi_size_not_matching(4U, t20, 0);
    goto LAB12;

}

static void work_a_0241414329_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    static char *nl0[] = {&&LAB3, &&LAB4, &&LAB5, &&LAB6};

LAB0:    xsi_set_current_line(77, ng0);
    t1 = (t0 + 960U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 2868);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(78, ng0);
    t4 = (t0 + 3036);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)1;
    xsi_driver_first_trans_fast(t4);
    goto LAB2;

LAB4:    xsi_set_current_line(80, ng0);
    t1 = (t0 + 3036);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB5:    xsi_set_current_line(82, ng0);
    t1 = (t0 + 3036);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    xsi_set_current_line(84, ng0);
    t1 = (t0 + 3036);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB7:    xsi_set_current_line(86, ng0);
    t1 = (t0 + 3036);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

}

static void work_a_0241414329_3212880686_p_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    static char *nl0[] = {&&LAB5, &&LAB6, &&LAB7, &&LAB8};

LAB0:    t1 = (t0 + 2512U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 960U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t2 = (char *)((nl0) + t4);
    goto **((char **)t2);

LAB4:    xsi_set_current_line(91, ng0);

LAB11:    t2 = (t0 + 2876);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB12;

LAB1:    return;
LAB5:    xsi_set_current_line(92, ng0);
    t5 = (t0 + 5019);
    t7 = (t0 + 3072);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    memcpy(t11, t5, 4U);
    xsi_driver_first_trans_fast_port(t7);
    goto LAB4;

LAB6:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 5023);
    t5 = (t0 + 3072);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB4;

LAB7:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 5027);
    t5 = (t0 + 3072);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB4;

LAB8:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 5031);
    t5 = (t0 + 3072);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB4;

LAB9:    t3 = (t0 + 2876);
    *((int *)t3) = 0;
    goto LAB2;

LAB10:    goto LAB9;

LAB12:    goto LAB10;

}

static void work_a_0241414329_3212880686_p_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    static char *nl0[] = {&&LAB5, &&LAB6, &&LAB7, &&LAB8};

LAB0:    t1 = (t0 + 2656U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 960U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t2 = (char *)((nl0) + t4);
    goto **((char **)t2);

LAB4:    xsi_set_current_line(97, ng0);

LAB11:    t2 = (t0 + 2884);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB12;

LAB1:    return;
LAB5:    xsi_set_current_line(98, ng0);
    t5 = (t0 + 5035);
    t7 = (t0 + 3108);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    memcpy(t11, t5, 4U);
    xsi_driver_first_trans_fast(t7);
    goto LAB4;

LAB6:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 5039);
    t5 = (t0 + 3108);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_fast(t5);
    goto LAB4;

LAB7:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 5043);
    t5 = (t0 + 3108);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_fast(t5);
    goto LAB4;

LAB8:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 5047);
    t5 = (t0 + 3108);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_fast(t5);
    goto LAB4;

LAB9:    t3 = (t0 + 2884);
    *((int *)t3) = 0;
    goto LAB2;

LAB10:    goto LAB9;

LAB12:    goto LAB10;

}


extern void work_a_0241414329_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0241414329_3212880686_p_0,(void *)work_a_0241414329_3212880686_p_1,(void *)work_a_0241414329_3212880686_p_2,(void *)work_a_0241414329_3212880686_p_3,(void *)work_a_0241414329_3212880686_p_4};
	xsi_register_didat("work_a_0241414329_3212880686", "isim/test_isim_beh.exe.sim/work/a_0241414329_3212880686.didat");
	xsi_register_executes(pe);
}
