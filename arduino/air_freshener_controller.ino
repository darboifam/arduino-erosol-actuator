#include <Servo.h>

Servo myServo;

const int SERVO_PIN = 9;
const int MIN_US = 500;      // Minimum pulse width = 0°
const int MAX_US = 2500;     // Maximum pulse width = 270°
const int TOTAL_DEG = 270;   // Total servo travel range in degrees

// Target position measured back from the maximum end (270° side)
const int TARGET_DEG_FROM_MAX = 30;

int degreesFromMaxToUs(int deg) {
  deg = constrain(deg, 0, TOTAL_DEG);
  int absoluteDeg = TOTAL_DEG - deg;
  return MIN_US + ((long)(MAX_US - MIN_US) * absoluteDeg) / TOTAL_DEG;
}

void setup() {
  myServo.attach(SERVO_PIN, MIN_US, MAX_US);
}

void loop() {
  int targetUs = degreesFromMaxToUs(TARGET_DEG_FROM_MAX);

  // Move to the home position, defined as 30° back from the max end
  myServo.writeMicroseconds(targetUs);

  // Move to the maximum extreme position (270° end)
  myServo.writeMicroseconds(MAX_US);

  // Stay at the maximum extreme for 3 hours
  delay(10800000);

  // Return to the target/home position
  myServo.writeMicroseconds(targetUs);

  // Stay at the target/home position for 0.5 seconds
  delay(500);
}
