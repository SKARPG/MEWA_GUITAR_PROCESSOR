#pragma once

#include <stm32h7xx_hal.h>
#include <cstdint>

namespace board{


class Pin {
private:
	GPIO_TypeDef *port;
	std::uint8_t pin;

public:
	Pin() = delete;
	Pin(GPIO_TypeDef *_port, std::uint8_t _pin) :
			port(_port), pin(_pin) {

	}
	auto getPin() const noexcept -> std::uint8_t {
		return pin;
	}
	auto getPort() const noexcept -> GPIO_TypeDef*
	{
		return port;
	}
	void writePin(bool value){
		HAL_GPIO_WritePin(port, pin, value ? GPIO_PIN_SET : GPIO_PIN_RESET);
	}
	auto readPin() -> bool{
		return HAL_GPIO_ReadPin(port, pin);
	}
	void togglePin(){
		HAL_GPIO_TogglePin(port, pin);
	}

};
}
