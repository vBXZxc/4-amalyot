void setup() {
 pinMode(A1,INPUT);
 pinMode(3,OUTPUT);
 Serial.begin(9600);
}

void loop() {
  int a = analogRead(2);
  Serial.println(a);
  if(a>=300){digitalWrite(3,1);}
  if(a<300){digitalWrite(3,0);}
}
