#  ESP8266-CAR: WiFi Controlled All-Wheel Drive Robot Car

PROJECT OVEREVIEW :
The ESP8266-CAR is an all-wheel drive robotic car controlled wirelessly via a mobile app. It demonstrates integration of Arduino Uno, ESP8266 WiFi module, and dual L298N motor drivers to create a fully controllable robotic vehicle. 

I am using "ESP8266 WiFi Robot Car" to send signal from mobile to ESP8266 , with help of code i have filtered raw data coming from mobile.

Here ESP8266 is used to recive wireless data from mobile and then i have trasferd this data to the arduino uno and their arduino uno is controlling the Motor driver on the basis of data given by ESP8266 , i have used Serial communication to treansfer data from ESP8266 to Arduino uno.

WORKING OF EVERY COMPONENTS :
1. Mobile App: Sends commands ('F', 'B', 'L', 'R', 'S') via WiFi.  
2. ESP8266: Receives raw data and filters it to a single character command.  
3. Arduino Uno: Reads the character via Serial communication, interprets the command, and controls the motor drivers accordingly.  
4. L298N Motor Drivers: Drive the four DC motors to move the car forward, backward, left, right, or stop. 

COMPONENTS :
- Microcontroller: Arduino Uno  
- Wireless Module: ESP8266 (NodeMCU)  
- Motor Drivers: 2 × L298N  
- Motors: 4 × DC motors   
- Battery: 12V Li-ion battery (power motors and Arduino)  
- Mobile App: ESP8266 WiFi Robot Car  
