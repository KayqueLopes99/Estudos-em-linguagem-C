#include <stdio.h>

struct Cliente {
    int pontuacao;
    char pessoa[30];
    float valorgasto;
};

struct Cliente clientes[10];
int qtd = 0;


void menu() {
    printf("== escolha uma opcao ==\n");
    printf("1 - cadastrar-se para o sorteio\n");  
	printf("2 - Setores ou departamentos\n");  
    printf("3 - editar\n");
    printf("4 - excluir\n");
    printf("5 - listar\n");
    printf("6 - sorteio\n");
    printf("7 - sair\n");
}

void cadastrar() {
    printf("Informe os dados dos alunos\n");
    printf("informe a matricola , o seu nome e a sua media");
    scanf("%d %s %f", &clientes[qtd].pontuacao, clientes[qtd].pessoa, &clientes[qtd].valorgasto);
    qtd++;
}

void listar() {
    int i;
    for (i = 0; i < qtd; i++){
        printf("Nome: %s\n", clientes[i].pessoa);
        printf("Media: %.2f\n", clientes[i].valorgasto);
    }
}
int pesquisar(int pontuacao) {
    int i;
    for (i = 0; i < qtd; i++){
        if (clientes[i].pontuacao == pontuacao) {
            return i;
        }
    }
    return -1;
}

void menuAlterar() {
    printf(" === escolha uma opcao === \n");
    printf("1 - alterar nome\n");
    printf("2 - alterar media\n");
    printf("3 - sair\n");
    printf("==============================\n");
}


void alterar(int pontuacao) {
    int pos = pesquisar(pontuacao);
    if (pos == -1) {
        printf("impossivel excluir\n");
    }
    else {
        menuAlterar();
        int op;
        scanf("%d", &op);
        if (op == 1) {
            printf("Informe um novo nome:\n");
            scanf("%s", clientes[pos].pessoa);
        }
        else if (op == 2) {
            printf("Informe um novo nome:\n");
            scanf("%d", &clientes[pos].pontuacao);
        }
    }
}

void excluir(int pontuacao) {
    int i;
    int pos = pesquisar(pontuacao);
    if (pos == -1) {
        printf("impossivel excluir\n");
    }
    else {
        for (i = pos; i < qtd; i++) {
            clientes[i] = clientes[i + 1];
        }
        qtd--;
    }
}

int main() {
    //!showMemory(start=200)
    int op;
    menu();
    scanf("%d", &op);
    while (op != 7) {
        if (op == 1) {
            cadastrar();
        }
        else if (op == 3) {
            int pontuacao;
            printf("informe a matricula:\n");
            scanf("%d", &pontuacao);
            alterar(pontuacao);
        }
        else if (op == 4) {
            int pontuacao;
            printf("informe a matricula:\n");
            scanf("%d", &pontuacao);
            excluir(pontuacao);
        }
        else if (op == 5) {
            listar();
        }
        else {
            printf("opcao invalida\n");
        }
        menu();
        scanf("%d", &op);
    }
}