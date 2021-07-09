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
static const char *ng0 = "D:/University/Term4/DSD Lab/Exp6/Project/Exp6/Incubator.v";
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {35, 0};
static unsigned int ng4[] = {2U, 0U};
static int ng5[] = {15, 0};
static unsigned int ng6[] = {3U, 0U};
static int ng7[] = {25, 0};
static int ng8[] = {30, 0};
static int ng9[] = {40, 0};
static int ng10[] = {45, 0};
static unsigned int ng11[] = {4U, 0U};
static unsigned int ng12[] = {6U, 0U};
static unsigned int ng13[] = {8U, 0U};



static void Always_29_0(char *t0)
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

LAB0:    t1 = (t0 + 4600U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 5912);
    *((int *)t2) = 1;
    t3 = (t0 + 4632);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(29, ng0);

LAB5:    xsi_set_current_line(30, ng0);
    t4 = (t0 + 2160U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(33, ng0);

LAB10:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 3360);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3200);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 2, 0LL);
    xsi_set_current_line(35, ng0);
    t2 = (t0 + 3680);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3520);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 2, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(30, ng0);

LAB9:    xsi_set_current_line(31, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3200);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 2, 0LL);
    xsi_set_current_line(32, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3520);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB8;

}

static void Always_40_1(char *t0)
{
    char t9[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 4848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 5928);
    *((int *)t2) = 1;
    t3 = (t0 + 4880);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(40, ng0);

LAB5:    xsi_set_current_line(41, ng0);
    t4 = (t0 + 3200);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 3360);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 2, 0LL);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 3520);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3680);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 2, 0LL);
    xsi_set_current_line(44, ng0);
    t2 = (t0 + 3200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB6:    t5 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 2, t5, 2);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t8 == 1)
        goto LAB11;

LAB12:
LAB13:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 3520);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);

LAB33:    t6 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t5, 2, t6, 2);
    if (t8 == 1)
        goto LAB34;

LAB35:    t2 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t8 == 1)
        goto LAB36;

LAB37:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t8 == 1)
        goto LAB38;

LAB39:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t8 == 1)
        goto LAB40;

LAB41:
LAB42:    goto LAB2;

LAB7:    xsi_set_current_line(45, ng0);

LAB14:    xsi_set_current_line(46, ng0);
    t6 = (t0 + 2320U);
    t7 = *((char **)t6);
    t6 = ((char*)((ng3)));
    memset(t9, 0, 8);
    xsi_vlog_signed_greater(t9, 32, t7, 8, t6, 32);
    t10 = (t9 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t9);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 2320U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t9, 0, 8);
    xsi_vlog_signed_less(t9, 32, t3, 8, t2, 32);
    t5 = (t9 + 4);
    t11 = *((unsigned int *)t5);
    t12 = (~(t11));
    t13 = *((unsigned int *)t9);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB19;

LAB20:
LAB21:
LAB17:    goto LAB13;

LAB9:    xsi_set_current_line(52, ng0);

LAB23:    xsi_set_current_line(53, ng0);
    t3 = (t0 + 2320U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng7)));
    memset(t9, 0, 8);
    xsi_vlog_signed_less(t9, 32, t5, 8, t3, 32);
    t6 = (t9 + 4);
    t11 = *((unsigned int *)t6);
    t12 = (~(t11));
    t13 = *((unsigned int *)t9);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB24;

LAB25:
LAB26:    goto LAB13;

LAB11:    xsi_set_current_line(57, ng0);

LAB28:    xsi_set_current_line(58, ng0);
    t3 = (t0 + 2320U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng8)));
    memset(t9, 0, 8);
    xsi_vlog_signed_greater(t9, 32, t5, 8, t3, 32);
    t6 = (t9 + 4);
    t11 = *((unsigned int *)t6);
    t12 = (~(t11));
    t13 = *((unsigned int *)t9);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB29;

LAB30:
LAB31:    goto LAB13;

LAB15:    xsi_set_current_line(46, ng0);

LAB18:    xsi_set_current_line(47, ng0);
    t16 = ((char*)((ng4)));
    t17 = (t0 + 3360);
    xsi_vlogvar_wait_assign_value(t17, t16, 0, 0, 2, 0LL);
    goto LAB17;

LAB19:    xsi_set_current_line(48, ng0);

LAB22:    xsi_set_current_line(49, ng0);
    t6 = ((char*)((ng6)));
    t7 = (t0 + 3360);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 2, 0LL);
    goto LAB21;

LAB24:    xsi_set_current_line(53, ng0);

