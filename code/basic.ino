//int input1 = 3; 
//int input2 = 4;
int input3 = 5; 
int input4 = 6; 

void setup() {
  Serial.begin (9600);
//  pinMode(input1,OUTPUT);
//  pinMode(input2,OUTPUT);
  pinMode(input3,OUTPUT);
  pinMode(input4,OUTPUT);
}

void loop() { 
  // 밀어내기
//  digitalWrite(input1,HIGH); 
//  digitalWrite(input2,LOW); 
  digitalWrite(input3,HIGH); 
  digitalWrite(input4,LOW); 
  delay(5000); 
  Serial.println("forward");

  // 멈춤
//  digitalWrite(input1,LOW); 
//  digitalWrite(input2,LOW); 
  digitalWrite(input3,LOW); 
  digitalWrite(input4,LOW); 
  delay(1000);
  Serial.println("stop");

  // 당기기
//  digitalWrite(input1,LOW); 
//  digitalWrite(input2,HIGH); 
  digitalWrite(input3,LOW); 
  digitalWrite(input4,HIGH); 
  delay(5000);
  Serial.println("backword");

  // 멈춤
//  digitalWrite(input1,LOW); 
//  digitalWrite(input2,LOW); 
  digitalWrite(input3,LOW); 
  digitalWrite(input4,LOW); 
  delay(1000);
  Serial.println("stop");
}
