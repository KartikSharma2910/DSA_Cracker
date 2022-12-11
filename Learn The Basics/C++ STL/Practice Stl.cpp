#include <iostream>
#include <utility>
#include <list>
#include <vector>
#include <deque>
#include <queue>
#include <set>
#include <map>
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

void explainList()
{
    // internally it is made up of doubly linked list
    list<int> ls;
    ls.push_back(2);
    ls.emplace_back(6);
    ls.push_front(5);

    // list contain all methods same as vector
}

void explainDequeue()
{
    deque<int> dq;
    dq.push_back(1);
    dq.push_front(2);
    dq.pop_back();
    dq.pop_front();

    // list contain all methods same as vector
}

void explainStack()
{
    // it is same as usual stack
}

void explainQueue()
{
    // it is same as usual queue
}

void explainPriorityQueue()
{
    // max heap
    priority_queue<int> pq;
    pq.push(2);
    pq.push(3);
    pq.push(20);

    // min heap
    priority_queue<int, vector<int>, greater<int>> pqm;
    pqm.push(4);
    pqm.push(48);
}

void explainSet()
{
    // store data in sorted and unique manner
    set<int> st;
    st.insert(1);
    st.insert(3);
    st.insert(1);

    auto it = st.find(1);
    st.erase(3);

    int count = st.count(3);

    st.lower_bound(1);
    st.upper_bound(1);
}

void explainMultiSet()
{
    // it store data in sorted manner but not in unique manner
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);

    ms.erase(1);
    // this will delete all occurence of one
}

void explainMap()
{
    map<int, int> mp;
    mp.insert({1, 2});
    mp.insert({2, 6});
    mp.insert({3, 3});
    mp.insert({4, 9});

    for (auto it : mp)
    {
        cout << it.first << " " << it.second << endl;
    }
}

int main()
{
    // pairs demo
    explainPair();

    // vector demo
    explainVector();
    return 0;
}