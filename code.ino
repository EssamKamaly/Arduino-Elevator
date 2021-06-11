//elevator using 2 motor drives *connected 2 channels*
int motor1en1 = 6;
int motor1dir1 = 4;
int motor1dir11 = 7;

int motor1en2 = 3;
int motor1dir2 = 2;
int motor1dir22 = A5;

int motor2en1 = 5;
int motor2dir1 = 8;
int motor2dir11 = A1;

int motor2en2 = 11;
int motor2dir2 = 12;
int motor2dir22 = 13;


int Bread;
void setup() {
  // put your setup code here, to run once:
pinMode(motor1en1,OUTPUT);
pinMode(motor1dir1,OUTPUT);
pinMode(motor1dir11,OUTPUT);
pinMode(motor1en2,OUTPUT);
pinMode(motor1dir2,OUTPUT);
pinMode(motor1dir22,OUTPUT);
pinMode(motor2en1,OUTPUT);
pinMode(motor2dir1,OUTPUT);
pinMode(motor2dir11,OUTPUT);
pinMode(motor2en2,OUTPUT);
pinMode(motor2dir2,OUTPUT);
pinMode(motor2dir22,OUTPUT);
Serial.begin(9600);
}


void loop() {
if (Serial.available()>0){
Bread = Serial.read(); 
Serial.println(Bread);
if (Bread == 0){
two_motors_stop();}

if (Bread == 2){
two_motors_up_full_speed();}

if (Bread == 8) {
two_motors_down_full_speed();}

if (Bread == 20) {
motor1_up_full_speed();}

if (Bread == 25) {
motor1_down_full_speed();}

if (Bread == 30) {
motor2_up_full_speed();}

if (Bread == 35) {
motor2_down_full_speed();}



  
}
}

void two_motors_up_full_speed()
{
 //
digitalWrite(motor1en1,HIGH);
digitalWrite(motor1dir1,HIGH);
digitalWrite(motor1dir11,LOW);
//
digitalWrite(motor1en2,HIGH);
digitalWrite(motor1dir2,HIGH);
digitalWrite(motor1dir22,LOW);
//
digitalWrite(motor2en1,HIGH);
digitalWrite(motor2dir1,HIGH);
digitalWrite(motor2dir11,LOW);
//
digitalWrite(motor2en2,HIGH);
digitalWrite(motor2dir2,HIGH);
digitalWrite(motor2dir22,LOW);
}

void two_motors_down_full_speed()
{
 //
digitalWrite(motor1en1,HIGH);
digitalWrite(motor1dir1,LOW);
digitalWrite(motor1dir11,HIGH);
//
digitalWrite(motor1en2,HIGH);
digitalWrite(motor1dir2,LOW);
digitalWrite(motor1dir22,HIGH);
//
digitalWrite(motor2en1,HIGH);
digitalWrite(motor2dir1,LOW);
digitalWrite(motor2dir11,HIGH);
//
digitalWrite(motor2en2,HIGH);
digitalWrite(motor2dir2,LOW);
digitalWrite(motor2dir22,HIGH);
}

void two_motors_stop()
{
digitalWrite(motor1en1,LOW);
digitalWrite(motor1en2,LOW);
digitalWrite(motor2en1,LOW);
digitalWrite(motor2en2,LOW);
}

void motor1_up_full_speed()
{
digitalWrite(motor2en1,LOW);
digitalWrite(motor2en2,LOW);
//
digitalWrite(motor1en1,HIGH);
digitalWrite(motor1dir1,HIGH);
digitalWrite(motor1dir11,LOW);
//
digitalWrite(motor1en2,HIGH);
digitalWrite(motor1dir2,HIGH);
digitalWrite(motor1dir22,LOW);
}

void motor1_down_full_speed()
{
digitalWrite(motor2en1,LOW);
digitalWrite(motor2en2,LOW);
//
digitalWrite(motor1en1,HIGH);
digitalWrite(motor1dir1,LOW);
digitalWrite(motor1dir11,HIGH);
//
digitalWrite(motor1en2,HIGH);
digitalWrite(motor1dir2,LOW);
digitalWrite(motor1dir22,HIGH);
}

void motor2_up_full_speed()
{
digitalWrite(motor1en1,LOW);
digitalWrite(motor1en2,LOW);
//
digitalWrite(motor2en1,HIGH);
digitalWrite(motor2dir1,HIGH);
digitalWrite(motor2dir11,LOW);
//
digitalWrite(motor2en2,HIGH);
digitalWrite(motor2dir2,HIGH);
digitalWrite(motor2dir22,LOW);
}

void motor2_down_full_speed()
{
digitalWrite(motor1en1,LOW);
digitalWrite(motor1en2,LOW);
//
digitalWrite(motor2en1,HIGH);
digitalWrite(motor2dir1,LOW);
digitalWrite(motor2dir11,HIGH);
//
digitalWrite(motor2en2,HIGH);
digitalWrite(motor2dir2,LOW);
digitalWrite(motor2dir22,HIGH);
}
