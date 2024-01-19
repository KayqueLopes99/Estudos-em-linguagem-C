/*- Somatório entre números. */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese"); // acentos

    float trab, aval, exam, med;
    
    // Solicita e recebe as notas
    printf("Insira a nota do trabalho: \n");
    scanf("%f", &trab);
    printf("Insira a nota da avaliação: \n");
    scanf("%f", &aval);
    printf("Insira a nota do exame: \n");
    scanf("%f", &exam);
    
    // Calcula a média
    med = (trab*2 + aval*3 + exam*5)/10;
    printf("Média: %.2f.\n", med);
    
    // Classifica em grupos
    // 8.0 ~ 10.0 = A
    if(med >= 8.0 && med <= 10){
        printf("A média está entre 8.0 e 10.0, logo você está no grupo A.\n");
    }
    // 7.0 ~ 8.0 = B
    else if(med >= 7.0 && med < 8.0){
        printf("A média está entre 7.0 e 8.0, logo você está no grupo B.\n");
    }
    // 6.0 ~ 7.0 = C
    else if(med >= 6.0 && med < 7.0){
        printf("A média está entre 6.0 e 7.0, logo você está no grupo C.\n");
    }
    // 5.0 ~ 6.0 = D
    else if(med >= 5.0 && med < 6.0){
        printf("A média está entre 5.0 e 6.0, logo você está no grupo D.\n");
    }
    else {
        printf("VOCÊ FOI REPROVADO LINDÃO KKKKKKKKK\n");
    }

    system("pause");
    return 0;
}
