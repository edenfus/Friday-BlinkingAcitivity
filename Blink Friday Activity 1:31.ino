

// Eden Fusman 
//1/27/22
//Blink LED Code Assesment #1
void setup(){
pinMode(13, OUTPUT);
pinMode (9, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(13, HIGH);   
  delay(1000);                      
  digitalWrite(13, LOW);   
  delay(500);        
  digitalWrite(9, HIGH);   
  delay(1000);                     
  digitalWrite(9, LOW);    
  delay(1000);
digitalWrite(13,HIGH);
digitalWrite(9,HIGH);
delay(10);
digitalWrite(13,LOW);
digitalWrite(9,LOW);
                      
}