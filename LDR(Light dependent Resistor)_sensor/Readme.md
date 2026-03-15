# LDR Sensor with LED (Arduino)
An LDR (Light Dependent Resistor) is a sensor whose resistance decreases when light falls on it and increases in darkness. It is connected with a fixed resistor to form a voltage divider, which gives an analog voltage that the Arduino reads. This project uses that reading to automatically turn on an LED when the environment gets dark — just like automatic street lights.
## Wiring
```
VCC
|
[LDR]
|
+-----> A0
|
[10kΩ resistor]
|
GND
```
LED is on built-in pin 13.
## How It Works
| Condition | LDR Value | LED |
|-----------|-----------|-----|
| Bright | High | OFF |
| Dark | < 10 | ON |

## Note

Adjust the threshold 10 based on your environment
Open Serial Monitor at 9600 baud to see live readings
