char buff[5];


void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial1.begin(115200);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial1.read() > 0){
    buff[0]=Serial1.read();
    Serial.println(buff);

  }

  if(buff[0]==0x7F){
    Serial.print("odczytano prawidłowo dane");
    buff[0]=0;
  }
}
