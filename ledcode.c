#include <WiFi.h>

const int ledPin = 2; // Set the LED pin

void setup() {
  pinMode(ledPin, OUTPUT); // Initialize the LED pin as an output
}

void loop() {
  digitalWrite(ledPin, HIGH);   // Turn the LED on (HIGH is the voltage level)
  delay(1000);                  // Wait for a second
  digitalWrite(ledPin, LOW);    // Turn the LED off by making the voltage LOW
  delay(1000);                  // Wait for a second
}
