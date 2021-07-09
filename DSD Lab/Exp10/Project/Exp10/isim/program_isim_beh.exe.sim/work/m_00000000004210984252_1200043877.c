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
static const char *ng0 = "D:/University/Term4/DSD Lab/Exp10/Project/Exp10/cpu.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {0U, 0U};
static int ng4[] = {2, 0};
static unsigned int ng5[] = {1U, 0U};
static unsigned int ng6[] = {2U, 0U};
static unsigned int ng7[] = {3U, 0U};
static unsigned int ng8[] = {4U, 0U};
static unsigned int ng9[] = {5U, 0U};
static unsigned int ng10[] = {6U, 0U};
static unsigned int ng11[] = {7U, 0U};



static void Always_41_0(char *t0)
{
    char t13[8];
    char t14[8];
    char t33[8];
    char t42[8];
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
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    int t24;
    char *t25;
    unsigned int t26;
    int t27;
    int t28;
    unsigned int t29;
    unsigned int t30;
    int t31;
    int t32;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    unsigned int t40;
    int t41;
    char *t43;
    char *t44;
    char *t45;
    char *t46;

LAB0:    t1 = (t0 + 4608U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 4928);
    *((int *)t2) = 1;
    t3 = (t0 + 4640);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(41, ng0);

LAB5:    xsi_set_current_line(42, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB12;

LAB13:
LAB14:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(42, ng0);

LAB9:    xsi_set_current_line(43, ng0);
    t11 = (t0 + 1528U);
    t12 = *((char **)t11);
    t11 = (t0 + 2888);
    t15 = (t0 + 2888);
    t16 = (t15 + 72U);
    t17 = *((char **)t16);
    t18 = (t0 + 2888);
    t19 = (t18 + 64U);
    t20 = *((char **)t19);
    t21 = (t0 + 1688U);
    t22 = *((char **)t21);
    xsi_vlog_generic_convert_array_indices(t13, t14, t17, t20, 2, 1, t22, 8, 2);
    t21 = (t13 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (!(t23));
    t25 = (t14 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t24 && t27);
    if (t28 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB8;

LAB10:    t29 = *((unsigned int *)t13);
    t30 = *((unsigned int *)t14);
    t31 = (t29 - t30);
    t32 = (t31 + 1);
    xsi_vlogvar_assign_value(t11, t12, 0, *((unsigned int *)t14), t32);
    goto LAB11;

LAB12:    xsi_set_current_line(48, ng0);

LAB15:    xsi_set_current_line(49, ng0);
    t4 = (t0 + 2888);
    t5 = (t4 + 56U);
    t11 = *((char **)t5);
    t12 = (t0 + 2888);
    t15 = (t12 + 72U);
    t16 = *((char **)t15);
    t17 = (t0 + 2888);
    t18 = (t17 + 64U);
    t19 = *((char **)t18);
    t20 = (t0 + 2088);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    xsi_vlog_generic_get_array_select_value(t13, 8, t11, t16, t19, 2, 1, t22, 8, 2);
    t25 = (t0 + 2248);
    xsi_vlogvar_assign_value(t25, t13, 0, 0, 8);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2888);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t15 = (t0 + 2888);
    t16 = (t15 + 64U);
    t17 = *((char **)t16);
    t18 = (t0 + 2088);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng2)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 32, t20, 8, t21, 32);
    xsi_vlog_generic_get_array_select_value(t13, 8, t4, t12, t17, 2, 1, t14, 32, 2);
    t22 = (t0 + 2408);
    xsi_vlogvar_assign_value(t22, t13, 0, 0, 8);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 4);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 4);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 15U);
    t23 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t23 & 15U);

LAB16:    t12 = ((char*)((ng3)));
    t24 = xsi_vlog_unsigned_case_compare(t13, 4, t12, 4);
    if (t24 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng5)));
    t24 = xsi_vlog_unsigned_case_compare(t13, 4, t2, 4);
    if (t24 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng6)));
    t24 = xsi_vlog_unsigned_case_compare(t13, 4, t2, 4);
    if (t24 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng7)));
    t24 = xsi_vlog_unsigned_case_compare(t13, 4, t2, 4);
    if (t24 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng8)));
    t24 = xsi_vlog_unsigned_case_compare(t13, 4, t2, 4);
    if (t24 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng9)));
    t24 = xsi_vlog_unsigned_case_compare(t13, 4, t2, 4);
    if (t24 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng10)));
    t24 = xsi_vlog_unsigned_case_compare(t13, 4, t2, 4);
    if (t24 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng11)));
    t24 = xsi_vlog_unsigned_case_compare(t13, 4, t2, 4);
    if (t24 == 1)
        goto LAB31;

