/*
 * fram.h
 *
 *  Created on: Jan 4, 2020
 *      Author: eoberholzer
 */

#include "main.h"

#ifndef INC_FRAM_H_
#define INC_FRAM_H_

   // Read data function
   // Valid address range 0x0000 to 0x1FFF
   HAL_StatusTypeDef framRead(SPI_HandleTypeDef* spiHandle, uint16_t address, uint8_t* dataBuffer);

   // Write data function
   // Valid address range 0x0000 to 0x1FFF
   HAL_StatusTypeDef framWrite(SPI_HandleTypeDef* spiHandle, uint16_t address, uint8_t data);


#endif /* INC_FRAM_H_ */
