//Industrial IOT Architecture and Application
//Alviya Rizwan 23BEC1160
int pirPin = 15;  // PIR sensor output pin
int ledPin = 2;   // Optional: LED pin

void setup() {
  Serial.begin(115200);
  pinMode(pirPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int motion = digitalRead(pirPin);
  if (motion == HIGH) {
    Serial.println("🚨 Motion Detected! Sending alert...");
    digitalWrite(ledPin, HIGH);
    delay(1000);  // Avoid spamming
  } else {
    digitalWrite(ledPin, LOW);
  }
}
