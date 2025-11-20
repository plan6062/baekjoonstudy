#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <string>

using namespace std;

// 비교 함수: 나이(first)만 비교합니다.
bool compare(const pair<int, string>& a, const pair<int, string>& b) {
    return a.first < b.first;
}

int main(){
    int N;
    cin >> N;
    vector<pair<int, string>> customer;
    for(int i = 0; i<N; i++){
        int temp;
        string temp2;
        cin >> temp >> temp2;
        customer.push_back(make_pair(temp, temp2));
    }
    stable_sort(customer.begin(), customer.end(), compare);
    for(int i = 0; i<customer.size(); i++){
        cout << customer[i].first << " " << customer[i].second << endl;
    }

    return 0;
}