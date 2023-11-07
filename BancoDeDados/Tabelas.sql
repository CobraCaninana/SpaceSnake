-- Tabela Sensor
CREATE TABLE Sensor (
    ID SERIAL PRIMARY KEY,
    modelo VARCHAR(50) NOT NULL,
    velocidade_envio INTEGER,
    pressao FLOAT,
    temperatura FLOAT,
    altitude FLOAT
);

-- Tabela Responsável pelo Lançamento
CREATE TABLE Responsavel (
    CPF VARCHAR(14) PRIMARY KEY,
    nome VARCHAR(255) NOT NULL,
    contato VARCHAR(20)NOT NULL,
    email VARCHAR(255),
    cargo VARCHAR(255) NOT NULL
);

-- Tabela Métricas
CREATE TABLE Metricas (
    ID SERIAL PRIMARY KEY,
    tipo_monitoramento VARCHAR(255),
	latencia INTEGER 
);

-- Tabela Endereco
CREATE TABLE Endereco (
    ID SERIAL PRIMARY KEY,
    pais VARCHAR(100) NOT NULL,
    estado VARCHAR(100) NOT NULL,
    municipio VARCHAR(150) NOT NULL,
    bairro VARCHAR(255) NOT NULL,
    rua VARCHAR(255) NOT NULL,
    numero INTEGER NOT NULL
);

-- Tabela de Usuários para Acesso à Página Web
CREATE TABLE Usuario (
    ID SERIAL PRIMARY KEY,
    nome VARCHAR(255) NOT NULL,
    email VARCHAR(255) NOT NULL,
    senha VARCHAR(255) NOT NULL,
    nivel_acesso INT NOT NULL,
	username VARCHAR(255) NOT NULL
);

-- Tabela Lançamento
CREATE TABLE Lancamento (
    ID SERIAL PRIMARY KEY,
    sensor_id INTEGER REFERENCES Sensor(ID),
    responsavel_CPF VARCHAR(14) REFERENCES Responsavel(CPF),
    metricas_id INTEGER REFERENCES Metricas(ID),
	endereco_id INTEGER REFERENCES Endereco(ID),
	usuario_id INTEGER REFERENCES Usuario(ID),
	data_hora_captura TIMESTAMP NOT NULL
);