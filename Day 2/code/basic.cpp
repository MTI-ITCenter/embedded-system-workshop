// INCLUDES

// MACROS
#define LED_PIN 7
#define BTN_PIN 2
// GLOBAL VARS

// FUNCTION PROTOTYPE

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_PIN, OUTPUT);
  pinMode(BTN_PIN, INPUT);
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(digitalRead(BTN_PIN));
  if (digitalRead(BTN_PIN) == HIGH) {

    digitalWrite(LED_PIN, HIGH);
  } else {
    digitalWrite(LED_PIN, LOW);
  }
  delay(1000);
}
