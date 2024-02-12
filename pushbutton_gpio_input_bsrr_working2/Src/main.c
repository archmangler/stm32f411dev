#include "stm32f411xe.h"

#define GPIOAEN (1U<<0)
#define GPIOCEN	(1U<<2)

void my_delay_long(void);
void my_delay_short(void);

void loop_test_one_porta(void);
void loop_test_two_porta(void);
void loop_test_three_porta(void);
void loop_test_four_porta(void);
void loop_test_five_porta(void);
void loop_test_six_porta(void);

void loop_test_porta_clear(void);

int main(void)
{

	RCC->AHB1ENR |= GPIOAEN;
	RCC->AHB1ENR |= GPIOCEN;

	/*set pin A0 as an output pin*/
	GPIOA->MODER |= (1U<<0);
	GPIOA->MODER &=~(1U<<1);

	/*set pin A1 as an output pin*/
	GPIOA->MODER |= (1U<<2);
	GPIOA->MODER &=~(1U<<3);

	/*set pin A2 as an output pin*/
	GPIOA->MODER |= (1U<<4);
	GPIOA->MODER &=~(1U<<5);

	/*set pin A3 as an output pin*/
	GPIOA->MODER |= (1U<<6);
	GPIOA->MODER &=~(1U<<7);

	/*set pin A4 as an output pin*/
	GPIOA->MODER |= (1U<<8);
	GPIOA->MODER &=~(1U<<9);

	//set pin A5 as an output pin
	GPIOA->MODER |= (1U<<10);
	GPIOA->MODER &=~(1U<<11);

	//set pin A6 as an output pin
	GPIOA->MODER |= (1U<<12);
	GPIOA->MODER &=~(1U<<13);

	//set pin A7 as an output pin
	GPIOA->MODER |= (1U<<14);
	GPIOA->MODER &=~(1U<<15);

	//set pin A8 as an output pin
	GPIOA->MODER |= (1U<<16);
	GPIOA->MODER &=~(1U<<17);

	//set pin A9 as an output pin
	GPIOA->MODER |= (1U<<18);
	GPIOA->MODER &=~(1U<<19);

	//set pin A10 as an output pin
	GPIOA->MODER |= (1U<<20);
	GPIOA->MODER &=~(1U<<21);

	//set pin A11 as an output pin
	GPIOA->MODER |= (1U<<22);
	GPIOA->MODER &=~(1U<<23);

	//set pin A12 as an output pin
	GPIOA->MODER |= (1U<<24);
	GPIOA->MODER &=~(1U<<25);

	//for some reason  the programmer goes crazy if we use these pins
	//figure it out later
/*
	//set pin A13 as an output pin
	GPIOA->MODER |= (1U<<26);
	GPIOA->MODER &=~(1U<<27);

	//set pin A14 as an output pin
	GPIOA->MODER |= (1U<<28);
	GPIOA->MODER &=~(1U<<29);

	//set pin A15 as an output pin
	GPIOA->MODER |= (1U<<30);
	GPIOA->MODER &=~(1U<<31);
*/

	/*Set PINC13 as input pin*/
	//GPIOC->MODER &=~(1U<<26);
	//GPIOC->MODER &=~(1U<<27);

	/*Set PINC12 as input pin*/
	//GPIOC->MODER &=~(1U<<24);
	//GPIOC->MODER &=~(1U<<25);

	/*Set PINC11 as input pin*/
	//GPIOC->MODER &=~(1U<<22);
	//GPIOC->MODER &=~(1U<<23);

	/*Set PINC10 as input pin*/
	//GPIOC->MODER &=~(1U<<20);
	//GPIOC->MODER &=~(1U<<21);

		/*Set PINC09 as input pin*/
		GPIOC->MODER &=~(1U<<18);
		GPIOC->MODER &=~(1U<<19);

		/*Set PINC08 as input pin*/
		GPIOC->MODER &=~(1U<<16);
		GPIOC->MODER &=~(1U<<17);



    while(1) {
/*
        if (GPIOC->IDR &  0b0010000000000000) { //0x 2 0 0 0 -> 0x 0010 0000 00000 0000
            loop_test_porta_clear();
        } else {
        	loop_test_one_porta();
        }

        //check the next button

        if (GPIOC->IDR &  0b0001000000000000) {
            loop_test_porta_clear();
        } else {
        	loop_test_two_porta();
        }

        if (GPIOC->IDR &  0b0000100000000000) {
            loop_test_porta_clear();
        } else {
        	loop_test_three_porta();
        }

        if (GPIOC->IDR &  0b0000010000000000) {
            loop_test_porta_clear();
        } else {
        	loop_test_four_porta();
        }
*/

    	loop_test_five_porta();
        loop_test_porta_clear();

    	//PINC-9
        if (GPIOC->IDR &  0b0000001000000000) {
            loop_test_porta_clear();
        } else {
        	loop_test_five_porta();
        }

        //PINC-8
        if (GPIOC->IDR &  0b0000000100000000) {
            loop_test_porta_clear();
        } else {
        	loop_test_six_porta();
        }

    }

}