LAB32:
LAB33:    goto LAB14;

LAB17:    xsi_set_current_line(53, ng0);

LAB34:    xsi_set_current_line(54, ng0);
    t15 = (t0 + 2408);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t0 + 2568);
    t19 = (t0 + 2568);
    t20 = (t19 + 72U);
    t21 = *((char **)t20);
    t22 = (t0 + 2568);
    t25 = (t22 + 64U);
    t34 = *((char **)t25);
    t35 = (t0 + 2728);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    xsi_vlog_generic_convert_array_indices(t14, t33, t21, t34, 2, 1, t37, 3, 2);
    t38 = (t14 + 4);
    t26 = *((unsigned int *)t38);
    t27 = (!(t26));
    t39 = (t33 + 4);
    t29 = *((unsigned int *)t39);
    t28 = (!(t29));
    t31 = (t27 && t28);
    if (t31 == 1)
        goto LAB35;

LAB36:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 32, t4, 3, t5, 32);
    t11 = (t0 + 2728);
    xsi_vlogvar_assign_value(t11, t14, 0, 0, 3);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 32, t4, 8, t5, 32);
    t11 = (t0 + 2088);
    xsi_vlogvar_assign_value(t11, t14, 0, 0, 8);
    goto LAB33;

LAB19:    xsi_set_current_line(58, ng0);

LAB37:    xsi_set_current_line(59, ng0);
    t3 = (t0 + 2888);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t11 = (t0 + 2888);
    t12 = (t11 + 72U);
    t15 = *((char **)t12);
    t16 = (t0 + 2888);
    t17 = (t16 + 64U);
    t18 = *((char **)t17);
    t19 = (t0 + 2408);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    xsi_vlog_generic_get_array_select_value(t14, 8, t5, t15, t18, 2, 1, t21, 8, 2);
    t22 = (t0 + 2568);
    t25 = (t0 + 2568);
    t34 = (t25 + 72U);
    t35 = *((char **)t34);
    t36 = (t0 + 2568);
    t37 = (t36 + 64U);
    t38 = *((char **)t37);
    t39 = (t0 + 2728);
    t43 = (t39 + 56U);
    t44 = *((char **)t43);
    xsi_vlog_generic_convert_array_indices(t33, t42, t35, t38, 2, 1, t44, 3, 2);
    t45 = (t33 + 4);
    t6 = *((unsigned int *)t45);
    t27 = (!(t6));
    t46 = (t42 + 4);
    t7 = *((unsigned int *)t46);
    t28 = (!(t7));
    t31 = (t27 && t28);
    if (t31 == 1)
        goto LAB38;

LAB39:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 32, t4, 3, t5, 32);
    t11 = (t0 + 2728);
    xsi_vlogvar_assign_value(t11, t14, 0, 0, 3);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 32, t4, 8, t5, 32);
    t11 = (t0 + 2088);
    xsi_vlogvar_assign_value(t11, t14, 0, 0, 8);
    goto LAB33;

LAB21:    xsi_set_current_line(63, ng0);

LAB40:    xsi_set_current_line(64, ng0);
    t3 = (t0 + 2728);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t11 = ((char*)((ng2)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_minus(t14, 32, t5, 3, t11, 32);
    t12 = (t0 + 2728);
    xsi_vlogvar_assign_value(t12, t14, 0, 0, 3);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2568);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t15 = (t0 + 2568);
    t16 = (t15 + 64U);
    t17 = *((char **)t16);
    t18 = (t0 + 2728);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    xsi_vlog_generic_get_array_select_value(t14, 8, t4, t12, t17, 2, 1, t20, 3, 2);
    t21 = (t0 + 2888);
    t22 = (t0 + 2888);
    t25 = (t22 + 72U);
    t34 = *((char **)t25);
    t35 = (t0 + 2888);
    t36 = (t35 + 64U);
    t37 = *((char **)t36);
    t38 = (t0 + 2408);
    t39 = (t38 + 56U);
    t43 = *((char **)t39);
    xsi_vlog_generic_convert_array_indices(t33, t42, t34, t37, 2, 1, t43, 8, 2);
    t44 = (t33 + 4);
    t6 = *((unsigned int *)t44);
    t24 = (!(t6));
    t45 = (t42 + 4);
    t7 = *((unsigned int *)t45);
    t27 = (!(t7));
    t28 = (t24 && t27);
    if (t28 == 1)
        goto LAB41;

LAB42:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 32, t4, 8, t5, 32);
    t11 = (t0 + 2088);
    xsi_vlogvar_assign_value(t11, t14, 0, 0, 8);
    goto LAB33;

