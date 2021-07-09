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
static const char *ng0 = "D:/University/Term4/DSD Lab/Exp7/Project/Exp7/uart_transmitter.v";
static int ng1[] = {1, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {1U, 0U};
static int ng4[] = {7, 0};
static int ng5[] = {8, 0};
static int ng6[] = {0, 0};



static void Initial_21_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(21, ng0);

LAB2:    xsi_set_current_line(22, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1904);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(23, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 2384);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 2);

LAB1:    return;
}

static void Always_26_1(char *t0)
{
    char t6[8];
    char t21[8];
    char t37[8];
    char t45[8];
    char t88[8];
    char t114[8];
    char t115[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
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
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    int t69;
    int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    char *t84;
    char *t85;
    char *t86;
    char *t87;
    char *t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    char *t102;
    char *t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    char *t109;
    char *t110;
    char *t111;
    char *t112;
    char *t113;
    char *t116;

LAB0:    t1 = (t0 + 3552U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 3872);
    *((int *)t2) = 1;
    t3 = (t0 + 3584);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(26, ng0);

LAB5:    xsi_set_current_line(27, ng0);
    t4 = (t0 + 1184U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t5 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t4) != 0)
        goto LAB8;

LAB9:    t13 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t13);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB10;

LAB11:    memcpy(t45, t6, 8);

LAB12:    t77 = (t45 + 4);
    t78 = *((unsigned int *)t77);
    t79 = (~(t78));
    t80 = *((unsigned int *)t45);
    t81 = (t80 & t79);
    t82 = (t81 != 0);
    if (t82 > 0)
        goto LAB24;

LAB25:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1504U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB47;

LAB45:    if (*((unsigned int *)t2) == 0)
        goto LAB44;

LAB46:    t4 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t4) = 1;

LAB47:    memset(t21, 0, 8);
    t5 = (t6 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (~(t14));
    t16 = *((unsigned int *)t6);
    t24 = (t16 & t15);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t5) != 0)
        goto LAB50;

LAB51:    t13 = (t21 + 4);
    t26 = *((unsigned int *)t21);
    t27 = *((unsigned int *)t13);
    t28 = (t26 || t27);
    if (t28 > 0)
        goto LAB52;

LAB53:    memcpy(t88, t21, 8);

LAB54:    t77 = (t88 + 4);
    t90 = *((unsigned int *)t77);
    t91 = (~(t90));
    t92 = *((unsigned int *)t88);
    t93 = (t92 & t91);
    t94 = (t93 != 0);
    if (t94 > 0)
        goto LAB66;

LAB67:
LAB68:
LAB26:    goto LAB2;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB8:    t12 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB9;

LAB10:    t17 = (t0 + 2384);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = ((char*)((ng3)));
    memset(t21, 0, 8);
    t22 = (t19 + 4);
    t23 = (t20 + 4);
    t24 = *((unsigned int *)t19);
    t25 = *((unsigned int *)t20);
    t26 = (t24 ^ t25);
    t27 = *((unsigned int *)t22);
    t28 = *((unsigned int *)t23);
    t29 = (t27 ^ t28);
    t30 = (t26 | t29);
    t31 = *((unsigned int *)t22);
    t32 = *((unsigned int *)t23);
    t33 = (t31 | t32);
    t34 = (~(t33));
    t35 = (t30 & t34);
    if (t35 != 0)
        goto LAB16;

LAB13:    if (t33 != 0)
        goto LAB15;

LAB14:    *((unsigned int *)t21) = 1;

LAB16:    memset(t37, 0, 8);
    t38 = (t21 + 4);
    t39 = *((unsigned int *)t38);
    t40 = (~(t39));
    t41 = *((unsigned int *)t21);
    t42 = (t41 & t40);
    t43 = (t42 & 1U);
    if (t43 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t38) != 0)
        goto LAB19;

LAB20:    t46 = *((unsigned int *)t6);
    t47 = *((unsigned int *)t37);
    t48 = (t46 & t47);
    *((unsigned int *)t45) = t48;
    t49 = (t6 + 4);
    t50 = (t37 + 4);
    t51 = (t45 + 4);
    t52 = *((unsigned int *)t49);
    t53 = *((unsigned int *)t50);
    t54 = (t52 | t53);
    *((unsigned int *)t51) = t54;
    t55 = *((unsigned int *)t51);
    t56 = (t55 != 0);
    if (t56 == 1)
        goto LAB21;

