#include <stdio.h>

int pangkat(int base, int exp){
    if (exp == 0){
        return 1;
    }
    return base * pangkat(base, exp - 1);
}

int fpb(int a, int b){
    if (b == 0){
        return a;
    }
    return fpb(b, a % b);
}

int faktorial(int n){
    if (n <= 1){
        return 1;
    }
    return n * faktorial(n - 1);
}

int kuadrat(int n){
    if (n, 2);
}

void jalankanProgram(){
    char perintah;
    int a, b;

    printf("Masukkan instruksi: ");
    if (scanf("%c", &perintah) != 1){
        printf("Error: Input tidak valid!\n");
        return 0;
    }

    if (perintah == 's'){
        scanf("%d", &a);
        printf("%d\n", kuadrat(a));
    
    } else if (perintah == 'p'){
        scanf("%d %d", &a, &b);
        printf("%d\n", pangkat(a, b));
    
    } else if (perintah == 'f'){
        scanf("%d %d", &a, &b);
        printf("%d\n", fpb(a, b));
    
    } else if (perintah == 'n'){
        scanf("%d", &a);
        printf("%d\n", faktorial(a));
    
    } else {
        printf("Error: perintah tidak dikenali!\n");
    }
}

int main(){
    jalankanProgram();
    return 0;
}