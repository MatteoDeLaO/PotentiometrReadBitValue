// Define the pin connected to the potentiometer
const int potPin = A0;

void setup() {
  // Start the serial communication at 9600 baud rate
  Serial.begin(9600);
}

void loop() {
  // Read and print the potentiometer value (0 to 1023) directly
  Serial.println(analogRead(potPin));

  // Add a small delay to make the output readable
  delay(500);
}

