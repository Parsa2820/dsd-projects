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
static const char *ng0 = "D:/University/Term4/DSD Lab/Exp7/Project/Exp7/uart_receiver.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {1, 0};
static int ng3[] = {0, 0};
static unsigned int ng4[] = {1U, 0U};
static int ng5[] = {9, 0};
static int ng6[] = {2, 0};



static void Initial_24_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(24, ng0);

LAB2:    xsi_set_current_line(25, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2544);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 2);
    xsi_set_current_line(26, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 1904);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(27, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 2704);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 2);

LAB1:    return;
}

static void Always_30_1(char *t0)
{
    char t8[8];
    char t34[8];
    char t39[8];
    char t45[8];
    char t86[8];
    char t111[8];
    char t113[8];
    char t114[8];
    char t120[8];
    char t123[8];
    char t136[8];
    char t145[8];
    char t162[8];
    char t171[8];
    char t188[8];
    char t197[8];
    char t211[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    int t67;
    int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    char *t87;
    unsigned int t88;
    unsigned int t89;
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
    char *t100;
    char *t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    char *t107;
    char *t108;
    char *t109;
    char *t110;
    char *t112;
    char *t115;
    char *t116;
    char *t117;
    char *t118;
    char *t119;
    char *t121;
    char *t122;
    char *t124;
    char *t125;
    char *t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    char *t133;
    char *t134;
    char *t135;
    char *t137;
    char *t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    char *t149;
    char *t150;
    char *t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    char *t159;
    char *t160;
    char *t161;
    char *t163;
    char *t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    char *t175;
    char *t176;
    char *t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    char *t185;
    char *t186;
    char *t187;
    char *t189;
    char *t190;
    unsigned int t191;
    unsigned int t192;
    unsigned int t193;
    unsigned int t194;
    unsigned int t195;
    unsigned int t196;
    unsigned int t198;
    unsigned int t199;
    unsigned int t200;
    char *t201;
    char *t202;
    char *t203;
    unsigned int t204;
    unsigned int t205;
    unsigned int t206;
    unsigned int t207;
    unsigned int t208;
    unsigned int t209;
    unsigned int t210;
    unsigned int t212;
    unsigned int t213;
    unsigned int t214;
    char *t215;
    char *t216;
    char *t217;
    unsigned int t218;
    unsigned int t219;
    unsigned int t220;
    unsigned int t221;
    unsigned int t222;
    unsigned int t223;
    unsigned int t224;
    char *t225;
    unsigned int t226;
    unsigned int t227;
    unsigned int t228;
    unsigned int t229;
    unsigned int t230;
    char *t231;
    char *t232;
    char *t233;
    unsigned int t234;
    unsigned int t235;
    unsigned int t236;
    unsigned int t237;
    unsigned int t238;
    unsigned int t239;
    unsigned int t240;
    unsigned int t241;
    char *t242;
    int t243;
    int t244;

LAB0:    t1 = (t0 + 3872U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 4192);
    *((int *)t2) = 1;
    t3 = (t0 + 3904);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30, ng0);

LAB5:    xsi_set_current_line(32, ng0);
    t4 = (t0 + 2704);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng3)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB7;

LAB6:    if (t20 != 0)
        goto LAB8;

LAB9:    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1184U);
    t3 = *((char **)t2);
    memset(t8, 0, 8);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t2) != 0)
        goto LAB16;

LAB17:    t5 = (t8 + 4);
    t16 = *((unsigned int *)t8);
    t17 = *((unsigned int *)t5);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB18;

LAB19:    memcpy(t45, t8, 8);

LAB20:    t75 = (t45 + 4);
    t76 = *((unsigned int *)t75);
    t77 = (~(t76));
    t78 = *((unsigned int *)t45);
    t79 = (t78 & t77);
    t80 = (t79 != 0);
    if (t80 > 0)
        goto LAB32;

