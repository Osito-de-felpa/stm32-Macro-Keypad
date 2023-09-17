/* @file CustomKeypad.pde
|| @version 1.0
|| @author Alexander Brevig
|| @contact alexanderbrevig@gmail.com
||
|| @description
|| | Demonstrates changing the keypad size and key values.
|| #
*/


//also syole code form this page that added the multiple modes to the macros (very complete page  with much more functionality, but wanted to try a simplified one first and then mod it to my taste)
// http://www.retrobuiltgames.com/the-build-page/macro-keyboard-v2-0/


#include <Keypad.h>

const byte ROWS = 4; //four rows
const byte COLS = 4; //four columns
//define the cymbols on the buttons of the keypads
char hexaKeys[ROWS][COLS] = {
  {'0','1','2','3'},
  {'4','5','6','7'},
  {'8','9','A','B'},
  {'C','D','E','F'}
};

const int ModeButton =A0;    // the pin the Modebutton is attached to
const int Mode1 = pin luz;   // the pins mode button lights are atached to 
const int Mode2 = pin luz;   //""" 

byte rowPins[ROWS] = {3, 2, 1, 0}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {7, 6, 5, 4}; //connect to the column pinouts of the keypad

//initialize an instance of class NewKeypad
Keypad customKeypad = Keypad( makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS); 

void setup(){
  pinMode(ModeButton, INPUT_PULLUP);  // initialize the button pin as a input:  
  Keyboard.begin();
  Serial.begin(9600);
}
  
void loop(){
  char PressedKey = customKeypad.getKey();
  
  swith (modepushcounter) {
    case 0:
       if (key) {
    //Serial.println(key);
    switch (key) {
      case '1': "1"; break;
      case '2': "2";   break;
      case '3': "3";   break;
      case '4': "4";   break;
      case '5': "5";   break;
      case '6': "6";   break;
      case '7': "7";   break;
      case '8': "8";   break;
      case '9': "9";   break;
      case '0': "10";  break;
      case 'A': "11";  break;
      case 'B': "12";  break;

    }
    delay(100); Keyboard.releaseAll(); 
  }
      break;
      
    case 1:
      if (key) {
    //Serial.println(key);
    switch (key) {
      case '1': "1/1";   break;
      case '2': "2/1";   break;
      case '3': "3/1";   break;
      case '4': "4/1";   break;
      case '5': "5/1";   break;
      case '6': "6/1";   break;
      case '7': "7/1";   break;
      case '8': "8/1";   break;
      case '9': "9/1";   break;
      case '0': "10/1";  break;
      case 'A': "11/1";  break;
      case 'B': "12/1";  break; 
    }
    delay(100); Keyboard.releaseAll();                  
  }
      break;
 //====================================================================================================================     
    case 2:    
    if (key) {
    //Serial.println(key);
    switch (key) {
      case '1': "1/2";   break;
      case '2': "2/2";   break;
      case '3': "3/2";   break;
      case '4': "4/2";   break;
      case '5': "5/2";   break;
      case '6': "6/2";   break;
      case '7': "7/2";   break;
      case '8': "8/2";   break;
      case '9': "9/2";   break;
      case '0': "10/2";  break;
      case 'A': "11/2";  break;
      case 'B': "12/2";  break; 
    }
    delay(100); Keyboard.releaseAll(); 
  }
      break;
      
    case 3:    
     LCD_update_3();                                     
     setColorsMode3();
     encoderA_Mode3();                                   
     encoderB_Mode3();                                  
    if (key) {
    //Serial.println(key);
    switch (key) {
      case '1': "1/3";   break;
      case '2': "2/3";   break;
      case '3': "3/3";   break;
      case '4': "4/3";   break;
      case '5': "5/3";   break;
      case '6': "6/3";   break;
      case '7': "7/3";   break;
      case '8': "8/3";   break;
      case '9': "9/3";   break;
      case '0': "10/3";  break;
      case 'A': "11/3";  break;
      case 'B': "12/3";  break; 
    }
    delay(100); Keyboard.releaseAll(); // this releases the buttons 
  }
      break;
  }
  delay(1);  // delay in between reads for stability

}
}