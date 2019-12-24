/*
 * Copyright (C) 2015-2017 Alibaba Group Holding Limited
 */

#ifndef K_SOC_H
#define K_SOC_H

#if (RHINO_CONFIG_HW_COUNT > 0)
void       soc_hw_timer_init(void);
hr_timer_t soc_hr_hw_cnt_get(void);
lr_timer_t soc_lr_hw_cnt_get(void);
#define HR_COUNT_GET() soc_hr_hw_cnt_get()
#define LR_COUNT_GET() soc_lr_hw_cnt_get()
#else
#define HR_COUNT_GET() ((hr_timer_t)0u)
#define LR_COUNT_GET() ((lr_timer_t)0u)
#endif /* RHINO_CONFIG_HW_COUNT */

void soc_err_proc(kstat_t err);

size_t soc_get_cur_sp(void);

#endif /* K_SOC_H */