LAB33:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 2704);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t8, 0, 8);
    t5 = (t4 + 4);
    t11 = *((unsigned int *)t5);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 & 3U);
    if (t15 != 0)
        goto LAB84;

LAB82:    if (*((unsigned int *)t5) == 0)
        goto LAB81;

LAB83:    t6 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t6) = 1;

LAB84:    memset(t34, 0, 8);
    t7 = (t8 + 4);
    t16 = *((unsigned int *)t7);
    t17 = (~(t16));
    t18 = *((unsigned int *)t8);
    t19 = (t18 & t17);
    t20 = (t19 & 1U);
    if (t20 != 0)
        goto LAB85;

LAB86:    if (*((unsigned int *)t7) != 0)
        goto LAB87;

LAB88:    t10 = (t34 + 4);
    t21 = *((unsigned int *)t34);
    t22 = *((unsigned int *)t10);
    t25 = (t21 || t22);
    if (t25 > 0)
        goto LAB89;

LAB90:    memcpy(t86, t34, 8);

LAB91:    memset(t111, 0, 8);
    t75 = (t86 + 4);
    t73 = *((unsigned int *)t75);
    t74 = (~(t73));
    t76 = *((unsigned int *)t86);
    t77 = (t76 & t74);
    t78 = (t77 & 1U);
    if (t78 != 0)
        goto LAB103;

LAB104:    if (*((unsigned int *)t75) != 0)
        goto LAB105;

LAB106:    t82 = (t111 + 4);
    t79 = *((unsigned int *)t111);
    t80 = *((unsigned int *)t82);
    t88 = (t79 || t80);
    if (t88 > 0)
        goto LAB107;

LAB108:    memcpy(t120, t111, 8);

LAB109:    t118 = (t120 + 4);
    t168 = *((unsigned int *)t118);
    t169 = (~(t168));
    t170 = *((unsigned int *)t120);
    t172 = (t170 & t169);
    t173 = (t172 != 0);
    if (t173 > 0)
        goto LAB121;

LAB122:
LAB123:
LAB34:
LAB12:    goto LAB2;

LAB7:    *((unsigned int *)t8) = 1;
    goto LAB9;

LAB8:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(32, ng0);

LAB13:    xsi_set_current_line(33, ng0);
    t30 = (t0 + 2704);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t33 = ((char*)((ng2)));
    memset(t34, 0, 8);
    xsi_vlog_unsigned_minus(t34, 32, t32, 2, t33, 32);
    t35 = (t0 + 2704);
    xsi_vlogvar_assign_value(t35, t34, 0, 0, 2);
    goto LAB12;

LAB14:    *((unsigned int *)t8) = 1;
    goto LAB17;

LAB16:    t4 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB17;

LAB18:    t6 = (t0 + 2544);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng4)));
    memset(t34, 0, 8);
    t23 = (t9 + 4);
    t24 = (t10 + 4);
    t19 = *((unsigned int *)t9);
    t20 = *((unsigned int *)t10);
    t21 = (t19 ^ t20);
    t22 = *((unsigned int *)t23);
    t25 = *((unsigned int *)t24);
    t26 = (t22 ^ t25);
    t27 = (t21 | t26);
    t28 = *((unsigned int *)t23);
    t29 = *((unsigned int *)t24);
    t36 = (t28 | t29);
    t37 = (~(t36));
    t38 = (t27 & t37);
    if (t38 != 0)
        goto LAB24;

LAB21:    if (t36 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t34) = 1;

LAB24:    memset(t39, 0, 8);
    t31 = (t34 + 4);
    t40 = *((unsigned int *)t31);
    t41 = (~(t40));
    t42 = *((unsigned int *)t34);
    t43 = (t42 & t41);
    t44 = (t43 & 1U);
    if (t44 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t31) != 0)
        goto LAB27;

