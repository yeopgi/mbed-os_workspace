/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

#include "mbed.h"


// Blinking rate in milliseconds
#define BLINKING_RATE     500ms

DigitalIn test_pin(PC_5);
DigitalOut power_sw(PC_0);
DigitalOut res_sw(PC_3);

int main()
{
#if 0
    // Initialise the digital pin LED1 as an output
    while (true) {
        printf("val : %d\n", test_pin.read());
        ThisThread::sleep_for(BLINKING_RATE);
    }
#endif
    power_sw = 1;
    res_sw = 1;

}
