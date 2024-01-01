#include <iostream>

using namespace std;
int main(){
    int a, b;
    
    while(cin >> a >> b){
        int sum = a + b;
        cout << sum << endl;
        if(cin.eof()){
            break;
        }
    }

    return 0;
}
