#include <stdio.h>
#include <algorithm>

using namespace std;
int main(){
    int max = -2147000000, min = 2147000000, n, tmp;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &tmp);
        max = max < tmp ? tmp : max;
        min = tmp < min ? tmp : min;
    }
    printf("%d %d\n", min, max);
    return 0;
}