LAB27:    xsi_set_current_line(54, ng0);
    t7 = ((char*)((ng1)));
    t10 = (t0 + 3360);
    xsi_vlogvar_wait_assign_value(t10, t7, 0, 0, 2, 0LL);
    goto LAB26;

LAB29:    xsi_set_current_line(58, ng0);

LAB32:    xsi_set_current_line(59, ng0);
    t7 = ((char*)((ng1)));
    t10 = (t0 + 3360);
    xsi_vlogvar_wait_assign_value(t10, t7, 0, 0, 2, 0LL);
    goto LAB31;

LAB34:    xsi_set_current_line(65, ng0);

LAB43:    xsi_set_current_line(66, ng0);
    t7 = (t0 + 2320U);
    t10 = *((char **)t7);
    t7 = ((char*)((ng3)));
    memset(t9, 0, 8);
    xsi_vlog_signed_greater(t9, 32, t10, 8, t7, 32);
    t16 = (t9 + 4);
    t11 = *((unsigned int *)t16);
    t12 = (~(t11));
    t13 = *((unsigned int *)t9);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB44;

LAB45:
LAB46:    goto LAB42;

LAB36:    xsi_set_current_line(70, ng0);

LAB48:    xsi_set_current_line(71, ng0);
    t3 = (t0 + 2320U);
    t6 = *((char **)t3);
    t3 = ((char*)((ng9)));
    memset(t9, 0, 8);
    xsi_vlog_signed_greater(t9, 32, t6, 8, t3, 32);
    t7 = (t9 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (~(t11));
    t13 = *((unsigned int *)t9);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB49;

LAB50:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 2320U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng7)));
    memset(t9, 0, 8);
    xsi_vlog_signed_less(t9, 32, t3, 8, t2, 32);
    t6 = (t9 + 4);
    t11 = *((unsigned int *)t6);
    t12 = (~(t11));
    t13 = *((unsigned int *)t9);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB53;

LAB54:
LAB55:
LAB51:    goto LAB42;

LAB38:    xsi_set_current_line(77, ng0);

LAB57:    xsi_set_current_line(78, ng0);
    t3 = (t0 + 2320U);
    t6 = *((char **)t3);
    t3 = ((char*)((ng10)));
    memset(t9, 0, 8);
    xsi_vlog_signed_greater(t9, 32, t6, 8, t3, 32);
    t7 = (t9 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (~(t11));
    t13 = *((unsigned int *)t9);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB58;

LAB59:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 2320U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t9, 0, 8);
    xsi_vlog_signed_less(t9, 32, t3, 8, t2, 32);
    t6 = (t9 + 4);
    t11 = *((unsigned int *)t6);
    t12 = (~(t11));
    t13 = *((unsigned int *)t9);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB62;

LAB63:
LAB64:
LAB60:    goto LAB42;

LAB40:    xsi_set_current_line(84, ng0);

LAB66:    xsi_set_current_line(85, ng0);
    t3 = (t0 + 2320U);
    t6 = *((char **)t3);
    t3 = ((char*)((ng9)));
    memset(t9, 0, 8);
    xsi_vlog_signed_less(t9, 32, t6, 8, t3, 32);
    t7 = (t9 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (~(t11));
    t13 = *((unsigned int *)t9);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB67;

LAB68:
LAB69:    goto LAB42;

LAB44:    xsi_set_current_line(66, ng0);

LAB47:    xsi_set_current_line(67, ng0);
    t17 = ((char*)((ng1)));
    t18 = (t0 + 3680);
    xsi_vlogvar_wait_assign_value(t18, t17, 0, 0, 2, 0LL);
    goto LAB46;

LAB49:    xsi_set_current_line(71, ng0);

LAB52:    xsi_set_current_line(72, ng0);
    t10 = ((char*)((ng4)));
    t16 = (t0 + 3680);
    xsi_vlogvar_wait_assign_value(t16, t10, 0, 0, 2, 0LL);
    goto LAB51;

LAB53:    xsi_set_current_line(73, ng0);

LAB56:    xsi_set_current_line(74, ng0);
    t7 = ((char*)((ng2)));
    t10 = (t0 + 3680);
    xsi_vlogvar_wait_assign_value(t10, t7, 0, 0, 2, 0LL);
    goto LAB55;

LAB58:    xsi_set_current_line(78, ng0);

LAB61:    xsi_set_current_line(79, ng0);
    t10 = ((char*)((ng6)));
    t16 = (t0 + 3680);
    xsi_vlogvar_wait_assign_value(t16, t10, 0, 0, 2, 0LL);
    goto LAB60;

LAB62:    xsi_set_current_line(80, ng0);

LAB65:    xsi_set_current_line(81, ng0);
    t7 = ((char*)((ng1)));
    t10 = (t0 + 3680);
    xsi_vlogvar_wait_assign_value(t10, t7, 0, 0, 2, 0LL);
    goto LAB64;

LAB67:    xsi_set_current_line(85, ng0);

LAB70:    xsi_set_current_line(86, ng0);
    t10 = ((char*)((ng4)));
    t16 = (t0 + 3680);
    xsi_vlogvar_wait_assign_value(t16, t10, 0, 0, 2, 0LL);
    goto LAB69;

}

