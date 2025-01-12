// File:  HAL_ADC.h
// Author: JSpicer
// Date:  9/14/17
// Purpose: ADC utilities
// Hardware:  TM4C123 Tiva board

#ifndef ADC_HAL_H
#define ADC_HAL_H

#include <stdint.h>

typedef enum {
	AIN0 = 0,
	AIN1 = 1,
	AIN2 = 2,
	AIN3 = 3,
	AIN4 = 4,
	AIN5 = 5,
	AIN6 = 6,
	AIN7 = 7,
	AIN8 = 8,
	AIN9 = 9,
	AIN10 = 10,
	AIN11 = 11
} ADCChannel;


typedef enum {
	ADC0 = 0,
	ADC1 = 1
} ADCModule;

typedef struct {
	ADCModule module;	
	ADCChannel channel;
} AnalogDef_t;

#define	ANALOGDEF(module, channel)		((AnalogDef_t){ module, channel })

void ADC_Enable(ADCModule module, ADCChannel channel);
uint32_t ADC_Sample(ADCModule module);

#endif


