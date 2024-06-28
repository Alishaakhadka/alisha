

// Ultrasonic sensor pins
#define TRIGGER_PIN  12  // Arduino pin tied to trigger pin on the ultrasonic sensor.
#define ECHO_PIN     11  // Arduino pin tied to echo pin on the ultrasonic sensor.
#define MAX_DISTANCE 200 // Maximum distance we want to ping for (in centimeters). Maximum sensor distance is rated at 400-500cm.

NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE); // NewPing setup of pins and maximum distance.

// Motor control pin 
#define ENA 5    // Speed control pin for motor A
#define IN1 6    // Direction control pin 1 for motor A
#define IN2 7    // Direction control pin 2 for motor A
#define ENB 10    // Speed control pin for motor B
#define IN3 8   // Direction control pin 1 for motor B
#define IN4 9    // Direction control pin 2 for motor B

void setup() {
  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(ENB, OUTPUT); N
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  Serial.begin(9600); // Start serial communication for debugging
}

void loop() {
  int distance = sonar.ping_cm(); // Get the distance from the ultrasonic sensor
  
  if (distance > 0 && distance <= 15) { // If an obstacle is detected within 10cm
    // Move backward
    moveBackward();
    delay(500); // Move backward for 1 second

    // Turn right
    turnRight();
    delay(600); // Turn right for 1 second
  } else {
    // Move forward
    moveForward();
  }
}

void moveForward() {
  analogWrite(ENA, 120); // Adjust the speed here (0-255)
  analogWrite(ENB, 120); // Adjust the speed here (0-255)
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void moveBackward() {
  analogWrite(ENA, 120); // Adjust the speed here (0-255)
  analogWrite(ENB, 120); // Adjust the speed here (0-255)
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

void turnRight() {
  analogWrite(ENA, 1120); // Adjust the speed here (0-255)
  analogWrite(ENB, 120); // Adjust the speed here (0-255)
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}
