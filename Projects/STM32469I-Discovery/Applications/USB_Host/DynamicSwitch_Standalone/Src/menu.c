/**
  ******************************************************************************
  * @file    USB_Host/DynamicSwitch_Standalone/Src/menu.c
  * @author  MCD Application Team
  * @brief   This file implements Menu Functions
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2017 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
  *
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
/* Private function prototypes -----------------------------------------------*/
/* Private functions ---------------------------------------------------------*/

/**
  * @brief  Demo state machine.
  * @param  None
  * @retval None
  */
void Menu_Init(void)
{
  msc_demo.state = MSC_DEMO_START;
  hid_demo.state = HID_DEMO_START;
}

/**
  * @brief  Manages DS Menu Process.
  * @param  None
  * @retval None
  */
void DS_MenuProcess(void)
{
  switch(Appli_state)
  {
  case APPLICATION_IDLE:
    break;

  case APPLICATION_MSC:
    MSC_MenuProcess();
    break;

  case APPLICATION_HID:
    HID_MenuProcess();
    break;

  default:
	break;
  }

  if(Appli_state == APPLICATION_DISCONNECT)
  {
    Appli_state = APPLICATION_IDLE;
    LCD_ErrLog("USB device disconnected!\n");
    Menu_Init();

    LCD_UsrLog("Plug your device To Continue...\n");
  }
}

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