void loop_test_one_porta(void) {
/*
	//A15
    GPIOA->BSRR = 0b00000000000000001000000000000000;
    my_delay_long();
    loop_test_porta_clear();

	//A14
    GPIOA->BSRR = 0b00000000000000000100000000000000;
    my_delay_long();
    loop_test_porta_clear();

	//A13
    GPIOA->BSRR = 0b00000000000000000010000000000000;
    my_delay_long();
    loop_test_porta_clear();
*/
	//A12
    GPIOA->BSRR = 0b00000000000000000001000000000000;
    my_delay_long();
    loop_test_porta_clear();

	//A11
    GPIOA->BSRR = 0b00000000000000000000100000000000;
    my_delay_long();
    loop_test_porta_clear();

	//A10
    GPIOA->BSRR = 0b00000000000000000000010000000000;
    my_delay_long();
    loop_test_porta_clear();

	//A9
    GPIOA->BSRR = 0b00000000000000000000001000000000;
    my_delay_long();
    loop_test_porta_clear();

	//A8
    GPIOA->BSRR = 0b00000000000000000000000100000000;
    my_delay_long();
    loop_test_porta_clear();

	//A7
    GPIOA->BSRR = 0b00000000000000000000000010000000;
    my_delay_long();
    loop_test_porta_clear();

    //A6
    GPIOA->BSRR = 0b00000000000000000000000001000000;
    my_delay_long();
    loop_test_porta_clear();

    //A5
    GPIOA->BSRR = 0b00000000000000000000000000100000;
    my_delay_long();
    loop_test_porta_clear();

    //A4
    GPIOA->BSRR = 0b00000000000000000000000000010000;
    my_delay_long();
    loop_test_porta_clear();

    //A3
    GPIOA->BSRR = 0b00000000000000000000000000001000;
    my_delay_long();
    loop_test_porta_clear();

    //A2
    GPIOA->BSRR = 0b00000000000000000000000000000100;
    my_delay_long();
    loop_test_porta_clear();

    //A1
    GPIOA->BSRR = 0b00000000000000000000000000000010;
    my_delay_long();
    loop_test_porta_clear();

    //A0
    GPIOA->BSRR = 0b00000000000000000000000000000001;
    my_delay_long();
    loop_test_porta_clear();

}

void loop_test_two_porta(void) {

	//A10
    GPIOA->BSRR = 0b00000000000000000000010000000000;
    my_delay_long();
    loop_test_porta_clear();

	//A9
    GPIOA->BSRR = 0b00000000000000000000001000000000;
    my_delay_long();
    loop_test_porta_clear();

	//A7
    GPIOA->BSRR = 0b00000000000000000000000010000000;
    my_delay_long();
    loop_test_porta_clear();

    //A6
    GPIOA->BSRR = 0b00000000000000000000000001000000;
    my_delay_long();
    loop_test_porta_clear();

	//A8
    GPIOA->BSRR = 0b00000000000000000000000100000000;
    my_delay_long();
    loop_test_porta_clear();

	//A11
    GPIOA->BSRR = 0b00000000000000000000100000000000;
    my_delay_long();
    loop_test_porta_clear();

   //A5
    GPIOA->BSRR = 0b00000000000000000000000000100000;
    my_delay_long();
    loop_test_porta_clear();

    //A3
    GPIOA->BSRR = 0b00000000000000000000000000001000;
    my_delay_long();
    loop_test_porta_clear();

	//A12
    GPIOA->BSRR = 0b00000000000000000001000000000000;
    my_delay_long();
    loop_test_porta_clear();

    //A2
    GPIOA->BSRR = 0b00000000000000000000000000000100;
    my_delay_long();
    loop_test_porta_clear();

    //A4
    GPIOA->BSRR = 0b00000000000000000000000000010000;
    my_delay_long();
    loop_test_porta_clear();

    //A0
    GPIOA->BSRR = 0b00000000000000000000000000000001;
    my_delay_long();
    loop_test_porta_clear();

    //A1
    GPIOA->BSRR = 0b00000000000000000000000000000010;
    my_delay_long();
    loop_test_porta_clear();

}


