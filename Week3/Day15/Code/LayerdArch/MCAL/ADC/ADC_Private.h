#ifndef ADC_PRIVATE_H
#define ADC_PRIVATE_H



#define Adc_REFS0    6
#define Adc_REFS1    7 

#define Adc_AREF          0 
#define Adc_AVCC          1
#define Adc_Internal      1 


#define Adc_ADLAR         5 

#define Adc_RightAdjust   0 
#define Adc_LeftAdjust    1 


#define Adc_Mux0          0
#define Adc_Mux1          1
#define Adc_Mux2          2
#define Adc_Mux3          3
#define Adc_Mux4          4
#define Adc_ChannelMask   0x1F

#define Adc_SingleEndedChannel0       0 


// ADMUX=(ADMUX&~Mask)|NewVale
#endif