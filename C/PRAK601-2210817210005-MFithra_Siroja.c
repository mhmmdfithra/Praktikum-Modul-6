#include <stdio.h>

int main(void){
    int A,B, input;
    scanf("%d %d", &A, &B);
    int matriks[A][B];
    for(int i=0;i<A; i++){
        for(int a=0; a<B; a++){
        scanf("%d", &input);
        matriks[i][a]=input;}
}  
printf("\n"); 
    for(int i=0;i<A; i++){
        for(int a=0; a<B; a++){
        printf("%d ", matriks[i][a]); }
        printf("\n");
    }
}
