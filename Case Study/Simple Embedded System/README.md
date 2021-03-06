# **ENERGY METER** 

# INTRODUCTION
Electric meter or energy meter is a device that measures the amount of electrical energy consumed. The most common unit of measurement on the electricity measurement is the kilowatt hour [kWh], which is equal to the amount of energy used by a load of one kilowatt hour over a period of one hour.

# REQUIREMENTS

## High Level Requirements:

|RID	|DESCRIPTION |
|---- |----|
|HLR1	|To measure Energy Consumption of User |
|HLR2	|To measure Volatage in Volts|
|HLR3	|To measure Current in Amps |
|HLR3	|To Check for Invalid smart card|


## Low Level Requirement:
|RID	|DESCRIPTION |
|---- |----|
|LLR1	|To Display calculated Real power |
|LLR2	|Display Status of Smart Card|

# BLOCK DIAGRAM
![Drawing](https://user-images.githubusercontent.com/99134492/154857160-6d7d1086-0e65-4fc5-bce9-7ea3132f9160.png)



## Components

1) Microcontroller,

2) Voltage and Current controlling unit

3) Smart cart

4) Relay 

5) Liquid Crystal Display (LCD). 

## Voltage Sensor 

* Energy meter IC (AD7751) is biased around the neutral wire.
* A resistor divider is used to provide a voltage signal that is proportional to the line voltage. 
* A voltage divider is made in combination of 1 MΩ resistor and 1 kΩ resistor. 
* The output voltage across the 1 kΩ resistor is applied to the voltage channel of the energy meter IC. 
 
## Current Sensor 

* A current sensor is a device that detects and converts current to an easily measurable output voltage,
* The voltage outputs from a calibrated resistor of 3.335 mΩ connected with the neutral wire is applied to the current channel of the energy meter IC.
 
## Energy Meter IC 

* Energy meter IC has two ADCs that digitizes the voltage and current signals from the supply main. 
* These ADCs are 16-bit second order sigma-delta converters with an over sampling rate of 900 kHz. 
* A high-pass filter in the current channel removes any dc component from the current signal.
* The low frequency output of the energy meter IC is generated by accumulating this real-power information. The output frequency is therefore proportional to the average real-power. 
* This average real-power information can in turn be accumulated by a counter to generate real-energy information.  
 
## Microcontroller 

* Microcontroller is a programmable device which contains a microprocessor, memory, input-output ports etc which can be compared with the microcomputer.
* Microcontroller is a single chip computer. As microcontroller is a low cost programmable device. 
* It is used in the automatic control application.
 
## Smart Card 

* Smart cards can provide personal identification, authentication, data storage, and application processing.  
* Now the consumers have to recharge the smart card from server terminal for further use of energy after finishing the previously recharged units. 
 
## Relay Control Unit
* A relay is an electrically operated switch.
* Five relays each of rating 10A are used. 
* One relay is only used to provide the coil current. 
 
## Display Unit  
* The liquid crystal display controller displays alphanumeric characters and symbols.
* It is used display the status of Energy meter
 
## Power Supply Unit  
* Every electronic circuit needs appropriate power supply for its operation.
* Microcontrollers, Energy Meter ICs, Liquid crystal display and relays operate on ±5 volts supply. 
* For this reason, we have used a ±5 volt power supply.  

# Flow chart for energy meter  

![Drawing1 (1)](https://user-images.githubusercontent.com/99134492/154857196-43847dbc-aad5-4aba-a87a-21ffad261268.png)


