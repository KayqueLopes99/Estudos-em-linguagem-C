## Operadores lógicos
. Usados para combinar várias condições ou restrições.
# && (E)
. Se ambos os operandos forem diferentes de zero, a condição se torna verdadeira
- Sintaxe: `(operando_1 && operando_2)`
# || (OU)
. A condição se torna verdadeira se pelo menos um dos operandos for diferente de zero.
- Sintaxe: `(operando_1 || operando_2)`
- Exemplo: 
- OU lógico (||):
```c
#include <stdio.h>
int main () {
  int a = -1, b = 20;
  if (a > 0 || b > 0) {
    printf("Pelo menos um dos valores é maior que 0\\n");
  } else {
    printf("Ambos os valores são menores que 0\\n");
  }
  return 0;
}
```
# ! (NEGAÇÃO)
. É verdade quando o operador é falso.
- Sintaxe: `!(operando_1 && operando_2)`
