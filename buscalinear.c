//o que uma busca linear faz?
//usa um for dentro do vetor para procurar, se encontrar, diz que é encontrado
// caso contrário, vá para o  próximo

#include <stdio.h>
#define TAMANHOMAXIMO 100

int main () {
    int n,i, vetor[TAMANHOMAXIMO], numero;
    printf("quantos numeros o vetor tem?");
    scanf("%d", &n);
//preenche o vetor com os dados inseridos pelo usuario
    for(i =0;i<n;i++) {
        scanf("%d", &vetor[i]);
    }
    printf("vetor:");
//mostra o vetor preenchido 
    for (i = 0; i < n; i++) {
    printf("%d ", vetor[i]);
  }
    printf("qual numero quer buscar?");
    scanf("%d", &numero);

    for (int i=1;i<n;i++) {
        if(numero==vetor[i]) {
            printf ("o numero está no vetor na posiçao %d\n", i);
        }
    }

}

