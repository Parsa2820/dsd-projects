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
static const char *ng0 = "D:/University/Term4/DSD Lab/Exp8/Project/Exp8/cpu.v";
static int ng1[] = {0, 0};
static int ng2[] = {31, 0};
static unsigned int ng3[] = {0U, 0U};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {1U, 0U};
static unsigned int ng6[] = {2U, 0U};
static unsigned int ng7[] = {3U, 0U};
static int ng8[] = {2, 0};
static int ng9[] = {3, 0};
static int ng10[] = {4, 0};
static const char *ng11 = "%d, %d, %d, %d";
static unsigned int ng12[] = {4U, 0U};



static void Always_81_0(char *t0)
{
    char t4[8];
    char t21[8];
    char t41[8];
    char t47[8];
    char t57[8];
    char t73[8];
    char t81[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
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
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    char *t85;
    char *t86;
    char *t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t95;
    char *t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    char *t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    char *t115;
    char *t116;

LAB0:    t1 = (t0 + 6824U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 7144);
    *((int *)t2) = 1;
    t3 = (t0 + 6856);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(81, ng0);

LAB5:    xsi_set_current_line(82, ng0);
    t5 = (t0 + 1504U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 1344U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB14;

LAB15:
LAB16:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(82, ng0);

LAB13:    xsi_set_current_line(83, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 4784);
    xsi_vlogvar_assign_value(t20, t19, 0, 0, 5);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    goto LAB12;

LAB14:    xsi_set_current_line(85, ng0);

LAB17:    xsi_set_current_line(86, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t0 + 2704);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 1);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 4784);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3184);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 5);
    xsi_set_current_line(88, ng0);
    t2 = (t0 + 7160);
    *((int *)t2) = 1;
    t3 = (t0 + 6856);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB18;
    goto LAB1;

LAB18:    xsi_set_current_line(89, ng0);
    t5 = (t0 + 1664U);
    t6 = *((char **)t5);
    t5 = (t0 + 4944);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 8);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 4944);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 5);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t12);
    t10 = (t9 >> 5);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 7U);
    t14 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t14 & 7U);
    t13 = ((char*)((ng3)));
    memset(t21, 0, 8);
    t19 = (t4 + 4);
    t20 = (t13 + 4);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t13);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t19);
    t22 = *((unsigned int *)t20);
    t23 = (t18 ^ t22);
    t24 = (t17 | t23);
    t25 = *((unsigned int *)t19);
    t26 = *((unsigned int *)t20);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB22;

LAB19:    if (t27 != 0)
        goto LAB21;

LAB20:    *((unsigned int *)t21) = 1;

LAB22:    t31 = (t21 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (~(t32));
    t34 = *((unsigned int *)t21);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB23;

LAB24:    xsi_set_current_line(108, ng0);
    t2 = (t0 + 4944);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 5);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t12);
    t10 = (t9 >> 5);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 7U);
    t14 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t14 & 7U);
    t13 = ((char*)((ng5)));
    memset(t21, 0, 8);
    t19 = (t4 + 4);
    t20 = (t13 + 4);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t13);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t19);
    t22 = *((unsigned int *)t20);
    t23 = (t18 ^ t22);
    t24 = (t17 | t23);
    t25 = *((unsigned int *)t19);
    t26 = *((unsigned int *)t20);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB33;

LAB30:    if (t27 != 0)
        goto LAB32;

LAB31:    *((unsigned int *)t21) = 1;

LAB33:    t31 = (t21 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (~(t32));
    t34 = *((unsigned int *)t21);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB34;

LAB35:    xsi_set_current_line(126, ng0);
    t2 = (t0 + 4944);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 5);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t12);
    t10 = (t9 >> 5);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 7U);
    t14 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t14 & 7U);
    t13 = ((char*)((ng6)));
    memset(t21, 0, 8);
    t19 = (t4 + 4);
    t20 = (t13 + 4);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t13);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t19);
    t22 = *((unsigned int *)t20);
    t23 = (t18 ^ t22);
    t24 = (t17 | t23);
    t25 = *((unsigned int *)t19);
    t26 = *((unsigned int *)t20);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB44;

