// Autor: Alejandro Mancilla Huanca - (+591)65537461
// Contacto: alejandro.mancilla.umsa@gmail.com
char pin;
int pin1=11;
int pin2=12;
int pin3=13;

void setup() {
pinMode(pin1, OUTPUT); 
pinMode(pin2, OUTPUT);
pinMode(pin3, OUTPUT);
Serial.begin(9600);
}

void loop() {
  if(Serial.available()>0)
  {
    pin=Serial.read();
    encender(pin);
  }
  
}

void encender(char pin)
{  
  switch(pin)
  {
    case '1' :
      digitalWrite(pin1, HIGH);
      digitalWrite(pin2, LOW);
      digitalWrite(pin3, LOW);
      break;

     case '2' :
      digitalWrite(pin1, LOW);
      digitalWrite(pin2, HIGH);
      digitalWrite(pin3, LOW);
      break;

     case '3' :
      digitalWrite(pin1, LOW);
      digitalWrite(pin2, LOW);
      digitalWrite(pin3, HIGH);
      break;
  }
}
