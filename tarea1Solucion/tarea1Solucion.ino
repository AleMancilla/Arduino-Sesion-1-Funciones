// Autor: Alejandro Mancilla Huanca - (+591)65537461
// Contacto: alejandro.mancilla.umsa@gmail.com
int pin = 13;
int boton = 7; 

int val = 0; // valor que almacenara la accion del boton
int estado = 0; //
int anterior = 0; // anterior valor de VAL

void setup() {
pinMode(pin, OUTPUT);
pinMode(boton, INPUT);
Serial.begin(9600);
}

void loop() {
  val=digitalRead(boton); //lee el estado del boton
  if((val == HIGH) && (anterior == LOW))
  {
    estado=1-estado;
    funcion(pin, estado);
    delay(10);
    
  }
  anterior=val;
  
}

void funcion(int pin, int estado)
{  digitalWrite(pin, estado);  
   if(estado==1){Serial.println("Led encendido");}
   if(estado==0){Serial.println("Led Apagado");}
}

