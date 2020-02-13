/*
 * Copyright (C) 2015-2017 Alibaba Group Holding Limited
 */

#ifndef K_CONFIG_H
#define K_CONFIG_H

/* heap conf */
#ifndef RHINO_CONFIG_MM_BLK
#define RHINO_CONFIG_MM_BLK                  1
#endif
#ifndef RHINO_CONFIG_MM_DEBUG
#define RHINO_CONFIG_MM_DEBUG                1
#endif
#ifndef RHINO_CONFIG_MM_TLF
#define RHINO_CONFIG_MM_TLF                  1
#endif
#ifndef RHINO_CONFIG_MM_TLF_BLK_SIZE
#define RHINO_CONFIG_MM_TLF_BLK_SIZE         8192
#endif

/* kernel task conf */
#ifndef RHINO_CONFIG_TASK_INFO
#define RHINO_CONFIG_TASK_INFO               1
#endif
#ifndef RHINO_CONFIG_TASK_STACK_OVF_CHECK
#define RHINO_CONFIG_TASK_STACK_OVF_CHECK    1
#endif
#ifndef RHINO_CONFIG_SCHED_RR
#define RHINO_CONFIG_SCHED_RR                1
#endif
#ifndef RHINO_CONFIG_TIME_SLICE_DEFAULT
#define RHINO_CONFIG_TIME_SLICE_DEFAULT      50
#endif
#ifndef RHINO_CONFIG_PRI_MAX
#define RHINO_CONFIG_PRI_MAX                 62
#endif
#ifndef RHINO_CONFIG_USER_PRI_MAX
#define RHINO_CONFIG_USER_PRI_MAX            (RHINO_CONFIG_PRI_MAX - 2)
#endif

/* kernel workqueue conf */
#ifndef RHINO_CONFIG_WORKQUEUE
#define RHINO_CONFIG_WORKQUEUE               1
#endif
#ifndef RHINO_CONFIG_WORKQUEUE_STACK_SIZE
#define RHINO_CONFIG_WORKQUEUE_STACK_SIZE    768
#endif

/* kernel mm_region conf */
#ifndef RHINO_CONFIG_MM_REGION_MUTEX
#define RHINO_CONFIG_MM_REGION_MUTEX         0
#endif

/* kernel timer&tick conf */
#ifndef RHINO_CONFIG_TICKS_PER_SECOND
#define RHINO_CONFIG_TICKS_PER_SECOND        1000
#endif

/*must reserve enough stack size for timer cb will consume*/
#ifndef RHINO_CONFIG_TIMER_TASK_STACK_SIZE
#define RHINO_CONFIG_TIMER_TASK_STACK_SIZE   300
#endif

/* kernel idle conf */
#ifndef RHINO_CONFIG_IDLE_TASK_STACK_SIZE
#define RHINO_CONFIG_IDLE_TASK_STACK_SIZE    200
#endif

/* kernel hook conf */
#ifndef RHINO_CONFIG_USER_HOOK
#define RHINO_CONFIG_USER_HOOK               0
#endif

/* kernel stats conf */

#ifndef RHINO_CONFIG_CPU_NUM
#define RHINO_CONFIG_CPU_NUM                 1
#endif

#ifndef configUSE_WAKELOCK_PMU
#define configUSE_WAKELOCK_PMU               1
#endif

#ifndef WIFI_CONFIG_SUPPORT_LOWPOWER
#define WIFI_CONFIG_SUPPORT_LOWPOWER         0
#endif

#ifndef WIFI_CONFIG_LISTENSET_BINIT
#define WIFI_CONFIG_LISTENSET_BINIT          0
#endif

#ifndef WIFI_CONFIG_LISTEN_INTERVAL
#define WIFI_CONFIG_LISTEN_INTERVAL          1
#endif

#ifndef WIFI_CONFIG_RECEIVE_DTIM
#define WIFI_CONFIG_RECEIVE_DTIM             1
#endif

#endif /* K_CONFIG_H */

