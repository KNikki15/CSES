#include<bits/stdc++.h>
using namespace std;
 
int main(){
int n;
cin>>n;
long int total=1<<n;
for(long int i=0;i<total;i++){
cout<<bitset<16>(i^(i>>1)).to_string().substr(16-n)<<endl;
}
return 0;
}
