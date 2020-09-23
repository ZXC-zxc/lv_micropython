/*
 * This file is part of the MicroPython project, http://micropython.org/
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2020 Glenn Ruben Bakke
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

// Board overridable build configuration.

#ifndef MICROPY_MBFS
#define MICROPY_MBFS                       (1)
#endif

#ifndef MICROPY_VFS
#define MICROPY_VFS                        (0)
#endif

// Board overridable feature configuration.

#ifndef MICROPY_PY_ARRAY_SLICE_ASSIGN
#if defined(BLUETOOTH_SD)
#define MICROPY_PY_ARRAY_SLICE_ASSIGN      (0)
#else
#define MICROPY_PY_ARRAY_SLICE_ASSIGN      (1)
#endif
#endif

#ifndef MICROPY_PY_SYS_STDFILES
#if defined(BLUETOOTH_SD)
#define MICROPY_PY_SYS_STDFILES            (0)
#else
#define MICROPY_PY_SYS_STDFILES            (1)
#endif
#endif

#ifndef MICROPY_PY_UBINASCII
#if defined(BLUETOOTH_SD)
#define MICROPY_PY_UBINASCII               (0)
#else
#define MICROPY_PY_UBINASCII               (1)
#endif
#endif