static void Always_93_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 5096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 5944);
    *((int *)t2) = 1;
    t3 = (t0 + 5128);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(93, ng0);

LAB5:    xsi_set_current_line(94, ng0);
    t4 = (t0 + 3680);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t7, 2);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB13;

LAB14:
LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(95, ng0);

LAB16:    xsi_set_current_line(96, ng0);
    t9 = ((char*)((ng2)));
    t10 = (t0 + 3040);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 4, 0LL);
    goto LAB15;

LAB9:    xsi_set_current_line(98, ng0);

LAB17:    xsi_set_current_line(99, ng0);
    t3 = ((char*)((ng11)));
    t4 = (t0 + 3040);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    goto LAB15;

LAB11:    xsi_set_current_line(101, ng0);

LAB18:    xsi_set_current_line(102, ng0);
    t3 = ((char*)((ng12)));
    t4 = (t0 + 3040);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    goto LAB15;

LAB13:    xsi_set_current_line(104, ng0);

LAB19:    xsi_set_current_line(105, ng0);
    t3 = ((char*)((ng13)));
    t4 = (t0 + 3040);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    goto LAB15;

}

static void Cont_110_3(char *t0)
{
    char t5[8];
    char t17[8];
    char t26[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    int t50;
    int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;

LAB0:    t1 = (t0 + 5344U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(110, ng0);
    t2 = (t0 + 3200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 1);
    t10 = (t9 & 1);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 1);
    t13 = (t12 & 1);
    *((unsigned int *)t6) = t13;
    t14 = (t0 + 3200);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t17, 0, 8);
    t18 = (t17 + 4);
    t19 = (t16 + 4);
    t20 = *((unsigned int *)t16);
    t21 = (t20 >> 0);
    t22 = (t21 & 1);
    *((unsigned int *)t17) = t22;
    t23 = *((unsigned int *)t19);
    t24 = (t23 >> 0);
    t25 = (t24 & 1);
    *((unsigned int *)t18) = t25;
    t27 = *((unsigned int *)t5);
    t28 = *((unsigned int *)t17);
    t29 = (t27 & t28);
    *((unsigned int *)t26) = t29;
    t30 = (t5 + 4);
    t31 = (t17 + 4);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t30);
    t34 = *((unsigned int *)t31);
    t35 = (t33 | t34);
    *((unsigned int *)t32) = t35;
    t36 = *((unsigned int *)t32);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB4;

LAB5:
LAB6:    t58 = (t0 + 6056);
    t59 = (t58 + 56U);
    t60 = *((char **)t59);
    t61 = (t60 + 56U);
    t62 = *((char **)t61);
    memset(t62, 0, 8);
    t63 = 1U;
    t64 = t63;
    t65 = (t26 + 4);
    t66 = *((unsigned int *)t26);
    t63 = (t63 & t66);
    t67 = *((unsigned int *)t65);
    t64 = (t64 & t67);
    t68 = (t62 + 4);
    t69 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t69 | t63);
    t70 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t70 | t64);
    xsi_driver_vfirst_trans(t58, 0, 0);
    t71 = (t0 + 5960);
    *((int *)t71) = 1;

LAB1:    return;
LAB4:    t38 = *((unsigned int *)t26);
    t39 = *((unsigned int *)t32);
    *((unsigned int *)t26) = (t38 | t39);
    t40 = (t5 + 4);
    t41 = (t17 + 4);
    t42 = *((unsigned int *)t5);
    t43 = (~(t42));
    t44 = *((unsigned int *)t40);
    t45 = (~(t44));
    t46 = *((unsigned int *)t17);
    t47 = (~(t46));
    t48 = *((unsigned int *)t41);
    t49 = (~(t48));
    t50 = (t43 & t45);
    t51 = (t47 & t49);
    t52 = (~(t50));
    t53 = (~(t51));
    t54 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t54 & t52);
    t55 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t55 & t53);
    t56 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t56 & t52);
    t57 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t57 & t53);
    goto LAB6;

}