LAB28:    t46 = *((unsigned int *)t8);
    t47 = *((unsigned int *)t39);
    t48 = (t46 & t47);
    *((unsigned int *)t45) = t48;
    t33 = (t8 + 4);
    t35 = (t39 + 4);
    t49 = (t45 + 4);
    t50 = *((unsigned int *)t33);
    t51 = *((unsigned int *)t35);
    t52 = (t50 | t51);
    *((unsigned int *)t49) = t52;
    t53 = *((unsigned int *)t49);
    t54 = (t53 != 0);
    if (t54 == 1)
        goto LAB29;

LAB30:
LAB31:    goto LAB20;

LAB23:    t30 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t39) = 1;
    goto LAB28;

LAB27:    t32 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB28;

LAB29:    t55 = *((unsigned int *)t45);
    t56 = *((unsigned int *)t49);
    *((unsigned int *)t45) = (t55 | t56);
    t57 = (t8 + 4);
    t58 = (t39 + 4);
    t59 = *((unsigned int *)t8);
    t60 = (~(t59));
    t61 = *((unsigned int *)t57);
    t62 = (~(t61));
    t63 = *((unsigned int *)t39);
    t64 = (~(t63));
    t65 = *((unsigned int *)t58);
    t66 = (~(t65));
    t67 = (t60 & t62);
    t68 = (t64 & t66);
    t69 = (~(t67));
    t70 = (~(t68));
    t71 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t71 & t69);
    t72 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t72 & t70);
    t73 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t73 & t69);
    t74 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t74 & t70);
    goto LAB31;

LAB32:    xsi_set_current_line(34, ng0);

LAB35:    xsi_set_current_line(35, ng0);
    t81 = (t0 + 2384);
    t82 = (t81 + 56U);
    t83 = *((char **)t82);
    t84 = (t0 + 472);
    t85 = *((char **)t84);
    memset(t86, 0, 8);
    t84 = (t83 + 4);
    t87 = (t85 + 4);
    t88 = *((unsigned int *)t83);
    t89 = *((unsigned int *)t85);
    t90 = (t88 ^ t89);
    t91 = *((unsigned int *)t84);
    t92 = *((unsigned int *)t87);
    t93 = (t91 ^ t92);
    t94 = (t90 | t93);
    t95 = *((unsigned int *)t84);
    t96 = *((unsigned int *)t87);
    t97 = (t95 | t96);
    t98 = (~(t97));
    t99 = (t94 & t98);
    if (t99 != 0)
        goto LAB39;

LAB36:    if (t97 != 0)
        goto LAB38;

LAB37:    *((unsigned int *)t86) = 1;

LAB39:    t101 = (t86 + 4);
    t102 = *((unsigned int *)t101);
    t103 = (~(t102));
    t104 = *((unsigned int *)t86);
    t105 = (t104 & t103);
    t106 = (t105 != 0);
    if (t106 > 0)
        goto LAB40;

LAB41:
LAB42:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 2384);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t4, 2, t5, 32);
    t6 = (t0 + 2384);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 2);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 2224);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB49;

LAB46:    if (t20 != 0)
        goto LAB48;

LAB47:    *((unsigned int *)t8) = 1;

LAB49:    t10 = (t8 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB50;

LAB51:
LAB52:    goto LAB34;

LAB38:    t100 = (t86 + 4);
    *((unsigned int *)t86) = 1;
    *((unsigned int *)t100) = 1;
    goto LAB39;

LAB40:    xsi_set_current_line(35, ng0);

LAB43:    xsi_set_current_line(36, ng0);
    t107 = (t0 + 1744);
    t108 = (t107 + 56U);
    t109 = *((char **)t108);
    t110 = ((char*)((ng2)));
    memset(t111, 0, 8);
    xsi_vlog_unsigned_lshift(t111, 8, t109, 8, t110, 32);
    t112 = (t0 + 1744);
    xsi_vlogvar_assign_value(t112, t111, 0, 0, 8);
    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1344U);
    t3 = *((char **)t2);
    t2 = (t0 + 1744);
    t4 = (t0 + 1744);
    t5 = (t4 + 72U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t8, t6, 2, t7, 32, 1);
    t9 = (t8 + 4);
    t11 = *((unsigned int *)t9);
    t67 = (!(t11));
    if (t67 == 1)
        goto LAB44;

