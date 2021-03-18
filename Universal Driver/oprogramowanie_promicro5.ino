#include<Wire.h>
#include<PCF8574.h>

char buff;

bool whetherSwitched;

PCF8574 expander(0x20);
PCF8574 expander2(0x27);


void setup() {
  // put your setup code here, to run once:
  delay(1000);
  
  expander.begin();
  
  Serial.begin(115200);
  Serial1.begin(115200);

  expander.pinMode(P0, OUTPUT);
  expander.pinMode(P1, OUTPUT);
  expander.pinMode(P2, OUTPUT);
  expander.pinMode(P3, OUTPUT);
  expander.pinMode(P4, OUTPUT);
  expander.pinMode(P5, OUTPUT);
  expander.pinMode(P6, OUTPUT);
  expander.pinMode(P7, OUTPUT);
  
  while(whetherSwitched==false){
    
    expander.digitalWrite(P0,LOW);
    expander.digitalWrite(P1,LOW);
    expander.digitalWrite(P2,LOW);
    expander.digitalWrite(P3,LOW);
    expander.digitalWrite(P4,LOW);
    expander.digitalWrite(P5,LOW);
    expander.digitalWrite(P6,LOW);
    expander.digitalWrite(P7,LOW);
    
    whetherSwitched=true;

  }
  expander.digitalWrite(P0,LOW);
  expander.digitalWrite(P1,LOW);
  expander.digitalWrite(P2,LOW);
  expander.digitalWrite(P3,LOW);
  expander.digitalWrite(P4,LOW);
  expander.digitalWrite(P5,LOW);
  expander.digitalWrite(P6,LOW);
  expander.digitalWrite(P7,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:

  buff=Serial1.read();

  if(buff=='a'){
    expander.digitalWrite(P0, HIGH);
  }else if(buff=='b'){
    expander.digitalWrite(P0, LOW);
  }else if(buff=='c'){
    expander.digitalWrite(P1, HIGH);
  }else if(buff=='d'){
    expander.digitalWrite(P1, LOW);
  }else if(buff=='e'){
    expander.digitalWrite(P2, HIGH);
  }else if(buff=='f'){
    expander.digitalWrite(P2, LOW);
  }else if(buff=='g'){
    expander.digitalWrite(P3, HIGH);
  }else if(buff=='h'){
    expander.digitalWrite(P3, LOW);
  }else if(buff=='i'){
    expander.digitalWrite(P4, HIGH);
  }else if(buff=='j'){
    expander.digitalWrite(P4, LOW);
  }else if(buff=='k'){
    expander.digitalWrite(P5, HIGH);
  }else if(buff=='l'){
    expander.digitalWrite(P5, LOW);
  }else if(buff=='m'){
    expander.digitalWrite(P6, HIGH);
  }else if(buff=='n'){
    expander.digitalWrite(P6, LOW);
  }else if(buff=='o'){
    expander.digitalWrite(P7, HIGH);
  }else if(buff=='p'){
    expander.digitalWrite(P7, LOW);
  }

}
