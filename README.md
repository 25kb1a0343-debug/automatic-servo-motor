# Automatic Servo Motor Control

An Arduino-based project that automatically controls a servo motor based on sensor inputs or preset automated logic. Included are circuit schematics, Wokwi simulation configuration, and the microcontroller source code.

## 📁 Repository Structure

* `sketch.ino` - Main Arduino C++ code controlling the servo motor.
* `diagram.json` - Wokwi simulation diagram definition.
* `wokwi-project.txt` - Wokwi project configuration metadata.
* `libraries.txt` - Required Arduino libraries for the project.
* `circuit diagram.png` - Visual circuit connection and wiring diagram.

## 🛠️ Hardware Requirements

* **Microcontroller:** Arduino (Uno / Nano / ESP32, depending on setup)
* **Actuator:** Servo Motor (e.g., SG90 or MG90S)
* **Power Supply:** External 5V power supply (recommended for physical servo)
* **Wires & Breadboard:** Jumper wires

## 🚀 Getting Started

### 1. Online Simulation (Wokwi)
You can test this project directly online without physical hardware:
1. Open [Wokwi Simulator](https://wokwi.com/).
2. Load the contents of `diagram.json` and `sketch.ino` into a new project.
3. Ensure the dependencies listed in `libraries.txt` are added to the library manager.
4. Run the simulation.

### 2. Physical Setup (Arduino IDE)
1. **Connections:** Connect your servo motor to the Arduino pins according to `circuit diagram.png`:
   * **VCC (Red):** 5V Power Supply
   * **GND (Black/Brown):** Common Ground (Arduino GND + External Power GND)
   * **Signal (Orange/Yellow):** Designated PWM Control Pin
2. **Setup IDE:** Open `sketch.ino` in the Arduino IDE.
3. **Libraries:** Install any required libraries specified in `libraries.txt` via **Tools > Manage Libraries**.
4. **Upload:** Select your board and COM port, then upload the sketch.

## 📄 License

Distributed under the MIT License. See `LICENSE` for more information (if applicable).# automatic-servo-motor
