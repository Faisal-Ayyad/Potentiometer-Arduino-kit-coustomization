
const int LED_PIN = 13;
const int POT_PIN = A0;

int potPosition = 0;
int blinkInterval = 0;

void setup() {
  Serial.begin(9600);    
  pinMode(LED_PIN, OUTPUT);   
}

void loop() {

  potPosition = analogRead(POT_PIN);
  blinkInterval = map(potPosition, 0, 1023, 50, 1000);

  Serial.print("Potentiometer Position: ");
  Serial.print(potPosition);
  Serial.print(", Blink Interval: ");
  Serial.println(blinkInterval);

  digitalWrite(LED_PIN, HIGH);
  delay(blinkInterval / 2);
  digitalWrite(LED_PIN, LOW);
  delay(blinkInterval / 2);
}
