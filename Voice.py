!pip install librosa soundfile numpy
import sounddevice as sd
from scipy.io.wavfile import write

fs = 44100  # Sample rate
seconds = 4  # Duration

print("🎤 
Speak now...")
audio = sd.rec(int(seconds * fs), samplerate=fs, channels=1)
sd.wait()

write("voice.wav", fs, audio)
print("✔
Voice recorded as voice.wav")
import librosa
import numpy as np

# Load audio
audio_path = "voice.wav"
signal, sr = librosa.load(audio_path)

# Extract pitch using librosa
pitches, magnitudes = librosa.piptrack(y=signal, sr=sr)

# Get pitch values
pitch_values = pitches[magnitudes > np.median(magnitudes)]

# Remove zero and tiny noise
pitch_values = pitch_values[pitch_values > 20]

if len(pitch_values) == 0:
    print(" No clear pitch detected. Try speaking louder/clearer.")
else:
    avg_pitch = np.mean(pitch_values)
    print("Average Pitch:", avg_pitch)

    if avg_pitch < 165:
        print(" Detected Gender: **Male Voice**")
    else:
        print(" Detected Gender: **Female Voice**")
Average Pitch: 140.3
Detected Gender: Male Voice
Average Pitch: 210.7
Detected Gender: Female Voice
