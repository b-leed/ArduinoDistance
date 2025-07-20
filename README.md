# ArduinoDistance
This is a project that simulates how to exfiltrate lidar like (distance data) from the Arduino Serial monitor for further analysis and visualization with Python.

<img width="262" height="192" alt="image" src="https://github.com/user-attachments/assets/216135e7-c7f0-4ffc-8ea5-997efde7ddf5" /><img width="180" height="290" alt="image" src="https://github.com/user-attachments/assets/7fad62ef-ff5d-4a0e-a055-33a466d775a7" />
![1000048010](https://github.com/user-attachments/assets/1b0be288-5fa4-4343-8695-5d7d309bc5cf)
![1000048011](https://github.com/user-attachments/assets/ea104109-48d0-440c-bf4f-ffc690927fcc)

The diagram above shows how I have designed my Arduino Sensor, with the Ultrasonic Sensor (HC-SR04) connected to a fixed 5V source, and 3 LED's that give visual indicators on the distance recorded by the sensor.

Range Indicators:
\
Less than 13cm: Red Pin lights up\
Less than 35cm: Yellow Pin lights up\
More than 35cm: Green Pin lights up\

The project flow:

The Arduino set-up above records data every 25ms as dictated by the arduino script posted in this repo. This data is then outputted to a serial monitor, to extract this data and store it in a csv file, I have created a python script named "Lidar.py" which will exfiltrate data from the serial monitor via a port (in my case COM5). The data records data every 25ms, therefore it is very easy to construct detailed graph that reduce the uncertainity in measurements. To process this data and constuct a distance-time graph, I have created another script called 'graph.py' which basically constuct a highly detailed but simple graph that allows us to make various measurements about speed and acceleration of the object moving.\

The project goal achieved:
\
This is my first 'public' project that just shows my journey of learning various arduino modules and dive into the world of embedded systems. I would like to get into the science of how Lidar works, so I decided to start off from here.


What I plan on improving:
\
I would ilke to process the data further, and construct box plots for measurements like the mean, median, highest and lowest recorded speed.\
Construct this into a more compact build for portability.\

And Yea, that's it for now. \
thank you for reading this