LAB22:
LAB23:    goto LAB12;

LAB15:    t36 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB16;

LAB17:    *((unsigned int *)t37) = 1;
    goto LAB20;

LAB19:    t44 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB20;

LAB21:    t57 = *((unsigned int *)t45);
    t58 = *((unsigned int *)t51);
    *((unsigned int *)t45) = (t57 | t58);
    t59 = (t6 + 4);
    t60 = (t37 + 4);
    t61 = *((unsigned int *)t6);
    t62 = (~(t61));
    t63 = *((unsigned int *)t59);
    t64 = (~(t63));
    t65 = *((unsigned int *)t37);
    t66 = (~(t65));
    t67 = *((unsigned int *)t60);
    t68 = (~(t67));
    t69 = (t62 & t64);
    t70 = (t66 & t68);
    t71 = (~(t69));
    t72 = (~(t70));
    t73 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t73 & t71);
    t74 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t74 & t72);
    t75 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t75 & t71);
    t76 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t76 & t72);
    goto LAB23;

LAB24:    xsi_set_current_line(27, ng0);

LAB27:    xsi_set_current_line(28, ng0);
    t83 = (t0 + 2224);
    t84 = (t83 + 56U);
    t85 = *((char **)t84);
    t86 = (t0 + 472);
    t87 = *((char **)t86);
    memset(t88, 0, 8);
    t86 = (t85 + 4);
    t89 = (t87 + 4);
    t90 = *((unsigned int *)t85);
    t91 = *((unsigned int *)t87);
    t92 = (t90 ^ t91);
    t93 = *((unsigned int *)t86);
    t94 = *((unsigned int *)t89);
    t95 = (t93 ^ t94);
    t96 = (t92 | t95);
    t97 = *((unsigned int *)t86);
    t98 = *((unsigned int *)t89);
    t99 = (t97 | t98);
    t100 = (~(t99));
    t101 = (t96 & t100);
    if (t101 != 0)
        goto LAB31;

LAB28:    if (t99 != 0)
        goto LAB30;

LAB29:    *((unsigned int *)t88) = 1;

LAB31:    t103 = (t88 + 4);
    t104 = *((unsigned int *)t103);
    t105 = (~(t104));
    t106 = *((unsigned int *)t88);
    t107 = (t106 & t105);
    t108 = (t107 != 0);
    if (t108 > 0)
        goto LAB32;

LAB33:
LAB34:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 2224);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 2, t5, 32);
    t12 = (t0 + 2224);
    xsi_vlogvar_assign_value(t12, t6, 0, 0, 2);
    xsi_set_current_line(34, ng0);
    t2 = (t0 + 2064);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    t12 = (t4 + 4);
    t13 = (t5 + 4);
    t7 = *((unsigned int *)t4);
    t8 = *((unsigned int *)t5);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t12);
    t11 = *((unsigned int *)t13);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t12);
    t24 = *((unsigned int *)t13);
    t25 = (t16 | t24);
    t26 = (~(t25));
    t27 = (t15 & t26);
    if (t27 != 0)
        goto LAB39;

LAB36:    if (t25 != 0)
        goto LAB38;

LAB37:    *((unsigned int *)t6) = 1;

LAB39:    t18 = (t6 + 4);
    t28 = *((unsigned int *)t18);
    t29 = (~(t28));
    t30 = *((unsigned int *)t6);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB40;

LAB41:
LAB42:    goto LAB26;

LAB30:    t102 = (t88 + 4);
    *((unsigned int *)t88) = 1;
    *((unsigned int *)t102) = 1;
    goto LAB31;

LAB32:    xsi_set_current_line(28, ng0);

LAB35:    xsi_set_current_line(29, ng0);
    t109 = (t0 + 1344U);
    t110 = *((char **)t109);
    t109 = ((char*)((ng4)));
    t111 = (t0 + 2064);
    t112 = (t111 + 56U);
    t113 = *((char **)t112);
    memset(t114, 0, 8);
    xsi_vlog_unsigned_minus(t114, 32, t109, 32, t113, 4);
    memset(t115, 0, 8);
    xsi_vlog_unsigned_rshift(t115, 8, t110, 8, t114, 32);
    t116 = (t0 + 1904);
    xsi_vlogvar_assign_value(t116, t115, 0, 0, 1);
    xsi_set_current_line(30, ng0);
    t2 = (t0 + 2064);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 4, t5, 32);
    t12 = (t0 + 2064);
    xsi_vlogvar_assign_value(t12, t6, 0, 0, 4);
    xsi_set_current_line(31, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2224);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB34;