static void Cont_111_4(char *t0)
{
    char t5[8];
    char t14[8];
    char t18[8];
    char t44[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    int t68;
    int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;

LAB0:    t1 = (t0 + 5592U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(111, ng0);
    t2 = (t0 + 3200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 1);
    t10 = (t9 & 1);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 1);
    t13 = (t12 & 1);
    *((unsigned int *)t6) = t13;
    t15 = (t0 + 3200);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memset(t18, 0, 8);
    t19 = (t18 + 4);
    t20 = (t17 + 4);
    t21 = *((unsigned int *)t17);
    t22 = (t21 >> 0);
    t23 = (t22 & 1);
    *((unsigned int *)t18) = t23;
    t24 = *((unsigned int *)t20);
    t25 = (t24 >> 0);
    t26 = (t25 & 1);
    *((unsigned int *)t19) = t26;
    memset(t14, 0, 8);
    t27 = (t18 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t18);
    t31 = (t30 & t29);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t27) == 0)
        goto LAB4;

LAB6:    t33 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t33) = 1;

LAB7:    t34 = (t14 + 4);
    t35 = (t18 + 4);
    t36 = *((unsigned int *)t18);
    t37 = (~(t36));
    *((unsigned int *)t14) = t37;
    *((unsigned int *)t34) = 0;
    if (*((unsigned int *)t35) != 0)
        goto LAB9;

LAB8:    t42 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t42 & 1U);
    t43 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t43 & 1U);
    t45 = *((unsigned int *)t5);
    t46 = *((unsigned int *)t14);
    t47 = (t45 & t46);
    *((unsigned int *)t44) = t47;
    t48 = (t5 + 4);
    t49 = (t14 + 4);
    t50 = (t44 + 4);
    t51 = *((unsigned int *)t48);
    t52 = *((unsigned int *)t49);
    t53 = (t51 | t52);
    *((unsigned int *)t50) = t53;
    t54 = *((unsigned int *)t50);
    t55 = (t54 != 0);
    if (t55 == 1)
        goto LAB10;

LAB11:
LAB12:    t76 = (t0 + 6120);
    t77 = (t76 + 56U);
    t78 = *((char **)t77);
    t79 = (t78 + 56U);
    t80 = *((char **)t79);
    memset(t80, 0, 8);
    t81 = 1U;
    t82 = t81;
    t83 = (t44 + 4);
    t84 = *((unsigned int *)t44);
    t81 = (t81 & t84);
    t85 = *((unsigned int *)t83);
    t82 = (t82 & t85);
    t86 = (t80 + 4);
    t87 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t87 | t81);
    t88 = *((unsigned int *)t86);
    *((unsigned int *)t86) = (t88 | t82);
    xsi_driver_vfirst_trans(t76, 0, 0);
    t89 = (t0 + 5976);
    *((int *)t89) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t14) = 1;
    goto LAB7;

LAB9:    t38 = *((unsigned int *)t14);
    t39 = *((unsigned int *)t35);
    *((unsigned int *)t14) = (t38 | t39);
    t40 = *((unsigned int *)t34);
    t41 = *((unsigned int *)t35);
    *((unsigned int *)t34) = (t40 | t41);
    goto LAB8;

LAB10:    t56 = *((unsigned int *)t44);
    t57 = *((unsigned int *)t50);
    *((unsigned int *)t44) = (t56 | t57);
    t58 = (t5 + 4);
    t59 = (t14 + 4);
    t60 = *((unsigned int *)t5);
    t61 = (~(t60));
    t62 = *((unsigned int *)t58);
    t63 = (~(t62));
    t64 = *((unsigned int *)t14);
    t65 = (~(t64));
    t66 = *((unsigned int *)t59);
    t67 = (~(t66));
    t68 = (t61 & t63);
    t69 = (t65 & t67);
    t70 = (~(t68));
    t71 = (~(t69));
    t72 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t72 & t70);
    t73 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t73 & t71);
    t74 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t74 & t70);
    t75 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t75 & t71);
    goto LAB12;

}


extern void work_m_00000000001947553806_2512152635_init()
{
	static char *pe[] = {(void *)Always_29_0,(void *)Always_40_1,(void *)Always_93_2,(void *)Cont_110_3,(void *)Cont_111_4};
	xsi_register_didat("work_m_00000000001947553806_2512152635", "isim/Stimulus_isim_beh.exe.sim/work/m_00000000001947553806_2512152635.didat");
	xsi_register_executes(pe);
}
