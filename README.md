# Ponte Levadiça.
Projeto 1° sem Engenharia de Computação.

<div align="center">
  <img width= "411" alt="IMG_20230202_113442" src="https://github.com/Cinthiacs/Ponte_levadica/blob/main/ponteLevadica.png">
</div>


## Tema trabalhado: "Princípio de Pascal".

A aplicação consiste em uma pesquisa, onde foi aplicada a lógica de programação em linguagem C, na placa Arduino UNO, desenho técnico, e desenvolvimento do protótipo em miniatura.

Este é um código em Arduino que permite controlar uma ponte com dois motores utilizando a IDE do Arduino.

## Pré-requisitos
* Arduino Uno (ou outra placa compatível).
* Dois motores DC (para abertura e fechamento da ponte).
* Dois sensores de fim de curso (para indicar a posição aberta e fechada da ponte).
* Cabos para ligação dos componentes.
* Fonte de alimentação para os motores.

## Como usar


```bash
# clonar repositório
git clone https://github.com/Cinthiacs/Ponte_levadica.git
```

1. Carregue o código .ino na IDE do Arduino.
2. Conecte a placa Arduino no computador.
3. Conecte os motores nas saídas correspondentes (pino 9 para abrir e pino 10 para fechar).
4. Conecte os sensores de fim de curso nas entradas correspondentes (pino 13 para sensor de abertura e pino 12 para sensor de fechamento).
5. Conecte a fonte de alimentação para os motores.
6. Compile e carregue o código na placa.
7. Abra o Monitor Serial da IDE do Arduino e digite "a" para abrir a ponte ou "f" para fechar a ponte.

O código verifica a posição atual da ponte através dos sensores de fim de curso e só abre ou fecha a ponte se ela não estiver já na posição solicitada.

### Observações

É importante verificar as especificações dos motores e da fonte de alimentação para garantir que estão adequados para a aplicação.
Os sensores de fim de curso devem ser instalados de forma que sejam acionados quando a ponte estiver na posição totalmente aberta ou totalmente fechada.
O tempo de espera de 5 milissegundos após desativar um pino antes de ativar outro é necessário para evitar que ambos os pinos sejam ativados ao mesmo tempo e causem danos aos motores.

### Video pitch exemplificando o projeto:
https://youtu.be/HqbuGtEqYuc


### Autora
Cinthia Cavalheiro.
