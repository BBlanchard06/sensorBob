char getResult1 ;

void setup() {
  Serial.begin(9600);

}

void loop() {
if (Serial.available()>0) 
 {

  getResult = Serial.read();
  Serial.println(getResult);
  
  } 

  
 
}
