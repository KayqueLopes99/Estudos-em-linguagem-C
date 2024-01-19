#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
    int opcaoMenuPrincipal = 0;
    int opcaoSubMenu = 0;

    while (opcaoMenuPrincipal != 3) { // Menu principal
        printf("=== Menu Principal ===\n");
        printf("1 - Opção 1\n");
        printf("2 - Opção 2\n");
        printf("3 - Sair\n");
        printf("Digite a opção desejada: ");
        scanf("%d", &opcaoMenuPrincipal);

        switch (opcaoMenuPrincipal) {
            case 1:
                while (opcaoSubMenu != 3) { // Submenu
                    printf("=== Submenu ===\n");
                    printf("1 - Subopção 1\n");
                    printf("2 - Subopção 2\n");
                    printf("3 - Voltar\n");
                    printf("Digite a opção desejada: ");
                    scanf("%d", &opcaoSubMenu);

                    switch (opcaoSubMenu) {
                        case 1:
                            printf("Você escolheu Subopção 1.\n");
                            break;
                        case 2:
                            printf("Você escolheu Subopção 2.\n");
                            break;
                        case 3:
                            printf("Voltando ao Menu Principal.\n");
                            break;
                        default:
                            printf("Opção inválida no submenu.\n");
                            break;
                    }
                }
                opcaoSubMenu = 0; // Reinicia a opção do submenu ao sair
                break;
            case 2:
                printf("Você escolheu a Opção 2 do Menu Principal.\n");
                break;
            case 3:
                printf("Saindo do programa.\n");
                break;
            default:
                printf("Opção inválida no Menu Principal.\n");
                break;
        }
    }

    return 0;
}