import numpy as np
import matplotlib.pyplot as plt

def curve(x, a, b, c):
    return a * (x - b)**2 + c

x = np.linspace(-0.2, 0.5, 1000)

# Main curves
y_top = curve(x, -30, 0, -1.5)
y_bottom = curve(x, 30, 0, 1.5)

# Create the plot
plt.figure(figsize=(10, 8))

# Plot gray curves
for i in np.arange(-0.6, 0.7, 0.2):
    plt.plot(x, curve(x, -30, 0, i-1.5), color='gray', linewidth=0.5)
    plt.plot(x, curve(x, 30, 0, -i+1.5), color='gray', linewidth=0.5)

# Plot main curves
plt.plot(x, y_top, 'k-', linewidth=1.5)
plt.plot(x, y_bottom, 'k-', linewidth=1.5)

# Plot M3 and M13 lines
plt.plot(x, curve(x, -30, 0, -1.3), 'b-', label='M3')
plt.plot(x, curve(x, -30, 0, -1.7), 'r-', label='M13')
plt.plot(x, curve(x, 30, 0, 1.3), 'b-')
plt.plot(x, curve(x, 30, 0, 1.7), 'r-')

# Set labels and title
plt.xlabel('(B - V)$_0$ - (B - V)$_{MSTO}$')
plt.ylabel('M$_v$ - M$_{v,TO}$')
plt.title('Relative age dating')

# Set axis limits and ticks
plt.xlim(-0.2, 0.5)
plt.ylim(2, -5)
plt.xticks(np.arange(-0.2, 0.6, 0.1))
plt.yticks(np.arange(-5, 3, 1))

# Add horizontal and vertical lines
plt.axhline(y=0, color='k', linestyle=':', linewidth=0.5)
plt.axvline(x=0, color='k', linestyle=':', linewidth=0.5)

# Add text annotations
plt.text(0.25, -2.2, '15Gyr', fontsize=10)
plt.text(0.15, -1.4, '9Gyr', fontsize=10)

# Add legend
plt.legend(loc='upper right')

# Show the plot
plt.grid(True, linestyle=':', alpha=0.7)
plt.tight_layout()
plt.show()