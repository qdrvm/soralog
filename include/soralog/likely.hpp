/**
 * Copyright Soramitsu Co., 2021-2023
 * Copyright Quadrivium Co., 2023
 * All Rights Reserved
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once

#if not defined(LIKELY_IF)
#if __cplusplus >= 202002L
#define LIKELY_IF(x) [[likely]] if (x)
#elif defined(__has_builtin) and __has_builtin(__builtin_expect)
#define LIKELY_IF(x) if (__builtin_expect((x), 1))
#else
#define LIKELY_IF(x) if (x)
#endif
#endif

#if not defined(UNLIKELY_IF)
#if __cplusplus >= 202002L
#define UNLIKELY_IF(x) [[unlikely]] if (x)
#elif defined(__has_builtin) and __has_builtin(__builtin_expect)
#define UNLIKELY_IF(x) if (__builtin_expect((x), 0))
#else
#define UNLIKELY_IF(x) if (x)
#endif
#endif
