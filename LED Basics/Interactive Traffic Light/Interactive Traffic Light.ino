int BUTTON_PIN = 6;
int GREEN_LED  = 2;
int YELLOW_LED = 3;
int RED_LED    = 4;

void setup() {
  // pin modes
  pinMode(BUTTON_PIN, INPUT);
  pinMode(GREEN_LED, OUTPUT);
  pinMode(YELLOW_LED, OUTPUT);
  pinMode(RED_LED, OUTPUT);

  // Initial state
  digitalWrite(GREEN_LED, HIGH);
  digitalWrite(YELLOW_LED, LOW);
  digitalWrite(RED_LED, LOW);
}

void loop() {
  // Check if the button is pressed
  if (digitalRead(BUTTON_PIN) == HIGH) {
    
    // 1. Turn green light off
    digitalWrite(GREEN_LED, LOW);

    // 2. Turn yellow light on for 3 seconds
    digitalWrite(YELLOW_LED, HIGH);
    delay(3000); // 3000ms = 3 seconds
    digitalWrite(YELLOW_LED, LOW);

    // 3. Turn standard red light on for 10 seconds (no flashing)
    digitalWrite(RED_LED, HIGH);
    delay(10000); // 10000ms = 10 seconds
    digitalWrite(RED_LED, LOW);

    // 4. Return to the starting state (Green back ON)
    digitalWrite(GREEN_LED, HIGH);
  }
}
