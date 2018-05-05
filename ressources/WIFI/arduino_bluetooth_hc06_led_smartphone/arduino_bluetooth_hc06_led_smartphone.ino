/* Bluetooth_led est un programme qui pilote une led depuis une application */
/* http://pecquery.wixsite.com/arduino-passion/copie-de-le-detecteur-a-ultrasons-h-1 */

#define led 13                                    // affectation des broches
#define RX 2
#define TX 3

word octet_recu;                             // mot qui reçoit les trames émises 
// Création d'une liaison série 

#include <SoftwareSerial.h>                  
SoftwareSerial bluetooth(RX,TX);             
 

void setup() 
{
Serial.begin(9600);                          // initialisation liaison série à 9600 bauds
bluetooth.begin(9600);                    // initialisation connexion série Bluetooth à 9600 bauds
pinMode(led,OUTPUT) ;                   // la broche led est en sortie
}


void loop() {
recevoir();                                         // appel de la procédure recevoir
if (octet_recu==49)                          // si octet reçu est 1 (49=code ASCII de 1)
    {
    Serial.println("Led allumee");
    digitalWrite(led,HIGH);
    }    
if (octet_recu==48)                          // si octet reçu est 0 (48=code ASCII de 0)
    {
     Serial.println("Led eteinte");
     digitalWrite(led,LOW);
    }
delay(200);
    }

//procédure qui lit les trames de la tablette
void recevoir()
{
    if (bluetooth.available()) 
    {
    octet_recu=bluetooth.read();
    }
}