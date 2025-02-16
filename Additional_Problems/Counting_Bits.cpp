#include<bits/stdc++.h>
using namespace std;
 
int main(){
long int n,count=0,i,j,bit,temp1,rem;
cin>>n;
for(i=0;i<60;i++){
bit=1;
for(j=0;j<i;j++) bit*=2;
temp1=(n+1)/(2*bit);
count+=temp1*bit;
rem=(n+1)%(2*bit);
if(rem>bit){
count+=rem-bit;
}
}
cout<<count<<endl;
return 0;
}
