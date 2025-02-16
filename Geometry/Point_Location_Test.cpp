#include<bits/stdc++.h>
using namespace std;
 
int main(){
int t;
cin>>t;
while(t--){
long int x1,y1,x2,y2,x3,y3;
cin>>x1>>y1>>x2>>y2>>x3>>y3;
long int val=(x2-x1)*(y3-y1) - (y2-y1)*(x3-x1);
if(val==0){
cout<<"TOUCH"<<endl;
}
else if(val<0){
cout<<"RIGHT"<<endl;
}
else{
cout<<"LEFT"<<endl;}
}
return 0;
}
