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
static const char *ng0 = "D:/University/Term4/DSD Lab/Exp8/Project/Exp8/complex_multiplier.v";



static void Always_14_0(char *t0)
{
    char t7[8];
    char t10[8];
    char t11[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;

LAB0:    t1 = (t0 + 3144U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(14, ng0);
    t2 = (t0 + 3464);
    *((int *)t2) = 1;
    t3 = (t0 + 3176);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(14, ng0);

LAB5:    xsi_set_current_line(15, ng0);
    t4 = (t0 + 1184U);
    t5 = *((char **)t4);
    t4 = (t0 + 1504U);
    t6 = *((char **)t4);
    memset(t7, 0, 8);
    xsi_vlog_unsigned_multiply(t7, 16, t5, 8, t6, 8);
    t4 = (t0 + 1344U);
    t8 = *((char **)t4);
    t4 = (t0 + 1664U);
    t9 = *((char **)t4);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_multiply(t10, 16, t8, 8, t9, 8);
    memset(t11, 0, 8);
    xsi_vlog_unsigned_minus(t11, 16, t7, 16, t10, 16);
    t4 = (t0 + 2064);
    xsi_vlogvar_assign_value(t4, t11, 0, 0, 16);
    xsi_set_current_line(16, ng0);
    t2 = (t0 + 1184U);
    t3 = *((char **)t2);
    t2 = (t0 + 1664U);
    t4 = *((char **)t2);
    memset(t7, 0, 8);
    xsi_vlog_unsigned_multiply(t7, 16, t3, 8, t4, 8);
    t2 = (t0 + 1504U);
    t5 = *((char **)t2);
    t2 = (t0 + 1344U);
    t6 = *((char **)t2);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_multiply(t10, 16, t5, 8, t6, 8);
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 16, t7, 16, t10, 16);
    t2 = (t0 + 2224);
    xsi_vlogvar_assign_value(t2, t11, 0, 0, 16);
    goto LAB2;

}


extern void work_m_00000000004271713087_2666412940_init()
{
	static char *pe[] = {(void *)Always_14_0};
	xsi_register_didat("work_m_00000000004271713087_2666412940", "isim/computer_isim_beh.exe.sim/work/m_00000000004271713087_2666412940.didat");
	xsi_register_executes(pe);
}
