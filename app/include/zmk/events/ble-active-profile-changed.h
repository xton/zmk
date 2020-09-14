/*
 * Copyright (c) 2020 Peter Johanson <peter@peterjohanson.com>
 *
 * SPDX-License-Identifier: MIT
 */

#pragma once

#include <zephyr.h>
#include <zmk/event-manager.h>
#include <device.h>

#include <zmk/ble/profile.h>


struct ble_active_profile_changed {
    struct zmk_event_header header;
    u8_t index;
    struct zmk_ble_profile *profile;
};

ZMK_EVENT_DECLARE(ble_active_profile_changed);
