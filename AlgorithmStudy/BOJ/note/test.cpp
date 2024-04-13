#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;

    string arr;
    for(int i = 0; i<n; i++){
        char c;
        cin >> c;
        arr += c;
    }

    int p = n - 1;
    while(p > 0 && arr[p-1] > arr[p]){
        p--;
    }

    if(p==0){
        cout << -1 << '\n';
        return 0;
    }

    swap(arr[p-1], arr[p]);

    // int l = n - 1;
    // while(arr[p-1] > arr[l]){
    //     l--;
    // }

    reverse(arr.begin() + p, arr.end());

    for(int i = 0; i < n; i++){
        cout << arr[i] << ' ';
    }

    return 0;
}

