# Projeto-Jogo-em-C.
Olá, este repositório é um trabalho coletivo na realização de três jogos em C, usando estrutura de repetição, condição e sequencial.
Os jogos são: Perguntas e respostas, Cobra na caixa e Gousma War
Integrantes da EQUIPE: Henrique Dutra e Isac Lopes.
Turma CC1MA - SUB B


A FERRAMENTA IA USADA, FOI O GEMINI. FOI PRINCIPALMENTE USADA PARA A ESTRUTURA DE RANDOMIZAÇÃO DO JOGO 2 ( COBRA NA CAIXA ).
AQUI O PROMPT USADO:

Como fazer sistema de aleatorização em linguagem C?

O Gemini disse
Para criar um sistema de aleatorização na linguagem C, você precisará usar duas funções principais da biblioteca padrão <stdlib.h>: rand() e srand(). Além disso, é comum usar a biblioteca <time.h> para garantir que os números gerados sejam diferentes a cada execução do programa.

Aqui está o passo a passo de como isso funciona:

1. Entendendo as funções
rand(): Retorna um número inteiro pseudoaleatório entre 0 e uma constante chamada RAND_MAX (geralmente 32767).

srand(semente): Define a "semente" (ponto de partida) para o algoritmo de geração de números. Se você usar apenas o rand() sem o srand(), o programa vai gerar a mesma sequência de números toda vez que for executado.

time(NULL): Retorna o tempo atual do sistema em segundos. Usamos isso dentro do srand() para que a semente seja sempre diferente a cada vez que você abre o programa.

2. Exemplo de Código Básico
Abaixo está um exemplo completo que gera 5 números aleatórios entre 0 e 99:

C
#include <stdio.h>
#include <stdlib.h> // Necessário para rand() e srand()
#include <time.h>   // Necessário para time()

int main() {
    // 1. Inicializa o gerador de números aleatórios com o tempo atual
    srand(time(NULL));

    printf("Gerando 5 numeros aleatorios:\n");

    for (int i = 0; i < 5; i++) {
        // 2. Gera o número aleatório. 
        // O operador '%' (módulo) limita o resultado. 
        // rand() % 100 resulta em números de 0 a 99.
        int numeroAleatorio = rand() % 100;
        
        printf("%d\n", numeroAleatorio);
    }

    return 0;
}
3. Como definir um intervalo específico (Mínimo e Máximo)
Na maioria dos sistemas, você não quer apenas números de 0 a X, mas sim um intervalo específico, como simular um dado (1 a 6) ou escolher um número entre 50 e 100.

Para isso, você usa a seguinte fórmula matemática com o operador de resto da divisão (%):

C
numero = (rand() % (MAXIMO - MINIMO + 1)) + MINIMO;
Exemplos Práticos:

Para simular um dado de 6 lados (1 a 6):

C
int dado = (rand() % 6) + 1; 
// rand() % 6 gera de 0 a 5. Somando 1, o intervalo vira de 1 a 6.
Para gerar um número entre 20 e 50:

C
int numero = (rand() % 31) + 20; 
// 50 - 20 + 1 = 31. rand() % 31 gera de 0 a 30. Somando 20, vira 20 a 50.
Resumo das melhores práticas:
Sempre chame srand(time(NULL)); apenas uma vez no início da sua função main(). Não coloque dentro de loops, senão você acabará gerando o mesmo número repetidamente (pois o loop roda mais rápido do que o relógio de segundos do computador muda).

Use o operador módulo (%) combinado com adição para esculpir o intervalo exato que você precisa.
