#include <stdio.h>

int main() {
    
    int numInicial, numFinal, totalPar = 0, i;
    
    printf("Digite o numero inicial:\n");
    scanf("%d", &numInicial);
    
    printf("Digite o numero final:\n");
    scanf("%d", &numFinal);
    
    for(i = numInicial; i <= numFinal; i++) {
        if(i % 2 == 0){
            printf("O numero %d eh par\n", i);
            totalPar++;
        }else{
            printf("O numero %d eh impar\n", i);
        }
    }
    
    printf("Numeros pares: %d", totalPar);
    return 0;
}
