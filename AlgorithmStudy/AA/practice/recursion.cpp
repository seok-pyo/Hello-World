// 재귀함수(recursion)는 정의 단계에서 자신을 재참조하는 함수
// include <bits/stdc++.h>
#include <iostream>
using namespace std;
int fact_rec(int n){
    if(n==1 || n == 0) return 1;
    return n * fact_rec(n-1);
}

int n = 5;
int main(){
    cout << fact_rec(n) << '\n';
    return 0;
}
