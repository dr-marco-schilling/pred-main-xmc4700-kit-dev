/* 
 * Copyright (C) 2021 Infineon Technologies AG.
 *
 * Licensed under the EVAL_XMC47_PREDMAIN_AA Evaluation Software License
 * Agreement V1.0 (the "License"); you may not use this file except in
 * compliance with the License.
 *
 * For receiving a copy of the License, please refer to:
 *
 * https://github.com/Infineon/pred-main-xmc4700-kit/LICENSE.txt
 *
 * Licensee acknowledges that the Licensed Items are provided by Licensor free
 * of charge. Accordingly, without prejudice to Section 9 of the License, the
 * Licensed Items provided by Licensor under this Agreement are provided "AS IS"
 * without any warranty or liability of any kind and Licensor hereby expressly
 * disclaims any warranties or representations, whether express, implied,
 * statutory or otherwise, including but not limited to warranties of
 * workmanship, merchantability, fitness for a particular purpose, defects in
 * the Licensed Items, or non-infringement of third parties' intellectual
 * property rights.
 *
 */

#ifndef CONSOLE_IO_H
#define CONSOLE_IO_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stddef.h>

/**
 *
 */
void CONSOLE_IO_vInit( void );

int _write( int fd, const void *buf, size_t count );
int _read( int fd, void *buf, size_t count );

int _writemBus( int fd, const void *buf, size_t count );
int _readmBus( int fd, void *buf, size_t count );


#ifdef __cplusplus
}
#endif

#endif