LAB23:    xsi_set_current_line(68, ng0);

LAB43:    xsi_set_current_line(69, ng0);
    t3 = (t0 + 2728);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t11 = ((char*)((ng2)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_minus(t14, 32, t5, 3, t11, 32);
    t12 = (t0 + 2728);
    xsi_vlogvar_assign_value(t12, t14, 0, 0, 3);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2568);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t15 = (t0 + 2568);
    t16 = (t15 + 64U);
    t17 = *((char **)t16);
    t18 = (t0 + 2728);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    xsi_vlog_generic_get_array_select_value(t14, 8, t4, t12, t17, 2, 1, t20, 3, 2);
    t21 = (t0 + 2088);
    xsi_vlogvar_assign_value(t21, t14, 0, 0, 8);
    goto LAB33;

LAB25:    xsi_set_current_line(72, ng0);

LAB44:    xsi_set_current_line(73, ng0);
    t3 = (t0 + 3208);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t14, 0, 8);
    t11 = (t5 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB48;

LAB46:    if (*((unsigned int *)t11) == 0)
        goto LAB45;

LAB47:    t12 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t12) = 1;

LAB48:    t15 = (t14 + 4);
    t23 = *((unsigned int *)t15);
    t26 = (~(t23));
    t29 = *((unsigned int *)t14);
    t30 = (t29 & t26);
    t40 = (t30 != 0);
    if (t40 > 0)
        goto LAB49;

LAB50:
LAB51:    goto LAB33;

LAB27:    xsi_set_current_line(78, ng0);

LAB53:    xsi_set_current_line(79, ng0);
    t3 = (t0 + 3048);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t14, 0, 8);
    t11 = (t5 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB57;

LAB55:    if (*((unsigned int *)t11) == 0)
        goto LAB54;

LAB56:    t12 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t12) = 1;

LAB57:    t15 = (t14 + 4);
    t23 = *((unsigned int *)t15);
    t26 = (~(t23));
    t29 = *((unsigned int *)t14);
    t30 = (t29 & t26);
    t40 = (t30 != 0);
    if (t40 > 0)
        goto LAB58;

LAB59:
LAB60:    goto LAB33;

LAB29:    xsi_set_current_line(84, ng0);

LAB62:    xsi_set_current_line(85, ng0);
    t3 = (t0 + 2728);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t11 = ((char*)((ng2)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_minus(t14, 32, t5, 3, t11, 32);
    t12 = (t0 + 2728);
    xsi_vlogvar_assign_value(t12, t14, 0, 0, 3);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2568);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t15 = (t0 + 2568);
    t16 = (t15 + 64U);
    t17 = *((char **)t16);
    t18 = (t0 + 2728);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    xsi_vlog_generic_get_array_select_value(t14, 8, t4, t12, t17, 2, 1, t20, 3, 2);
    t21 = (t0 + 3368);
    xsi_vlogvar_assign_value(t21, t14, 0, 0, 8);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_minus(t14, 32, t4, 3, t5, 32);
    t11 = (t0 + 2728);
    xsi_vlogvar_assign_value(t11, t14, 0, 0, 3);
    xsi_set_current_line(88, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2568);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t15 = (t0 + 2568);
    t16 = (t15 + 64U);
    t17 = *((char **)t16);
    t18 = (t0 + 2728);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    xsi_vlog_generic_get_array_select_value(t14, 8, t4, t12, t17, 2, 1, t20, 3, 2);
    t21 = (t0 + 3528);
    xsi_vlogvar_assign_value(t21, t14, 0, 0, 8);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3368);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    memset(t14, 0, 8);
    xsi_vlog_signed_add(t14, 8, t4, 8, t12, 8);
    t15 = (t0 + 3688);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 8);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2568);
    t11 = (t0 + 2568);
    t12 = (t11 + 72U);
    t15 = *((char **)t12);
    t16 = (t0 + 2568);
    t17 = (t16 + 64U);
    t18 = *((char **)t17);
    t19 = (t0 + 2728);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    xsi_vlog_generic_convert_array_indices(t14, t33, t15, t18, 2, 1, t21, 3, 2);
    t22 = (t14 + 4);
    t6 = *((unsigned int *)t22);
    t24 = (!(t6));
    t25 = (t33 + 4);
    t7 = *((unsigned int *)t25);
    t27 = (!(t7));
    t28 = (t24 && t27);
    if (t28 == 1)
        goto LAB63;

