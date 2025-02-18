/*
 * Copyright (c) 2021 Nordic Semiconductor ASA
 *
 * SPDX-License-Identifier: LicenseRef-Nordic-5-Clause
 */

#ifndef GNSS_PVT_EVENT_H__
#define GNSS_PVT_EVENT_H__

#include <zephyr.h>
#include <nrf_modem_gnss.h>
#include <event_manager.h>
#include <event_manager_profiler_tracer.h>

#ifdef __cplusplus
extern "C" {
#endif

struct gnss_pvt_event {
	struct event_header header;

	struct nrf_modem_gnss_pvt_data_frame pvt;
};

EVENT_TYPE_DECLARE(gnss_pvt_event);

#ifdef __cplusplus
}
#endif

#endif /* GNSS_PVT_EVENT_H__ */
