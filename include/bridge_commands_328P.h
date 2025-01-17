/*
 * bridge_commands_328P.h
 *
 * Created: 6/28/2024 7:29:25 AM
 *  Author: aparady
 */ 

#ifndef BRIDGE_COMMANDS_328P_H_
#define BRIDGE_COMMANDS_328P_H_

uint8_t display_help();

uint8_t I2C_scan_addresses();												// Find all devices connected to I2C bus

uint8_t rising_edge_pulse();												// For devices that trigger on the rising edge of a pulse (e.g. oscilloscope external trigger input)

uint8_t falling_edge_pulse();												// For devices that trigger on the falling edge of a pulse (e.g. 34401A DMM external trigger, oscilloscope external trigger)

uint8_t GPIO_HIGH();														    // Force GPIO HIGH (can be used for enable/disable signal on external device)

uint8_t GPIO_LOW();															    // Force GPIO LOW (can be used for enable/disable signal on external device)

void I2C_broadcast(uint16_t *data_array);						// I2C interpreter that does not check if any slave devices are connected. This can be used to check that the master is operating properly on its own.

uint8_t I2C_arbitration(uint16_t *data_array);			// I2C interpreter that checks the state machine of the I2C peripheral. This can only be used when there is at least one slave device on the bus.

uint8_t UART_receive_array(uint8_t data_byte);		  // Receive data from PC serial terminal and parse it according to its value

#endif /* BRIDGE_COMMANDS_328P_H_ */
