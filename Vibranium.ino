#define ADC_PIN 34

void setup() {
  Serial.begin(115200);
  pinMode(ADC_PIN, INPUT);
  
}

void loop() {
  int rawValue = analogRead(ADC_PIN);
  float voltage = ((rawValue / 4095.0) * 3.3) + 0.10;

  Serial.println(voltage);

  delay(500);
}
