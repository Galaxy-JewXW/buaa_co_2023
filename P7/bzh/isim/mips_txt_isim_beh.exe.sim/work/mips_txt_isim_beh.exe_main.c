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
    work_m_00000000000352063877_2885957937_init();
    work_m_00000000004089425244_3097610606_init();
    work_m_00000000000234307548_3224323566_init();
    work_m_00000000000881572683_0121474842_init();
    work_m_00000000002949549326_1621229167_init();
    work_m_00000000001655505133_0757879789_init();
    work_m_00000000003158004883_0531390255_init();
    work_m_00000000002214838298_3212961919_init();
    work_m_00000000002947137522_0886308060_init();
    work_m_00000000000097840116_0990037843_init();
    work_m_00000000002625494074_2050343056_init();
    work_m_00000000004044543602_3173142008_init();
    work_m_00000000000703136378_3975733304_init();
    work_m_00000000000818015997_1167161195_init();
    work_m_00000000004090298216_3508565487_init();
    work_m_00000000001099346444_0053799672_init();
    work_m_00000000000213858662_0156190743_init();
    work_m_00000000003783842710_3877310806_init();
    work_m_00000000000031050599_1131260308_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000000031050599_1131260308");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
