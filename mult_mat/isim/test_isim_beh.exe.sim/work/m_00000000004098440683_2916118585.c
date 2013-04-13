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
static const char *ng0 = "//VBOXSVR/tesis/mult_mat/mult_mat.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {3, 0};



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
    xsi_vlogvar_wait_assign_value(t11, t12, 0, 0, 12, 0LL);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1196U);
    t3 = *((char **)t2);
    t2 = (t0 + 1976);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 12, 0LL);
    goto LAB8;

}

static void Always_51_1(char *t0)
{
    char t7[8];
    char t16[8];
    char t28[8];
    char t30[8];
    char t34[8];
    char t37[8];
    char t38[8];
    char t39[8];
    char t41[8];
    char t53[8];
    char t55[8];
    char t59[8];
    char t62[8];
    char t63[8];
    char t64[8];
    char t66[8];
    char t67[8];
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
    char *t29;
    char *t31;
    char *t32;
    char *t33;
    char *t35;
    char *t36;
    char *t40;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t54;
    char *t56;
    char *t57;
    char *t58;
    char *t60;
    char *t61;
    char *t65;
    char *t68;
    int t69;
    int t70;
    int t71;
    int t72;
    int t73;
    int t74;
    unsigned int t75;
    int t76;
    int t77;

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
    xsi_set_current_line(53, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

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

LAB7:    xsi_set_current_line(54, ng0);

LAB9:    xsi_set_current_line(55, ng0);
    xsi_set_current_line(55, ng0);
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

LAB12:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t4, 32, t5, 32);
    t6 = (t0 + 1608);
    xsi_vlogvar_assign_value(t6, t7, 0, 0, 32);
    goto LAB6;

LAB11:    xsi_set_current_line(56, ng0);

LAB13:    xsi_set_current_line(57, ng0);
    t13 = ((char*)((ng1)));
    t14 = (t0 + 1516);
    xsi_vlogvar_wait_assign_value(t14, t13, 0, 0, 4, 0LL);
    xsi_set_current_line(58, ng0);
    xsi_set_current_line(58, ng0);
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

LAB16:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 1516);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1424);
    t6 = (t0 + 1424);
    t13 = (t6 + 44U);
    t14 = *((char **)t13);
    t15 = (t0 + 1608);
    t17 = (t15 + 36U);
    t18 = *((char **)t17);
    t19 = (t0 + 424);
    t20 = *((char **)t19);
    memset(t30, 0, 8);
    xsi_vlog_signed_multiply(t30, 32, t18, 32, t20, 32);
    t19 = (t0 + 264);
    t21 = *((char **)t19);
    memset(t34, 0, 8);
    xsi_vlog_signed_multiply(t34, 32, t30, 32, t21, 32);
    t19 = (t0 + 1700);
    t22 = (t19 + 36U);
    t23 = *((char **)t22);
    t24 = ((char*)((ng2)));
    memset(t37, 0, 8);
    xsi_vlog_signed_add(t37, 32, t23, 32, t24, 32);
    t25 = (t0 + 264);
    t26 = *((char **)t25);
    memset(t38, 0, 8);
    xsi_vlog_signed_multiply(t38, 32, t37, 32, t26, 32);
    t25 = ((char*)((ng2)));
    memset(t39, 0, 8);
    xsi_vlog_signed_minus(t39, 32, t38, 32, t25, 32);
    memset(t41, 0, 8);
    xsi_vlog_signed_add(t41, 32, t34, 32, t39, 32);
    t27 = ((char*)((ng3)));
    xsi_vlog_convert_indexed_partindices(t7, t16, t28, ((int*)(t14)), 2, t41, 32, 1, t27, 32, 1, 0);
    t29 = (t7 + 4);
    t8 = *((unsigned int *)t29);
    t69 = (!(t8));
    t31 = (t16 + 4);
    t9 = *((unsigned int *)t31);
    t70 = (!(t9));
    t71 = (t69 && t70);
    t32 = (t28 + 4);
    t10 = *((unsigned int *)t32);
    t72 = (!(t10));
    t73 = (t71 && t72);
    if (t73 == 1)
        goto LAB18;

LAB19:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1700);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t4, 32, t5, 32);
    t6 = (t0 + 1700);
    xsi_vlogvar_assign_value(t6, t7, 0, 0, 32);
    goto LAB10;

LAB15:    xsi_set_current_line(59, ng0);