LAB64:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 32, t4, 3, t5, 32);
    t11 = (t0 + 2728);
    xsi_vlogvar_assign_value(t11, t14, 0, 0, 3);
    xsi_set_current_line(92, ng0);
    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t14, 0, 8);
    t5 = (t14 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 7);
    t8 = (t7 & 1);
    *((unsigned int *)t14) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 7);
    t23 = (t10 & 1);
    *((unsigned int *)t5) = t23;
    t12 = (t0 + 3048);
    xsi_vlogvar_assign_value(t12, t14, 0, 0, 1);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t14, 0, 8);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 255U);
    if (t10 != 0)
        goto LAB68;

LAB66:    if (*((unsigned int *)t5) == 0)
        goto LAB65;

LAB67:    t11 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t11) = 1;

LAB68:    t12 = (t0 + 3208);
    xsi_vlogvar_assign_value(t12, t14, 0, 0, 1);
    xsi_set_current_line(94, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 32, t4, 8, t5, 32);
    t11 = (t0 + 2088);
    xsi_vlogvar_assign_value(t11, t14, 0, 0, 8);
    goto LAB33;

LAB31:    xsi_set_current_line(96, ng0);

LAB69:    xsi_set_current_line(97, ng0);
    t3 = (t0 + 2728);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t11 = ((char*)((ng2)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_minus(t14, 32, t5, 3, t11, 32);
    t12 = (t0 + 2728);
    xsi_vlogvar_assign_value(t12, t14, 0, 0, 3);
    xsi_set_current_line(98, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2568);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t15 = (t0 + 2568);
    t16 = (t15 + 64U);
    t17 = *((char **)t16);
    t18 = (t0 + 2728);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    xsi_vlog_generic_get_array_select_value(t14, 8, t4, t12, t17, 2, 1, t20, 3, 2);
    t21 = (t0 + 3368);
    xsi_vlogvar_assign_value(t21, t14, 0, 0, 8);
    xsi_set_current_line(99, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_minus(t14, 32, t4, 3, t5, 32);
    t11 = (t0 + 2728);
    xsi_vlogvar_assign_value(t11, t14, 0, 0, 3);
    xsi_set_current_line(100, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2568);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t15 = (t0 + 2568);
    t16 = (t15 + 64U);
    t17 = *((char **)t16);
    t18 = (t0 + 2728);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    xsi_vlog_generic_get_array_select_value(t14, 8, t4, t12, t17, 2, 1, t20, 3, 2);
    t21 = (t0 + 3528);
    xsi_vlogvar_assign_value(t21, t14, 0, 0, 8);
    xsi_set_current_line(101, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3368);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    memset(t14, 0, 8);
    xsi_vlog_signed_minus(t14, 8, t4, 8, t12, 8);
    t15 = (t0 + 3688);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 8);
    xsi_set_current_line(102, ng0);
    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2568);
    t11 = (t0 + 2568);
    t12 = (t11 + 72U);
    t15 = *((char **)t12);
    t16 = (t0 + 2568);
    t17 = (t16 + 64U);
    t18 = *((char **)t17);
    t19 = (t0 + 2728);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    xsi_vlog_generic_convert_array_indices(t14, t33, t15, t18, 2, 1, t21, 3, 2);
    t22 = (t14 + 4);
    t6 = *((unsigned int *)t22);
    t24 = (!(t6));
    t25 = (t33 + 4);
    t7 = *((unsigned int *)t25);
    t27 = (!(t7));
    t28 = (t24 && t27);
    if (t28 == 1)
        goto LAB70;

LAB71:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 32, t4, 3, t5, 32);
    t11 = (t0 + 2728);
    xsi_vlogvar_assign_value(t11, t14, 0, 0, 3);
    xsi_set_current_line(104, ng0);
    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t14, 0, 8);
    t5 = (t14 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 7);
    t8 = (t7 & 1);
    *((unsigned int *)t14) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 7);
    t23 = (t10 & 1);
    *((unsigned int *)t5) = t23;
    t12 = (t0 + 3048);
    xsi_vlogvar_assign_value(t12, t14, 0, 0, 1);
    xsi_set_current_line(105, ng0);
    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t14, 0, 8);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 255U);
    if (t10 != 0)
        goto LAB75;