LAB41:    if (t27 != 0)
        goto LAB43;

LAB42:    *((unsigned int *)t21) = 1;

LAB44:    memset(t41, 0, 8);
    t31 = (t21 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (~(t32));
    t34 = *((unsigned int *)t21);
    t35 = (t34 & t33);
    t36 = (t35 & 1U);
    if (t36 != 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t31) != 0)
        goto LAB47;

LAB48:    t38 = (t41 + 4);
    t43 = *((unsigned int *)t41);
    t44 = (!(t43));
    t45 = *((unsigned int *)t38);
    t46 = (t44 || t45);
    if (t46 > 0)
        goto LAB49;

LAB50:    memcpy(t81, t41, 8);

LAB51:    t109 = (t81 + 4);
    t110 = *((unsigned int *)t109);
    t111 = (~(t110));
    t112 = *((unsigned int *)t81);
    t113 = (t112 & t111);
    t114 = (t113 != 0);
    if (t114 > 0)
        goto LAB63;

LAB64:    xsi_set_current_line(166, ng0);
    t2 = (t0 + 4944);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 5);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t12);
    t10 = (t9 >> 5);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 7U);
    t14 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t14 & 7U);
    t13 = ((char*)((ng12)));
    memset(t21, 0, 8);
    t19 = (t4 + 4);
    t20 = (t13 + 4);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t13);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t19);
    t22 = *((unsigned int *)t20);
    t23 = (t18 ^ t22);
    t24 = (t17 | t23);
    t25 = *((unsigned int *)t19);
    t26 = *((unsigned int *)t20);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB80;

LAB77:    if (t27 != 0)
        goto LAB79;

LAB78:    *((unsigned int *)t21) = 1;

LAB80:    t31 = (t21 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (~(t32));
    t34 = *((unsigned int *)t21);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB81;

LAB82:
LAB83:
LAB65:
LAB36:
LAB25:    xsi_set_current_line(217, ng0);
    t2 = (t0 + 4784);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng4)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t5, 5, t6, 32);
    t12 = (t0 + 4784);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 5);
    goto LAB16;

LAB21:    t30 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB22;

LAB23:    xsi_set_current_line(90, ng0);

LAB26:    xsi_set_current_line(91, ng0);
    t37 = ((char*)((ng1)));
    t38 = (t0 + 2704);
    xsi_vlogvar_assign_value(t38, t37, 0, 0, 1);
    xsi_set_current_line(92, ng0);
    t2 = (t0 + 4944);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 0);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t12);
    t10 = (t9 >> 0);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 31U);
    t14 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t14 & 31U);
    t13 = (t0 + 3184);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 5);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 7176);
    *((int *)t2) = 1;
    t3 = (t0 + 6856);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB27:    xsi_set_current_line(94, ng0);
    t5 = (t0 + 1664U);
    t6 = *((char **)t5);
    t5 = (t0 + 5264);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 8);
    xsi_set_current_line(95, ng0);
    t2 = (t0 + 5104);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 2864);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 5);
    xsi_set_current_line(96, ng0);
    t2 = (t0 + 5264);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3024);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 8);
    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2704);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(98, ng0);
    t2 = (t0 + 5104);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng4)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_minus(t4, 32, t5, 5, t6, 32);
    t12 = (t0 + 5104);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 5);
    xsi_set_current_line(99, ng0);
    t2 = (t0 + 6632);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB28;
    goto LAB1;

LAB28:    xsi_set_current_line(100, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 2704);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(101, ng0);
    t2 = (t0 + 4944);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 0);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t12);
    t10 = (t9 >> 0);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 31U);
    t14 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t14 & 31U);
    t13 = ((char*)((ng4)));
    memset(t21, 0, 8);
    xsi_vlog_unsigned_add(t21, 32, t4, 32, t13, 32);
    t19 = (t0 + 3184);
    xsi_vlogvar_assign_value(t19, t21, 0, 0, 5);
    xsi_set_current_line(102, ng0);
    t2 = (t0 + 7192);
    *((int *)t2) = 1;
    t3 = (t0 + 6856);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB29;
    goto LAB1;

