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
    work_m_00000000000420395965_0450250084_init();
    work_m_00000000002795624265_0754749596_init();
    work_m_00000000004271713087_2666412940_init();
    work_m_00000000004138473183_1200043877_init();
    work_m_00000000002054353424_2722841277_init();
    work_m_00000000002054353424_0400899312_init();
    work_m_00000000002054353424_3324479417_init();
    work_m_00000000001269251374_0341795706_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000001269251374_0341795706");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