LAB73:    if (*((unsigned int *)t5) == 0)
        goto LAB72;

LAB74:    t11 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t11) = 1;

LAB75:    t12 = (t0 + 3208);
    xsi_vlogvar_assign_value(t12, t14, 0, 0, 1);
    xsi_set_current_line(106, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 32, t4, 8, t5, 32);
    t11 = (t0 + 2088);
    xsi_vlogvar_assign_value(t11, t14, 0, 0, 8);
    goto LAB33;

LAB35:    t30 = *((unsigned int *)t14);
    t40 = *((unsigned int *)t33);
    t32 = (t30 - t40);
    t41 = (t32 + 1);
    xsi_vlogvar_assign_value(t18, t17, 0, *((unsigned int *)t33), t41);
    goto LAB36;

LAB38:    t8 = *((unsigned int *)t33);
    t9 = *((unsigned int *)t42);
    t32 = (t8 - t9);
    t41 = (t32 + 1);
    xsi_vlogvar_assign_value(t22, t14, 0, *((unsigned int *)t42), t41);
    goto LAB39;

LAB41:    t8 = *((unsigned int *)t33);
    t9 = *((unsigned int *)t42);
    t31 = (t8 - t9);
    t32 = (t31 + 1);
    xsi_vlogvar_assign_value(t21, t14, 0, *((unsigned int *)t42), t32);
    goto LAB42;

LAB45:    *((unsigned int *)t14) = 1;
    goto LAB48;

LAB49:    xsi_set_current_line(73, ng0);

LAB52:    xsi_set_current_line(74, ng0);
    t16 = (t0 + 2728);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng2)));
    memset(t33, 0, 8);
    xsi_vlog_unsigned_minus(t33, 32, t18, 3, t19, 32);
    t20 = (t0 + 2728);
    xsi_vlogvar_assign_value(t20, t33, 0, 0, 3);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2568);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t15 = (t0 + 2568);
    t16 = (t15 + 64U);
    t17 = *((char **)t16);
    t18 = (t0 + 2728);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    xsi_vlog_generic_get_array_select_value(t14, 8, t4, t12, t17, 2, 1, t20, 3, 2);
    t21 = (t0 + 2088);
    xsi_vlogvar_assign_value(t21, t14, 0, 0, 8);
    goto LAB51;

LAB54:    *((unsigned int *)t14) = 1;
    goto LAB57;

LAB58:    xsi_set_current_line(79, ng0);

LAB61:    xsi_set_current_line(80, ng0);
    t16 = (t0 + 2728);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng2)));
    memset(t33, 0, 8);
    xsi_vlog_unsigned_minus(t33, 32, t18, 3, t19, 32);
    t20 = (t0 + 2728);
    xsi_vlogvar_assign_value(t20, t33, 0, 0, 3);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2568);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t15 = (t0 + 2568);
    t16 = (t15 + 64U);
    t17 = *((char **)t16);
    t18 = (t0 + 2728);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    xsi_vlog_generic_get_array_select_value(t14, 8, t4, t12, t17, 2, 1, t20, 3, 2);
    t21 = (t0 + 2088);
    xsi_vlogvar_assign_value(t21, t14, 0, 0, 8);
    goto LAB60;

LAB63:    t8 = *((unsigned int *)t14);
    t9 = *((unsigned int *)t33);
    t31 = (t8 - t9);
    t32 = (t31 + 1);
    xsi_vlogvar_assign_value(t5, t4, 0, *((unsigned int *)t33), t32);
    goto LAB64;

LAB65:    *((unsigned int *)t14) = 1;
    goto LAB68;

LAB70:    t8 = *((unsigned int *)t14);
    t9 = *((unsigned int *)t33);
    t31 = (t8 - t9);
    t32 = (t31 + 1);
    xsi_vlogvar_assign_value(t5, t4, 0, *((unsigned int *)t33), t32);
    goto LAB71;

LAB72:    *((unsigned int *)t14) = 1;
    goto LAB75;

}


extern void work_m_00000000004210984252_1200043877_init()
{
	static char *pe[] = {(void *)Always_41_0};
	xsi_register_didat("work_m_00000000004210984252_1200043877", "isim/program_isim_beh.exe.sim/work/m_00000000004210984252_1200043877.didat");
	xsi_register_executes(pe);
}
