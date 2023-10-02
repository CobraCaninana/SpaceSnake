 # SpaceSnake ✈️🐍
Instalar o Broker Mosquitto https://mosquitto.org/

## Configurações no Windows 🪟🪟
>⚠️ ATTENTION!!!!! <br>
>![imagem](coisasa/imagen.jpeg)<br>
> No documento mosquito.conf alterar para `allow_anonymous true` `listener 1883. 0.0.0.0`

### Inicializar O Mosquitto 🦟⏰
Novo prompt
<br> `cd..`
<br> `cd..`
<br>`cd "C:\Program Files (x86)\mosquitto"`
<br>`cd "C:\Program Files (x86)\mosquitto>mosquitto -v -c "C:\Program Files (x86)\mosquitto>mosquitto.conf"`

 
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
<br> `cd "C:"C:\Program Files (x86)\mosquitto"`
<br> `mosquitto_pub -h localhost -p 1883 -t "exemplo" -m "outro exemplo"`

### Mosquitto Pub e Sub com senha
<br> `mosquitto_sub -h localhost -p 1883 -t "exemplo" -u user -P 123456
<br> `mosquitto_pub -h localhost -p 1883 -t "exemplo" -m "outro exemplo" -u user -P 123456`

## Configurações no Linux 
- `sudo su`
- `apt-get update`
* `apt-get install mosquitto`
+ `apt-get install mosquitto-clients`

### entrar na pasta mosquitto: 

+ `cd /etc`
* `cd mosquitto`

### Exemplo do .conf:
https://github.com/flaviostutz/mosquitto/blob/master/config/mosquitto.conf.example

### No terminal: 
 - `vi mosquitto.conf`

> Copiar o exemplo do .conf e colar no arquivo <br>
> Para poder inserir no vi, tecla **`i`**. Para salvar e sair, dar **`esc :x`**

<br>`ps aux | grep mosquitto` <br>
<sub> Mata o processo que está usando o mosquitto.conf: 
**kill 2810** (o número pode mudar)


### Executar mosquito:
`mosquitto -v -c /etc/mosquitto/mosquitto.conf`

### Teste para verificar se está executando:
- `netstat -at`
- `netstat -ntlp`
- `netstat -ntlp`

|Proto |Recv-Q Send-Q | Endereço Local | Endereço Remoto |  Estado  |  PID/Program name  |  
|------|--------------|----------------|-----------------|----------|--------------------|
| tcp  |       0      |0 0.0.0.0:1883  |    0.0.0.0:*    |   OUÇA   |          -         |
