!pip install scikit-image
import os
import warnings
warnings.simplefilter('ignore')

import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
# %matplotlib inline  # (optional for notebook)
warnings.simplefilter('ignore')import numpy as np
import cv2
from matplotlib import pyplot as plt

# Load image
img = cv2.imread("your_image.jpg")          # Put your image file name here
img = cv2.cvtColor(img, cv2.COLOR_BGR2RGB)  # Convert BGR → RGB for display

# Convert to Black & White
bw = cv2.cvtColor(img, cv2.COLOR_RGB2GRAY)

# Display both
plt.figure(figsize=(10,5))

plt.subplot(1,2,1)
plt.imshow(img)
plt.title("Original Color")
plt.axis("off")

plt.subplot(1,2,2)
plt.imshow(bw, cmap='gray')
plt.title("Black & White")
plt.axis("off")

plt.show()
from fer import FER
import matplotlib.pyplot as plt
import cv2

# Load image
img = cv2.imread("emoji_image.jpg")
img = cv2.cvtColor(img, cv2.COLOR_BGR2RGB)

# Emotion detector
emotion_detector = FER()

# Detect emotions
result = emotion_detector.detect_emotions(img)

plt.imshow(img)
plt.axis("off")
plt.show()

print("Emotion Output:", result)
Emotion Output: [{'emotions': 
{'angry': 0.02, 'happy': 0.78, 'sad': 0.
01, ... }}]
if result:
    emotions = result[0]['emotions']
    sentiment = max(emotions, key=emotions.get)
    print("Detected Sentiment:", sentiment)
else:
    print("No face detected")
