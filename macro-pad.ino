#include <Keyboard.h>

const int buttonPin = 16;
const int buttonPin1 = 14;
const int buttonPin2 = A2;
const int buttonPin3 = A3;
const int buttonPin4 = 15;
const int buttonPin5 = A0;
const int buttonPin6 = A1;
int buttonState0 = 0;
int buttonState1 = 0;
int buttonState2 = 0;
int buttonState3 = 0;
int buttonState4 = 0;
int buttonState5 = 0;
int buttonState6 = 0;

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(buttonPin1, INPUT_PULLUP);
  pinMode(buttonPin2, INPUT_PULLUP);
  pinMode(buttonPin3, INPUT_PULLUP);
  pinMode(buttonPin4, INPUT_PULLUP);
  pinMode(buttonPin5, INPUT_PULLUP);
  pinMode(buttonPin6, INPUT_PULLUP);
  Keyboard.begin();
}

void loop() {
  buttonState0 = digitalRead(buttonPin);
  buttonState1 = digitalRead(buttonPin1);
  buttonState2 = digitalRead(buttonPin2);
  buttonState3 = digitalRead(buttonPin3);
  buttonState4 = digitalRead(buttonPin4);
  buttonState5 = digitalRead(buttonPin5);
  buttonState6 = digitalRead(buttonPin6);

  if (buttonState0 == LOW) {
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press(108);
    delay(100);
    Keyboard.release(KEY_LEFT_GUI);
    Keyboard.release(108);
  }

  if (buttonState1 == LOW) { 
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(99);
    delay(100); 
    Keyboard.release(KEY_LEFT_CTRL);
    Keyboard.release(99);
  }

  if (buttonState2 == LOW) { 
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(120);
    delay(100); 
    Keyboard.release(KEY_LEFT_CTRL);
    Keyboard.release(120);
  }

  if (buttonState3 == LOW) { 
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(118);
    delay(100); 
    Keyboard.release(KEY_LEFT_CTRL);
    Keyboard.release(118);
  }

  if (buttonState4 == LOW) { 
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(115);
    delay(100); 
    Keyboard.release(KEY_LEFT_CTRL);
    Keyboard.release(115);
  }

  if (buttonState5 == LOW) { 
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press(118);
    delay(100); 
    Keyboard.release(KEY_LEFT_GUI);
    Keyboard.release(118);
  }

  if (buttonState6 == LOW) { 
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press(109);
    delay(100); 
    Keyboard.release(KEY_LEFT_GUI);
    Keyboard.release(109);
  }
  delay(50);
}
