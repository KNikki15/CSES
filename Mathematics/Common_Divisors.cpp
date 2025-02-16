#include<bits/stdc++.h>
using namespace std;
 
const int MAX_VAL = 1e6;
int main() {
    int n,i;
    cin >> n;
    vector<int> x(n);
    vector<int>freq(MAX_VAL+1, 0);
    for(i=0;i<n;++i){
        cin >> x[i];
        freq[x[i]]++;
    }
    for (int gcd=MAX_VAL;gcd>=1;--gcd) {
        int count=0;
        for(int j= gcd; j<= MAX_VAL;j+= gcd) {
            count += freq[j];
        }
        if(count>1){
            cout<<gcd<<endl;
            return 0;
        }
    }
    return 0;
}
