# **SMALL LEVEL CASE STUDY : ENERGY METER**

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
![Drawing](https://user-images.githubusercontent.com/99134492/154857068-aeefce3c-2f57-43a1-bf36-163b0bc7ba82.png)



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

![Drawing1 (1)](https://user-images.githubusercontent.com/99134492/154857078-56edb766-c86f-4d38-a639-5a8a44e7eba9.png)



# **MID LEVEL CASE STUDY : FITNESS TRACKER WATCH**

 
# INTRODUCTION

Fitness tracker watch is a device for monitoring and tracking fitness-related metrics such as distance walked or run, calorie consumption, and in some cases heartbeat. It is a type of wearable computer. The term is now primarily used for smartwatches that are synced, in many cases wirelessly, to a computer or smartphone for long-term data tracking.

# REQUIREMENTS

## High Level Requirements:

|RID	|DESCRIPTION |
|---- |----|
|HLR1	|To measure heart rate for user |
|HLR2	|To monitor Blood pressure of user |
|HLR3	|To detect and count steps of the user while walking |
|HLR4	|Alert the user for rise in skin tempreture |
|HLR5	|Respond to the Gesture of user |

## Low Level Requirement:
|RID	|DESCRIPTION |
|---- |----|
|LLR1	|Keeping track of time |
|LLR2	|Indicating Baterry Percentage|
|LLR3	|Find My Device|
|LLR4	|Alarm feature|
|LLR5	|Tacks Sleep Time|

# BLOCK DIAGRAM

![Drawing2](https://user-images.githubusercontent.com/99134492/154841270-c15c22e9-0318-4b48-8d4c-c0f526648874.jpeg)

## COMPONENTS OF BLOCK DIAGRAM

* Microcontroller

* Memory Chip

* Voltage regulator

* Gesture Sensor

* Humidity Sensor

* Heart Beat Measurement sensor

* Blood pressure Monitoring

* Tempreture Sensor

* Step measurement Sensor

* Bluetooth

* Accelerometer

* LCD

### Microcontroller

* A microcontroller (MCU for microcontroller unit) is a small computer on a single metal-oxide-semiconductor (MOS) integrated circuit (IC) chip. 
* A microcontroller contains one or more CPUs (processor cores) along with memory and programmable input/output peripherals.
* For fitness tracker low power microcontoller are used (MSP430).

### Memory Chip

* A memory chip is an integrated circuit made out of millions of capacitors and transistors that can store data or can be used to process code.
* Memory chips can hold memory either temporarily through random access memory (RAM), or permanently through read only memory (ROM). 

### Voltage regulator

* A voltage regulator is a circuit that creates and maintains a fixed output voltage, irrespective of changes to the input voltage or load conditions

### Gesture Sensor

* Gesture sensors can instruct the watch to do certain task.
* For example, if a wrist is flicked twice, the call will be disconnected or when the hand is moved in circles the stopwatch will start.
*  Detecting these pre-fed motion is the job of gesture sensors.

### Humidity Sensor

* A humidity sensor is an electronic device that measures the humidity in its environment and converts its findings into a corresponding electrical signal

### Heart Beat Measurement sensor

* Modern fitness tracker use a flashing green light to measure  heart rate from  wrist.
*  Spectroscopy tells us that blood absorbs green light because red and green are opposite each other on the colour wheel. 
* The rear of the fitness tracker contains an optical sensor to detect the reflected light.

### Blood pressure Monitoring

* The Blood Pressure Sensor is a non-invasive sensor designed to measure human blood pressure.

### Tempreture Sensor

* It helps measure your body or skin temperature to keep a constant check on your health.

### Accelerometer

* An accelerometer is a device that measures the vibration, or acceleration of motion of a structure.

### Step measurement Sensor

* It Keeps Record Of The Step walked by the user through the measurment of Accelerometer.

### Bluetooth

* Bluetooth technology allows devices to communicate with each other without cables or wires

### LCD

* LCD (Liquid Crystal Display) is a type of flat panel display which uses liquid crystals in its primary form of operation. 
* It is used to display all the measured data.

# Applications
•	Accountability. 

•	Motivation. .

•	Healthy eating.

•	Set goals.

•	Tracks sleep.

•	Stay Connected.

•	Monitors Heart Rate.

•   Alarm



