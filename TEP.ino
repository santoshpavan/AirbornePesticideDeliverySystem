void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
//switches 
pinMode(6,INPUT); //right
pinMode(7,INPUT); //left
pinMode(12,INPUT);//top
pinMode(13,INPUT);//bottom
//horizontal motors
pinMode(2,OUTPUT);//right +
pinMode(3,OUTPUT);//right -
pinMode(4,OUTPUT);//left +
pinMode(5,OUTPUT);//left -
//vertical motors
pinMode(8,OUTPUT);//up +
pinMode(9,OUTPUT);//up -
pinMode(10,OUTPUT);//bottom +
pinMode(11,OUTPUT);//bottom -
}

void loop() {
  // put your main code here, to run repeatedly:
if (digitalRead(6)==HIGH) //right
{
  digitalWrite(2,1);
  digitalWrite(3,0);
  digitalWrite(4,0);
  digitalWrite(5,1);
}
if (digitalRead(7)==HIGH) //left
{
  digitalWrite(2,0);
  digitalWrite(3,1);
  digitalWrite(4,1);
  digitalWrite(5,0);
}
if (digitalRead(12)==HIGH) //top
{
  digitalWrite(8,1);
  digitalWrite(9,0);
  digitalWrite(10,0);
  digitalWrite(11,1);
}
if (digitalRead(13)==HIGH) //bottom
{
  digitalWrite(8,0);
  digitalWrite(9,1);
  digitalWrite(10,1);
  digitalWrite(11,0);
}
}
