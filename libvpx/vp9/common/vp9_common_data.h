/*
 *  Copyright (c) 2010 The WebM project authors. All Rights Reserved.
 *
 *  Use of this source code is governed by a BSD-style license
 *  that can be found in the LICENSE file in the root of the source
 *  tree. An additional intellectual property rights grant can be found
 *  in the file PATENTS.  All contributing project authors may
 *  be found in the AUTHORS file in the root of the source tree.
 */

#ifndef VP9_COMMON_VP9_COMMON_DATA_H_
#define VP9_COMMON_VP9_COMMON_DATA_H_

#include "vp9/common/vp9_enums.h"

extern const int b_width_log2_lookup[BLOCK_SIZE_TYPES];
extern const int b_height_log2_lookup[BLOCK_SIZE_TYPES];
extern const int mi_width_log2_lookup[BLOCK_SIZE_TYPES];
extern const int mi_height_log2_lookup[BLOCK_SIZE_TYPES];
extern const int num_8x8_blocks_wide_lookup[BLOCK_SIZE_TYPES];
extern const int num_8x8_blocks_high_lookup[BLOCK_SIZE_TYPES];
extern const int num_4x4_blocks_high_lookup[BLOCK_SIZE_TYPES];
extern const int num_4x4_blocks_wide_lookup[BLOCK_SIZE_TYPES];
extern const int size_group_lookup[BLOCK_SIZE_TYPES];
extern const int num_pels_log2_lookup[BLOCK_SIZE_TYPES];
extern const PARTITION_TYPE partition_lookup[][BLOCK_SIZE_TYPES];
extern const BLOCK_SIZE_TYPE subsize_lookup[PARTITION_TYPES][BLOCK_SIZE_TYPES];
extern const TX_SIZE max_txsize_lookup[BLOCK_SIZE_TYPES];
extern const TX_SIZE max_uv_txsize_lookup[BLOCK_SIZE_TYPES];
extern const BLOCK_SIZE_TYPE bsize_from_dim_lookup[5][5];

#endif    // VP9_COMMON_VP9_COMMON_DATA_H