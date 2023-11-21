## Assinar Os Tópicos Usando O Mosquitto via Terminal 🦟💻✍️

### Mosquitto_sub
+ `-h` IP do servidor;
+ `-p` Porta do servidor;
+ `-d` Permite a impressão de mensagens de depuração;
+ `-t` Nome do topico que vai se inscrever para receber as mensagem ;
+ `-i` Nome visivel do computador;
+ `-u` Nome do usuario;
+ `-P` Senha do usuario.

<br>⚠️Exemplo de aplicação🤯
<br>
<br>`mosquitto_sub -t "Teste" -h localhost -p 1883` 
<br> 
<br>`mosquitto_sub -t "Teste" -h localhost -p 1883 -u <username> -P <password>`

### Mosquitto_pub
+ `-h` IP do servidor (localhost);
+ `-p` Porta do servidor;
+ `-t` Nome do topico que vai publicar a mensagem;
+ `-m` Mensagem a ser enviada;
+ `-i` A mensagem será enviada para todos os inscritos com exeção de .....;
+ `-u` Nome do usuario;
+ `-P` Senha do usuario.

### Servidor
+ `-v` começa a rodar;
+ `-c` caminho para o arquivo de configuração.

### LINKS 

+ https://cedalo.com/blog/how-to-install-mosquitto-mqtt-broker-on-windows/
+ https://mosquitto.org/documentation/authentication-methods/
