// We define MY_LED to be the LED that we want to blink.
//
// In this tutorial, we're using the blue D7 LED (next to D7 on the Photon
// and Electron, and next to the USB connector on the Argon and Boron).
const pin_t MY_LED = D7;

// The following line is optional, but recommended in most firmware. It
// allows your code to run before the cloud is connected. In this case,
// it will begin blinking almost immediately instead of waiting until
// breathing cyan,
SYSTEM_THREAD(ENABLED);

// The setup() method is called once when the device boots.
void setup()
{
  // In order to set a pin, you must tell Device OS that the pin is
  // an OUTPUT pin. This is often done from setup() since you only need
  // to do it once.
  pinMode(MY_LED, OUTPUT);
}

// Dot in morse code
void dot()
{
  // Turn on the LED
  digitalWrite(MY_LED, HIGH);

  // Leave it on for 100 milliseconds
  delay(100ms);

  // Turn it off
  digitalWrite(MY_LED, LOW);

  // Wait 500 milliseconds
  delay(500ms);
}

// Dash in morse code
void dash()
{
  // Turn on the LED
  digitalWrite(MY_LED, HIGH);

  // Leave it on for 300 milliseconds
  delay(300ms);

  // Turn it off
  digitalWrite(MY_LED, LOW);

  // Wait 500 milliseconds
  delay(500ms);
}

// Space for letters
void space()
{
  // Wait 500 milliseconds
  delay(250ms);
}

void loop()
{

  // J
  dot();
  dash();
  dash();
  dash();
  space();
  // A
  dot();
  dash();
  space();
  // M
  dash();
  dash();
  space();
  //  E
  dot();
  space();
  //  S
  dot();
  dot();
  dot();
  space();
  space();
  space();
  space();
}