#ifndef ADC_H_
#define ADC_H_
#include <stdint.h>


uint16_t GetADC1Channel1Val(void);
void ADC1Start(void);
void ADC_PC0_SingleConversionInit(void);


#endif /* ADC_H_ */
