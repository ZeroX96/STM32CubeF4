/**
  @page ADC_RegularConversion_Interrupt conversion using interrupt

  @verbatim
  ******************** (C) COPYRIGHT 2017 STMicroelectronics *******************
  * @file    ADC/ADC_RegularConversion_Interrupt/readme.txt 
  * @author  MCD Application Team
  * @brief   Description of the ADC RegularConversion interrupt example.
  ******************************************************************************
  *
  * Copyright (c) 2017 STMicroelectronics. All rights reserved.
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                       opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
   @endverbatim

@par Example Description 

How to use the ADC in interrupt mode to convert data through the HAL API.

The ADC1 is configured to convert continuously ADC_CHANNEL_10.

Each time an end of conversion occurs an interrupt is generated and the converted 
data of ADC1 DR register is affected to the uhADCxConvertedValue variable in the 
ADC conversion complete call back function.


In this example, the system clock is 100MHz, APB2 = 100MHz and ADC clock = APB2/4. 
Since ADC1 clock is 25 MHz and sampling time is set to 3 cycles, the conversion 
time to 12bit data is 12 cycles so the total conversion time is (12+3)/25= 0.6us(1.7Msps).


User can vary the ADC_CHANNEL_10 voltage by applying an input voltage on pin PC.00 (pin3 connector 9) 
(e.g. using function generator).
The converted value is monitored through debugger: uhADCxConvertedValue variable.

STM32 Eval board's LEDs can be used to monitor the transfer status:
  - LED2 is ON when there are an error in initialization.

@par Keywords

Analog, ADC, Analog to Digital Converter, Regular Conversion, Interrupt, Continuous Conversion

@par Directory contents 

  - ADC/ADC_RegularConversion_Interrupt/Inc/stm32f4xx_hal_conf.h    HAL configuration file
  - ADC/ADC_RegularConversion_Interrupt/Inc/stm32f4xx_it.h          DMA interrupt handlers header file
  - ADC/ADC_RegularConversion_Interrupt/Inc/main.h                  Header for main.c module  
  - ADC/ADC_RegularConversion_Interrupt/Src/stm32f4xx_it.c          DMA interrupt handlers
  - ADC/ADC_RegularConversion_Interrupt/Src/main.c                  Main program
  - ADC/ADC_RegularConversion_Interrupt/Src/stm32f4xx_hal_msp.c     HAL MSP file 
  - ADC/ADC_RegularConversion_Interrupt/Src/system_stm32f4xx.c      STM32F4xx system source file

@par Hardware and Software environment 

  - This example runs on STM32F412Zx devices.
  
  - This example has been tested with NUCLEO-F412ZG Rev B board and can be
    easily tailored to any other supported device and development board.

@par How to use it ? 

In order to make the program work, you must do the following :
 - Open your preferred toolchain 
 - Rebuild all files and load your image into target memory
 - Run the example

 * <h3><center>&copy; COPYRIGHT STMicroelectronics</center></h3>
 */
