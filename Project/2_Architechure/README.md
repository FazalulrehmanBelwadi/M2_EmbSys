# **BLOCK DIAGRAM**!

![1_Block_diagram](https://user-images.githubusercontent.com/99134492/157261068-613c1ddf-a555-4d2e-a89d-a7395e89461c.png)


## BLOCK DIAGRAM DISCRIPTION:

### Microcontroller:

The Arduino UNO is the best board to get started with electronics and coding. If this is your first experience tinkering with the platform, the UNO is the most robust board you can start playing with. The UNO is the most used and documented board of the whole Arduino family.

### LCD Display:

* LCD stands for Liquid crystal display. 16×2 LCD is named so because it has 16 Columns and 2 Rows. 
* A character LCD is interfaced to the controller to display the ambient temperature and moisture level of the soil.

### Temperature Sensor:

* A temperature sensor is a device, usually an RTD (resistance temperature detector) or a thermocouple, that collects the data about temperature from a particular source and converts the data into understandable form for a device or an observer.
* LM35 is a popular temperature sensor. The sensor has three terminals.

### Soil Moisture Sensor:

* The moisture sensor measures the volumetric water content  of the soil with the help of a sensing probe which must be put into the soil. 
* The sensor module operates between voltages of 3.3 V to 5V.

### LDR Sensor: 

* The LDR sensor is used to detect day or night in this circuit. The LDR sensor is two-terminal light sensitive resistor. 
* It is connected as a voltage divider network at bit 0 of Port A of the ATmega16.

### PIR Motion Sensor
PIR sensor or PIR motion sensor is the kind of sensor that measures the Infrared radiations released from objects and thus identify them as moving or still objects.

### LEDs:

* There are 4 LEDs interfaced at bits 0, 1, 2, and 3 of Port B of ATmega16. 
* These LEDs are for demonstration purpose to show control of lighting in the garden. In a practical version of the circuit, there could be LED lights controlled through relays by the controller.

### Relay
A relay is an electrically operated switch. It consists of a set of input terminals for a single or multiple control signals, and a set of operating contact terminals.


### Voltage regulator

A voltage regulator is a circuit that creates and maintains a fixed output voltage, irrespective of changes to the input voltage or load conditions

### DC Motor:

A DC motor is interfaced at bit 5 of Port D of the AVR. This motor is for demonstration purpose to show control of water pump by the controller.

### Power Supply: 

* The circuit can be powered by a battery and 5V regulator IC like 7805. 
* It can also be powered through AC mains by using a step down transformer and rectifier circuit with 7805 voltage regulator.

# User Case Diagram :
![2_Usercase Diagram](https://user-images.githubusercontent.com/99134492/157261894-21888bba-54e8-48ee-9aa9-f866c0f55519.JPG)


# Sequence Diagram :
![3_Sequence Diagram](https://user-images.githubusercontent.com/99134492/157261924-290015f8-51cb-410d-b2fa-65d7c2b7be8c.jpg)


# Flow chart
![s1 drawio (1)](https://user-images.githubusercontent.com/99134492/155839733-247bfddc-70c7-4c98-93a5-3c275bd4a668.png)
