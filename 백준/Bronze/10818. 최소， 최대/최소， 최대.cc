#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> arr(N);

    for(int i = 0; i<N; i++){
        cin >> arr[i];
    }

    int min_val = *min_element(arr.begin(), arr.end());
    int max_val = *max_element(arr.begin(), arr.end());

    cout << min_val << " " << max_val;

    return 0;
}