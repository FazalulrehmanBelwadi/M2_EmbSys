# **GREENHOUSE MONITORING AND AUTOMATION SYSTEM**

# TABLE OF CONTENT:

|SLNO	|CONTENT|
|---- |----|
|1 |Introduction|
|2 |Objectives |
|3 |SWOT Analysis|
|4 |Requriments |
|5 |Block Diagram|
|6 |Advantages and Disadvantages|
# ABSTRACT

Greenhouse Monitoring and Automation System is the technical approach in which the farmers in the rural areas will be benefitted by automatic monitoring and controlling greenhouse environment. It replaces the direct supervision of the human. Greenhouse is abuilding where plants are grown in a controlled manner. In general, greenhouses are usually affected by the weather and plant diseases, as a result, their yield can be minimized and thus income is reduced. Through the analysis of the current situation of greenhouses, this system proposes a low-cost solution for identifying of infected plant leaves of agricultural greenhouse. The proposed system is an embedded system which will closely monitor the microclimatic parameters of a greenhouse on a regular basis round the clock for cultivation of crops or specific plant species. The purpose of this work is to design a labour free, sensor based greenhouse monitoring system. The system comprises of microcontroller and sensors. Since a microcontroller is used as the heart of the system, it makes the set-up low-cost and effective nevertheless and flexible. This embedded system has three sensors, they are temperature sensor, ldr sensor and
soil moisture sensor. As the system also employs an LCD display for continuously alerting the user about the condition inside the greenhouse, the entire set-up becomes user friendly. Nowadays due to urbanization and lack of land availability there is a great need to construct the Greenhouses which will be reserved mainly for growing crops

# INTRODUCTION

* Greenhouse, also called glasshouse, building designed for the protection of tender or out-of-season plants against excessive cold or heat

* A green house is where plants such as flowers and vegetables are grown. Greenhouses warmup during the day when sun-rays penetrates through it, which heats the plant, soil and structure.

* Green houses help to protect crops from many diseases, particularly those that are soil borne and splash onto plants in the rain. 

* Greenhouse effect is a natural phenomenon and beneficial to human being. Numerous farmers fail to get good profits from the greenhouse crops for the reason that they can’t manage two essential factors, which determines plant growth as well as productivity.

* Green house temperature should not go below a certain degree, High humidity can result to crop transpiration, condensation of water vapour on various greenhouse surfaces, and water evaporation from the humid soil.

* To overcome such challenges, this greenhouse monitoring and automation system comes to rescue. This project demonstrates the design and implementation of a various sensors for greenhouse environment to monitoring and controlling.

# OBJECTIVES:

 The main objective of this project is to Monitor and Control the Greenhouse by means of measuring and maintaining volumetric water content in soil, temperature ,humidity and finally display all relevant data in LCD 

# SWOT ANALYSIS

## STRENGTHS

* Reliability of crop increases in green house cultivation.
* Expands your growing season.
* Expanding the variety among your produce.
* Minimize external threats to your crop.

## WEAKNESS

* High upfront and operating expenses.
* Lack of pollination.

## OPPORTUNITIES

* Advancement in Technology.
* Improvements in automation system.

## THREATS

* Failure of Power supply leads to shut down of whole system.

# 4W's And 1H

## Who:
This system is used by Farmers,Gardener, Horticulturist and People who want plant in smaller area.

## What:
This is used to monitor the various activity of Greenhouse.

## When:
This Greenhouse Monitoring and Automation System is used when special care for the plants or crop is needed.

## Where:
This Greenhouse Monitoring and Automation System is used in Residential , Commercial and Agriculture domain.

## How:
This Greenhouse Monitoring and Automation System System can bs used by installing various sensor across the green house.

# REQUIREMENTS

## High level requirements:

|RID	|DESCRIPTION |
|---- |----|
|HLR1	|To measure the volumetric water content of the soil|
|HLR2	|Turn on the Motor volumetric water content of the soil decreases|
|HLR3	|To sense the Tempreture for increasing and decreasing values|
|HLR4	|To detect the day or night |
|HLR5 |To operate pump when desired|
|HLR6 |To detect entrance and exit of any visitor|
|HLR7 |Display all measured value in LCD |

## Low Level Requirement:

|RID	|DESCRIPTION |
|---- |----|
|LLR1	|Should Turn on the LED when tempreture increases beyond threshold |
|LLR2	|Notify the water conetent of the soil usig LED|
|LLR3 |Notify the entrance and exit of any visitor through LED|
|LLR4 |To Control the lights of the greenhouse|

# BLOCK DIAGRAM:

![Drawing4 (1)](https://user-images.githubusercontent.com/99134492/155565141-1ccb53c9-bdc5-4cb2-9a8c-8b3bd90357bd.png)


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

## User Case Diagram :

![1](https://user-images.githubusercontent.com/99134492/155676081-debe67f3-91bd-4d62-8f0a-b8d002b56f3a.jpg)

## Sequence Diagram :

![23](https://user-images.githubusercontent.com/99134492/155676605-d07b9abc-2b9c-4b74-aab7-fc567d87d7c0.jpg)

## Flow Chart
![s1 drawio (1)](https://user-images.githubusercontent.com/99134492/155839733-247bfddc-70c7-4c98-93a5-3c275bd4a668.png)

# ADVANTAGES AND DISADVANTAGES:

## Advantages :

* Can accommodate both overhead (misting,) and root zone (drip, NFT, flood tables) watering systems.
* Greatly reduce or eliminate labor and the potential for human error in mixing feed formulas.
* Water and fertilizer use can be minimized as these systems can more readily accommodate recycling of water.
* Saves time as similar plants can be grouped together and watered in single or multiple zones.
* Sensors can monitor how much water and fertilizer your plants are getting/needing.
* Growers can program the control based on easy settings such as (time, moisture, EC, etc.) and/or make decisions based on outside weather conditions.
* Grower can remotely monitor control crop based on individual zone watering needs while managing the entire cycle of the crop.
* Even, consistent watering cycles to produce a more consistent crop with better crop yields.
* Can create a zero runoff system. As in Europe, we’re seeing more stringent water use restrictions in Canada where it is now law not to discard of waste water.
* Extreme ROI: payback can be achieved for all sizes of greenhouse projects but generally speaking, the larger the project, the more economically feasible.

## Disadvantages 

* High upfront and operating expenses
* Lack of pollination
* Careful precautions must be taken to eliminate any pest or diseases to make sure your next crop won’t be affected


# FUTURE SCOPE

* The circuit can be improved in many ways and can be used in wide applications. It can be placed and operated in any of the environmental conditions.
*  Non-conventional energy sources such as solar panels, wind mills are used to supply power to the automatic greenhouse equipment. The energy produced can be used for automation purpose like in home to control light and fan. In our project we have made a prototype taking only three sensor for light, temperature and soil moisrure into consideration. 
*  We can use this system for many sensors as a future use of this project. And in the future by using limited number of sensors we can maintain the greenhouse at specific environmental conditions. 
* Also we can use a 360 degree camera module to click pictures of leaves from various angles so that we can detect health of a plant and distinguish between healthy and infected plant and detect the exact disease which a plant can have by this proposed project in the future.
