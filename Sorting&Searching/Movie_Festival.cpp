#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n,i;
    cin>>n;
    vector<pair<int, int>> arr(n);
    for(i=0;i<n;i++) {
        cin>>arr[i].first>>arr[i].second;
    }
    sort(arr.begin(),arr.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.second < b.second;
    });
    int count = 0;
    int lastEndTime = 0;
    for (const auto& elem : arr){
        if (elem.first >= lastEndTime) {
            count++;
            lastEndTime = elem.second;
        }
    }
    cout << count << endl;
    return 0;
}
