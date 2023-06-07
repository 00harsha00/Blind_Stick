const int trig = 11;        // initializing TriggerPin to pinNo 11
const int echo = 12;        // intitliazing EchoPin to pinNo 12
int buzzer = 7;             // intitliazing Buzzer to pinNo 7
int led = 6;                //intitliazing LedPin to pinNo 6
long duration;              //Setting up Trigger pinMode as 
int distance;

void setup()
{
pinMode(trig,OUTPUT);
pinMode(echo,INPUT);
pinMode(buzzer,OUTPUT);
Serial.begin(9600);
}

void loop()
{
digitalWrite(trig,LOW);
delayMicroseconds(2);

digitalWrite(trig,HIGH);
delayMicroseconds(10);

digitalWrite(trig,LOW);
duration = pulseIn(echo,HIGH);

distance = duration*0.034/2;
// Finding Duration and Calculating 

if (distance <= 20 ) 
{
digitalWrite(buzzer,HIGH); 
digitalWrite(led,HIGH);
delay(1000);
digitalWrite(led,LOW);
delay(100);
}

else { 
digitalWrite(buzzer,LOW);
digitalWrite(led,LOW); 
}

Serial.print("distance:"); 
Serial.println(distance);

}