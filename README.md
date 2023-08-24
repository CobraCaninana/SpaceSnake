# SpaceSnake
Instalar o Broker Mosquitto https://mosquitto.org/
<br>
### Inicializar O Mosquitto
Novo prompt
<br> `cd..`
<br> `cd..`
<br> `C:"local que foi baixado o mosquitto"` 
<br><sub>_C:\Program Files (x86)\mosquitto"_</sub> 
<br> `mosquitto -v`
<br>
### Mosquitto Sub
Novo prompt
<br> `cd..`
<br> `cd..`
<br> `C:"local que foi baixado o mosquitto"`
<br><sub>_C:\Program Files (x86)\mosquitto"_</sub> 
<br> `mosquitto_sub -h localhost -p 1883 -t "exemplo"`
<br>
### Mosquitto Pub
Novo prompt
<br> `cd..`
<br> `cd..`
<br> `C:"local que foi baixado o mosquitto"`
<br><sub>_C:\Program Files (x86)\mosquitto"_</sub> 
<br> `mosquitto_pub -h localhost -p 1883 -t "exemplo" -m "outro exemplo"`
