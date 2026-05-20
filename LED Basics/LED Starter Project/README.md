![Circuit Diagram](../../Assets/LED%20Starter.png)

# Project Overview: Sequential 3-LED Circuit

This circuit diagram illustrates a completed microcontroller built inside Autodesk Tinkercad. The project demonstrates how to interface an Arduino Uno R3 with a solderless breadboard to control multiple external outputs sequentially through custom software timing loops.

## 🔌 Hardware Architecture & Wiring Breakdown

* **Microcontroller Unit**: An Arduino Uno R3 serves as the master controller, powered and programmed via USB connection.
* **Shared Power Rails**: The Arduino's **5V** (red wire) and **GND** (black wire) pins are routed directly to the bottom power rails of the breadboard, establishing a shared electrical grid across the prototyping surface.
* **Digital Output Interfacing**: Three independent digital I/O channels are utilized to drive the component animation sequences:
  * **Pin 13 (D13)** is wired directly to the positive **Anode** (bent leg) of the **Red LED** via red jumper wire.
  * **Pin 12 (D12)** is wired directly to the positive **Anode** (bent leg) of the **Yellow LED** via yellow jumper wire.
  * **Pin 11 (D11)** is wired directly to the positive **Anode** (bent leg) of the **Green LED** via green jumper wire.

## ⚡ Overcurrent Protection & Circuit Logic

To protect the light-emitting diodes from thermal damage and burnout, three individual **current-limiting resistors** are integrated into the circuit. Each resistor safely bridges the negative **Cathode** (straight leg) of an LED to the common ground rail (indicated by the brown-red-brown color bands). 

When the compiled C++ script pulls a digital pin to a `HIGH` state (5V), current flows through the corresponding LED and resistor into Ground, illuminating the bulb in a predictable chasing animation sequence.

