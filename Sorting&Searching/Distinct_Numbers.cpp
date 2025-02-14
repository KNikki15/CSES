#include<bits/stdc++.h>
using namespace std;
 
int main(){
int n,elem;
cin>>n;
vector<int>arr;
for(int i=0;i<n;i++){
cin>>elem;
arr.push_back(elem);
}
set<int>res(arr.begin(),arr.end());
cout<<res.size()<<endl;
return 0;
}
