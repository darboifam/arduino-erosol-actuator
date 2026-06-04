# Arduino Aerosol Actuator

This project is a timed electromechanical aerosol actuator built around an Arduino Nano. The goal is to automate repeatable spray actuation of a commercial air freshener while also treating the build like a full engineering packaging project instead of just a simple electronics demo.

The project combines actuator control, wiring, mechanism testing, caliper-based measurement, CAD modeling, and custom enclosure design. Components are measured and modeled so the final enclosure can hold the electronics and mechanical parts in fixed, repeatable positions.

## Project Goals

- Actuate a commercial spray nozzle on a timed interval
- Use an Arduino Nano as the controller
- Build a custom-fit enclosure around the real measured components
- Design mounting locations for the servo, controller, wiring, and spray can
- Improve repeatability through controlled positioning and mechanical alignment

## Main Features

- Arduino Nano control
- Servo-based actuation
- Timed spray cycle
- Custom 3D modeled packaging
- Component-first design workflow using caliper measurements
- Expandable for future features like buttons, LEDs, or alternate timing logic

## Hardware

- Arduino Nano
- High-torque servo motor
- Commercial aerosol air freshener can
- 3D printed enclosure components
- Wiring and connectors

## Mechanical Design

The mechanical side of the project focuses on converting servo motion into reliable downward actuation of the spray button. The enclosure is being designed around the real measured geometry of the servo, Nano, and spray can so the entire assembly is packaged as one integrated system.

## Electrical / Control Design

The Arduino Nano outputs the servo control signal and handles the timing logic for repeated actuation. The servo is powered directly from the Nano’s signal path to minimize potential failure.

## Repository Structure

```text
arduino/   -> Arduino code
cad/       -> CAD files, exported models, and screenshots
images/    -> build photos and mechanism photos
wiring/    -> wiring notes or diagrams
docs/      -> extra design notes
