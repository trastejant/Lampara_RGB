# Lampara_RGB
Proyecto de una lampara RGB controlada por Bluetooth y basada en Arduino. 

## Materiales
* Arduino (En este caso utilizaremos un Nano, pero cualquiera nos puede servir).
* Modulo Bluetooth HC-05. 
* Minimo de Tres leds: Rojo, Azul y Verde.

## Teoría del RGB

RGB son las siglas en ingles de Red (Rojo), Green (verde) y Blue (Azul). Los tres colores basicos en la luz. Combinando estos tres colores, en teoria, podemos obtener todo el espéctro cromático. 

Esto lo conseguiremos dandole más intensidad o menos a cada uno de los colores gracias al PWM de Arduino. 

##Montaje
El montaje es muy sencillo, unicamente necesitamos conectar los tres leds (o los que queramos) a tres salidas distintas de Arduino, que deben ser eso si PWM. Para conectarlas utilizaremos las resistencias para no quemarlos. 

![Esquema de montaje](https://github.com/trastejant/Lampara_RGB/blob/master/Esquemas/Lampara_RGB_basic.png)

Ahora cargaremos el Sketch en Arduino y ya tenemos la lampara funcionando. 

## Control
Estamos trabajando en una aplicación Android para contorlar la lampara, pero de momento puedes hacer pruebas instalando la APP blueterm en tu dispositivo y enviando los siguiente comandos:

| Tables        | Are           |
| ------------- |:-------------:|
|0|Todo apagado|
|1|Enciende Rojo| 
|2|Enciende Verde| 
|3|Enciende Azul| 

Pronto tendremos también un Sketch más completo, que sea capaz de mostrar todo el espectro de colores o realizar un barrio en secuencia de todos ellos. 
