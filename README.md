# Reed Module

#### Project Overview

The Reed Module project demonstrates how to use an Arduino Nano to read the state of a reed switch and control an LED based on the presence of a magnet. Reed switches are simple magnetic sensors commonly used in door sensors, alarm systems, and other applications where the detection of a magnetic field is required.

#### Components Needed

1. **Arduino Nano**
2. **Reed Switch Module**
3. **LED (optional)**
4. **220Ω Resistor (for LED)**
5. **Jumper Wires**
6. **Magnet**

#### Block Diagram


#### Circuit Setup

1. **Connect Reed Switch Module to Arduino Nano:**
   - Connect one end of the reed switch to digital pin 2 on the Arduino Nano.
   - Connect the other end of the reed switch to GND.
   - If using an LED:
     - Connect the anode (longer leg) of the LED to digital pin 13 on the Arduino Nano.
     - Connect the cathode (shorter leg) of the LED to one end of the 220Ω resistor.
     - Connect the other end of the resistor to GND.

#### Instructions

1. **Circuit Setup:**
   - Wire the reed switch and optional LED to the Arduino Nano as described in the circuit setup section.

2. **Code Upload:**
   - Open the Arduino IDE and paste the provided code.
   - Upload the code to the Arduino Nano.

3. **Testing:**
   - Once the code is uploaded, open the serial monitor.
   - Bring a magnet close to the reed switch to close the circuit.
   - The LED will turn on and the serial monitor will display "Magnet detected".
   - Remove the magnet to open the circuit.
   - The LED will turn off and the serial monitor will display "No magnet".

#### Applications

- **Door Sensors:** Use reed switches to detect the opening and closing of doors or windows.
- **Alarm Systems:** Implement reed switches in alarm systems to trigger alerts when a door or window is opened.
- **Position Sensing:** Detect the presence or position of a magnetic object in various applications.

#### Notes

- Adjust the delay in the code to control the rate at which the reed switch state is read and displayed.
- The LED is optional and can be omitted if only the serial monitor output is needed.
- Ensure the reed switch and magnet are properly aligned for reliable operation.

---

🌐 [ProjectsLearner](https://projectslearner.com/learn/arduino-nano-reed-module)  
📧 [projectslearner@gmail.com](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)  

Crafted for you with ❤️ from ProjectsLearner