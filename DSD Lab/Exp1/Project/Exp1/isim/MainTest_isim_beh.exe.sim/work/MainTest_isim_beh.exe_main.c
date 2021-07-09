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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000002169027031_2140897300_init();
    work_m_00000000001098165437_3996337969_init();
    work_m_00000000002010951186_3250829514_init();
    work_m_00000000003514185584_1754872969_init();
    work_m_00000000001825994957_3126448018_init();
    work_m_00000000002973160665_0196180768_init();
    work_m_00000000003492892734_2973510161_init();
    work_m_00000000002370361368_0474747464_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002370361368_0474747464");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
