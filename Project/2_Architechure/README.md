# **BLOCK DIAGRAM**!

![Drawing4 (1)](https://user-images.githubusercontent.com/99134492/155675260-0303b337-a058-497f-8ced-7505e3504799.png)

## BLOCK DIAGRAM DISCRIPTION:

### Microcontroller:

* A microcontroller (MCU for microcontroller unit) is a small computer on a single metal-oxide-semiconductor (MOS) integrated circuit (IC) chip.
* A microcontroller contains one or more CPUs (processor cores) along with memory and programmable input/output peripherals.
* ATmega16 is 8-bit AVR microcontroller with 32 I/O pins. It is interfaced with sensors and character LCD to design the circuit of this project.

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

### IR Sensors:

* There are two IR sensor modules used in the project. The two modules are used to detect entrance and exit of a visitor. 
* Each sensor module is built from a pair of IR Transmitter and IR Receiver. 
* The emitter is simply an IR LED and the detector is simply an IR photodiode which is sensitive to IR light of the same wavelength as emitted by the IR LED.

### LEDs:

* There are 4 LEDs interfaced at bits 0, 1, 2, and 3 of Port B of ATmega16. 
* These LEDs are for demonstration purpose to show control of lighting in the garden. In a practical version of the circuit, there could be LED lights controlled through relays by the controller.

### Voltage regulator

A voltage regulator is a circuit that creates and maintains a fixed output voltage, irrespective of changes to the input voltage or load conditions

### DC Motor:

A DC motor is interfaced at bit 5 of Port D of the AVR. This motor is for demonstration purpose to show control of water pump by the controller.

### Power Supply: 

* The circuit can be powered by a battery and 5V regulator IC like 7805. 
* It can also be powered through AC mains by using a step down transformer and rectifier circuit with 7805 voltage regulator.

# User Case Diagram :

![1](https://user-images.githubusercontent.com/99134492/155676081-debe67f3-91bd-4d62-8f0a-b8d002b56f3a.jpg)



# Sequence Diagram :
![23](https://user-images.githubusercontent.com/99134492/155676605-d07b9abc-2b9c-4b74-aab7-fc567d87d7c0.jpg)

# Flow chart
![s1 drawio (1)](https://user-images.githubusercontent.com/99134492/155839733-247bfddc-70c7-4c98-93a5-3c275bd4a668.png)
