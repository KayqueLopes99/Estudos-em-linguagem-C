## O comando SYSTEM 
- A função `system()`:
- Executa qualquer comando que você normalmente executaria no terminal ou linha de comando.
. Sintaxe:
``` c system(comando);```

- ``` c system("pause"); ``` 
- Usado para pausar a execução do programa e esperar que o usuário pressione qualquer tecla.

- ``` c system("cls"); ``` 
- Este comando é usado para limpar a tela.

- ``` c systems("echo ESCRITURAS"); ``` 
- É usado para imprimir uma mensagem na saída padrão com a tela do terminal.

- Exemplo:
``` c
#include <stdlib.h>

int main() {
    system("echo HELLO WORLD");
    return 0;
}
// Quando executado, "HELLO WORLD" na tela.
```