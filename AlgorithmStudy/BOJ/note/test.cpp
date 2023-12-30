#include <stdio.h>

int main(){
    int a, b, c, res, max, s;
    scanf("%d %d %d", &a, &b, &c);
    if(a==b&&b==c){
        res = 10000 + (a*1000);
    } else if(a!=b && a!=c && b!=c) {
        max = a < b ? b : a;
        max = max < c ? c : max;
        res = max * 100;
    } else {
        if(a==b){
            s = a;
            res = 1000 + (s*100);
        } else if(a==c){
            s = a;
            res = 1000 + (s*100);
        } else {
            s = b;
            res = 1000 + (s*100);
        }
    }
    printf("%d\n", res);
    return 0;
}
