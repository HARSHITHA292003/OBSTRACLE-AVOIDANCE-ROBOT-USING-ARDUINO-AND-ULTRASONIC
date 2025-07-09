# 🚗 Obstacle Avoidance Robot using Arduino and Ultrasonic Sensor

This project implements an **autonomous obstacle avoidance robot** using an **Arduino Uno**, an **HC-SR04 ultrasonic sensor**, a **servo motor**, and an **L298N motor driver**. The robot scans its surroundings and intelligently changes direction to avoid obstacles without any manual control or wireless input.

---

## 🔧 Hardware Components

| Component                          | Quantity | Description                                        |
|------------------------------------|----------|----------------------------------------------------|
| Arduino Uno                        | 1        | Microcontroller board                              |
| HC-SR04 Ultrasonic Sensor          | 1        | Measures distance to obstacles                     |
| Servo Motor (SG90)                 | 1        | Rotates the ultrasonic sensor to scan directions   |
| L298N Motor Driver                 | 1        | Controls two DC motors                             |
| DC Motors (Geared)                 | 4        | Drive wheels for the robot                         |
| Robot Chassis + Wheels             | 1 Set    | Mechanical base of the robot                       |
| 9V Battery or 2000mAh Battery(used)| 1        | Powers the motors and Arduino                      |
| Jumper Wires                       | –        | Used for all circuit connections                   |

---

## 🧠 Working Principle

1. **Distance Measurement**:  
   The ultrasonic sensor mounted on the servo motor scans in different directions (left, center, right) to detect obstacles.

2. **Angle-Based Scanning**:  
   The servo rotates to 0°, 90°, and 180°, and captures distance data at each point.

3. **Decision Making**:  
   The Arduino compares the distances and chooses the best direction to move.

4. **Motor Control**:  
   Based on the chosen direction, the L298N motor driver moves the robot forward, turns left/right, or stops.

---

## 📂 Project Structure

| File                    | Description                                  |
|-------------------------|----------------------------------------------|
| `ultrasonic.ino`  | Arduino code for controlling the robot logic |
| `README.md`             | This documentation file                      |
| `Obstacle Avoiding Robot- circuit diagram.jpg`   | Wiring and connection diagram                |


---

## 📝 Arduino Code Summary

The Arduino sketch:
- Controls the servo to rotate the ultrasonic sensor.
- Reads distance data at each position.
- Decides movement based on minimum obstacle presence.

### Sample Logic Table

| Direction Scanned | Distance > Threshold | Action       |
|-------------------|----------------------|--------------|
| Center            | ✅ Yes               | Go Forward   |
| Left              | ✅ Yes               | Turn Left    |
| Right             | ✅ Yes               | Turn Right   |


---

## 🔌 Circuit Diagram

![Obstacle Avoiding Robot- circuit diagram](https://github.com/user-attachments/assets/3f77edda-f76e-4d50-a7ea-901af7f48335)


> Key connections:
- HC-SR04:  
  - Trigger → D9  
  - Echo → D8  
- Servo Signal → D10  
- Motor Driver IN1–IN4 → D3, D4, D5, D6 (can vary)  
- 2000mAh Battery → Motor Driver power input  
- Arduino 5V/GND shared with Servo and HC-SR04 

---


## 🚀 Future Enhancements

- Integrate **Bluetooth for manual override**
- Add **infrared sensors** for edge/line detection
- Include **speed control** via PWM
- Use **Li-ion rechargeable battery pack**
- Improve scanning logic with **PID control**

---

## 👩‍💻 Author
  Developed by HARSHITHA ARUNACHALA Undergraduate Student, B.E. Electronics and Communication Engineering (ECE)   
  GitHub: [@HARSHITHA292003](https://github.com/HARSHITHA292003)

---

