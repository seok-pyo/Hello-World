#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

long long binomialCoefficent(int n, int k){
    if(k > n - k) k = n - k;
    long long res = 1;
    for(int i = 0; i < k; ++i){
        res *= (n - i);
        res /= (i + 1);
        if(res > 1e15) return res;
    }
    return res;
}

int main() {
    long long m;
    cin >> m;

    vector<pair<int, int> > results;

    for(int n = 1; n <= 10000; ++n){
        for(int k = 0; k <= n; ++k) {
            long long bc = binomialCoefficent(n, k);
            if(bc > m) break;
            if(bc == m) {
                results.push_back(make_pair(n, k));
                results.push_back(make_pair(n, n - k));
            }
        }
    }
    cout << results.size() << endl;
    for(const auto& p : results) {
        cout << p.first << " " << p.second << '\n';
    }

    return 0;
}