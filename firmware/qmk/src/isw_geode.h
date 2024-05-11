/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#include "quantum.h"

#define XXX KC_NO

#define LAYOUT( \
	k0B, k0A, k0D, k0E, k0C, k1A, k1E, k1B, k1C, k1D, k2A, k2E, k2B, k3D, k3E \
) { \
	{k0A, k0B, k0C, k0D, k0E}, \
	{k1A, k1B, k1C, k1D, k1E}, \
	{k2A, k2B, XXX, XXX, k2E}, \
	{XXX, XXX, XXX, k3D, k3E} \
}
