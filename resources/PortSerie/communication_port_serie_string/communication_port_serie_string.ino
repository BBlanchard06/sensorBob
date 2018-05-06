string getResult1;
void setup() {
  Serial.begin(9600);

}

void loop() {
if (Serial.available()>0) 
 {

  getResult1 = Serial.readString();
  Serial.write(getResult1);
  Serial.println(getResult1);
  } 

  
 
}
