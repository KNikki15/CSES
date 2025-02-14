#include<bits/stdc++.h>
using namespace std;
 
int main(){
int n,target,i,j;
cin>>n>>target;
vector<pair<int,int>>num(n);
for(i=0;i<n;i++){
num[i].first=i+1;
cin>>num[i].second;
}
sort(num.begin(),num.end(),[](const pair<int ,int>& a,const pair<int,int>& b){
return a.second<b.second;});
i=0,j=n-1;
while(i<j){
if((num[i].second+num[j].second)==target){
cout<<num[i].first<<" "<<num[j].first<<endl;
return 0;
}
else if(num[i].second+num[j].second<target){
i++;}
else{
j--;
}
}
cout<<"IMPOSSIBLE"<<endl;
return 0;
}
