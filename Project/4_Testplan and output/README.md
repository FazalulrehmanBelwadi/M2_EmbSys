# **Test Plan and Output**

# High Level Test:
|Test id |Description |Expected i/p |Expected o/p |Actuall o/p |Pass/Fail |            
|---- |---- |---- |---- |----|----|
|HLT1 |Soil Moisture Sensor |Water Conentent of The soil must be sensed |Sensed |Sensed |✅|
|HLT2 |Temprature Sensor | Temprature must be sensed| sensed |sensed |✅ |
|HLT3 |Motion Sensor |Sense the Motion |Sensed |Sensed |✅ |
|HLT4 |LDR |Light intensity must be sensed | Sensed|Sensed |✅ |
       
# Low Level Test:
## Low Level Test for Temperature Sensor (Using Display)
|Test id |Description |Expected i/p |Expected o/p |Actuall o/p |Pass/Fail |
|---- |---- |---- |---- |----|----|
|LLT1.1 |Test for Temperature sensor |for the simulation Temprature sensor is replaced through the Potentiometer(when Potentiometer is at end point) |temp is low |temp is low  |✅ |
|LLT1.2 |Test for Temperature sensor |when Potentiometer is slightly varied reverse beyond normal|temp is high|temp is highs |✅ |

## Low Level Test for Soil Moisture Sensor(Using Pot)
|Test id |Description |Expected i/p |Expected o/p |Actuall o/p |Pass/Fail |
|---- |---- |---- |---- |----|----|
|LLT2.1 |Test for Soil Moisture sensor |for the simulation Soil Moisture is replaced with Potentiometer (When Soil Moisture value<=threshold value(400) |Pump is OFF |Pump is OFF  |✅|
|LLT2.2 |Test for Soil Moisture sensor |  Soil Moisture value > threshold value(400) |Pump is ON |Pump is ON |✅ |

## Low Level Test for Soil Moisture Sensor(Using Display)
|Test id |Description |expected i/p |expected o/p |Actuall o/p |pass/fail |
|---- |---- |---- |---- |----|----|
|LLT2.3 |Test for Soil Moisture sensor |When the Mositure is Normal |Normal Moisture |Normal Moisture |✅ |
|LLT2.4 |Test for Soil Moisture sensor |When the Mositure is Low |Low Moisture |Low Moisture  |✅|


## Low Level Test for Motion Sensor (Using LED)
|Test id |Description |Expected i/p |Expected o/p |Actuall o/p |Pass/Fail |
|---- |---- |---- |---- |----|----|
|LLT3.1 |Test for motion sensor |For the simulation PIR sensor is replaced through the switch(when switch is high) |Led ON  |Led ON |✅ |  
|LLT3.2 |Test for motion sensor |When the Switch is low |Led OFF |Led OFF |✅ |

## Low Level Test for Motion Sensor (Using Display)
|Test id |Description |Expected i/p |Expected o/p |Actuall o/p |Pass/Fail |
|---- |---- |---- |---- |----|----|
|LLT3.3 |Test for motion sensor |When the Switch is High |Motion Detected |Motion Detected |✅ |
|LLT3.4 |Test for motion sensor |When the Switch is Low |Motion not Detected |Motion not Detected |✅|


## Low Level Test for LDR  (using Led)
|Test id |Description |Expected i/p |Expected o/p |Actuall o/p |Pass/Fail |
|---- |---- |---- |---- |----|----|
|LLT4.1 |Test for LDR sensor |For the simulation LDR sensor is varied for value is below 150 LUX (During the Night) |Led is ON |Led is ON |✅|
|LLT4.2 |Test for LDR sensor | For the simulation LDR sensor is varied for value is above 150 LUX (During the Day)|Led is OFF |Led is OFF |✅ |

## Low Level Test for LDR  (using Display)
|Test id |Description |Expected i/p |Expected o/p |Actuall o/p |Pass/Fail |
|---- |---- |---- |---- |----|----|
|LLT4.3 |Test for LDR sensor  | When the value is below 150 LUX|Night is Detected|Night is dectected|✅ |
|LLT4.4 |Test for LDR sensor  | When the value is above 150 LUX|Day is Detected |Day is Detected |✅|

## Tested Output on Temprature Sensor

![Temp is high fan on](https://user-images.githubusercontent.com/99134492/157259913-d1b886da-8691-4667-81c2-ffc78de13655.JPG)

## Tested Output on Soil Moisture Sensor

![Low Moisture Pump is On](https://user-images.githubusercontent.com/99134492/157260068-4d67375d-6c6c-4ea0-ba05-27d45cebd104.JPG)

## Tested Output on Motion Sensor

![Motion is detected LEd is On](https://user-images.githubusercontent.com/99134492/157260141-19bea815-53ea-4ad5-8edd-9c3fdda19c70.JPG)

## Tested Output on LDR Sensor

![Night detected Led is on](https://user-images.githubusercontent.com/99134492/157260241-0aa74e74-d28b-4c59-bd24-8f78d818197f.JPG)

# Output  of All Sensors
 
https://user-images.githubusercontent.com/99134492/157260622-3f48fac0-69c9-45b8-b0c0-fa79945672bb.mp4

