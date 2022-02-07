int datafromUser=0;
#define role1 8 
void setup() {
  pinMode(role1,OUTPUT);
   pinMode(role2,OUTPUT);
  Serial.begin(9600);
 
 
}

void loop() {  

    if(Serial.available() > 0)
  { datafromUser=Serial.read();
    }
  if(datafromUser == '1')
  { digitalWrite(role1,HIGH);
   }
  else if(datafromUser == '0')
  {digitalWrite(role1,LOW);
    }
}
