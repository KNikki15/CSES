#include<bits/stdc++.h>
using namespace std;
 
int main(){
long long n,k;
cin>>n;
for(k=1;k<=n;k++){
long long totalposs=(k*k)*((k*k)-1)/2;
if(k>2){
long long attack=4*(k-1)*(k-2);
cout<<totalposs-attack<<endl;
}
else{
cout<<totalposs<<endl;}
}
return 0;
}
