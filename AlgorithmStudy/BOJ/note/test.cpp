#include <stdio.h>
#include <algorithm>
#include <set>
using namespace std;

int main(){
    int a, res, tmp, cnt = 0;   
    set<int> unique;
    for(int i = 0; i < 10; i++){
        scanf("%d", &a);
        res = a % 42;
        unique.insert(res);
    }
    printf("%lu\n", unique.size());
    return 0;
}
