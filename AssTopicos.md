## Assinar Os Tópicos Usando O Mosquitto via Terminal 🦟💻✍️

### Mosquitto_sub
+ `-i` ID do Cliente. Se este parâmetro não for passado, o ID do Cliente será gerado automaticamente;
+ `-t`Nome do tópico a ser assinado;
+ `-d` Permite a impressão de mensagens de depuração;
+ `-h` Alterar o host;
+ `-p` Alterar a porta;
+ `-u` `-p` Autenticação para conexção, expecificando senha e usuario.

<br>⚠️Exemplo de aplicação🤯
<br>
<br>`mosquitto_sub -i mosq_bub1 -t "Teste" -h localhost -p 1884 -d` 
<br>
<br>`mosquitto_sub -i mosq_bub1 -t "Teste" -u <username> -p <password> -d`

### Mosquitto_pub
