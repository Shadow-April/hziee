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
    xilinxcorelib_ver_m_00000000001358910285_0541967219_init();
    xilinxcorelib_ver_m_00000000001687936702_1862936372_init();
    xilinxcorelib_ver_m_00000000000277421008_4073106423_init();
    xilinxcorelib_ver_m_00000000001603977570_1896199076_init();
    work_m_00000000002489990758_2499224580_init();
    xilinxcorelib_ver_m_00000000000277421008_3838246106_init();
    xilinxcorelib_ver_m_00000000001603977570_0866814646_init();
    work_m_00000000000403262735_2074023063_init();
    work_m_00000000002792515111_2761737779_init();
    work_m_00000000002910730605_0886308060_init();
    work_m_00000000001061720599_2197071003_init();
    work_m_00000000003893239592_2141259467_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000003893239592_2141259467");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
