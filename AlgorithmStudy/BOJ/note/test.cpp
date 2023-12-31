#include <stdio.h>

int main(){
    int n, a, b;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        for(int j=n-i-1; j>=0; j--){
            printf(" ");
        }
        for(int k=1; k<=i; k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