LAB38:    t17 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB39;

LAB40:    xsi_set_current_line(34, ng0);

LAB43:    xsi_set_current_line(35, ng0);
    t19 = ((char*)((ng2)));
    t20 = (t0 + 2384);
    xsi_vlogvar_assign_value(t20, t19, 0, 0, 2);
    xsi_set_current_line(36, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1904);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB42;

LAB44:    *((unsigned int *)t6) = 1;
    goto LAB47;

LAB48:    *((unsigned int *)t21) = 1;
    goto LAB51;

LAB50:    t12 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB51;

LAB52:    t17 = (t0 + 2384);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = ((char*)((ng2)));
    memset(t37, 0, 8);
    t22 = (t19 + 4);
    t23 = (t20 + 4);
    t29 = *((unsigned int *)t19);
    t30 = *((unsigned int *)t20);
    t31 = (t29 ^ t30);
    t32 = *((unsigned int *)t22);
    t33 = *((unsigned int *)t23);
    t34 = (t32 ^ t33);
    t35 = (t31 | t34);
    t39 = *((unsigned int *)t22);
    t40 = *((unsigned int *)t23);
    t41 = (t39 | t40);
    t42 = (~(t41));
    t43 = (t35 & t42);
    if (t43 != 0)
        goto LAB58;

LAB55:    if (t41 != 0)
        goto LAB57;

LAB56:    *((unsigned int *)t37) = 1;

LAB58:    memset(t45, 0, 8);
    t38 = (t37 + 4);
    t46 = *((unsigned int *)t38);
    t47 = (~(t46));
    t48 = *((unsigned int *)t37);
    t52 = (t48 & t47);
    t53 = (t52 & 1U);
    if (t53 != 0)
        goto LAB59;

LAB60:    if (*((unsigned int *)t38) != 0)
        goto LAB61;

LAB62:    t54 = *((unsigned int *)t21);
    t55 = *((unsigned int *)t45);
    t56 = (t54 & t55);
    *((unsigned int *)t88) = t56;
    t49 = (t21 + 4);
    t50 = (t45 + 4);
    t51 = (t88 + 4);
    t57 = *((unsigned int *)t49);
    t58 = *((unsigned int *)t50);
    t61 = (t57 | t58);
    *((unsigned int *)t51) = t61;
    t62 = *((unsigned int *)t51);
    t63 = (t62 != 0);
    if (t63 == 1)
        goto LAB63;

LAB64:
LAB65:    goto LAB54;

LAB57:    t36 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB58;

LAB59:    *((unsigned int *)t45) = 1;
    goto LAB62;

LAB61:    t44 = (t45 + 4);
    *((unsigned int *)t45) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB62;

LAB63:    t64 = *((unsigned int *)t88);
    t65 = *((unsigned int *)t51);
    *((unsigned int *)t88) = (t64 | t65);
    t59 = (t21 + 4);
    t60 = (t45 + 4);
    t66 = *((unsigned int *)t21);
    t67 = (~(t66));
    t68 = *((unsigned int *)t59);
    t71 = (~(t68));
    t72 = *((unsigned int *)t45);
    t73 = (~(t72));
    t74 = *((unsigned int *)t60);
    t75 = (~(t74));
    t69 = (t67 & t71);
    t70 = (t73 & t75);
    t76 = (~(t69));
    t78 = (~(t70));
    t79 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t79 & t76);
    t80 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t80 & t78);
    t81 = *((unsigned int *)t88);
    *((unsigned int *)t88) = (t81 & t76);
    t82 = *((unsigned int *)t88);
    *((unsigned int *)t88) = (t82 & t78);
    goto LAB65;

LAB66:    xsi_set_current_line(38, ng0);

LAB69:    xsi_set_current_line(39, ng0);
    t83 = ((char*)((ng2)));
    t84 = (t0 + 2064);
    xsi_vlogvar_assign_value(t84, t83, 0, 0, 4);
    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2224);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2384);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1904);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB68;

}


extern void work_m_00000000002672113227_1504477724_init()
{
	static char *pe[] = {(void *)Initial_21_0,(void *)Always_26_1};
	xsi_register_didat("work_m_00000000002672113227_1504477724", "isim/stimulus_isim_beh.exe.sim/work/m_00000000002672113227_1504477724.didat");
	xsi_register_executes(pe);
}