LAB45:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 2224);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t4, 4, t5, 32);
    t6 = (t0 + 2224);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 4);
    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2384);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB42;

LAB44:    xsi_vlogvar_assign_value(t2, t3, 0, *((unsigned int *)t8), 1);
    goto LAB45;

LAB48:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB49;

LAB50:    xsi_set_current_line(42, ng0);

LAB53:    xsi_set_current_line(43, ng0);
    t23 = (t0 + 1744);
    t24 = (t23 + 56U);
    t30 = *((char **)t24);
    memset(t39, 0, 8);
    t31 = (t39 + 4);
    t32 = (t30 + 4);
    t36 = *((unsigned int *)t30);
    t37 = (t36 >> 7);
    t38 = (t37 & 1);
    *((unsigned int *)t39) = t38;
    t40 = *((unsigned int *)t32);
    t41 = (t40 >> 7);
    t42 = (t41 & 1);
    *((unsigned int *)t31) = t42;
    t33 = (t0 + 1744);
    t35 = (t33 + 56U);
    t49 = *((char **)t35);
    memset(t45, 0, 8);
    t57 = (t45 + 4);
    t58 = (t49 + 4);
    t43 = *((unsigned int *)t49);
    t44 = (t43 >> 6);
    t46 = (t44 & 1);
    *((unsigned int *)t45) = t46;
    t47 = *((unsigned int *)t58);
    t48 = (t47 >> 6);
    t50 = (t48 & 1);
    *((unsigned int *)t57) = t50;
    t75 = (t0 + 1744);
    t81 = (t75 + 56U);
    t82 = *((char **)t81);
    memset(t86, 0, 8);
    t83 = (t86 + 4);
    t84 = (t82 + 4);
    t51 = *((unsigned int *)t82);
    t52 = (t51 >> 5);
    t53 = (t52 & 1);
    *((unsigned int *)t86) = t53;
    t54 = *((unsigned int *)t84);
    t55 = (t54 >> 5);
    t56 = (t55 & 1);
    *((unsigned int *)t83) = t56;
    t59 = *((unsigned int *)t45);
    t60 = *((unsigned int *)t86);
    t61 = (t59 ^ t60);
    *((unsigned int *)t111) = t61;
    t85 = (t45 + 4);
    t87 = (t86 + 4);
    t100 = (t111 + 4);
    t62 = *((unsigned int *)t85);
    t63 = *((unsigned int *)t87);
    t64 = (t62 | t63);
    *((unsigned int *)t100) = t64;
    t65 = *((unsigned int *)t100);
    t66 = (t65 != 0);
    if (t66 == 1)
        goto LAB54;

LAB55:
LAB56:    t101 = (t0 + 1744);
    t107 = (t101 + 56U);
    t108 = *((char **)t107);
    memset(t113, 0, 8);
    t109 = (t113 + 4);
    t110 = (t108 + 4);
    t71 = *((unsigned int *)t108);
    t72 = (t71 >> 4);
    t73 = (t72 & 1);
    *((unsigned int *)t113) = t73;
    t74 = *((unsigned int *)t110);
    t76 = (t74 >> 4);
    t77 = (t76 & 1);
    *((unsigned int *)t109) = t77;
    t78 = *((unsigned int *)t111);
    t79 = *((unsigned int *)t113);
    t80 = (t78 ^ t79);
    *((unsigned int *)t114) = t80;
    t112 = (t111 + 4);
    t115 = (t113 + 4);
    t116 = (t114 + 4);
    t88 = *((unsigned int *)t112);
    t89 = *((unsigned int *)t115);
    t90 = (t88 | t89);
    *((unsigned int *)t116) = t90;
    t91 = *((unsigned int *)t116);
    t92 = (t91 != 0);
    if (t92 == 1)
        goto LAB57;

