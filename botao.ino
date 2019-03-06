void setup() {
    pinMode(2, INPUT);
    pinMode(3, OUTPUT);     
 }

void loop() {
  int r1 = digitalRead(2);

  if (r1 == 1) {
      digitalWrite(3, HIGH);
  } else {
      digitalWrite(3, LOW);
  }
 }
