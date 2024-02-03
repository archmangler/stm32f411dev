#include "stm32f411xe.h"
//working
#define GPIOAEN (1U<<0)
#define GPIOCEN	(1U<<2)

#define PIN5	(1U<<5)
#define PIN13	(1U<<13)

#define LED_PIN PIN5
#define BTN_PIN	PIN13

int main(void)
{

	RCC->AHB1ENR |= GPIOAEN;
	RCC->AHB1ENR |= GPIOCEN;

	GPIOA->MODER |= (1U<<10);
	GPIOA->MODER &=~(1U<<11);

	/*Set PIN13 as input pin*/
	GPIOC->MODER &=~(1U<<26);
	GPIOC->MODER &=~(1U<<27);

    while(1) {
        if (GPIOC->IDR & 0x2000) {
            GPIOA->BSRR = 0x00200000;
        } else {
            GPIOA->BSRR = 0x00000020;
			for(int i=0;i<4000000;i++){
				//do nothing
			}
        }
    }

}
