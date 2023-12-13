## Personaje-Navideño


## Nombre del personaje 

-Pastor con ovejas

##  Nombre Integrantes Equipo

|Nombre | Apellido Paterno | Apellido Materno |
|-|-|-|
|Jose Angel|Rangel|Rico|
|Claudio Angel|Huerta|Ducoing|
|Kevin|Conejo|Salazar|
|Brayan Yohani|Narvaez|Morales|

## Materiales a utilizar


|Nom Componente | Descripcion | Cantidad| Precio|
|-|-|-|-|
|ESP32|Microcontrolador con 30 pines con comunicacion WIFI y Bluetooth|1|$140.00|
|Cable dupont|Cables para conexion de prototipos de pruebas|50|$60.00|
|Sensor Pir Hc-sr501|Detector De Movimiento|2|$55.00|
|Led|Se utilizan leds para iluminar la maqueta.|6|$70.00|
|Pack 5 servomotores|servomotor con movimiento de 180 grados para el pastor y ovejas|2|$50.00|
|Soldador|kit de soldador para los motores|1| $90.00|
|buzzer|Emite sonido para las ovejas|2|$9.00|





## Software a Utilizar
|Nombre|Version|Tipo Software|
|-|-|-|
|Thonny|4.2.1|Software Libre|
|SSD1602|1.8.1|Software Libre|
|PlatformIO|6.1.11|Software Libre/IDE|
|Visual Studio Code|1.82|Software Libre/IDE|
|SQLite|3.43.1|Software Libre|

## Prototipo en dibujo

![Prototipo](https://github.com/AngelRico12/Personaje/blob/main/WhatsApp%20Image%202023-11-08%20at%206.49.26%20PM.jpeg)


## Comunicacion
La comunicación del usuario con el prototipo se realizará mediante una conexión inalámbrica a través del protocolo Wi-Fi. El ESP32 actuará como un servidor Wi-Fi, permitiendo que el usuario interactúe con el pastor y las ovejas mediante una interfaz web. Los comandos enviados desde la interfaz web controlarán diversas funciones del personaje navideño, como encender luces, activar el movimiento del brazo o cambiar su estado, hacer que las ovejas muevan la cabeza y emitan sonidos. La interfaz web proporcionará una experiencia intuitiva para que el usuario pueda controlar tanto al pastor como a las ovejas.

## Arquitectura 
|||
|-|-|
ESP32|![ESP32](https://github.com/AngelRico12/Personaje/blob/main/ESP32.jpg)|
CABLES DUPONT|![CABLES](https://github.com/AngelRico12/Personaje/blob/main/CABLES.jpeg)|
SENSOR DE MOV.|![SENSOR](https://github.com/AngelRico12/Personaje/blob/main/SENSOR.jpeg)|
KIT SOLDADURA|![KIT](https://github.com/AngelRico12/Personaje/blob/main/kit%20solda.jpeg)|
MOTORES STEPPER|![MOTOR](https://github.com/AngelRico12/Personaje/blob/main/MOTORES.jpeg)|
RESISTENCIA|![RESISTENCIA](https://github.com/AngelRico12/Personaje/blob/main/resistencia.jpeg)|
SQLITE|![SQLITE](https://github.com/AngelRico12/Personaje/blob/main/SQLITE.jpeg)|



## Circuito wokwi
|||
|-|-|
Circuito|![5 motores, 6 leds, 1 buzzer, 1 esp32](https://github.com/AngelRico12/Personaje/blob/main/wokwi.jpeg)|



## Base de datos
![Base de Datos](https://github.com/AngelRico12/Personaje/blob/main/baseDeDatos.jpeg)
