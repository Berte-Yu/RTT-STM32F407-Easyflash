/*
 * Copyright (c) 2006-2018, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2015-07-29     Arda.Fu      first implementation
 */
#include <rtthread.h>
#include "easyflash.h"
#include <stdlib.h>
#include <stdio.h>

//void test_env(void) {
//    uint32_t i_boot_times = NULL;
//    char *c_old_boot_times, c_new_boot_times[11] = {0};

//    /* get the boot count number from Env */
//    c_old_boot_times = ef_get_env("boot_times");
//    RT_ASSERT(c_old_boot_times);
//    i_boot_times = atol(c_old_boot_times);
//    /* boot count +1 */
//    i_boot_times ++;
//    rt_kprintf("The system now boot %d times\n", i_boot_times);
//    /* interger to string */
//    sprintf(c_new_boot_times,"%ld", i_boot_times);
//    /* set and store the boot count number to Env */
//    ef_set_env("boot_times", c_new_boot_times);
//    ef_save_env();
//}

//void sys_init_thread(void* parameter){
////	set_system_status(SYSTEM_STATUS_INIT);

//    /* EasyFlash initialization */
//    if (easyflash_init() == EF_NO_ERR) {
//        /* initialize OK and switch to running status */
////        set_system_status(SYSTEM_STATUS_RUN);
//		/* test Env demo */
//		test_env();
//    } else {
//        /* initialize fail and switch to fault status */
////        set_system_status(SYSTEM_STATUS_FAULT);
//    }

////    rt_thread_delete(rt_thread_self());
//}

int main(void)
{
		easyflash_init();
    return 0;
	
}
