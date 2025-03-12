/*
Autor:Bianca
Nome da Programação:aula 35-clique botao
Descrição: contar quantas vezes apertou o botao
Data: 11/03/25
*/
#define Botao 10

int estadoAnterior = 0; // Estado anterior do botão
int estadoBotao = 0;        // Contador de cliques


void setup() {
    Serial.begin(9600);
    pinMode(Botao, INPUT);
}

void loop() {
 
    int estadoAtual = digitalRead(Botao);
    if (estadoAtual == 1 && estadoAnterior == 0) { //estadoAtual recebe liigado e anterior recebe desligado // se nao quiser pode so colocar ! para inverter 
        estadoBotao++;
       estadoLed = !estadoLed;
       digitalWrite(pinLed, estadoLed);
        Serial.print("Clique botao: ");
        Serial.println(estadoBotao);
    }
    estadoAnterior = estadoAtual;
}

//conatgem++;
//Serial.printl (contagem);