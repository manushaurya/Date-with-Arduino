const int ledPin =  3;// the number of the LED pin


int ledState = LOW;

unsigned long previousMillis = 0;        // will store last time LED was updated

const long interval = 2000;           // interval at which to blink (milliseconds)

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {

  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval) 
  {
    previousMillis = currentMillis;
    if (ledState == LOW) 
    {
      ledState = HIGH;
    } 
    else 
    {
      ledState = LOW;
    }
    digitalWrite(ledPin, ledState);
  }
}
