int LED = 10;        // Define o pino digital 10 como a saída para o LED
int LDR = A0;        // Define o pino analógico A0 como a entrada para o sensor LDR
int valor_LDR = 0;  // Variável que armazenará o valor lido do LDR

void setup() {
  pinMode(LED, OUTPUT);   // Configura o pino do LED como saída
  pinMode(LDR, INPUT);    // Configura o pino do LDR como entrada
}

void loop() {
   valor_LDR = analogRead(LDR); // Lê o valor do LDR e armazena na variável

   // Se o valor lido for menor que 500 (indicando pouca luz ou escuridão):
   if (valor_LDR < 500) {       
      digitalWrite(LED, HIGH);   // Liga o LED
   }  
   else {                        // Caso contrário (quando há mais luz):
      digitalWrite(LED, LOW);    // Desliga o LED
   }  
}
// Note que esse valor de 500 equivale a referência do potenciometro no nosso projeto analogico
