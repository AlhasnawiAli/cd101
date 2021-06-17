#include<AFMotor.h> 
#include<NewPing.h> 
const int trigPin=12;
const int echoPin=11;
AF_DCMotor motor4(4,MOTOR34_64KHZ);
AF_DCMotor motor3(3,MOTOR34_64KHZ);
#define MAX_SPEED 200
long duration,distance;


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(trigPin,OUTPUT);
pinMode(echoPin,INPUT); 
motor4.setSpeed(MAX_SPEED);
motor3.setSpeed(MAX_SPEED);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(trigPin,LOW);
delayMicroseconds(2);
digitalWrite(echoPin,HIGH);
delayMicroseconds(10);
digitalWrite(trigPin,LOW);
duration = pulseIn(echoPin,HIGH);
distance = (duration/2)* 0.0343;
if (distance<35){
  Serial.println("Obstacle detected" );
  Serial.print("Distance from the robot is " );
  Serial.print(distance);
  Serial.println(" cm");

  moveStop();
   delay(200);
  
   moveBackward();
   delay(500);

   Serial.println(" turn right during 0.5 second !" );

   turnRight();
   delay(500);

   moveStop();
   delay(200);
}
else{
  Serial.println("if no obstacle detedted, robot move forward");
  delay(30);
  moveForward();
}
}

void moveForward(){
  motor4.run(FORWARD);
  motor3.run(FORWARD);
}
void moveStop(){
  motor4.run(RELEASE);
  motor3.run(RELEASE);
}
void moveBackward(){
  motor4.run(BACKWARD);
  motor3.run(BACKWARD);
}
void turnRight(){
  motor4.run(FORWARD);
  motor3.run(BACKWARD);
}