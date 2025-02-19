#include<bits/stdc++.h>
using namespace std;
int main(){
	long int m,n,i;
	cin>>n>>m;
	vector<long int> t(n);
	vector<long int> cust(m);
	set<pair<long int,long int>> sorttickets;
	for(i=0;i<n;i++){
		cin>>t[i];
		sorttickets.insert({t[i],i});
	}
	for(i=0;i<m;i++) cin>>cust[i];
	for(i=0;i<m;i++){
		auto temp=sorttickets.lower_bound({cust[i]+1,0});
		if(temp==sorttickets.begin()) cout<<-1<<endl;
		else{
			temp--;
			cout<<(*temp).first<<endl;
			sorttickets.erase(temp);
		}
	}
	return 0;
}
