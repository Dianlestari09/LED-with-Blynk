//#include <Blynk.h>
#include <UnoWiFiDevEd.h>
#include <Blynk.h>

/*************************************************************
  Download latest Blynk library here:
    https://github.com/blynkkk/blynk-library/releases/latest

  Blynk is a platform with iOS and Android apps to control
  Arduino, Raspberry Pi and the likes over the Internet.
  You can easily build graphic interfaces for all your
  projects by simply dragging and dropping widgets.

    Downloads, docs, tutorials: http://www.blynk.cc
    Sketch generator:           http://examples.blynk.cc
    Blynk community:            http://community.blynk.cc
    Follow us:                  http://www.fb.com/blynkapp
                                http://twitter.com/blynk_app

  Blynk library is licensed under MIT license
  This example code is in public domain.

 *************************************************************
  =>
  =>          USB HOWTO: http://tiny.cc/BlynkUSB
  =>

  Feel free to apply it to any other example. It's simple!
 *************************************************************/

/* Comment this out to disable prints and save space */
#define BLYNK_PRINT DebugSerial // sebagai definisi atau menetapkan blynk
#define LED 9

//Anda bisa menggunakan Serial Perangkat Keras cadangan di papan yang memilikinya (seperti uno)
//#include <SoftwareSerial.h> //termasuk software serial.h (blynk)
SoftwareSerial DebugSerial(2, 3); // RX, TX

#include <BlynkSimpleStream.h>

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "myOcu67KphYQImsJnXkreC9hxoPihC5i"; 
void sendSensor(){ //
  int led=digitalRead(9); // interger led pada pin
  }
void setup() //
{
  // Debug console
  DebugSerial.begin(9600);

  // Blynk will work through Serial
  // Do not read or write this serial manually in your sketch
  Serial.begin(9600);
  pinMode(LED,OUTPUT);
  Blynk.begin(Serial, auth);   
}

void loop()
{
  sendSensor();
  Blynk.run();
}
