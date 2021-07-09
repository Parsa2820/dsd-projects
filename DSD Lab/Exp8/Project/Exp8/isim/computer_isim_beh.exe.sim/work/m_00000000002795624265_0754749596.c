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
static const char *ng0 = "D:/University/Term4/DSD Lab/Exp8/Project/Exp8/complex_adder_subtractor.v";



static void Always_15_0(char *t0)
{
    char t14[8];
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
    char *t13;

LAB0:    t1 = (t0 + 3304U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(15, ng0);
    t2 = (t0 + 3624);
    *((int *)t2) = 1;
    t3 = (t0 + 3336);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(15, ng0);

LAB5:    xsi_set_current_line(16, ng0);
    t4 = (t0 + 1184U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(19, ng0);

LAB10:    xsi_set_current_line(20, ng0);
    t2 = (t0 + 1344U);
    t3 = *((char **)t2);
    t2 = (t0 + 1664U);
    t4 = *((char **)t2);
    memset(t14, 0, 8);
    xsi_vlog_unsigned_minus(t14, 8, t3, 8, t4, 8);
    t2 = (t0 + 2224);
    xsi_vlogvar_assign_value(t2, t14, 0, 0, 8);
    xsi_set_current_line(21, ng0);
    t2 = (t0 + 1504U);
    t3 = *((char **)t2);
    t2 = (t0 + 1824U);
    t4 = *((char **)t2);
    memset(t14, 0, 8);
    xsi_vlog_unsigned_minus(t14, 8, t3, 8, t4, 8);
    t2 = (t0 + 2384);
    xsi_vlogvar_assign_value(t2, t14, 0, 0, 8);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(16, ng0);

LAB9:    xsi_set_current_line(17, ng0);
    t11 = (t0 + 1344U);
    t12 = *((char **)t11);
    t11 = (t0 + 1664U);
    t13 = *((char **)t11);
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 8, t12, 8, t13, 8);
    t11 = (t0 + 2224);
    xsi_vlogvar_assign_value(t11, t14, 0, 0, 8);
    xsi_set_current_line(18, ng0);
    t2 = (t0 + 1504U);
    t3 = *((char **)t2);
    t2 = (t0 + 1824U);
    t4 = *((char **)t2);
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 8, t3, 8, t4, 8);
    t2 = (t0 + 2384);
    xsi_vlogvar_assign_value(t2, t14, 0, 0, 8);
    goto LAB8;

}


extern void work_m_00000000002795624265_0754749596_init()
{
	static char *pe[] = {(void *)Always_15_0};
	xsi_register_didat("work_m_00000000002795624265_0754749596", "isim/computer_isim_beh.exe.sim/work/m_00000000002795624265_0754749596.didat");
	xsi_register_executes(pe);
}
