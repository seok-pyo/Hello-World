#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
string combine;
vector<pair<char, int> > arr;
string a = "SEND";
string b = "MORE";
string c = "MONEY";
int chk[11];

int money(){
    int res=0;
    int m = 1;
    string text = "MONEY";
    for(int i=text.size()-1; i>=0; i--){
        for(int j=0; j<arr.size(); j++){
            if(text[i]==arr[j].first){
                res += arr[j].second * m;
            }
        }
        m *= 10;
    }
    return res;
}
int more(){
    int res=0;
    int m = 1;
    string text = "MORE";
    for(int i=text.size()-1; i>=0; i--){
        for(int j=0; j<arr.size(); j++){
            if(text[i]==arr[j].first){
                res += arr[j].second * m;
            }
        }
        m *= 10;
    }
    return res;
}
int send(){
    int res=0;
    int m = 1;
    string text = "SEND";
    for(int i=text.size()-1; i>=0; i--){
        for(int j=0; j<arr.size(); j++){
            if(text[i]==arr[j].first){
                res += arr[j].second * m;
            }
        }
        m *= 10;
    }
    return res;
}
void DFS(int L){
    if(L==8){
        if(send()<1000 || more()<1000) return;
        if(send()+more()==money()){
            std::cout << " " << send() << endl;
            std::cout << "+" << more() << endl;
            std::cout << "---------" << endl;
            std::cout << money() << endl;
        } 
    } else {
        for(int i=0; i<10; i++){
            if(chk[i]==0){
                chk[i]=1;
                arr[L].second = i;
                DFS(L+1);
                chk[i]=0;
            }
        }
    }
}
int main(){
    combine = a + b + c;
    sort(combine.begin(), combine.end());
    combine.erase(unique(combine.begin(), combine.end()), combine.end());
    for(int i=0; combine[i]!='\0'; i++){
        arr.push_back(make_pair(combine[i], 0));
    }

    DFS(0);
    return 0;
}
