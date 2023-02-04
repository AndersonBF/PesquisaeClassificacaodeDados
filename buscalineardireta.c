#include <stdio.h>

int main () {
    int vetor[5] = {1,2,3,4,5};
     int a=5;
    for (int i=1;i<5;i++) {
        if(a==vetor[i]) {
            printf ("o numero foi encontrado\n");
        }
    }

}