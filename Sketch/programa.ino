#define RED 9
#define GREEN 10
#define BLUE 11

int pins[] = {RED, GREEN, BLUE};
int valuePins[] = {0, 0, 0};

void setup() {
    pinMode(RED, OUTPUT);
    pinMode(GREEN, OUTPUT);
    pinMode(BLUE, OUTPUT);

   
    //Configuramos la conexion via Bluetooth
    Serial.begin(9600);
    Serial.println("Ready");
    Serial.flush();
}


void loop(){
// Esperamos ha recibir datos.
  if (Serial.available()){
    
    // La funcion read() devuelve un caracter
    int command = Serial.read();
    Serial.flush();
    
    // Comprobamos el comando recibido y mostramos la acción que se debe hacer
    char orden = char(command);
    switch (command) {
      case '0':
          Serial.println(command);
          digitalWrite(RED, LOW);
          digitalWrite(BLUE, LOW);
          digitalWrite(GREEN, LOW);
          break;
          
       case '1':
          Serial.println(command);
          analogWrite(RED, 255);
          break;
        
        case '2':
          Serial.println(command);
          analogWrite(GREEN, 255);
          break;
          
        case '3':
          Serial.println(command);
          analogWrite(BLUE, 255);
          break;
     
       default:  
         
         Serial.println(command);
         break;
    }
  }
    delay(10);
  }
