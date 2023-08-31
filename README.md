 # SnakeSpace  🐍✈️
Instalar o Broker Mosquitto https://mosquitto.org/

## Configurações no Windows 🪟🪟
>⚠️ ATTENTION!!!!! <br>
>![imagem](https://github.com/CobraCaninana/SpaceSnake/blob/main/imagen.jpeg)<br>
> No documento mosquito.conf alterar para `allow_anonymous true``listener 1883. 0.0.0.0`

### Inicializar O Mosquitto 🦟⏰
Novo prompt
<br> `cd..`
<br> `cd..`
<br>`cd "C:\Program Files (x86)\mosquitto"`
<br>`cd "C:\Program Files (x86)\mosquitto>mosquitto -v -c "C:\Program Files (x86)\mosquitto>mosquitto.conf"`

<br
 
### Mosquitto Sub 🦟🙆
Novo prompt
<br> `cd..`
<br> `cd..`
<br> `cd "C:"C:\Program Files (x86)\mosquitto"`
<br> `mosquitto_sub -h localhost -p 1883 -t "exemplo"`
<br>

### Mosquitto Pub 🦟✍️
Novo prompt
<br> `cd..`
<br> `cd..`
<br> `"cd C:\Program Files (x86)\mosquitto"`
<br> `mosquitto_pub -h localhost -p 1883 -t "exemplo" -m "outro exemplo"`

