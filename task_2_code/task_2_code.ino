#include <Servo.h>
Servo motor_A;
Servo motor_B;
int potpinA = A0;
int potpinB = A1; 
int val_A;
int val_B;


void setup() {
  motor_A.attach(11);
  motor_B.attach(3);

}

void loop() { 
  val_A = analogRead(potpinA);             
  val_A = map(val_A, 0, 1023, 0, 180);     
  motor_A.write(val_A);            
  delay(15); 
 
  val_B = analogRead(potpinB);            
  val_B = map(val_B, 0, 1023, 0, 180);     
  motor_B.write(val_B);                  
  delay(15); 
}
