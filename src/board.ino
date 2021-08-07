
// importing a library for using buttons
#include <ezButton.h>


// creating button objects with the pin numbers
ezButton button1(3);
ezButton button2(4);
ezButton button3(5);
ezButton button4(6);
ezButton button5(7);
ezButton button6(8);
ezButton button7(9);
ezButton button8(10);
ezButton button9(11);
ezButton button10(12);


void setup() {

    // starting the serial communication
    Serial.begin(9600);
    Serial.println(0);
    
    // setting the debounce time to 50ms for all the buttons
    button3.setDebounceTime(100);
    button2.setDebounceTime(100);
    button4.setDebounceTime(100);
    button1.setDebounceTime(100);
    button5.setDebounceTime(100);
    button6.setDebounceTime(100);
    button7.setDebounceTime(100);
    button8.setDebounceTime(100);
    button9.setDebounceTime(100);
    button10.setDebounceTime(100);

    // blink the led to show that the setup is done
    pinMode(13, OUTPUT);
    for (int i = 0; i < 10; i++) {
        digitalWrite(13, HIGH);
        delay(100);
        digitalWrite(13, LOW);
        delay(100);
    }
}


void loop() {

    // looping through all the buttons and checking if they are pressed
    button1.loop();
    button2.loop();
    button3.loop();
    button4.loop();
    button5.loop();
    button6.loop();
    button7.loop();
    button8.loop();
    button9.loop();
    button10.loop();

    // if the button is pressed, print the button number to the serial port, and wait for two second
    if(button1.isPressed()) {
        Serial.println(1);
        delay(1000);
    }
    if(button2.isPressed()) {
        Serial.println(2);
        delay(1000);
    }
    if(button3.isPressed()) {
        Serial.println(3);
        delay(1000);
    }
    if(button4.isPressed()) {
        Serial.println(4);
        delay(1000);
    }
    if(button5.isPressed()) {
        Serial.println(5);
        delay(1000);
    }
    if(button6.isPressed()) {
        Serial.println(6);
        delay(1000);
    }
    if(button7.isPressed()) {
        Serial.println(7);
        delay(1000);
    }
    if(button8.isPressed()) {
        Serial.println(8);
        delay(1000);
    }
    if(button9.isPressed()) {
        Serial.println(9);
        delay(1000);
    }
    if(button10.isPressed()) {
        Serial.println(10);
        delay(1000);
    }

}

