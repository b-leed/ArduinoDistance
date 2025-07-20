import serial
import csv
from datetime import datetime


serial_val = serial.Serial('COM5', 9600)
csv_file = ".venv\\distance_measurements.csv"
timestamp = 0

with open(csv_file, mode='w', newline='') as file:
    writer = csv.writer(file)
    writer.writerow(["timestamp", "distance_cm"])

    try:
        while True:
            line = serial_val.readline().decode().strip()
            if line:
                try:
                    timestamp += 25
                    distance = float(line)
                    print(f"{timestamp} - {distance:.2f} cm")
                    writer.writerow([timestamp, distance])
                except ValueError:
                    print(f"Ignored: {line}")
    except KeyboardInterrupt:
        print("Recording stopped.")
        serial_val.close()