LAB29:    xsi_set_current_line(103, ng0);
    t5 = (t0 + 1664U);
    t6 = *((char **)t5);
    t5 = (t0 + 5264);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 8);
    xsi_set_current_line(104, ng0);
    t2 = (t0 + 5104);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 2864);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 5);
    xsi_set_current_line(105, ng0);
    t2 = (t0 + 5264);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3024);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 8);
    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2704);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(107, ng0);
    t2 = (t0 + 5104);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng4)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_minus(t4, 32, t5, 5, t6, 32);
    t12 = (t0 + 5104);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 5);
    goto LAB25;

LAB32:    t30 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB33;

LAB34:    xsi_set_current_line(108, ng0);

LAB37:    xsi_set_current_line(109, ng0);
    t37 = (t0 + 5104);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    t40 = ((char*)((ng4)));
    memset(t41, 0, 8);
    xsi_vlog_unsigned_add(t41, 32, t39, 5, t40, 32);
    t42 = (t0 + 5104);
    xsi_vlogvar_assign_value(t42, t41, 0, 0, 5);
    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2704);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(111, ng0);
    t2 = (t0 + 5104);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3184);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 5);
    xsi_set_current_line(112, ng0);
    t2 = (t0 + 7208);
    *((int *)t2) = 1;
    t3 = (t0 + 6856);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB38;
    goto LAB1;

LAB38:    xsi_set_current_line(113, ng0);
    t5 = (t0 + 1664U);
    t6 = *((char **)t5);
    t5 = (t0 + 5264);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 8);
    xsi_set_current_line(114, ng0);
    t2 = (t0 + 4944);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 0);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t12);
    t10 = (t9 >> 0);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 31U);
    t14 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t14 & 31U);
    t13 = ((char*)((ng4)));
    memset(t21, 0, 8);
    xsi_vlog_unsigned_add(t21, 32, t4, 32, t13, 32);
    t19 = (t0 + 2864);
    xsi_vlogvar_assign_value(t19, t21, 0, 0, 5);
    xsi_set_current_line(115, ng0);
    t2 = (t0 + 5264);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3024);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 8);
    xsi_set_current_line(116, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2704);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(117, ng0);
    t2 = (t0 + 6632);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB39;
    goto LAB1;

LAB39:    xsi_set_current_line(118, ng0);
    t3 = (t0 + 5104);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t12 = ((char*)((ng4)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t6, 5, t12, 32);
    t13 = (t0 + 5104);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 5);
    xsi_set_current_line(119, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2704);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(120, ng0);
    t2 = (t0 + 5104);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3184);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 5);
    xsi_set_current_line(121, ng0);
    t2 = (t0 + 7224);
    *((int *)t2) = 1;
    t3 = (t0 + 6856);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB40;
    goto LAB1;

LAB40:    xsi_set_current_line(122, ng0);
    t5 = (t0 + 1664U);
    t6 = *((char **)t5);
    t5 = (t0 + 5264);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 8);
    xsi_set_current_line(123, ng0);
    t2 = (t0 + 4944);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 0);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t12);
    t10 = (t9 >> 0);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 31U);
    t14 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t14 & 31U);
    t13 = (t0 + 2864);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 5);
    xsi_set_current_line(124, ng0);
    t2 = (t0 + 5264);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3024);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 8);
    xsi_set_current_line(125, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2704);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB36;

LAB43:    t30 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB44;

LAB45:    *((unsigned int *)t41) = 1;
    goto LAB48;

LAB47:    t37 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB48;

