#include <iostream>

using namespace std;
int main(){
    int i, n, max=-2147000000, x;
    double ans, sum = 0;
    scanf("%d", &n);
    double a[n];
    for(i = 0; i<n; i++){
        scanf("%d", &x);
        a[i] = double(x);
        max = max < x ? x : max; 
    }    
    for(i = 0; i<n; i++){
        sum += (a[i]/max)*100;
    }
    ans = (sum / n);
    printf("%f\n", ans);
    return 0;
}
