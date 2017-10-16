#include<iostream>
#include<set>
using namespace std;
int main()
{
	int n;
	cin>>n;
	set<long long> s;
	for(int i=0; i<n; i++){
		int c;
		long long k;
		cin>>c;
		if(c==1){
		 	cin>>k;
			s.insert(k);
		}
		if(c==2){
			cin>>k;
			s.erase(k);
		}
		if(c==3){
			set<long long>::iterator it;
			it = s.begin();
			cout<<*it<<endl;
		}
	} 

}