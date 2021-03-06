/**
 * Copyright (C) 2011-2020 by Arm Limited. All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef CONFIG_H
#define CONFIG_H

// Can't include features.h directly as we may not be using glibc, but stdint.h is benign and includes it
#include <stdint.h>

#if defined(__x86_64) && defined(__GNU_LIBRARY__)

// Ensure glibc 2.12 or earlier is used for compatibility with redhat 6
__asm__(".symver memcpy,memcpy@GLIBC_2.2.5");

#endif

#endif // CONFIG_H
