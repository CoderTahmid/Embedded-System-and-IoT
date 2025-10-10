/*
step 1 -- > clock provide
step 2 --> pin mode select kora

*/

#include <stm32f4xx.h> // device header

int main() {
	RCC -> AHB1ENR |= RCC_AHB1ENR_GPIOAEN; // pin  A te clock provide kora hoise
	RCC -> AHB1ENR |= RCC_AHB1ENR_GPIOCEN; // pin C te clock provide kora hoise
	
	GPIOC -> MODER &=~ GPIO_MODER_MODE13;
	GPIOA -> MODER |= GPIO_MODER_MODE5_0;
	
	while(1) {
		
	}
	
}