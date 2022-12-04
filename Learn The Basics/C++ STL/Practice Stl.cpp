#include <iostream>
#include <utility>
#include <vector>
using namespace std;

// C++ STL Contains ->
// Algorithm
// Containers
// Functions
// Iterators

void explainPair()
{
    pair<int, int> p;
    p = {1, 2};

    cout << p.first << " " << p.second << endl;

    pair<int, pair<int, int>> p2;
    p2 = {1, {2, 3}};

    cout << p2.first << " " << p2.second.first << " " << p2.second.second << endl;

    pair<int, int> arr[] = {{1, 2}, {2, 5}, {5, 1}};
    cout << arr[1].second << endl;
}

void explainVector()
{
    vector<int> v;
    v.push_back(1);
    v.emplace_back(1);

    vector<pair<int, int>> v1;
    v1.push_back({1, 2});
    v.emplace_back(1, 2);

    vector<int> vec(5, 100);
    vector<int> v2(vec);
}

int main()
{
    // pairs demo
    explainPair();
    return 0;
}