LAB49:    t39 = (t0 + 4944);
    t40 = (t39 + 56U);
    t42 = *((char **)t40);
    memset(t47, 0, 8);
    t48 = (t47 + 4);
    t49 = (t42 + 4);
    t50 = *((unsigned int *)t42);
    t51 = (t50 >> 5);
    *((unsigned int *)t47) = t51;
    t52 = *((unsigned int *)t49);
    t53 = (t52 >> 5);
    *((unsigned int *)t48) = t53;
    t54 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t54 & 7U);
    t55 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t55 & 7U);
    t56 = ((char*)((ng7)));
    memset(t57, 0, 8);
    t58 = (t47 + 4);
    t59 = (t56 + 4);
    t60 = *((unsigned int *)t47);
    t61 = *((unsigned int *)t56);
    t62 = (t60 ^ t61);
    t63 = *((unsigned int *)t58);
    t64 = *((unsigned int *)t59);
    t65 = (t63 ^ t64);
    t66 = (t62 | t65);
    t67 = *((unsigned int *)t58);
    t68 = *((unsigned int *)t59);
    t69 = (t67 | t68);
    t70 = (~(t69));
    t71 = (t66 & t70);
    if (t71 != 0)
        goto LAB55;

LAB52:    if (t69 != 0)
        goto LAB54;

LAB53:    *((unsigned int *)t57) = 1;

LAB55:    memset(t73, 0, 8);
    t74 = (t57 + 4);
    t75 = *((unsigned int *)t74);
    t76 = (~(t75));
    t77 = *((unsigned int *)t57);
    t78 = (t77 & t76);
    t79 = (t78 & 1U);
    if (t79 != 0)
        goto LAB56;

LAB57:    if (*((unsigned int *)t74) != 0)
        goto LAB58;

LAB59:    t82 = *((unsigned int *)t41);
    t83 = *((unsigned int *)t73);
    t84 = (t82 | t83);
    *((unsigned int *)t81) = t84;
    t85 = (t41 + 4);
    t86 = (t73 + 4);
    t87 = (t81 + 4);
    t88 = *((unsigned int *)t85);
    t89 = *((unsigned int *)t86);
    t90 = (t88 | t89);
    *((unsigned int *)t87) = t90;
    t91 = *((unsigned int *)t87);
    t92 = (t91 != 0);
    if (t92 == 1)
        goto LAB60;

LAB61:
LAB62:    goto LAB51;

LAB54:    t72 = (t57 + 4);
    *((unsigned int *)t57) = 1;
    *((unsigned int *)t72) = 1;
    goto LAB55;

LAB56:    *((unsigned int *)t73) = 1;
    goto LAB59;

LAB58:    t80 = (t73 + 4);
    *((unsigned int *)t73) = 1;
    *((unsigned int *)t80) = 1;
    goto LAB59;

LAB60:    t93 = *((unsigned int *)t81);
    t94 = *((unsigned int *)t87);
    *((unsigned int *)t81) = (t93 | t94);
    t95 = (t41 + 4);
    t96 = (t73 + 4);
    t97 = *((unsigned int *)t95);
    t98 = (~(t97));
    t99 = *((unsigned int *)t41);
    t100 = (t99 & t98);
    t101 = *((unsigned int *)t96);
    t102 = (~(t101));
    t103 = *((unsigned int *)t73);
    t104 = (t103 & t102);
    t105 = (~(t100));
    t106 = (~(t104));
    t107 = *((unsigned int *)t87);
    *((unsigned int *)t87) = (t107 & t105);
    t108 = *((unsigned int *)t87);
    *((unsigned int *)t87) = (t108 & t106);
    goto LAB62;

LAB63:    xsi_set_current_line(126, ng0);

LAB66:    xsi_set_current_line(127, ng0);
    t115 = ((char*)((ng1)));
    t116 = (t0 + 2704);
    xsi_vlogvar_assign_value(t116, t115, 0, 0, 1);
    xsi_set_current_line(128, ng0);
    t2 = (t0 + 5104);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng4)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t5, 5, t6, 32);
    t12 = (t0 + 3184);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 5);
    xsi_set_current_line(129, ng0);
    t2 = (t0 + 7240);
    *((int *)t2) = 1;
    t3 = (t0 + 6856);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB67;
    goto LAB1;

LAB67:    xsi_set_current_line(130, ng0);
    t5 = (t0 + 1664U);
    t6 = *((char **)t5);
    t5 = (t0 + 5584);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 8);
    xsi_set_current_line(132, ng0);
    t2 = (t0 + 5104);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng8)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t5, 5, t6, 32);
    t12 = (t0 + 3184);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 5);
    xsi_set_current_line(133, ng0);
    t2 = (t0 + 7256);
    *((int *)t2) = 1;
    t3 = (t0 + 6856);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB68;
    goto LAB1;

