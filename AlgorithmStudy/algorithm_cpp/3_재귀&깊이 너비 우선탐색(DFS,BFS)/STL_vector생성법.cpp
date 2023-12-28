#include <vector>
#include <iostream>
using namespace std;
int main()
{
    //     vector<int> a; // 메모리 할당 전
    //     a.push_back(6);
    //     a.push_back(8);
    //     a.push_back(11);
    //     cout << a.size() << endl;
    //     cout << a[1] << endl;

    // vector<int> a(5); // 원소 값은 기본적으로 0

    // vector<int> c[3]; // c라는 이름의 빈 벡터가 3개 생성(c[0], c[1], c[2])
    // c[0].push_back(1);
    // c[0].push_back(3);
    // c[0].push_back(5);
    // c[1].push_back(2);
    // c[1].push_back(4);
    // c[1].push_back(6);
    // c[2].push_back(7);
    // cout << c[1][1] << endl;
    // cout << c[2][0] << endl;

    vector<pair<int, int> > graph[3];
    graph[1].push_back({3, 5});
    graph[1].push_back({4, 7});
    graph[1].push_back({5, 9});
    // graph[2].push_back(make_pair(7, 7));
    // cout << graph[2][0].first
    //      << " " << graph[2][0].second << endl;
    return 0;
}
