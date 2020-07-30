// Autor: Alejandro Mancilla Huanca - (+591)65537461
// Contacto: alejandro.mancilla.umsa@gmail.com
void setup() {
pinMode(13, OUTPUT);
}

void loop() {
  
  encender();
  delay(1000);
  apagar();
  delay(500);
}

void encender()
{  digitalWrite(13, HIGH);  }

void apagar()
{  digitalWrite(13, LOW);   }

