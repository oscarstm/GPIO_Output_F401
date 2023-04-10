#include "stm32f4xx.h"
#include "clk_user.h"
#include "gpio_user.h"

int main(void) {
	clk_user();
	GPIO_Init();

	while (1) {
		GPIOC->ODR |= (GPIO_ODR_ODR_13);
		//GPIOC->ODR &= ~(GPIO_ODR_ODR_13);
	}

}

