#include<stdio.h>

int main(void){
int line1,line2, input,matriks;
scanf("%d %d", &line1, &line2);
int matriks1[line1], matriks2[line2];
    if(line1==line2){
        for(int i=0;i<line1;i++){
        scanf("%d",&input);
        matriks1[i]=input;
        }
        for(int i=0;i<line2;i++){
            scanf("%d",&input);
            matriks2[i]=input;
        }
        for(int i=0;i<line1;i++){
            printf("%d ",matriks1[i]*matriks2[i]);}}   
    else {
       printf("Jumlah tidak sama") ;}
}