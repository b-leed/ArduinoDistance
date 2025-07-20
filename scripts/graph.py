import pandas as pd
import matplotlib.pyplot as plt

df = pd.read_csv('.venv/distance_measurements.csv')


df = df[df['distance_cm'] > 0]
df = df[df['distance_cm'] < 400] 


plt.figure(figsize=(10, 6))
plt.plot(df['timestamp'], df['distance_cm'], marker='o', linestyle='-', color='dodgerblue')


plt.title("Distance vs Time", fontsize=16)
plt.xlabel("Time (ms)", fontsize=14)
plt.ylabel("Distance (cm)", fontsize=14)
plt.grid(True)


df['smooth'] = df['distance_cm'].rolling(window=3).mean()
plt.plot(df['timestamp'], df['smooth'], color='orange', label='Smoothed')


plt.tight_layout()
plt.savefig(".venv/distance_plot.png", dpi=300)
plt.show()
