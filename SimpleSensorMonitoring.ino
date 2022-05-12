#include <SoftwareSerial.h>
 
SoftwareSerial blue(2,3); // RX|TX
 
int Vresistor = A0; 
int Vdata = 0; 
 
void setup(){ 
  
   pinMode(Vresistor, INPUT); 
   Serial.begin(9600); 
   blue.begin(9600); 
   
} 
void loop(){ 
   // read the value at analog input 
   Vdata = analogRead(Vresistor); 
 
blue.print("Variable Resistor: "); 
blue.println(Vdata);
blue.println("https://github.com/MasterMind1998"); 
blue.println("________________");
 
delay(1000); 
}
