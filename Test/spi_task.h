/* This file has been prepared for Doxygen automatic documentation generation.*/
/** @file *********************************************************************
 *
 * @brief  XMEGA SPI example header
 *
 *      This file contains task and function prototypes, definitions of structs,
 *      which are used to pass parameters to tasks.
 *
 * @par Documentation
 *     http://www.FreeRTOS.org - Documentation, latest information.
 *
 * @author
 *      Universitšt Erlangen-Nurnberg
 *		LS Informationstechnik (Kommunikationselektronik)
 *		Yuriy Kulikov
 *      Support email: Yuriy.Kulikov.87@googlemail.com
 *
 *****************************************************************************/


#include "usart_driver_RTOS.h"
#include "spi_driver.h"

/** Used to pass arguments to the task */
typedef struct SpiSlaveTaskParametersDefinition
{
	/** Pointer to SpiSlave to use */
	Slave * spiSlave;
	/** Pointer to USART buffer to use */
	UsartBuffer * usartBuffer;
} SpiSlaveTaskParameters;

/** Used to pass arguments to the task */
typedef struct SpiMasterTaskParametersDefinitio
{
	/** Pointer to SpiSlave to use */
	MasterDevice * spiMaster;
	/** Pointer to USART buffer to use. */
	UsartBuffer * usartBuffer;
} SpiMasterTaskParameters;


void startSpiSlaveTask(Slave * slave, UsartBuffer * usartBuffer, char cPriority, xTaskHandle taskHandle);
void startSpiMasterTask(MasterDevice * master, UsartBuffer * usartBuffer, char cPriority, xTaskHandle taskHandle);
