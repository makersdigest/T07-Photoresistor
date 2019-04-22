/*
 * Maker's Digest
 *
 * <description>
 */

int pr_pin = A0;

int pr_val; 

void setup() {

  pinMode(pr_pin, INPUT);

  Serial.begin(19200);
  Serial.println("Makers Digest: Ready");
}

void loop() {
  pr_val = analogRead(pr_pin);
  Serial.print("Photoresistor Value:");
  Serial.println(pr_val);
  delay(250);
}
