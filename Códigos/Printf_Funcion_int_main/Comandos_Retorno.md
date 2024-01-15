## O comando Return
# Definição:
- O comando return é usado para encerrar e retornar.
- Ele também pode ser usado para retorno a um valor.

# Sintaxe:
- return expressão;
A expressão é o valor que você deseja retornar.

# Funções:
. return 1: indica que ocorreu algum erro durante a execução do programa.
. return 0: indica que o programa foi executado com sucesso.
. return operacao: operacao é uma expressão ou valor que você deseja que a função retorne. 

# Exemplo: 
- #include <stdio.h>
// Função que retorna a soma.
int soma(int a, int b) {
    return a + b;  // Retorna a soma de a e b.
}

int main() {
    int resultado = soma(5, 10);  // Chama a função soma.
    if (resultado == 15) {
        return 0;  // sucesso.
    } else {
        return 1;  // erro.
    }
}

# Funcionalidade
- O comando permite que as funções retornem valores e encerrem sua execução quando necessário.
