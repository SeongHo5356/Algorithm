import numpy as np
import pandas as pd
import matplotlib.pyplot as plt

# Read Isochrone's csv file and M3 & M13
iso9gyr = pd.read_csv('Isochrone 9Gyrs.csv')
iso10gyr = pd.read_csv('Isochrone 10Gyrs.csv')
iso11gyr = pd.read_csv('Isochrone 11Gyrs.csv')
iso12gyr = pd.read_csv('Isochrone 12Gyrs.csv')
iso13gyr = pd.read_csv('Isochrone 13Gyrs.csv')
iso14gyr = pd.read_csv('Isochrone 14Gyrs.csv')
M3 = pd.read_csv('M3_fidu.csv')
M13 = pd.read_csv('M13_fidu.csv')

# Graph
plt.figure(figsize=(30,16))

plt.plot(iso9gyr['B-V'], iso9gyr['Mv'], color='blue')
plt.plot(iso10gyr['B-V'], iso10gyr['Mv'], color='blue')
plt.plot(iso11gyr['B-V'], iso11gyr['Mv'], color='blue')
plt.plot(iso12gyr['B-V'], iso12gyr['Mv'], color='blue')
plt.plot(iso13gyr['B-V'], iso13gyr['Mv'], color='blue')
plt.plot(iso14gyr['B-V'], iso14gyr['Mv'], label='[Fe/H]=-1.500558, Z=0.001000, Y=0.232000', color='blue')
plt.plot(M3['(B-V)o'], M3['Mv'], label='M3', color='green')
plt.plot(M13['(B-V)o'], M13['Mv'], label='M13', color='red')

# 축 범위 설정
plt.xlim(0.32, 0.52)  # x축 (B-V) 범위
plt.ylim(3.2, 4.6)    # y축 Mv 범위 (y축은 등급이 낮을수록 밝으므로 반전됨)

# 그래프 설정
plt.xticks(np.arange(0.32, 0.5, 0.02))
plt.yticks(np.arange(3.2, 4.6, 0.2))
plt.gca().invert_yaxis()  # 등급이 낮을수록 밝으므로 y축 반전
plt.xlabel('(B-V)o')
plt.ylabel('Mv')
plt.title('M3 & M13 to Y2 Isochrone')
plt.legend()

plt.grid(False)
plt.show()
