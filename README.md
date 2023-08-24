 # SnakeSpace  🐍✈️
Instalar o Broker Mosquitto https://mosquitto.org/

## Configurações no Windows 🪟🪟
> ⚠️ HELPPPP!!!!! <br>
> No documento mosquito.conf alterar na **linha 236** `listener 1883. 0.0.0.0`

### Inicializar O Mosquitto 🦟⏰
Novo prompt
<br> `cd..`
<br> `cd..`
<br> `C:"local que foi baixado o mosquitto"` 
<br>`C:\Program Files (x86)\mosquitto>mosquitto -v -c "C:\Program Files (x86)\mosquitto>mosquitto.conf"`
<br>
### Mosquitto Sub 🦟🙆
Novo prompt
<br> `cd..`
<br> `cd..`
<br> `C:"C:\Program Files (x86)\mosquitto"`
<br> `mosquitto_sub -h localhost -p 1883 -t "exemplo"`
<br>
### Mosquitto Pub 🦟✍️
Novo prompt
<br> `cd..`
<br> `cd..`
<br> `"C:\Program Files (x86)\mosquitto"`
<br> `mosquitto_pub -h localhost -p 1883 -t "exemplo" -m "outro exemplo"`

