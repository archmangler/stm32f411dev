//Where is the LED connected?
//Port: A
//Pin: 5

#include <stdint.h>

#define 	PERIPH_BASE 		(0x40000000UL)
#define 	AHB1PERIPH_OFFSET	(0x00020000UL)
#define		AHB1PERIPH_BASE		(PERIPH_BASE + AHB1PERIPH_OFFSET)

#define 	GPIOA_OFFSET		(0x0000UL)
#define 	GPIOA_BASE			(AHB1PERIPH_BASE + GPIOA_OFFSET)

#define 	RCC_OFFSET			(0x3800UL)
#define 	RCC_BASE			(AHB1PERIPH_BASE + RCC_OFFSET)

#define     AHB1EN_R_OFFSET		(0x30UL)
#define 	RCC_AHB1EN_R		(*(volatile unsigned int *)(RCC_BASE + AHB1EN_R_OFFSET))

#define		MODE_R_OFFSET		(0x00UL)
#define		GPIOA_MODE_R		(*(volatile unsigned int *)(GPIOA_BASE + MODE_R_OFFSET))

#define		OD_R_OFFSET			(0x14UL)
#define		GPIOA_OD_R			(*(volatile unsigned int *)(GPIOA_BASE + OD_R_OFFSET))

#define 	GPIOAEN				(1U<<0)								//0b 0000 0000 0000 0000 0000 0000 0000 0001

#define		PIN5				(1U<<5)
#define		LED_PIN				PIN5

//#define __IO volatile; //MISRA standard

typedef struct {

	volatile uint32_t MODER;
	volatile uint32_t DUMMY[4];
	volatile uint32_t ODR;

} GPIO_TypeDef;

typedef struct
{
  volatile uint32_t DUMMY[12];
  volatile uint32_t AHB1ENR;       /*!< RCC AHB1 peripheral clock register,                          Address offset: 0x30 */

} RCC_TypeDef;

#define 	RCC 	((RCC_TypeDef*)RCC_BASE)
#define 	GPIOA 	((GPIO_TypeDef*)GPIOA_BASE)

int main(void)
{
	/*1. Enable clock access to GPIOA*/
	//RCC_AHB1EN_R |= GPIOAEN;
	 RCC->AHB1ENR |=  GPIOAEN;


	/*2. Set PA5 as an output pin*/
	//GPIOA_MODE_R |= (1U<<10);	//set bit 10 to 1
	//GPIOA_MODE_R &=~(1U<<11);	//set bit11 to 0

	GPIOA->MODER |= (1U<<10);
	GPIOA->MODER &=~(1U<<11);

	while(1)
	{
		/*3. Experiment: Set PA5 high*/
		//GPIOA_OD_R |= LED_PIN;

		/*4. Experiment: Toggle PA5 on every alternate iteration of the while loop using the toggle operator ^*/
		//GPIOA_OD_R ^= LED_PIN;

		GPIOA->ODR^= LED_PIN;

		//Create a delay loop for the benefit of humans
		for(int i = 0;i<1000000;i++){
			//do nothing yet
		}

	}
}
