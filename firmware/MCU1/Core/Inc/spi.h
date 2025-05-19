#ifndef __SPI_H__
#define __SPI_H__

#include "stm32c0xx_hal.h"
#include "stm32c0xx_hal_spi.h"

extern SPI_HandleTypeDef hspi1;

void MX_SPI1_Init(void);

#endif
