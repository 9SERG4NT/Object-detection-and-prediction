IoT and Deep Learning-Based Object Detection System

🚀 Overview

This project implements an IoT-integrated Deep Learning system for real-time object detection and autonomous vehicle decision-making. The system predicts:

✅ Stopping Time

✅ Object Position

✅ Recommended Vehicle Actions (Accelerate, Decelerate, Stop)


It uses ultrasonic sensors, cameras, and a TensorFlow-based CNN model, outperforming traditional ML models and deep learning architectures like YOLO and Faster R-CNN.

🏗 Project Workflow

1️⃣ Data Collection: Real-time sensor data from ultrasonic sensors and cameras.

2️⃣ Preprocessing: Noise reduction, feature extraction, and normalization.

3️⃣ Model Training: A TensorFlow-based CNN trained on labeled datasets.

4️⃣ Real-Time Inference: The model processes sensor data for stopping time, object position, and recommended action prediction.

5️⃣ Vehicle Control Decision: The system sends appropriate control signals based on object proximity.

![image](https://github.com/user-attachments/assets/2b7bdb5b-43ac-4c7b-bfeb-32e2039df60c)


🔥 Key Features

✔ High Accuracy: Achieves 98.7% stopping time accuracy and 97.9% action recommendation accuracy.

✔ IoT-Integrated: Uses Raspberry Pi/NVIDIA Jetson Nano for real-time edge computing.

✔ Deep Learning Model: Outperforms YOLOv4 and Faster R-CNN in accuracy.

✔ Simulation & Real-World Testing: Verified in TINKERCAD and real-world conditions.

✔ Collision Prevention: Activates emergency braking in critical situations.


📊 Performance Metrics

Model	Stopping Time Accuracy (%)	Predicted Position Accuracy (%)	MSE	Recommended Action Accuracy (%)

![image](https://github.com/user-attachments/assets/76327db9-8916-4eda-87a6-0bc412a51668)

🛠 Tech Stack

🔹 Programming Languages: Python

🔹 Frameworks & Libraries: TensorFlow, OpenCV, NumPy, Pandas

🔹 Hardware: Ultrasonic Sensors, Camera Module

🔹 Tools: TINKERCAD (Simulation), Jupyter Notebook, Google Colab