LAB58:
LAB59:    t117 = (t0 + 1744);
    t118 = (t117 + 56U);
    t119 = *((char **)t118);
    memset(t120, 0, 8);
    t121 = (t120 + 4);
    t122 = (t119 + 4);
    t95 = *((unsigned int *)t119);
    t96 = (t95 >> 3);
    t97 = (t96 & 1);
    *((unsigned int *)t120) = t97;
    t98 = *((unsigned int *)t122);
    t99 = (t98 >> 3);
    t102 = (t99 & 1);
    *((unsigned int *)t121) = t102;
    t103 = *((unsigned int *)t114);
    t104 = *((unsigned int *)t120);
    t105 = (t103 ^ t104);
    *((unsigned int *)t123) = t105;
    t124 = (t114 + 4);
    t125 = (t120 + 4);
    t126 = (t123 + 4);
    t106 = *((unsigned int *)t124);
    t127 = *((unsigned int *)t125);
    t128 = (t106 | t127);
    *((unsigned int *)t126) = t128;
    t129 = *((unsigned int *)t126);
    t130 = (t129 != 0);
    if (t130 == 1)
        goto LAB60;

LAB61:
LAB62:    t133 = (t0 + 1744);
    t134 = (t133 + 56U);
    t135 = *((char **)t134);
    memset(t136, 0, 8);
    t137 = (t136 + 4);
    t138 = (t135 + 4);
    t139 = *((unsigned int *)t135);
    t140 = (t139 >> 2);
    t141 = (t140 & 1);
    *((unsigned int *)t136) = t141;
    t142 = *((unsigned int *)t138);
    t143 = (t142 >> 2);
    t144 = (t143 & 1);
    *((unsigned int *)t137) = t144;
    t146 = *((unsigned int *)t123);
    t147 = *((unsigned int *)t136);
    t148 = (t146 ^ t147);
    *((unsigned int *)t145) = t148;
    t149 = (t123 + 4);
    t150 = (t136 + 4);
    t151 = (t145 + 4);
    t152 = *((unsigned int *)t149);
    t153 = *((unsigned int *)t150);
    t154 = (t152 | t153);
    *((unsigned int *)t151) = t154;
    t155 = *((unsigned int *)t151);
    t156 = (t155 != 0);
    if (t156 == 1)
        goto LAB63;

LAB64:
LAB65:    t159 = (t0 + 1744);
    t160 = (t159 + 56U);
    t161 = *((char **)t160);
    memset(t162, 0, 8);
    t163 = (t162 + 4);
    t164 = (t161 + 4);
    t165 = *((unsigned int *)t161);
    t166 = (t165 >> 1);
    t167 = (t166 & 1);
    *((unsigned int *)t162) = t167;
    t168 = *((unsigned int *)t164);
    t169 = (t168 >> 1);
    t170 = (t169 & 1);
    *((unsigned int *)t163) = t170;
    t172 = *((unsigned int *)t145);
    t173 = *((unsigned int *)t162);
    t174 = (t172 ^ t173);
    *((unsigned int *)t171) = t174;
    t175 = (t145 + 4);
    t176 = (t162 + 4);
    t177 = (t171 + 4);
    t178 = *((unsigned int *)t175);
    t179 = *((unsigned int *)t176);
    t180 = (t178 | t179);
    *((unsigned int *)t177) = t180;
    t181 = *((unsigned int *)t177);
    t182 = (t181 != 0);
    if (t182 == 1)
        goto LAB66;

