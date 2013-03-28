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
static const char *ng0 = "C:/Documents and Settings/Administrador/Escritorio/Contador_BCD/contador_BCD.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 15U};
static int ng3[] = {9, 0};
static int ng4[] = {1, 0};



static void Always_32_0(char *t0)
{
    char t13[8];
    char t20[8];
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
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t21;

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
LAB4:    xsi_set_current_line(33, ng0);

LAB5:    xsi_set_current_line(34, ng0);
    t4 = (t0 + 692U);
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
LAB8:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1196);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1012);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    xsi_set_current_line(40, ng0);
    t2 = (t0 + 784U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(45, ng0);

LAB14:    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB12:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1196);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB16;

LAB15:    t12 = (t5 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB16;

LAB19:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB17;

LAB18:    t15 = (t13 + 4);
    t6 = *((unsigned int *)t15);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB20;

LAB21:    xsi_set_current_line(53, ng0);

LAB24:    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1288);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 4, t5, 32);
    t11 = (t0 + 1288);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 4);

LAB22:    goto LAB2;

LAB6:    xsi_set_current_line(35, ng0);

LAB9:    xsi_set_current_line(36, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1196);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 8);
    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB8;

LAB10:    xsi_set_current_line(41, ng0);

LAB13:    xsi_set_current_line(42, ng0);
    t4 = (t0 + 1288);
    t5 = (t4 + 36U);
    t11 = *((char **)t5);
    t12 = (t0 + 1104);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 4);
    goto LAB12;

LAB16:    t14 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB18;

LAB17:    *((unsigned int *)t13) = 1;
    goto LAB18;

LAB20:    xsi_set_current_line(49, ng0);

LAB23:    xsi_set_current_line(50, ng0);
    t16 = (t0 + 1196);
    t17 = (t16 + 36U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng4)));
    memset(t20, 0, 8);
    xsi_vlog_unsigned_add(t20, 32, t18, 8, t19, 32);
    t21 = (t0 + 1196);
    xsi_vlogvar_assign_value(t21, t20, 0, 0, 8);
    goto LAB22;

}


extern void work_m_00000000000763006234_2820025979_init()
{
	static char *pe[] = {(void *)Always_32_0};
	xsi_register_didat("work_m_00000000000763006234_2820025979", "isim/testcont_isim_beh.exe.sim/work/m_00000000000763006234_2820025979.didat");
	xsi_register_executes(pe);
}
