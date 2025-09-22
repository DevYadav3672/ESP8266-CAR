# ESP8266-CAR
BASIC INFORMATION :
This car is an all wheel drive car working on arduino uno , 2 L298N motor drivers , ESP8266 for wireless data reciver , 4 Motors.

DESCRIPTION :
I am using "ESP8266 WiFi Robot Car" to send signal from mobile to ESP8266 , with help of code i have filtered raw data coming from mobile.
Here ESP8266 is used to recive wireless data from mobile and then i have trasferd this data to the arduino uno and their arduino uno is controlling the Motor driver on the basis of data given by ESP8266 , i have used Serial communication to treansfer data from ESP8266 to Arduino uno.

WORKFLOW OF PROJECT :
Data(character data 'F','B','S','L','R') is sended by "ESP8266 WiFi Robot Car" app ---> ESP8266(ESP8266 transfer this data to the Arduino uno via Serial communication) --->   