LAB67:
LAB68:    t185 = (t0 + 1744);
    t186 = (t185 + 56U);
    t187 = *((char **)t186);
    memset(t188, 0, 8);
    t189 = (t188 + 4);
    t190 = (t187 + 4);
    t191 = *((unsigned int *)t187);
    t192 = (t191 >> 0);
    t193 = (t192 & 1);
    *((unsigned int *)t188) = t193;
    t194 = *((unsigned int *)t190);
    t195 = (t194 >> 0);
    t196 = (t195 & 1);
    *((unsigned int *)t189) = t196;
    t198 = *((unsigned int *)t171);
    t199 = *((unsigned int *)t188);
    t200 = (t198 ^ t199);
    *((unsigned int *)t197) = t200;
    t201 = (t171 + 4);
    t202 = (t188 + 4);
    t203 = (t197 + 4);
    t204 = *((unsigned int *)t201);
    t205 = *((unsigned int *)t202);
    t206 = (t204 | t205);
    *((unsigned int *)t203) = t206;
    t207 = *((unsigned int *)t203);
    t208 = (t207 != 0);
    if (t208 == 1)
        goto LAB69;

LAB70:
LAB71:    t212 = *((unsigned int *)t39);
    t213 = *((unsigned int *)t197);
    t214 = (t212 ^ t213);
    *((unsigned int *)t211) = t214;
    t215 = (t39 + 4);
    t216 = (t197 + 4);
    t217 = (t211 + 4);
    t218 = *((unsigned int *)t215);
    t219 = *((unsigned int *)t216);
    t220 = (t218 | t219);
    *((unsigned int *)t217) = t220;
    t221 = *((unsigned int *)t217);
    t222 = (t221 != 0);
    if (t222 == 1)
        goto LAB72;

LAB73:
LAB74:    memset(t34, 0, 8);
    t225 = (t211 + 4);
    t226 = *((unsigned int *)t225);
    t227 = (~(t226));
    t228 = *((unsigned int *)t211);
    t229 = (t228 & t227);
    t230 = (t229 & 1U);
    if (t230 != 0)
        goto LAB78;

LAB76:    if (*((unsigned int *)t225) == 0)
        goto LAB75;

LAB77:    t231 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t231) = 1;

LAB78:    t232 = (t34 + 4);
    t233 = (t211 + 4);
    t234 = *((unsigned int *)t211);
    t235 = (~(t234));
    *((unsigned int *)t34) = t235;
    *((unsigned int *)t232) = 0;
    if (*((unsigned int *)t233) != 0)
        goto LAB80;

LAB79:    t240 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t240 & 1U);
    t241 = *((unsigned int *)t232);
    *((unsigned int *)t232) = (t241 & 1U);
    t242 = (t0 + 2064);
    xsi_vlogvar_assign_value(t242, t34, 0, 0, 1);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2544);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1904);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2704);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB52;

LAB54:    t69 = *((unsigned int *)t111);
    t70 = *((unsigned int *)t100);
    *((unsigned int *)t111) = (t69 | t70);
    goto LAB56;

LAB57:    t93 = *((unsigned int *)t114);
    t94 = *((unsigned int *)t116);
    *((unsigned int *)t114) = (t93 | t94);
    goto LAB59;

LAB60:    t131 = *((unsigned int *)t123);
    t132 = *((unsigned int *)t126);
    *((unsigned int *)t123) = (t131 | t132);
    goto LAB62;

LAB63:    t157 = *((unsigned int *)t145);
    t158 = *((unsigned int *)t151);
    *((unsigned int *)t145) = (t157 | t158);
    goto LAB65;

LAB66:    t183 = *((unsigned int *)t171);
    t184 = *((unsigned int *)t177);
    *((unsigned int *)t171) = (t183 | t184);
    goto LAB68;

LAB69:    t209 = *((unsigned int *)t197);
    t210 = *((unsigned int *)t203);
    *((unsigned int *)t197) = (t209 | t210);
    goto LAB71;

LAB72:    t223 = *((unsigned int *)t211);
    t224 = *((unsigned int *)t217);
    *((unsigned int *)t211) = (t223 | t224);
    goto LAB74;