LAB68:    xsi_set_current_line(134, ng0);
    t5 = (t0 + 1664U);
    t6 = *((char **)t5);
    t5 = (t0 + 5424);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 8);
    xsi_set_current_line(136, ng0);
    t2 = (t0 + 5104);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng9)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t5, 5, t6, 32);
    t12 = (t0 + 3184);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 5);
    xsi_set_current_line(137, ng0);
    t2 = (t0 + 7272);
    *((int *)t2) = 1;
    t3 = (t0 + 6856);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB69;
    goto LAB1;

LAB69:    xsi_set_current_line(138, ng0);
    t5 = (t0 + 1664U);
    t6 = *((char **)t5);
    t5 = (t0 + 5904);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 8);
    xsi_set_current_line(140, ng0);
    t2 = (t0 + 5104);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng10)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t5, 5, t6, 32);
    t12 = (t0 + 3184);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 5);
    xsi_set_current_line(141, ng0);
    t2 = (t0 + 7288);
    *((int *)t2) = 1;
    t3 = (t0 + 6856);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB70;
    goto LAB1;

LAB70:    xsi_set_current_line(142, ng0);
    t5 = (t0 + 1664U);
    t6 = *((char **)t5);
    t5 = (t0 + 5744);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 8);
    xsi_set_current_line(144, ng0);
    t2 = (t0 + 5584);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 5424);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    t19 = (t0 + 5904);
    t20 = (t19 + 56U);
    t30 = *((char **)t20);
    t31 = (t0 + 5744);
    t37 = (t31 + 56U);
    t38 = *((char **)t37);
    xsi_vlogfile_write(1, 0, 0, ng11, 5, t0, (char)118, t5, 8, (char)118, t13, 8, (char)118, t30, 8, (char)118, t38, 8);
    xsi_set_current_line(146, ng0);
    t2 = (t0 + 4944);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t21, 0, 8);
    t6 = (t21 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 5);
    t9 = (t8 & 1);
    *((unsigned int *)t21) = t9;
    t10 = *((unsigned int *)t12);
    t11 = (t10 >> 5);
    t14 = (t11 & 1);
    *((unsigned int *)t6) = t14;
    memset(t4, 0, 8);
    t13 = (t21 + 4);
    t15 = *((unsigned int *)t13);
    t16 = (~(t15));
    t17 = *((unsigned int *)t21);
    t18 = (t17 & t16);
    t22 = (t18 & 1U);
    if (t22 != 0)
        goto LAB74;

LAB72:    if (*((unsigned int *)t13) == 0)
        goto LAB71;

LAB73:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;

LAB74:    t20 = (t0 + 3344);
    xsi_vlogvar_assign_value(t20, t4, 0, 0, 1);
    xsi_set_current_line(147, ng0);
    t2 = (t0 + 5744);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3504);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 8);
    xsi_set_current_line(148, ng0);
    t2 = (t0 + 5904);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3664);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 8);
    xsi_set_current_line(149, ng0);
    t2 = (t0 + 5424);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3824);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 8);
    xsi_set_current_line(150, ng0);
    t2 = (t0 + 5584);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3984);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 8);
    xsi_set_current_line(151, ng0);
    t2 = (t0 + 7304);
    *((int *)t2) = 1;
    t3 = (t0 + 6856);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB75;
    goto LAB1;

LAB71:    *((unsigned int *)t4) = 1;
    goto LAB74;

LAB75:    xsi_set_current_line(153, ng0);
    t5 = (t0 + 1824U);
    t6 = *((char **)t5);
    t5 = (t0 + 5264);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 8);
    xsi_set_current_line(154, ng0);
    t2 = (t0 + 5104);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 2864);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 5);
    xsi_set_current_line(155, ng0);
    t2 = (t0 + 5264);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3024);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 8);
    xsi_set_current_line(156, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2704);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(157, ng0);
    t2 = (t0 + 5104);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng4)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_minus(t4, 32, t5, 5, t6, 32);
    t12 = (t0 + 5104);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 5);
    xsi_set_current_line(158, ng0);
    t2 = (t0 + 6632);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB76;
    goto LAB1;

