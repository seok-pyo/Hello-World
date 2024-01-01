#include <stdio.h>
#include <algorithm>

using namespace std;
int main(){
    int a, b, n, m, i, j, s, e;
    scanf("%d %d", &n, &m);
    int arr[n+1];
    for(i=1; i<=n; i++){
        arr[i] = i;
    }
    for(i=0; i<m; i++){
        scanf("%d %d", &a, &b);
        if(a < b){
            s = a;
            e = b;
        } else {
            s = b;
            e = a;
        }
        reverse(arr + s, arr + (e + 1));
    }
    for(i=1; i<=n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