LAB75:    *((unsigned int *)t34) = 1;
    goto LAB78;

LAB80:    t236 = *((unsigned int *)t34);
    t237 = *((unsigned int *)t233);
    *((unsigned int *)t34) = (t236 | t237);
    t238 = *((unsigned int *)t232);
    t239 = *((unsigned int *)t233);
    *((unsigned int *)t232) = (t238 | t239);
    goto LAB79;

LAB81:    *((unsigned int *)t8) = 1;
    goto LAB84;

LAB85:    *((unsigned int *)t34) = 1;
    goto LAB88;

LAB87:    t9 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB88;

LAB89:    t23 = (t0 + 1344U);
    t24 = *((char **)t23);
    memset(t39, 0, 8);
    t23 = (t24 + 4);
    t26 = *((unsigned int *)t23);
    t27 = (~(t26));
    t28 = *((unsigned int *)t24);
    t29 = (t28 & t27);
    t36 = (t29 & 1U);
    if (t36 != 0)
        goto LAB95;

LAB93:    if (*((unsigned int *)t23) == 0)
        goto LAB92;

LAB94:    t30 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t30) = 1;

LAB95:    memset(t45, 0, 8);
    t31 = (t39 + 4);
    t37 = *((unsigned int *)t31);
    t38 = (~(t37));
    t40 = *((unsigned int *)t39);
    t41 = (t40 & t38);
    t42 = (t41 & 1U);
    if (t42 != 0)
        goto LAB96;

LAB97:    if (*((unsigned int *)t31) != 0)
        goto LAB98;

LAB99:    t43 = *((unsigned int *)t34);
    t44 = *((unsigned int *)t45);
    t46 = (t43 & t44);
    *((unsigned int *)t86) = t46;
    t33 = (t34 + 4);
    t35 = (t45 + 4);
    t49 = (t86 + 4);
    t47 = *((unsigned int *)t33);
    t48 = *((unsigned int *)t35);
    t50 = (t47 | t48);
    *((unsigned int *)t49) = t50;
    t51 = *((unsigned int *)t49);
    t52 = (t51 != 0);
    if (t52 == 1)
        goto LAB100;

LAB101:
LAB102:    goto LAB91;

LAB92:    *((unsigned int *)t39) = 1;
    goto LAB95;

LAB96:    *((unsigned int *)t45) = 1;
    goto LAB99;

LAB98:    t32 = (t45 + 4);
    *((unsigned int *)t45) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB99;

LAB100:    t53 = *((unsigned int *)t86);
    t54 = *((unsigned int *)t49);
    *((unsigned int *)t86) = (t53 | t54);
    t57 = (t34 + 4);
    t58 = (t45 + 4);
    t55 = *((unsigned int *)t34);
    t56 = (~(t55));
    t59 = *((unsigned int *)t57);
    t60 = (~(t59));
    t61 = *((unsigned int *)t45);
    t62 = (~(t61));
    t63 = *((unsigned int *)t58);
    t64 = (~(t63));
    t67 = (t56 & t60);
    t68 = (t62 & t64);
    t65 = (~(t67));
    t66 = (~(t68));
    t69 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t69 & t65);
    t70 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t70 & t66);
    t71 = *((unsigned int *)t86);
    *((unsigned int *)t86) = (t71 & t65);
    t72 = *((unsigned int *)t86);
    *((unsigned int *)t86) = (t72 & t66);
    goto LAB102;

LAB103:    *((unsigned int *)t111) = 1;
    goto LAB106;

LAB105:    t81 = (t111 + 4);
    *((unsigned int *)t111) = 1;
    *((unsigned int *)t81) = 1;
    goto LAB106;

