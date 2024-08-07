/*
 * Copyright (c) 2012-2014 Wind River Systems, Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#define LED_ADDR (*((volatile unsigned int*)0x80001000))


int main(void)
{
	LED_ADDR = 1;
	return 0;
}
