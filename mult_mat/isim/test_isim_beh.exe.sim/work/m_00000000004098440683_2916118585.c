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
static const char *ng0 = "C:/Documents and Settings/Administrador/Escritorio/mult_mat/mult_mat.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};



static void Always_41_0(char *t0)
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

LAB0:    t1 = (t0 + 2500U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 2840);
    *((int *)t2) = 1;
    t3 = (t0 + 2528);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(42, ng0);

LAB5:    xsi_set_current_line(43, ng0);
    t4 = (t0 + 920U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(44, ng0);

LAB9:    xsi_set_current_line(45, ng0);
    t11 = (t0 + 1104U);
    t12 = *((char **)t11);
    t11 = (t0 + 1884);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, 0, 6, 0LL);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1196U);
    t3 = *((char **)t2);
    t2 = (t0 + 1976);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 9, 0LL);
    goto LAB8;

}

static void Always_51_1(char *t0)
{
    char t7[8];
    char t19[8];
    char t28[8];
    char t31[8];
    char t35[8];
    char t44[8];
    char t45[8];
    char t46[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t29;
    char *t30;
    char *t32;
    char *t33;
    char *t34;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    int t47;

LAB0:    t1 = (t0 + 2644U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 2848);
    *((int *)t2) = 1;
    t3 = (t0 + 2672);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(52, ng0);

LAB5:    xsi_set_current_line(53, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1516);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 2);
    xsi_set_current_line(54, ng0);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB6:    t2 = (t0 + 1608);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 344);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    xsi_vlog_signed_less(t7, 32, t4, 32, t6, 32);
    t5 = (t7 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t7);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB7;

LAB8:    goto LAB2;

LAB7:    xsi_set_current_line(55, ng0);

LAB9:    xsi_set_current_line(56, ng0);
    xsi_set_current_line(56, ng0);
    t13 = ((char*)((ng1)));
    t14 = (t0 + 1700);
    xsi_vlogvar_assign_value(t14, t13, 0, 0, 32);

LAB10:    t2 = (t0 + 1700);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 504);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    xsi_vlog_signed_less(t7, 32, t4, 32, t6, 32);
    t5 = (t7 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t7);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t4, 32, t5, 32);
    t6 = (t0 + 1608);
    xsi_vlogvar_assign_value(t6, t7, 0, 0, 32);
    goto LAB6;

LAB11:    xsi_set_current_line(57, ng0);

LAB13:    xsi_set_current_line(58, ng0);
    t13 = ((char*)((ng1)));
    t14 = (t0 + 1516);
    xsi_vlogvar_assign_value(t14, t13, 0, 0, 2);
    xsi_set_current_line(59, ng0);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1792);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB14:    t2 = (t0 + 1792);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 424);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    xsi_vlog_signed_less(t7, 32, t4, 32, t6, 32);
    t5 = (t7 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t7);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 1516);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1424);
    t6 = (t0 + 1424);
    t13 = (t6 + 44U);
    t14 = *((char **)t13);
    t15 = (t0 + 1608);
    t16 = (t15 + 36U);
    t17 = *((char **)t16);
    t18 = (t0 + 424);
    t20 = *((char **)t18);
    memset(t19, 0, 8);
    xsi_vlog_signed_multiply(t19, 32, t17, 32, t20, 32);
    t18 = (t0 + 1700);
    t21 = (t18 + 36U);
    t22 = *((char **)t21);
    memset(t28, 0, 8);
    xsi_vlog_signed_add(t28, 32, t19, 32, t22, 32);
    xsi_vlog_generic_convert_bit_index(t7, t14, 2, t28, 32, 1);
    t23 = (t7 + 4);
    t8 = *((unsigned int *)t23);
    t47 = (!(t8));
    if (t47 == 1)
        goto LAB18;

LAB19:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1700);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t4, 32, t5, 32);
    t6 = (t0 + 1700);
    xsi_vlogvar_assign_value(t6, t7, 0, 0, 32);
    goto LAB10;

LAB15:    xsi_set_current_line(60, ng0);

LAB17:    xsi_set_current_line(61, ng0);
    t13 = (t0 + 1516);
    t14 = (t13 + 36U);
    t15 = *((char **)t14);
    t16 = (t0 + 1884);
    t17 = (t16 + 36U);
    t18 = *((char **)t17);
    t20 = (t0 + 1884);
    t21 = (t20 + 44U);
    t22 = *((char **)t21);
    t23 = (t0 + 1608);
    t24 = (t23 + 36U);
    t25 = *((char **)t24);
    t26 = (t0 + 424);
    t27 = *((char **)t26);
    memset(t28, 0, 8);
    xsi_vlog_signed_multiply(t28, 32, t25, 32, t27, 32);
    t26 = (t0 + 1792);
    t29 = (t26 + 36U);
    t30 = *((char **)t29);
    memset(t31, 0, 8);
    xsi_vlog_signed_add(t31, 32, t28, 32, t30, 32);
    xsi_vlog_generic_get_index_select_value(t19, 2, t18, t22, 2, t31, 32, 1);
    t32 = (t0 + 1976);
    t33 = (t32 + 36U);
    t34 = *((char **)t33);
    t36 = (t0 + 1976);
    t37 = (t36 + 44U);
    t38 = *((char **)t37);
    t39 = (t0 + 1792);
    t40 = (t39 + 36U);
    t41 = *((char **)t40);
    t42 = (t0 + 504);
    t43 = *((char **)t42);
    memset(t44, 0, 8);
    xsi_vlog_signed_multiply(t44, 32, t41, 32, t43, 32);
    xsi_vlog_generic_get_index_select_value(t35, 2, t34, t38, 2, t44, 32, 1);
    memset(t45, 0, 8);
    xsi_vlog_unsigned_multiply(t45, 2, t19, 2, t35, 2);
    memset(t46, 0, 8);
    xsi_vlog_unsigned_add(t46, 2, t15, 2, t45, 2);
    t42 = (t0 + 1516);
    xsi_vlogvar_assign_value(t42, t46, 0, 0, 2);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 1792);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t4, 32, t5, 32);
    t6 = (t0 + 1792);
    xsi_vlogvar_assign_value(t6, t7, 0, 0, 32);
    goto LAB14;

LAB18:    xsi_vlogvar_wait_assign_value(t5, t4, 0, *((unsigned int *)t7), 1, 0LL);
    goto LAB19;

}


extern void work_m_00000000004098440683_2916118585_init()
{
	static char *pe[] = {(void *)Always_41_0,(void *)Always_51_1};
	xsi_register_didat("work_m_00000000004098440683_2916118585", "isim/test_isim_beh.exe.sim/work/m_00000000004098440683_2916118585.didat");
	xsi_register_executes(pe);
}
