/*
 * led.cpp
 *
 *  Created on: 2016年12月22日
 *      Author: cheri
 */



#include <chip.h>
#include "board.h"
#include "led.h"


using namespace std;

AdapterLed* AdapterLed::instance()
{
	static AdapterLed ins;
	return (AdapterLed *)(&ins);
}

AdapterLed::AdapterLed():tx_count(0),rx_count(0)
{

}
void AdapterLed::Blink_Led_TX()
{
	Chip_GPIO_SetPinOutHigh(LPC_GPIO,TX_LED_PORT,TX_LED_PIN);
}


void AdapterLed::Blink_Led_RX()
{
	Chip_GPIO_SetPinOutHigh(LPC_GPIO,RX_LED_PORT,RX_LED_PIN);
}


void AdapterLed::Toggle_Led_TX()
{
	Chip_GPIO_SetPinToggle(LPC_GPIO,TX_LED_PORT,TX_LED_PIN);
}


void AdapterLed::Toggle_Led_RX()
{
	Chip_GPIO_SetPinToggle(LPC_GPIO,RX_LED_PORT,RX_LED_PIN);
}


AdapterLed::~AdapterLed()
{

}