LAB76:    xsi_set_current_line(159, ng0);
    t3 = (t0 + 1984U);
    t5 = *((char **)t3);
    t3 = (t0 + 5264);
    xsi_vlogvar_assign_value(t3, t5, 0, 0, 8);
    xsi_set_current_line(160, ng0);
    t2 = (t0 + 5104);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 2864);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 5);
    xsi_set_current_line(161, ng0);
    t2 = (t0 + 5264);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3024);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 8);
    xsi_set_current_line(162, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2704);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(163, ng0);
    t2 = (t0 + 5104);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng4)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_minus(t4, 32, t5, 5, t6, 32);
    t12 = (t0 + 5104);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 5);
    goto LAB65;

LAB79:    t30 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB80;

LAB81:    xsi_set_current_line(166, ng0);

LAB84:    xsi_set_current_line(167, ng0);
    t37 = ((char*)((ng1)));
    t38 = (t0 + 2704);
    xsi_vlogvar_assign_value(t38, t37, 0, 0, 1);
    xsi_set_current_line(168, ng0);
    t2 = (t0 + 5104);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng4)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t5, 5, t6, 32);
    t12 = (t0 + 3184);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 5);
    xsi_set_current_line(169, ng0);
    t2 = (t0 + 7320);
    *((int *)t2) = 1;
    t3 = (t0 + 6856);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB85;
    goto LAB1;

LAB85:    xsi_set_current_line(170, ng0);
    t5 = (t0 + 1664U);
    t6 = *((char **)t5);
    t5 = (t0 + 5584);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 8);
    xsi_set_current_line(172, ng0);
    t2 = (t0 + 5104);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng8)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t5, 5, t6, 32);
    t12 = (t0 + 3184);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 5);
    xsi_set_current_line(173, ng0);
    t2 = (t0 + 7336);
    *((int *)t2) = 1;
    t3 = (t0 + 6856);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB86;
    goto LAB1;

LAB86:    xsi_set_current_line(174, ng0);
    t5 = (t0 + 1664U);
    t6 = *((char **)t5);
    t5 = (t0 + 5424);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 8);
    xsi_set_current_line(176, ng0);
    t2 = (t0 + 5104);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng9)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t5, 5, t6, 32);
    t12 = (t0 + 3184);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 5);
    xsi_set_current_line(177, ng0);
    t2 = (t0 + 7352);
    *((int *)t2) = 1;
    t3 = (t0 + 6856);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB87;
    goto LAB1;

LAB87:    xsi_set_current_line(178, ng0);
    t5 = (t0 + 1664U);
    t6 = *((char **)t5);
    t5 = (t0 + 5904);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 8);
    xsi_set_current_line(180, ng0);
    t2 = (t0 + 5104);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng10)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t5, 5, t6, 32);
    t12 = (t0 + 3184);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 5);
    xsi_set_current_line(181, ng0);
    t2 = (t0 + 7368);
    *((int *)t2) = 1;
    t3 = (t0 + 6856);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB88;
    goto LAB1;

LAB88:    xsi_set_current_line(182, ng0);
    t5 = (t0 + 1664U);
    t6 = *((char **)t5);
    t5 = (t0 + 5744);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 8);
    xsi_set_current_line(184, ng0);
    t2 = (t0 + 5584);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 5424);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    t19 = (t0 + 5904);
    t20 = (t19 + 56U);
    t30 = *((char **)t20);
    t31 = (t0 + 5744);
    t37 = (t31 + 56U);
    t38 = *((char **)t37);
    xsi_vlogfile_write(1, 0, 0, ng11, 5, t0, (char)118, t5, 8, (char)118, t13, 8, (char)118, t30, 8, (char)118, t38, 8);
    xsi_set_current_line(186, ng0);
    t2 = (t0 + 5744);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 4144);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 8);
    xsi_set_current_line(187, ng0);
    t2 = (t0 + 5904);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 4304);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 8);
    xsi_set_current_line(188, ng0);
    t2 = (t0 + 5424);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 4464);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 8);
    xsi_set_current_line(189, ng0);
    t2 = (t0 + 5584);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 4624);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 8);
    xsi_set_current_line(191, ng0);
    t2 = (t0 + 7384);
    *((int *)t2) = 1;
    t3 = (t0 + 6856);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB89;
    goto LAB1;