void loop_test_three_porta(void) {

	//A10
    GPIOA->BSRR = 0b00000000000000000000010000000000;
    my_delay_short();
    loop_test_porta_clear();

	//A9
    GPIOA->BSRR = 0b00000000000000000000001000000000;
    my_delay_short();
    loop_test_porta_clear();

	//A7
    GPIOA->BSRR = 0b00000000000000000000000010000000;
    my_delay_short();
    loop_test_porta_clear();

    //A6
    GPIOA->BSRR = 0b00000000000000000000000001000000;
    my_delay_short();
    loop_test_porta_clear();

	//A8
    GPIOA->BSRR = 0b00000000000000000000000100000000;
    my_delay_short();
    loop_test_porta_clear();

	//A11
    GPIOA->BSRR = 0b00000000000000000000100000000000;
    my_delay_short();
    loop_test_porta_clear();

   //A5
    GPIOA->BSRR = 0b00000000000000000000000000100000;
    my_delay_short();
    loop_test_porta_clear();

    //A3
    GPIOA->BSRR = 0b00000000000000000000000000001000;
    my_delay_short();
    loop_test_porta_clear();

	//A12
    GPIOA->BSRR = 0b00000000000000000001000000000000;
    my_delay_short();
    loop_test_porta_clear();

    //A2
    GPIOA->BSRR = 0b00000000000000000000000000000100;
    my_delay_short();
    loop_test_porta_clear();

    //A4
    GPIOA->BSRR = 0b00000000000000000000000000010000;
    my_delay_short();
    loop_test_porta_clear();

    //A0
    GPIOA->BSRR = 0b00000000000000000000000000000001;
    my_delay_short();
    loop_test_porta_clear();

    //A1
    GPIOA->BSRR = 0b00000000000000000000000000000010;
    my_delay_short();
    loop_test_porta_clear();

}


void loop_test_four_porta(void) {

    //A3
    GPIOA->BSRR = 0b00000000000000000000000000001000;
    my_delay_short();
    loop_test_porta_clear();

	//A7
    GPIOA->BSRR = 0b00000000000000000000000010000000;
    my_delay_short();
    loop_test_porta_clear();

    //A6
    GPIOA->BSRR = 0b00000000000000000000000001000000;
    my_delay_short();
    loop_test_porta_clear();

	//A8
    GPIOA->BSRR = 0b00000000000000000000000100000000;
    my_delay_short();
    loop_test_porta_clear();

	//A9
    GPIOA->BSRR = 0b00000000000000000000001000000000;
    my_delay_short();
    loop_test_porta_clear();

	//A11
    GPIOA->BSRR = 0b00000000000000000000100000000000;
    my_delay_short();
    loop_test_porta_clear();

	//A10
    GPIOA->BSRR = 0b00000000000000000000010000000000;
    my_delay_short();
    loop_test_porta_clear();

    //A0
    GPIOA->BSRR = 0b00000000000000000000000000000001;
    my_delay_short();
    loop_test_porta_clear();

	//A12
    GPIOA->BSRR = 0b00000000000000000001000000000000;
    my_delay_short();
    loop_test_porta_clear();

    //A2
    GPIOA->BSRR = 0b00000000000000000000000000000100;
    my_delay_short();
    loop_test_porta_clear();

    //A4
    GPIOA->BSRR = 0b00000000000000000000000000010000;
    my_delay_short();
    loop_test_porta_clear();

    //A1
    GPIOA->BSRR = 0b00000000000000000000000000000010;
    my_delay_short();
    loop_test_porta_clear();

    //A5
    GPIOA->BSRR = 0b00000000000000000000000000100000;
    my_delay_short();
    loop_test_porta_clear();

}

