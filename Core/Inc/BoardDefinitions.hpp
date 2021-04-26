/*
 * BoardDefinitions.hpp
 *
 *  Created on: Apr 26, 2021
 *      Author: bartek
 */

#pragma once

#include <cstdint>


namespace board {

// example values, to be checked with the schematic
constexpr auto footswitchAPin = 12;
const auto footswitchAPort = GPIOA;

constexpr auto footswitchBPin = 12;
const auto footswitchBPort = GPIOA;
}
