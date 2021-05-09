/*
 * SSD1306.cpp
 *
 *  Created on: Apr 26, 2021
 *      Author: bartek
 */

#include <OLED/I2CMux.hpp>

void I2CMux::init() {
	// init the chip according to the specs
	// or use already defined library (if exists)
	// or port arduino library to the STM32 API - just high-level executions

	//example of sending  0x01 to the device:
	std::uint8_t buffer = 0x01;
	HAL_I2C_Master_Transmit_DMA(&i2cHandle, address, &buffer, sizeof(buffer));
}
auto I2CMux::send(MuxedI2C targetI2C, std::uint8_t* data,
		std::uint8_t dataSize) -> std::uint8_t {
	// first, select the proper I2C channel in the mux

	//some command to set the proper channel:
	std::uint8_t buffer = 0x01;
	HAL_I2C_Master_Transmit_DMA(&i2cHandle, address, &buffer, sizeof(buffer));

	//then send data through the channel
	if (HAL_I2C_Master_Transmit_DMA(&i2cHandle, address, data, dataSize)
			!= HAL_OK) {
		return board::statusERROR;
	}

	// IMPORTANT! those are only placeholders - proper flow has to be written
	return board::statusOK;
}

auto I2CMux::receive(MuxedI2C targetI2C, std::uint8_t *buffer,
		std::uint8_t dataSize) -> std::uint8_t {
	// first, select the proper I2C channel in the mux

	//some command to set the proper channel:
	std::uint8_t buf = 0x01;
	HAL_I2C_Master_Transmit_DMA(&i2cHandle, address, &buf, sizeof(buffer));

	//then receive data through the channel
	if (HAL_I2C_Master_Receive_DMA(&i2cHandle, address, buffer, dataSize)
			!= HAL_OK) {
	}

	// IMPORTANT! those are only placeholders - proper flow has to be written
	return board::statusOK;
}