LAB107:    t83 = (t0 + 2544);
    t84 = (t83 + 56U);
    t85 = *((char **)t84);
    t87 = ((char*)((ng1)));
    memset(t113, 0, 8);
    t100 = (t85 + 4);
    t101 = (t87 + 4);
    t89 = *((unsigned int *)t85);
    t90 = *((unsigned int *)t87);
    t91 = (t89 ^ t90);
    t92 = *((unsigned int *)t100);
    t93 = *((unsigned int *)t101);
    t94 = (t92 ^ t93);
    t95 = (t91 | t94);
    t96 = *((unsigned int *)t100);
    t97 = *((unsigned int *)t101);
    t98 = (t96 | t97);
    t99 = (~(t98));
    t102 = (t95 & t99);
    if (t102 != 0)
        goto LAB113;

LAB110:    if (t98 != 0)
        goto LAB112;

LAB111:    *((unsigned int *)t113) = 1;

LAB113:    memset(t114, 0, 8);
    t108 = (t113 + 4);
    t103 = *((unsigned int *)t108);
    t104 = (~(t103));
    t105 = *((unsigned int *)t113);
    t106 = (t105 & t104);
    t127 = (t106 & 1U);
    if (t127 != 0)
        goto LAB114;

LAB115:    if (*((unsigned int *)t108) != 0)
        goto LAB116;

LAB117:    t128 = *((unsigned int *)t111);
    t129 = *((unsigned int *)t114);
    t130 = (t128 & t129);
    *((unsigned int *)t120) = t130;
    t110 = (t111 + 4);
    t112 = (t114 + 4);
    t115 = (t120 + 4);
    t131 = *((unsigned int *)t110);
    t132 = *((unsigned int *)t112);
    t139 = (t131 | t132);
    *((unsigned int *)t115) = t139;
    t140 = *((unsigned int *)t115);
    t141 = (t140 != 0);
    if (t141 == 1)
        goto LAB118;

LAB119:
LAB120:    goto LAB109;

LAB112:    t107 = (t113 + 4);
    *((unsigned int *)t113) = 1;
    *((unsigned int *)t107) = 1;
    goto LAB113;

LAB114:    *((unsigned int *)t114) = 1;
    goto LAB117;

LAB116:    t109 = (t114 + 4);
    *((unsigned int *)t114) = 1;
    *((unsigned int *)t109) = 1;
    goto LAB117;

LAB118:    t142 = *((unsigned int *)t120);
    t143 = *((unsigned int *)t115);
    *((unsigned int *)t120) = (t142 | t143);
    t116 = (t111 + 4);
    t117 = (t114 + 4);
    t144 = *((unsigned int *)t111);
    t146 = (~(t144));
    t147 = *((unsigned int *)t116);
    t148 = (~(t147));
    t152 = *((unsigned int *)t114);
    t153 = (~(t152));
    t154 = *((unsigned int *)t117);
    t155 = (~(t154));
    t243 = (t146 & t148);
    t244 = (t153 & t155);
    t156 = (~(t243));
    t157 = (~(t244));
    t158 = *((unsigned int *)t115);
    *((unsigned int *)t115) = (t158 & t156);
    t165 = *((unsigned int *)t115);
    *((unsigned int *)t115) = (t165 & t157);
    t166 = *((unsigned int *)t120);
    *((unsigned int *)t120) = (t166 & t156);
    t167 = *((unsigned int *)t120);
    *((unsigned int *)t120) = (t167 & t157);
    goto LAB120;

LAB121:    xsi_set_current_line(48, ng0);

LAB124:    xsi_set_current_line(49, ng0);
    t119 = ((char*)((ng1)));
    t121 = (t0 + 2224);
    xsi_vlogvar_assign_value(t121, t119, 0, 0, 4);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2384);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1904);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2544);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB123;

}


extern void work_m_00000000003012175555_4288519174_init()
{
	static char *pe[] = {(void *)Initial_24_0,(void *)Always_30_1};
	xsi_register_didat("work_m_00000000003012175555_4288519174", "isim/stimulus_isim_beh.exe.sim/work/m_00000000003012175555_4288519174.didat");
	xsi_register_executes(pe);
}