LAB17:    xsi_set_current_line(60, ng0);
    t13 = (t0 + 1516);
    t14 = (t13 + 36U);
    t15 = *((char **)t14);
    t17 = (t0 + 1884);
    t18 = (t17 + 36U);
    t19 = *((char **)t18);
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
    t26 = (t0 + 264);
    t29 = *((char **)t26);
    memset(t30, 0, 8);
    xsi_vlog_signed_multiply(t30, 32, t28, 32, t29, 32);
    t26 = (t0 + 1792);
    t31 = (t26 + 36U);
    t32 = *((char **)t31);
    t33 = ((char*)((ng2)));
    memset(t34, 0, 8);
    xsi_vlog_signed_add(t34, 32, t32, 32, t33, 32);
    t35 = (t0 + 264);
    t36 = *((char **)t35);
    memset(t37, 0, 8);
    xsi_vlog_signed_multiply(t37, 32, t34, 32, t36, 32);
    t35 = ((char*)((ng2)));
    memset(t38, 0, 8);
    xsi_vlog_signed_minus(t38, 32, t37, 32, t35, 32);
    memset(t39, 0, 8);
    xsi_vlog_signed_add(t39, 32, t30, 32, t38, 32);
    t40 = ((char*)((ng3)));
    xsi_vlog_get_indexed_partselect(t16, 4, t19, ((int*)(t22)), 2, t39, 32, 1, t40, 32, 1, 0);
    t42 = (t0 + 1976);
    t43 = (t42 + 36U);
    t44 = *((char **)t43);
    t45 = (t0 + 1976);
    t46 = (t45 + 44U);
    t47 = *((char **)t46);
    t48 = (t0 + 1700);
    t49 = (t48 + 36U);
    t50 = *((char **)t49);
    t51 = (t0 + 424);
    t52 = *((char **)t51);
    memset(t53, 0, 8);
    xsi_vlog_signed_multiply(t53, 32, t50, 32, t52, 32);
    t51 = (t0 + 264);
    t54 = *((char **)t51);
    memset(t55, 0, 8);
    xsi_vlog_signed_multiply(t55, 32, t53, 32, t54, 32);
    t51 = (t0 + 1792);
    t56 = (t51 + 36U);
    t57 = *((char **)t56);
    t58 = ((char*)((ng2)));
    memset(t59, 0, 8);
    xsi_vlog_signed_add(t59, 32, t57, 32, t58, 32);
    t60 = (t0 + 264);
    t61 = *((char **)t60);
    memset(t62, 0, 8);
    xsi_vlog_signed_multiply(t62, 32, t59, 32, t61, 32);
    t60 = ((char*)((ng2)));
    memset(t63, 0, 8);
    xsi_vlog_signed_minus(t63, 32, t62, 32, t60, 32);
    memset(t64, 0, 8);
    xsi_vlog_signed_add(t64, 32, t55, 32, t63, 32);
    t65 = ((char*)((ng3)));
    xsi_vlog_get_indexed_partselect(t41, 4, t44, ((int*)(t47)), 2, t64, 32, 1, t65, 32, 1, 0);
    memset(t66, 0, 8);
    xsi_vlog_unsigned_multiply(t66, 4, t16, 4, t41, 4);
    memset(t67, 0, 8);
    xsi_vlog_unsigned_add(t67, 4, t15, 4, t66, 4);
    t68 = (t0 + 1516);
    xsi_vlogvar_wait_assign_value(t68, t67, 0, 0, 4, 0LL);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1792);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t4, 32, t5, 32);
    t6 = (t0 + 1792);
    xsi_vlogvar_assign_value(t6, t7, 0, 0, 32);
    goto LAB14;

LAB18:    t11 = *((unsigned int *)t28);
    t74 = (t11 + 0);
    t12 = *((unsigned int *)t7);
    t75 = *((unsigned int *)t16);
    t76 = (t12 - t75);
    t77 = (t76 + 1);
    xsi_vlogvar_wait_assign_value(t5, t4, t74, *((unsigned int *)t16), t77, 0LL);
    goto LAB19;

}


extern void work_m_00000000004098440683_2916118585_init()
{
	static char *pe[] = {(void *)Always_41_0,(void *)Always_51_1};
	xsi_register_didat("work_m_00000000004098440683_2916118585", "isim/test_isim_beh.exe.sim/work/m_00000000004098440683_2916118585.didat");
	xsi_register_executes(pe);
}
