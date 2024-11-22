<h1 align="center">Global Solution - Green Energy</h1>

<div align="center">
  <img width="200px" src="https://github.com/user-attachments/assets/89d4b885-2d9e-4086-98ef-8b1c69456ba4">
</div>
<br>
<div align="center">
  <img width="250px" src="https://github.com/user-attachments/assets/46aa964e-3cae-4d11-82c7-ca90cfe1da2f">
</div>

### Tecnologias
![Arduino](https://img.shields.io/badge/Arduino_IDE-00979D?style=for-the-badge&logo=arduino&logoColor=white)
![C++](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![ESP32](https://img.shields.io/badge/ESP32-Microcontroller-blue?style=for-the-badge&logo=esp32)
![MQTT](https://img.shields.io/badge/MQTT-Protocol-brightgreen?style=for-the-badge&logo=MQTT)
<br><br>

## Integrantes:
<p>Caio Alexandre dos Santos - RM: 558460</p>
<p>Leandro do Nascimento Souza - RM: 558893</p>
<p>Rafael de Mônaco Maniezo - RM: 556079</p>

## Sobre o projeto
A FIAP propôs para as suas turmas o desafio semestral da Global Solution Green Energy, onde os alunos desenvolveram soluções tecnológicas e inovadoras para a geração e o uso de fontes de energia limpa e renovável, contribuindo para transformar o futuro energético do Brasil e do mundo.
O projeto “Vibranium” explora uma solução inovadora e sustentável para a geração de energia elétrica a partir de vibrações do ambiente. Utilizando a tecnologia piezoelétrica, que converte a vibração do ambiente em energia elétrica, o sistema propõe uma alternativa para gerar energia ambientes urbanos, industriais ou domésticos como fonte de energia limpa. 

## Componentes Físicos
- ESP32
- Diodo - 1n4007
- Capacitor 47µF 16 volts
- 15 piezoeletricos 27mm
- 1 protoboard

## Softwares Usados
- MQTT
- Tago.io
- Node-red

## Funcionamento
Nosso sistema utiliza 15 sensores piezoelétricos de 27mm, organizados em 3 fileiras de 5 sensores cada, conectados em paralelo e coladas no interior da caixa de papelão. A energia gerada por esses sensores passa por um circuito de retificação de onda completa, utilizando uma ponte de diodos para converter a corrente alternada em corrente contínua. Em seguida, um capacitor é integrado ao circuito para estabilizar a tensão em volts para ser transmitida para o ESP32 e envia esses dados via protocolo MQTT para a plataforma Tago.io. Nesta plataforma, os dados são processados e apresentados em dashboards interativos, permitindo aos usuários monitorar em tempo real da tensão de energia gerada pelo sensor.

## Requisitos
- Uma conta no Tago.io para acompanhar os dashboards nesse [link](https://tago.io/)

## Instruções de uso
1. Montagem da Caixa com Sensores Piezoelétricos
- Certifique-se de que os 15 sensores piezoelétricos de 27mm estão fixados no interior da caixa de papelão, organizados em 3 fileiras de 5 sensores cada.
  
2. Conexão ao Circuito
- Conecte os sensores piezoelétricos ao circuito de retificação de onda completa, garantindo que a ponte de diodos esteja corretamente posicionada para converter a corrente alternada em corrente contínua.
  
3. Configuração do ESP32
- Conecte o ESP32 ao circuito, garantindo uma conexão segura entre o capacitor e o pino de entrada analógica do Esp32.
  
4. Configuração do Protocolo MQTT
- Insira o endereço do broker MQTT e a porta do ESP32.
  
5. Integração com a Plataforma Tago.io
- Crie um dashboard interativo na plataforma.

6. Operação do Sistema
- Posicione a caixa de papelão em uma superfície onde haja vibrações ou impactos regulares.
- Ao aplicar movimentos ou impactos na superfície da caixa, os sensores piezoelétricos gerarão energia elétrica, que será convertida, estabilizada e transmitida para o ESP32.
- Monitore os dados em tempo real no dashboard da Tago.io, analisando a tensão gerada e o desempenho do sistema.