LAB89:    xsi_set_current_line(193, ng0);
    t5 = (t0 + 2144U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t4 + 4);
    t12 = (t6 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (t7 >> 8);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t12);
    t10 = (t9 >> 8);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 255U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 255U);
    t13 = (t0 + 5264);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 8);
    xsi_set_current_line(194, ng0);
    t2 = (t0 + 5104);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 2864);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 5);
    xsi_set_current_line(195, ng0);
    t2 = (t0 + 5264);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3024);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 8);
    xsi_set_current_line(196, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2704);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(197, ng0);
    t2 = (t0 + 5104);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng4)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_minus(t4, 32, t5, 5, t6, 32);
    t12 = (t0 + 5104);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 5);
    xsi_set_current_line(198, ng0);
    t2 = (t0 + 6632);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB90;
    goto LAB1;

LAB90:    xsi_set_current_line(199, ng0);
    t3 = (t0 + 2144U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t3 = (t4 + 4);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 0);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 0);
    *((unsigned int *)t3) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 255U);
    t14 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t14 & 255U);
    t12 = (t0 + 5264);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 8);
    xsi_set_current_line(200, ng0);
    t2 = (t0 + 5104);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 2864);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 5);
    xsi_set_current_line(201, ng0);
    t2 = (t0 + 5264);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3024);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 8);
    xsi_set_current_line(202, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2704);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(203, ng0);
    t2 = (t0 + 5104);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng4)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_minus(t4, 32, t5, 5, t6, 32);
    t12 = (t0 + 5104);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 5);
    xsi_set_current_line(204, ng0);
    t2 = (t0 + 6632);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB91;
    goto LAB1;

LAB91:    xsi_set_current_line(205, ng0);
    t3 = (t0 + 2304U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t3 = (t4 + 4);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 8);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 8);
    *((unsigned int *)t3) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 255U);
    t14 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t14 & 255U);
    t12 = (t0 + 5264);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 8);
    xsi_set_current_line(206, ng0);
    t2 = (t0 + 5104);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 2864);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 5);
    xsi_set_current_line(207, ng0);
    t2 = (t0 + 5264);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3024);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 8);
    xsi_set_current_line(208, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2704);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(209, ng0);
    t2 = (t0 + 5104);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng4)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_minus(t4, 32, t5, 5, t6, 32);
    t12 = (t0 + 5104);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 5);
    xsi_set_current_line(210, ng0);
    t2 = (t0 + 6632);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB92;
    goto LAB1;

LAB92:    xsi_set_current_line(211, ng0);
    t3 = (t0 + 2304U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t3 = (t4 + 4);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 0);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 0);
    *((unsigned int *)t3) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 255U);
    t14 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t14 & 255U);
    t12 = (t0 + 5264);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 8);
    xsi_set_current_line(212, ng0);
    t2 = (t0 + 5104);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 2864);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 5);
    xsi_set_current_line(213, ng0);
    t2 = (t0 + 5264);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3024);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 8);
    xsi_set_current_line(214, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2704);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(215, ng0);
    t2 = (t0 + 5104);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng4)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_minus(t4, 32, t5, 5, t6, 32);
    t12 = (t0 + 5104);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 5);
    goto LAB83;

}


extern void work_m_00000000004138473183_1200043877_init()
{
	static char *pe[] = {(void *)Always_81_0};
	xsi_register_didat("work_m_00000000004138473183_1200043877", "isim/computer_isim_beh.exe.sim/work/m_00000000004138473183_1200043877.didat");
	xsi_register_executes(pe);
}