void loop_test_five_porta(void) {

 	//A7
    GPIOA->BSRR = 0b00000000000000000000000010000000;
    my_delay_short();
    loop_test_porta_clear();

    //A6
    GPIOA->BSRR = 0b00000000000000000000000001000000;
    my_delay_short();
    loop_test_porta_clear();

	//A8
    GPIOA->BSRR = 0b00000000000000000000000100000000;
    my_delay_short();
    loop_test_porta_clear();

    //A0
    GPIOA->BSRR = 0b00000000000000000000000000000001;
    my_delay_short();
    loop_test_porta_clear();

    //A3
    GPIOA->BSRR = 0b00000000000000000000000000001000;
    my_delay_short();
    loop_test_porta_clear();

	//A11
    GPIOA->BSRR = 0b00000000000000000000100000000000;
    my_delay_short();
    loop_test_porta_clear();

	//A9
    GPIOA->BSRR = 0b00000000000000000000001000000000;
    my_delay_short();
    loop_test_porta_clear();

	//A10
    GPIOA->BSRR = 0b00000000000000000000010000000000;
    my_delay_short();
    loop_test_porta_clear();

    //A12
    GPIOA->BSRR = 0b00000000000000000001000000000000;
    my_delay_short();
    loop_test_porta_clear();

    //A2
    GPIOA->BSRR = 0b00000000000000000000000000000100;
    my_delay_short();
    loop_test_porta_clear();

    //A1
    GPIOA->BSRR = 0b00000000000000000000000000000010;
    my_delay_short();
    loop_test_porta_clear();

    //A5
    GPIOA->BSRR = 0b00000000000000000000000000100000;
    my_delay_short();
    loop_test_porta_clear();

    //A4
    GPIOA->BSRR = 0b00000000000000000000000000010000;
    my_delay_short();
    loop_test_porta_clear();

}


void loop_test_six_porta(void) {

	//A8
    GPIOA->BSRR = 0b00000000000000000000000100000000;
    my_delay_short();
    loop_test_porta_clear();

    //A0
    GPIOA->BSRR = 0b00000000000000000000000000000001;
    my_delay_short();
    loop_test_porta_clear();

    //A3
    GPIOA->BSRR = 0b00000000000000000000000000001000;
    my_delay_short();
    loop_test_porta_clear();

	//A11
    GPIOA->BSRR = 0b00000000000000000000100000000000;
    my_delay_short();
    loop_test_porta_clear();

	//A9
    GPIOA->BSRR = 0b00000000000000000000001000000000;
    my_delay_short();
    loop_test_porta_clear();

	//A10
    GPIOA->BSRR = 0b00000000000000000000010000000000;
    my_delay_short();
    loop_test_porta_clear();

 	//A7
    GPIOA->BSRR = 0b00000000000000000000000010000000;
    my_delay_short();
    loop_test_porta_clear();

    //A6
    GPIOA->BSRR = 0b00000000000000000000000001000000;
    my_delay_short();
    loop_test_porta_clear();

    //A12
    GPIOA->BSRR = 0b00000000000000000001000000000000;
    my_delay_short();
    loop_test_porta_clear();

    //A5
    GPIOA->BSRR = 0b00000000000000000000000000100000;
    my_delay_short();
    loop_test_porta_clear();

    //A4
    GPIOA->BSRR = 0b00000000000000000000000000010000;
    my_delay_short();
    loop_test_porta_clear();

    //A2
    GPIOA->BSRR = 0b00000000000000000000000000000100;
    my_delay_short();
    loop_test_porta_clear();

    //A1
    GPIOA->BSRR = 0b00000000000000000000000000000010;
    my_delay_short();
    loop_test_porta_clear();



}

void loop_test_porta_clear(void) {
//	GPIOA->BSRR = 0b11111111111111110000000000000000;
	GPIOA->BSRR = 0b00011111111111110000000000000000;
    my_delay_short();
}

void my_delay_long(void) {
    for(int i=0;i<1000000;i++){
		//do nothing
	}
}

void my_delay_short(void) {
    for(int i=0;i<100000;i++){
		//do nothing
	}
}
