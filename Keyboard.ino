#include <Keyboard.h>                               //Including the keyboard library
#include <Mouse.h>                                  //Including the mouse library
#define mS 20

int KEY_y = 2;                                       //Declaring variables for the pins
int KEY_u = 3;
int KEY_r = 4;
int KEY_e = 5;
int KEY_c = 6;

int KEY_g = 7;                                       //Declaring variables for the pins
int KEY_h = 8;
int KEY_j = 9;

int KEY_s = 19;
int KEY_d = 20;
int KEY_x = 21;

int RXLED = 17; // The RX LED has a defined Arduino pin
int TXLED = 30; // The TX LED has a defined Arduino pin

void setup() {

pinMode(KEY_y, INPUT);                        //Setting up the internal pull-ups resistors
pinMode(KEY_u, INPUT);                        //and also setting the pins to inputs.
pinMode(KEY_r, INPUT);
pinMode(KEY_e, INPUT);
pinMode(KEY_c, INPUT);

pinMode(KEY_g, INPUT);                        //Setting up the internal pull-ups resistors
pinMode(KEY_h, INPUT);                        //and also setting the pins to inputs.

pinMode(KEY_j, INPUT);
pinMode(KEY_s, INPUT);
pinMode(KEY_d, INPUT);
pinMode(KEY_x, INPUT);

pinMode(RXLED, OUTPUT); // Set RX LED as an output
pinMode(TXLED, OUTPUT); // Set TX LED as an output

}

void loop() {

  if (digitalRead(KEY_y) == HIGH)                     //Checking if the first switch has been pressed
  {
    Keyboard.write('y');                            //Sending the "A" character
    delay(mS);
  }

  if (digitalRead(KEY_u) == HIGH)                     //Checking if the first switch has been pressed
  {
    Keyboard.write('u');                            //Sending the "A" character
     delay(mS);
  }
  if (digitalRead(KEY_r) == HIGH)                     //Checking if the first switch has been pressed
  {
    Keyboard.write('r');                            //Sending the "A" character
     delay(mS);
  }

  if (digitalRead(KEY_e) == HIGH)                     //Checking if the first switch has been pressed
  {
    Keyboard.write('e');                            //Sending the "A" character
     delay(mS);
  }
    if (digitalRead(KEY_c) == HIGH)                     //Checking if the first switch has been pressed
  {
    Keyboard.write('c');                            //Sending the "A" character
     delay(mS);
  }


 if (digitalRead(KEY_g) == HIGH)                     //Checking if the first switch has been pressed
  {
    Keyboard.write('g');                            //Sending the "A" character
    delay(mS);
  }

  if (digitalRead(KEY_h) == HIGH)                     //Checking if the first switch has been pressed
  {
    Keyboard.write('h');                            //Sending the "A" character
    delay(mS);
  }
  if (digitalRead(KEY_j) == HIGH)                     //Checking if the first switch has been pressed
  {
    Keyboard.write('j');                            //Sending the "A" character
     delay(mS);
  }

  if (digitalRead(KEY_s) == HIGH)                     //Checking if the first switch has been pressed
  {
    Keyboard.write('s');                            //Sending the "A" character
    delay(mS);
  }
    if (digitalRead(KEY_d) == HIGH)                     //Checking if the first switch has been pressed
  {
    Keyboard.write('d');                            //Sending the "A" character
     delay(mS);
  }

   if (digitalRead(KEY_x) == HIGH)                     //Checking if the first switch has been pressed
  {
    Keyboard.write('x');                            //Sending the "A" character
    delay(mS);
  }

/*********************************************************/

  digitalWrite(RXLED, HIGH); // set the LED off
  digitalWrite(TXLED, LOW); // set the LED off
  delay(50);                       // wait for a second
  digitalWrite(RXLED, LOW); // set the LED on
  digitalWrite(TXLED, HIGH); // set the LED on
  delay(50);                       // wait for a second

}