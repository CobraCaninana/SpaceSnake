# SnakeSpace  🐍✈️
### Configurações para acesso sem senha: 
<br>` allow_anonymous true`
<br>` listener 1883 0.0.0.0`

### Configurações para acesso com senha:
` password-file senha`
` allow_anonymous false`
` listener 1883`

### Cadastro de usuario e senha:
'mosquitto_passwd -c senha user'

### Teste para verificar se está executando:
- `netstat -at`
- `netstat -ntlp`
- `netstat -ntlp`

|Proto |Recv-Q Send-Q | Endereço Local | Endereço Remoto |  Estado  |  PID/Program name  |  
|------|--------------|----------------|-----------------|----------|--------------------|
| tcp  |       0      |0 0.0.0.0:1883  |    0.0.0.0:*    |   OUÇA   |          -         |
