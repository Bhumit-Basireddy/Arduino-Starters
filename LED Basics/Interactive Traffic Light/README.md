![Circuit Diagram](../../Assets/Interactive%20Traffic%20light.png)
# Project Overview: Sequential 3-LED Traffic Light Circuit

This circuit diagram illustrates a completed microcontroller project built inside Autodesk Tinkercad. The project demonstrates how to interface an Arduino Uno R3 with a solderless breadboard to control multiple external outputs and an input sensor sequentially through custom software timing loops.

## 🔌 Hardware Architecture & Wiring Breakdown

* **Microcontroller Unit**: An Arduino Uno R3 serves as the master controller, powered and programmed via USB connection.
* **Shared Power Rails**: The Arduino's 5V (red wire) and GND (black wire) pins are routed directly to the bottom power rails of the breadboard, establishing a shared electrical grid across the prototyping surface.
* **Digital Output Interfacing**: Three independent digital I/O channels are utilized to drive the component animation sequences:
  * **Pin 2 (D2)** is wired directly to the positive Anode (bent leg) of the Green LED via a green jumper wire.
  * **Pin 3 (D3)** is wired directly to the positive Anode (bent leg) of the Yellow LED via a yellow jumper wire.
  * **Pin 4 (D4)** is wired directly to the positive Anode (bent leg) of the Red LED via a red jumper wire.
* **Digital Input Interfacing**:
  * **Pin 6 (D6)** is wired to a momentary push button switch via a black jumper wire, acting as the trigger mechanism for the traffic sequence.

## ⚡ Overcurrent Protection & Circuit Logic

To protect the light-emitting diodes from thermal damage and burnout, three individual current-limiting resistors are integrated into the circuit. Each resistor safely bridges the negative Cathode (straight leg) of an LED to the common ground rail. 

The push button features a pull-down resistor configuration connected to the ground rail. This ensures the digital input pin reads a stable `LOW` state until the button is pressed, which pulls the pin to a `HIGH` state (5V).

## 🚦 System Operation & Software Sequence

When the compiled C++ script runs, the system defaults to a standby state with the Green LED illuminated. Upon detecting a button press on Pin 6, the system executes the following hardcoded sequential loop:

1. **Green LED** turns off immediately.
2. **Yellow LED** illuminates and holds for a duration of 3 seconds.
3. **Yellow LED** turns off, and the **Red LED** illuminates, holding a solid state for a duration of 10 seconds.
4. **Red LED** turns off, and the system resets back to the standby state, turning the **Green LED** back on.
