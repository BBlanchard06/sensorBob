/* HC-06 Config est un programme qui permet de configurer le module Bluetooth */
/* test OK / changer le nom AT+NAMENom_du_module (sans espace) / changer le code PIN AT+PINcode (sans espace) / changer la vitesse de transmission AT+BAUD4 (4 pour 9600, 5 pour 19200, 6 pour 38400, 7 pour 57600, 8 pour 115200) */

​

// Création d'une liaison série sur les broches 2 et 3
#include <SoftwareSerial.h>                                // appel de la bibliothèque
SoftwareSerial HC06(2, 3);                                   // RX, TX

 


void setup()  
{ 
HC06.begin(9600);                                                 // initialisation connexion série Bluetooth à 9600 bauds
Serial.begin(9600);                                                // initialisation liaison série à 9600 bauds
Serial.println("Entrer la commande AT:");

} 

​

void loop()
{  
 // si le HC-06 transmet, on écrit le message dans le moniteur série
 if (HC06.available())                  
 {
 Serial.write(HC06.read());
 }
 // si on écrit dans le moniteur série, on transmet le message dans le module HC-06
 if (Serial.available())
 {
 HC06.write(Serial.read());
 }   
}