#include<stdio.h>

int main(void){
    int kolom, input;
    scanf("%d", &kolom);
    int matriks[kolom];
    for(int i=0;i<kolom; i++){
        scanf("%d", &input);
        matriks[i]=input;
}
     for(int i=0;i<kolom; i++){
        printf("%d ",matriks[i]*(i+1));
     }
}