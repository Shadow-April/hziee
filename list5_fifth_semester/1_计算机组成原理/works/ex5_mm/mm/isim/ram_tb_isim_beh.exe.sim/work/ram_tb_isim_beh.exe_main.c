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
    xilinxcorelib_ver_m_00000000001358910285_1778321336_init();
    xilinxcorelib_ver_m_00000000001687936702_3463246476_init();
    xilinxcorelib_ver_m_00000000000277421008_3652121036_init();
    xilinxcorelib_ver_m_00000000001603977570_3581393752_init();
    work_m_00000000000403262735_1948799799_init();
    work_m_00000000001623993221_0450250084_init();
    work_m_00000000003697042008_1923279871_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000003697042008_1923279871");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
