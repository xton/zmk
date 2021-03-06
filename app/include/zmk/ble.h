/*
 * Copyright (c) 2020 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */

#pragma once

#include <zmk/keys.h>

int zmk_ble_unpair_all();
bool zmk_ble_handle_key_user(struct zmk_key_event *key_event);
