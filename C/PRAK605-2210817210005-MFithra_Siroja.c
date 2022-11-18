#include <stdio.h>

int main(void){
    int matriks1[10][10], matriks2[10][10],hasil[10][10];
    int nilai,jumlah=0;
    scanf("%d", &nilai);
    printf("Matriks A\n");
    for(int a=0;a<nilai; a++){
        for(int b=0; b<nilai; b++){
        scanf("%d", &matriks1[a][b]);}
    }
    printf("Matriks B\n");
    for(int a=0;a<nilai; a++){
        for(int b=0; b<nilai; b++){
        scanf("%d", &matriks2[a][b]);}
    }
    for(int a=0;a<nilai; a++){
        for(int b=0; b<nilai; b++){
            for(int c=0; c<nilai; c++){
                jumlah= jumlah+ matriks1[a][c]*matriks2[c][b];}
                hasil[a][b]=jumlah;
                jumlah=0;}}
    printf("Matriks AXB\n");
    for(int a=0;a<nilai; a++){
        for(int b=0; b<nilai; b++){
            printf("%d ", hasil[a][b]);}
            printf("\n");}
}