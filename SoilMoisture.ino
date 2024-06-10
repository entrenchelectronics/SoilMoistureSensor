const int soilMoisturePin = 2;

void setup() {
  // Initialize the Serial Monitor at a baud rate of 9600
  Serial.begin(9600);
  
  // Set the soil moisture pin as input
  pinMode(soilMoisturePin, INPUT);
}

void loop() {
  // Read the value from the soil moisture sensor
  int soilMoistureValue = digitalRead(soilMoisturePin);

  // Print the soil moisture value to the Serial Monitor
  if (soilMoistureValue == LOW) {
    Serial.println("Soil is wet");
  } else {
    Serial.println("Soil is dry");
  }

  // Wait for a short interval before reading the sensor again
  delay(1000);
}
