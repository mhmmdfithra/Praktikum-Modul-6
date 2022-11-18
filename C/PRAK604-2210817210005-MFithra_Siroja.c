#include<stdio.h>
#include<string.h>

int main(void){
    char asli[100];
    char palsu[100];
    scanf("%[^\n]%*c", &asli);
    scanf("%[^\n]%*c", &palsu);
    int kode, pesan, n, a=0, b=0;
    kode= strlen(asli);
    pesan= strlen(palsu);
    if(kode != pesan){
        printf("\nPanjang kalimat berbeda, pesan palsu");}
    else{
        for (n=0; n<kode; n++){
            if(asli[n]==palsu[n]){
                if(asli[n]==' '){
                    printf(" "); }
                else{
                    printf("*");
                    a++; } }
            else{
                printf("#");
                b++; }
            }
        printf("\n*=%d", a);
        printf("\n#=%d", b);
        if(a>=b){
            printf("\nPesan Asli"); }
        else{
            printf("\nPesan Palsu"); }
            return 0; }
}
