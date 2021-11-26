/*
 * MY_FLASH.h
 *
 *  Created on: Nov 26, 2021
 *      Author: lockmain
 */

#ifndef INC_MY_FLASH_H_
#define INC_MY_FLASH_H_

#include "stm32f4xx_hal.h"

//Typedefs
//1. data size
typedef enum
{
	DATA_TYPE_8=0,
	DATA_TYPE_16,
	DATA_TYPE_32,
}DataTypeDef;

//functions prototypes
//1. Erase Sector
static void MY_FLASH_EraseSector(void);

//2. Set Sector Adress
void MY_FLASH_SetSectorAddrs(uint8_t sector, uint32_t addrs);
//3. Write Flash
void MY_FLASH_WriteN(uint32_t idx, void *wrBuf, uint32_t Nsize, DataTypeDef dataType);
//4. Read Flash
void MY_FLASH_ReadN(uint32_t idx, void *rdBuf, uint32_t Nsize, DataTypeDef dataType);


#endif /* INC_MY_FLASH_H_ */
