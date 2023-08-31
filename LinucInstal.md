# SnakeSpace  🐍✈️
### Instalaçao: 
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

ps aux | grep mosquitto

Mata o processo que está usando o mosquitto.conf: 
kill 2810 (o número pode mudar)



### Parâmetros de configuração ajustados:
 ` listener 1883 0.0.0.0`



### Executar mosquito:
`# mosquitto -v -c /etc/mosquitto/mosquitto.conf`

### Teste para verificar se está executando:
- `# netstat -at`
- `# netstat -ntlp`

netstat -ntlp
Proto Recv-Q Send-Q Endereço Local          Endereço Remoto         Estado       PID/Program name    
tcp        0      0 0.0.0.0:1883            0.0.0.0:*               OUÇA       -                   

