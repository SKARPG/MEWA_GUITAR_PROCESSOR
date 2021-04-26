#pragma once

#include <BoardDefinitions.hpp>
#include <i2c.h>
#include <ssd1306.h>

enum class MuxedI2C {
	MUX_I2C1 = 0,
	MUX_I2C2,
	MUX_I2C3,
	MUX_I2C4,
	MUX_I2C5
// ...
};

// TCA9548A driver
class I2CMux {
private:
I2C_HandleTypeDef i2cHandle;
std::uint16_t address;
public:
	I2CMux(const I2C_HandleTypeDef& _i2cHandle, std::uint16_t _address) : i2cHandle(_i2cHandle),address(_address){};
	void init();
	auto send(MuxedI2C targetI2C, std::uint8_t data, std::uint8_t dataSize) -> std::uint8_t;
	auto receive(MuxedI2C targetI2C, std::uint8_t* buffer, std::uint8_t dataSize) -> std::uint8_t;
};

// WARNING! ssd1306_conf.h has to be updated accordingly to the board specs
