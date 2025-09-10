#include <stdio.h>

int Vetor_Achados[11];

int haste (int n, int p[]){
    if (n==0) return 0;
    if (Vetor_Achados[n] != -1){
        return Vetor_Achados[n];
    }

    int i, max = -1;
    for (i = 1 ; i <= n; i++){
        int temp = p[i] + haste(n-i, p);
        if (temp > max) max = temp;
    }
    Vetor_Achados[n] = max;
    return max;
}
int main()
{
    for (int i = 0; i < 11; i++) {
        Vetor_Achados[i] = -1;
    }
    int p[11] = {0,1,5,8,9,10,17,17,20,24,30};
    printf("max = %d\n", haste(10,p));

    return 0;
}