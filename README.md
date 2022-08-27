## Serial Communication Between STM32 & ESP8266(ESP32)
This is a SImple Demostration of Serial Communication between two microcontroller.

For using Arduino IDE serial monitor for stm32, we nedded a FTDI.

But in This simple project you doesnot need any FTDI connector.

The main idea is Transmit Data from stm32 and Receive Data to esp8266. And Finally Show in Serial Monitor.


## STM32 main code 
### Put the code in ``/* USER CODE BEGIN 0 */ ``
```c
    uint8_t Buffer[50]={'\0'} ;
    int Buffer_Length=0;
    uint32_t Delay = 1000;
    uint32_t Timeout=200;
```
### Put the code in `While loop` :

```cpp
    Buffer_Length = sprintf(Buffer,"Hello I am STM32_UART.\r\n");
	HAL_UART_Transmit(&huart1, Buffer, Buffer_Length, Timeout);
	HAL_Delay(Delay);
```

## Find main.c at 


```c 
TN_UART/Core/src/main.c
```
## STM32 Basic Configaration 

## <a href="./STMSETUP.md" >see</a>


[Watch Video](https://www.linkedin.com/posts/partha-singha-roy-33b983201_projects-github-arduino-activity-6969266589732909056-wlkU?utm_source=share&utm_medium=member_desktop)