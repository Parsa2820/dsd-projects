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
static const char *ng0 = "D:/University/Term4/DSD Lab/Exp4/Project/Exp4/Stack.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {2, 0};
static int ng4[] = {3, 0};
static int ng5[] = {4, 0};
static int ng6[] = {5, 0};
static int ng7[] = {6, 0};
static int ng8[] = {7, 0};
static int ng9[] = {8, 0};



static void Initial_17_0(char *t0)
{
    char t3[8];
    char t4[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    int t14;
    char *t15;
    unsigned int t16;
    int t17;
    int t18;
    unsigned int t19;
    unsigned int t20;
    int t21;
    int t22;

LAB0:    xsi_set_current_line(17, ng0);

LAB2:    xsi_set_current_line(18, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2248);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(19, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2408);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(20, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2728);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 4);
    xsi_set_current_line(21, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2568);
    t5 = (t0 + 2568);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 2568);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB3;

LAB4:    xsi_set_current_line(22, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2568);
    t5 = (t0 + 2568);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 2568);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB5;

LAB6:    xsi_set_current_line(23, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2568);
    t5 = (t0 + 2568);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 2568);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng3)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB7;

LAB8:    xsi_set_current_line(24, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2568);
    t5 = (t0 + 2568);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 2568);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng4)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB9;

LAB10:    xsi_set_current_line(25, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2568);
    t5 = (t0 + 2568);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 2568);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng5)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB11;

LAB12:    xsi_set_current_line(26, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2568);
    t5 = (t0 + 2568);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 2568);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng6)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB13;

LAB14:    xsi_set_current_line(27, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2568);
    t5 = (t0 + 2568);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 2568);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng7)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(28, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2568);
    t5 = (t0 + 2568);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 2568);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng8)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB17;

LAB18:    xsi_set_current_line(29, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2088);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 4);

LAB1:    return;
LAB3:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB4;

LAB5:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB6;

LAB7:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB8;

LAB9:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB10;

LAB11:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB12;

LAB13:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB14;

LAB15:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB16;

LAB17:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB18;

}

static void Always_32_1(char *t0)
{
    char t18[8];
    char t37[8];
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
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    int t38;
    int t39;
    int t40;
    int t41;
    int t42;

LAB0:    t1 = (t0 + 3896U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 4216);
    *((int *)t2) = 1;
    t3 = (t0 + 3928);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(32, ng0);

LAB5:    xsi_set_current_line(33, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(58, ng0);

LAB50:    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    t4 = (t0 + 2568);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = (t0 + 2568);
    t19 = (t12 + 64U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t18, t37, t11, t20, 2, 1, t21, 32, 1);
    t22 = (t18 + 4);
    t6 = *((unsigned int *)t22);
    t38 = (!(t6));
    t28 = (t37 + 4);
    t7 = *((unsigned int *)t28);
    t39 = (!(t7));
    t40 = (t38 && t39);
    if (t40 == 1)
        goto LAB51;

LAB52:    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    t4 = (t0 + 2568);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = (t0 + 2568);
    t19 = (t12 + 64U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t18, t37, t11, t20, 2, 1, t21, 32, 1);
    t22 = (t18 + 4);
    t6 = *((unsigned int *)t22);
    t38 = (!(t6));
    t28 = (t37 + 4);
    t7 = *((unsigned int *)t28);
    t39 = (!(t7));
    t40 = (t38 && t39);
    if (t40 == 1)
        goto LAB53;

LAB54:    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    t4 = (t0 + 2568);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = (t0 + 2568);
    t19 = (t12 + 64U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng3)));
    xsi_vlog_generic_convert_array_indices(t18, t37, t11, t20, 2, 1, t21, 32, 1);
    t22 = (t18 + 4);
    t6 = *((unsigned int *)t22);
    t38 = (!(t6));
    t28 = (t37 + 4);
    t7 = *((unsigned int *)t28);
    t39 = (!(t7));
    t40 = (t38 && t39);
    if (t40 == 1)
        goto LAB55;

LAB56:    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    t4 = (t0 + 2568);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = (t0 + 2568);
    t19 = (t12 + 64U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng4)));
    xsi_vlog_generic_convert_array_indices(t18, t37, t11, t20, 2, 1, t21, 32, 1);
    t22 = (t18 + 4);
    t6 = *((unsigned int *)t22);
    t38 = (!(t6));
    t28 = (t37 + 4);
    t7 = *((unsigned int *)t28);
    t39 = (!(t7));
    t40 = (t38 && t39);
    if (t40 == 1)
        goto LAB57;

LAB58:    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    t4 = (t0 + 2568);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = (t0 + 2568);
    t19 = (t12 + 64U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng5)));
    xsi_vlog_generic_convert_array_indices(t18, t37, t11, t20, 2, 1, t21, 32, 1);
    t22 = (t18 + 4);
    t6 = *((unsigned int *)t22);
    t38 = (!(t6));
    t28 = (t37 + 4);
    t7 = *((unsigned int *)t28);
    t39 = (!(t7));
    t40 = (t38 && t39);
    if (t40 == 1)
        goto LAB59;

