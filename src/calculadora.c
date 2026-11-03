#include <stdio.h>

int main()
{
    int opcao, a, b, resultado;
    
    do{
        printf("---- CALCULADORA v1.0 ----\n");
        printf("-- by DevEduLP --\n");
        
        printf("\n\nLista de Operações:\n");
        printf("1 - Soma\n");
        printf("2 - Subtração\n");
        printf("3 - Multiplicação\n");
        printf("4 - Divisão\n");
        printf("5 - Sair\n");
        printf("Selecione a operação: ");
        scanf("%d", &opcao);
        
        if (opcao >= 1 && opcao <= 4){
            printf("\nDigite o primeiro número: ");
            scanf("%d", &a);
            printf("\nDigite o segundo número: ");
            scanf("%d", &b);
        }
        
        switch(opcao) {
            case 1: 
                resultado = a + b;
                printf("\nO resultado da soma é: %d\n\n", resultado);
                break;
            case 2:
                resultado = a - b;
                printf("\nO resultado da subtração é: %d\n\n", resultado);
                break;
            case 3: 
                resultado = a * b;
                printf("\nO resultado da multiplicação é: %d\n\n", resultado);
                break;
            case 4:
                if (b == 0){
                    printf("\n[ERRO] Divisão por zero não permitida.\n");
                } else {
                    resultado = a / b;
                    printf("\nO resultado da divisão é: %d\n\n", resultado);
                }
                break;
            case 5:
                printf("\nVocê saiu da Calculadora.\n\n");
                break;
            default:
                printf("\nDigite uma opção válida.\n");
        }
        
    } while (opcao != 5);
    
    return 0;
}
