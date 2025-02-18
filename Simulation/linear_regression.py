import numpy as np
import matplotlib.pyplot as plt

def linear_regression(x, y):
    n = len(x)
    mean_x = sum(x) / n
    mean_y = sum(y) / n
    slope = (sum((x[i] - mean_x) * (y[i] - mean_y) for i in range(n)) /
             sum((x[i] - mean_x) ** 2 for i in range(n)))
    intercept = mean_y - slope * mean_x
    return slope, intercept

# Sample data
x = np.array([1, 2, 3, 4, 5])
y = np.array([2, 3, 4, 5, 6])

slope, intercept = linear_regression(x, y)
print("Slope:", slope)
print("Intercept:", intercept)

# Plot the data points and the best-fit line
plt.figure(figsize=(8, 6))
plt.scatter(x, y, color='blue', label='Data Points')
plt.plot(x, slope * x + intercept, color='red', label='Best-Fit Line')
plt.xlabel('X')
plt.ylabel('Y')
plt.title('Linear Regression')
plt.legend()
plt.grid(True)
plt.show()