/*
 * app_startup.c
 *
 *  Created on: 2013��11��23��
 *      Author: parai
 */
#include "Os.h"
void StartupHook( void )
{

}
void ShutdownHook( StatusType Error )
{

}
void ErrorHook( StatusType Error )
{

}
void PreTaskHook( void )
{

}
void PostTaskHook( void )
{

}

// to know how to use Os firstly, then ...
void EcuM_Init(void)
{
	// Initialize the OS
	InitOS();

	// Setup interrupts
	Os_IsrInit();

	StartOS(OSDEFAULTAPPMODE);
}
