/*
===============================================================================
 Name        : setup.c
 Author      : uCXpresso
 Version     : v1.0.0
 Copyright   : www.ucxpresso.net
 Description : system setup
===============================================================================
 	 	 	 	 	 	 	 	 History
 ---------+---------+--------------------------------------------+-------------
 DATE     |	VERSION |	DESCRIPTIONS							 |	By
 ---------+---------+--------------------------------------------+-------------
 2014/7/23	v1.0.0	First Edition for nano11Uxx						Leo
 ===============================================================================
 */

#include <uCXpresso.h>

//
// default memory pool
//
static uint8_t mem_pool[DEFAULT_POOL_SIZE];	// reduce pool size to increase the global stack

//
// setup before the system startup
//
extern "C" void sys_setup(void) {
	pool_memadd((uint32_t)mem_pool, sizeof(mem_pool));
	MAIN_STACK_SIZE = DEF_MAIN_STACK_SIZE;
}
