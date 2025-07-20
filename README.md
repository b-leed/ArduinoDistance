# ArduinoDistance
This is a project that simulates how to exfiltrate lidar like (distance data) from the Arduino Serial monitor for further analysis and visualization with Python.

<img width="262" height="192" alt="image" src="https://github.com/user-attachments/assets/216135e7-c7f0-4ffc-8ea5-997efde7ddf5" /><img width="262" height="192" alt="image" src="https://github.com/user-attachments/assets/7fad62ef-ff5d-4a0e-a055-33a466d775a7" />
![1000048010](https://github.com/user-attachments/assets/1b0be288-5fa4-4343-8695-5d7d309bc5cf)
![1000048011](https://github.com/user-attachments/assets/ea104109-48d0-440c-bf4f-ffc690927fcc)

The diagram above shows how I have designed my Arduino Sensor, with the Ultrasonic Sensor (HC-SR04) connected to a fixed 5V source, and 3 LED's that give visual indicators on the distance recorded by the sensor.

Range Indicators:

Less than 13cm: Red Pin lights up
Less than 35cm: Yellow Pin lights up
More than 35cm: Green Pin lights up

