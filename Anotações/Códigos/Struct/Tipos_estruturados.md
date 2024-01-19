### Tipos Estruturados 
- São usados para definir novos tipos de dados.
- Os tipos estruturados permitem o agrupamento de informações em formato de variáveis em contextos para facilitar a sua manipulação.

## Mas antes, devemos entender o que são !!!
## STRUCT:
- Definição de Struct:
- Struct, é uma estrutura de dados que define de forma objetiva uma lista
 de variáveis agrupadas sob um nome no seu respectivo um bloco de memória.

- Sintaxe:
// Definir a estrutura
struct <identificador_ou_novo_tipo> {
   <listagem dos tipos e membros>;
};

// Usar a estrutura no main
int main() {
    struct <identificador_ou_novo_tipo> <variavel>;
    // ...
    return 0;
}


- ## Exemplo de struct:
 #include <stdio.h>
struct ponto {
   float x, y;
};

int main(void) {
   struct ponto p;
   printf("Digite as coordenadas do ponto (x,y):");
   scanf("%f %f", &p.x, &p.y);
   printf("O ponto fornecido foi: (%.2f, %.2f)\n", p.x, p.y);

   return 0;
}

## Algumas observações:
- %[^\n]: Usado na função scanf. A seu objetivo é lê a até encontrar um caractere (\n). Isso é útil quando vamos ler uma linha inteira de texto, incluindo espaços.
- "->" : Usado para acessar membros de uma estrutura ou união através de um ponteiro.
. Por exemplo, se você tem um ponteiro p para uma estrutura que tem a variável x, teremos: p->x, no scanf.
- "." : Usado para acessar membros de uma estrutura ou união. 
. Por exemplo, se você tem uma estrutura s que tem um membro x, teremos s.x, no scanf.
- %2.f/%2.d : Usado no printf. Imprime um número, mas com pelo menos 2 dígitos preenchendo com zeros à esquerda caso precise. 

# Funções com estruturas:
- tipo_de_retorno nome_da_função (listagem de parâmetros) {
  informações;
  retorno_da_função;
}
- // Chamar no int main()
nome_da_função (listagem de parâmetros);

- As funções podem interagir com tipos estruturados de várias maneiras.
- Por exemplo, uma função pode aceitar uma estrutura como um argumento. 

#include <stdio.h>
struct ponto{
	float x, y;
};

void imprime (struct ponto *pp) {
	printf("O ponto fornecido foi: (%.2f, %.2f)\n", pp->x, pp->y);
}
void captura (struct ponto *pp) {
	printf("Digite as coordenadas do ponto (x,y):");
	scanf("%f %f", &pp->x, &pp->y);
}

int main(void){
	struct ponto p;
	captura(&p);
	imprime(&p);
	return 0;
}

