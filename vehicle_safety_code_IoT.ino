#include <LiquidCrystal.h>

// Define LCD pin connections
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

// Define ultrasonic sensor pin
const int trigPin = 7;
const int echoPin = 7;

long readUltrasonicDistance(int triggerPin, int echoPin) {
  pinMode(triggerPin, OUTPUT);  // Set trigger pin as output
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  digitalWrite(triggerPin, HIGH);  // Send a 10 µs pulse
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  
  pinMode(echoPin, INPUT);  // Set echo pin as input
  return pulseIn(echoPin, HIGH);  // Measure the time for the pulse to return
}

void setup() {
  lcd.begin(16, 2);  // Initialize LCD (16 columns, 2 rows)
  lcd.setCursor(0, 0);
  lcd.print("Distance in cm:");
  delay(1000);  // Initial delay for readability
}

void loop() {
  // Measure distance in cm
  int cm = 0.01723 * readUltrasonicDistance(trigPin, echoPin);

  // Display the current distance on the LCD
  lcd.setCursor(0, 1);  // Move cursor to the second row
  lcd.print("               ");  // Clear the row
  lcd.setCursor(0, 1);
  lcd.print(cm);
  lcd.print(" cm");

  delay(100);  // Short delay to update readings
}
