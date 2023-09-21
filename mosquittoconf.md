# SnakeSpace  🐍✈️
### Configurações para acesso sem senha: 
<br>` allow_anonymous true`
<br>` listener 1883 0.0.0.0`

### Configurações para acesso com senha:
<br>` password-file senha`
<br>` allow_anonymous false`
<br>` listener 1883`

### Cadastro de usuario e senha:
- ` mosquitto_passwd -c senha user` 

### Adicionar novo usuario:
- `mosquitto_passwd -b senha teste 123`

### 