LAB60:    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    t4 = (t0 + 2568);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = (t0 + 2568);
    t19 = (t12 + 64U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng6)));
    xsi_vlog_generic_convert_array_indices(t18, t37, t11, t20, 2, 1, t21, 32, 1);
    t22 = (t18 + 4);
    t6 = *((unsigned int *)t22);
    t38 = (!(t6));
    t28 = (t37 + 4);
    t7 = *((unsigned int *)t28);
    t39 = (!(t7));
    t40 = (t38 && t39);
    if (t40 == 1)
        goto LAB61;

LAB62:    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    t4 = (t0 + 2568);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = (t0 + 2568);
    t19 = (t12 + 64U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng7)));
    xsi_vlog_generic_convert_array_indices(t18, t37, t11, t20, 2, 1, t21, 32, 1);
    t22 = (t18 + 4);
    t6 = *((unsigned int *)t22);
    t38 = (!(t6));
    t28 = (t37 + 4);
    t7 = *((unsigned int *)t28);
    t39 = (!(t7));
    t40 = (t38 && t39);
    if (t40 == 1)
        goto LAB63;

LAB64:    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    t4 = (t0 + 2568);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = (t0 + 2568);
    t19 = (t12 + 64U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng8)));
    xsi_vlog_generic_convert_array_indices(t18, t37, t11, t20, 2, 1, t21, 32, 1);
    t22 = (t18 + 4);
    t6 = *((unsigned int *)t22);
    t38 = (!(t6));
    t28 = (t37 + 4);
    t7 = *((unsigned int *)t28);
    t39 = (!(t7));
    t40 = (t38 && t39);
    if (t40 == 1)
        goto LAB65;

LAB66:    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(33, ng0);

LAB9:    xsi_set_current_line(34, ng0);
    t11 = (t0 + 1528U);
    t12 = *((char **)t11);
    t11 = (t12 + 4);
    t13 = *((unsigned int *)t11);
    t14 = (~(t13));
    t15 = *((unsigned int *)t12);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB32;

LAB33:
LAB34:
LAB12:    goto LAB8;

LAB10:    xsi_set_current_line(34, ng0);

LAB13:    xsi_set_current_line(35, ng0);
    t19 = (t0 + 2248);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memset(t18, 0, 8);
    t22 = (t21 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t21);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB17;

LAB15:    if (*((unsigned int *)t22) == 0)
        goto LAB14;

LAB16:    t28 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t28) = 1;

LAB17:    t29 = (t18 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (~(t30));
    t32 = *((unsigned int *)t18);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB18;

LAB19:
LAB20:    goto LAB12;

LAB14:    *((unsigned int *)t18) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(35, ng0);

LAB21:    xsi_set_current_line(36, ng0);
    t35 = ((char*)((ng2)));
    t36 = (t0 + 2408);
    xsi_vlogvar_assign_value(t36, t35, 0, 0, 1);
    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 2568);
    t4 = (t0 + 2568);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = (t0 + 2568);
    t19 = (t12 + 64U);
    t20 = *((char **)t19);
    t21 = (t0 + 2728);
    t22 = (t21 + 56U);
    t28 = *((char **)t22);
    xsi_vlog_generic_convert_array_indices(t18, t37, t11, t20, 2, 1, t28, 4, 2);
    t29 = (t18 + 4);
    t6 = *((unsigned int *)t29);
    t38 = (!(t6));
    t35 = (t37 + 4);
    t7 = *((unsigned int *)t35);
    t39 = (!(t7));
    t40 = (t38 && t39);
    if (t40 == 1)
        goto LAB22;

LAB23:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t18, 0, 8);
    xsi_vlog_unsigned_add(t18, 32, t4, 4, t5, 32);
    t11 = (t0 + 2728);
    xsi_vlogvar_assign_value(t11, t18, 0, 0, 4);
    xsi_set_current_line(40, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng9)));
    memset(t18, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t13 = (t9 ^ t10);
    t14 = (t8 | t13);
    t15 = *((unsigned int *)t11);
    t16 = *((unsigned int *)t12);
    t17 = (t15 | t16);
    t23 = (~(t17));
    t24 = (t14 & t23);
    if (t24 != 0)
        goto LAB27;

LAB24:    if (t17 != 0)
        goto LAB26;

LAB25:    *((unsigned int *)t18) = 1;

LAB27:    t20 = (t18 + 4);
    t25 = *((unsigned int *)t20);
    t26 = (~(t25));
    t27 = *((unsigned int *)t18);
    t30 = (t27 & t26);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB28;

LAB29:
LAB30:    goto LAB20;

LAB22:    t8 = *((unsigned int *)t18);
    t9 = *((unsigned int *)t37);
    t41 = (t8 - t9);
    t42 = (t41 + 1);
    xsi_vlogvar_assign_value(t2, t3, 0, *((unsigned int *)t37), t42);
    goto LAB23;

LAB26:    t19 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB27;

LAB28:    xsi_set_current_line(40, ng0);

LAB31:    xsi_set_current_line(41, ng0);
    t21 = ((char*)((ng2)));
    t22 = (t0 + 2248);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 1);
    goto LAB30;

