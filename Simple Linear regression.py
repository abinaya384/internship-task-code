# Simple Linear Regression - Manual Calculation
# Formula: y = m*x + c

import numpy as np
import matplotlib.pyplot as plt

# Example data (Hours studied vs Marks scored)
x = np.array([1, 2, 3, 4, 5, 6], dtype=float)
y = np.array([2, 4, 5, 4, 5, 7], dtype=float)

# step 1: Calculate mean of x and y
x_mean = np.mean(x)
y_mean = np.mean(y)

# Step 2: Calculate slope (m)
num = np.sum((x - x_mean) * (y - y_mean))
den = np.sum((x - x_mean) ** 2)
m = num / den

# Step 3: Calculate intercept (c)
c = y_mean - m * x_mean

print("Slope (m):", round(m, 2))
print("Intercept (c):", round(c, 2))

# Step 4: Predict y values
y_pred = m * x + c

# Step 5: Predict for a new value
hours = 7
predicted_marks = m * hours + c
print(f"Predicted marks for {hours} hours studied:", round(predicted_marks, 2))

# Step 6: Plot
plt.scatter(x, y, color="blue", label="Actual Data")
plt.plot(x, y_pred, color="red", label="Best Fit Line")
plt.xlabel("Hours Studied")
plt.ylabel("Marks Scored")
plt.title("Simple Linear Re
