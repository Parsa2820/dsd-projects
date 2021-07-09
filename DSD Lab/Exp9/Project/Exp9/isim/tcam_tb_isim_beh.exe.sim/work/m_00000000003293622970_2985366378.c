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
static const char *ng0 = "D:/University/Term4/DSD Lab/Exp9/Project/Exp9/tcam_tb.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static int ng3[] = {10, 0};
static int ng4[] = {20, 0};
static int ng5[] = {2, 0};
static int ng6[] = {30, 0};
static int ng7[] = {3, 0};
static int ng8[] = {40, 0};
static int ng9[] = {50, 0};
static unsigned int ng10[] = {32U, 0U};
static unsigned int ng11[] = {8U, 0U};
static int ng12[] = {8, 0};
static int ng13[] = {6, 0};



static void Initial_31_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 3280U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);

LAB4:    xsi_set_current_line(33, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(34, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(35, ng0);
    t2 = (t0 + 3088);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(37, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2360);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    xsi_set_current_line(38, ng0);
    t2 = (t0 + 3088);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(39, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 1880);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    xsi_set_current_line(40, ng0);
    t2 = (t0 + 3088);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(41, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 2360);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 3088);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(43, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 1880);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    xsi_set_current_line(44, ng0);
    t2 = (t0 + 3088);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(45, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 2360);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 3088);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(47, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 1880);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 3088);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(49, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 2360);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 3088);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB12:    xsi_set_current_line(51, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 1880);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 3088);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB13:    xsi_set_current_line(54, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2200);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 3088);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB14;
    goto LAB1;

LAB14:    xsi_set_current_line(57, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 1880);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 3088);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB15:    xsi_set_current_line(59, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 1880);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 3088);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB16;
    goto LAB1;

LAB16:    xsi_set_current_line(61, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 1880);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 3088);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB17;
    goto LAB1;

LAB17:    xsi_set_current_line(63, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 1880);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 3088);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB18;
    goto LAB1;

LAB18:    xsi_set_current_line(67, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 1880);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 3088);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB19:    xsi_set_current_line(71, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 2040);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 1880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 3088);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB20;
    goto LAB1;

LAB20:    xsi_set_current_line(76, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 2360);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 3088);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB21;
    goto LAB1;

LAB21:    xsi_set_current_line(78, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 2200);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 3088);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB22;
    goto LAB1;

LAB22:    xsi_set_current_line(80, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 2040);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 1880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 3088);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB23:    xsi_set_current_line(84, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2200);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 3088);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB24;
    goto LAB1;

LAB24:    xsi_set_current_line(87, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 1880);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    xsi_set_current_line(88, ng0);
    t2 = (t0 + 3088);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB25;
    goto LAB1;

LAB25:    xsi_set_current_line(90, ng0);
    t3 = ((char*)((ng12)));
    t4 = (t0 + 1880);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    xsi_set_current_line(91, ng0);
    t2 = (t0 + 3088);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB26;
    goto LAB1;

LAB26:    xsi_set_current_line(93, ng0);
    t3 = ((char*)((ng13)));
    t4 = (t0 + 1880);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    xsi_set_current_line(94, ng0);
    t2 = (t0 + 3088);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB27:    xsi_set_current_line(95, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

}


extern void work_m_00000000003293622970_2985366378_init()
{
	static char *pe[] = {(void *)Initial_31_0};
	xsi_register_didat("work_m_00000000003293622970_2985366378", "isim/tcam_tb_isim_beh.exe.sim/work/m_00000000003293622970_2985366378.didat");
	xsi_register_executes(pe);
}