LAB32:    xsi_set_current_line(45, ng0);

LAB35:    xsi_set_current_line(46, ng0);
    t4 = (t0 + 2408);
    t5 = (t4 + 56U);
    t11 = *((char **)t5);
    t12 = (t11 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t11);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB36;

LAB37:
LAB38:    goto LAB34;

LAB36:    xsi_set_current_line(46, ng0);

LAB39:    xsi_set_current_line(47, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 2248);
    xsi_vlogvar_assign_value(t20, t19, 0, 0, 1);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t18, 0, 8);
    xsi_vlog_unsigned_minus(t18, 32, t4, 4, t5, 32);
    t11 = (t0 + 2728);
    xsi_vlogvar_assign_value(t11, t18, 0, 0, 4);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2568);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t19 = (t0 + 2568);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = (t0 + 2728);
    t28 = (t22 + 56U);
    t29 = *((char **)t28);
    xsi_vlog_generic_get_array_select_value(t18, 4, t4, t12, t21, 2, 1, t29, 4, 2);
    t35 = (t0 + 2088);
    xsi_vlogvar_assign_value(t35, t18, 0, 0, 4);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    t4 = (t0 + 2568);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = (t0 + 2568);
    t19 = (t12 + 64U);
    t20 = *((char **)t19);
    t21 = (t0 + 2728);
    t22 = (t21 + 56U);
    t28 = *((char **)t22);
    xsi_vlog_generic_convert_array_indices(t18, t37, t11, t20, 2, 1, t28, 4, 2);
    t29 = (t18 + 4);
    t6 = *((unsigned int *)t29);
    t38 = (!(t6));
    t35 = (t37 + 4);
    t7 = *((unsigned int *)t35);
    t39 = (!(t7));
    t40 = (t38 && t39);
    if (t40 == 1)
        goto LAB40;

LAB41:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t18, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t13 = (t9 ^ t10);
    t14 = (t8 | t13);
    t15 = *((unsigned int *)t11);
    t16 = *((unsigned int *)t12);
    t17 = (t15 | t16);
    t23 = (~(t17));
    t24 = (t14 & t23);
    if (t24 != 0)
        goto LAB45;

LAB42:    if (t17 != 0)
        goto LAB44;

LAB43:    *((unsigned int *)t18) = 1;

LAB45:    t20 = (t18 + 4);
    t25 = *((unsigned int *)t20);
    t26 = (~(t25));
    t27 = *((unsigned int *)t18);
    t30 = (t27 & t26);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB46;

LAB47:
LAB48:    goto LAB38;

LAB40:    t8 = *((unsigned int *)t18);
    t9 = *((unsigned int *)t37);
    t41 = (t8 - t9);
    t42 = (t41 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t37), t42);
    goto LAB41;

LAB44:    t19 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB45;

LAB46:    xsi_set_current_line(52, ng0);

LAB49:    xsi_set_current_line(53, ng0);
    t21 = ((char*)((ng1)));
    t22 = (t0 + 2408);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 1);
    goto LAB48;

LAB51:    t8 = *((unsigned int *)t18);
    t9 = *((unsigned int *)t37);
    t41 = (t8 - t9);
    t42 = (t41 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t37), t42);
    goto LAB52;

LAB53:    t8 = *((unsigned int *)t18);
    t9 = *((unsigned int *)t37);
    t41 = (t8 - t9);
    t42 = (t41 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t37), t42);
    goto LAB54;

LAB55:    t8 = *((unsigned int *)t18);
    t9 = *((unsigned int *)t37);
    t41 = (t8 - t9);
    t42 = (t41 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t37), t42);
    goto LAB56;

LAB57:    t8 = *((unsigned int *)t18);
    t9 = *((unsigned int *)t37);
    t41 = (t8 - t9);
    t42 = (t41 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t37), t42);
    goto LAB58;

LAB59:    t8 = *((unsigned int *)t18);
    t9 = *((unsigned int *)t37);
    t41 = (t8 - t9);
    t42 = (t41 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t37), t42);
    goto LAB60;

LAB61:    t8 = *((unsigned int *)t18);
    t9 = *((unsigned int *)t37);
    t41 = (t8 - t9);
    t42 = (t41 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t37), t42);
    goto LAB62;

LAB63:    t8 = *((unsigned int *)t18);
    t9 = *((unsigned int *)t37);
    t41 = (t8 - t9);
    t42 = (t41 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t37), t42);
    goto LAB64;

LAB65:    t8 = *((unsigned int *)t18);
    t9 = *((unsigned int *)t37);
    t41 = (t8 - t9);
    t42 = (t41 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t37), t42);
    goto LAB66;

}


extern void work_m_00000000001957083201_2393582595_init()
{
	static char *pe[] = {(void *)Initial_17_0,(void *)Always_32_1};
	xsi_register_didat("work_m_00000000001957083201_2393582595", "isim/StackTest_isim_beh.exe.sim/work/m_00000000001957083201_2393582595.didat");
	xsi_register_executes(pe);
}
