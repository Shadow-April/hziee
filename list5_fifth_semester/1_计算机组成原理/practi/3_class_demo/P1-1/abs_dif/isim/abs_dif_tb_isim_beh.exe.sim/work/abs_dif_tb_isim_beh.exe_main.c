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
    work_m_00000000001608183547_1697392497_init();
    secureip_u_00000000001133549170_2290711160_init();
    secureip_m_00000000001004106633_0334430593_init();
    work_m_00000000004278998194_0702372311_init();
    work_m_00000000002966993288_0563584736_init();
    work_m_00000000000822954249_3749061914_init();
    work_m_00000000000546215770_0987069484_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000000546215770_0987069484");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
