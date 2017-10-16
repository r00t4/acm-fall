#include<iostream>
#include<set>
#include<vector>
#include<deque>
#include<algorithm>
using namespace std;
int main()
{
	long long n;
	long long x;
	cin>>n>>x;
	multiset<long long> s; 
	for(long long i=0; i<n; i++){
		long long e;
		cin>>e;
		s.insert(e);
	}
	//set<long long>::iterator it;
	long long sw = 1;
	long long i=0;
	multiset<long long>::iterator it;
	//cout<<"ok";
	while(true){
		//sort(s.begin(), s.end());
		it = s.begin();		
		if(s.size()<2){
			if(*it<x){
				cout<<-1;
				return 0;
			}
			else{
				cout<<i;
				return 0;	
			}	
		}
		if(*it>=x){
			cout<<i;
			return 0;	
		}
		else{
			sw *= *it;
			//cout<<*it<<" ";
			s.erase(s.begin());
			it=s.begin();
			sw += *it * 2;
			//cout<<*it<<" "<<endl;
			s.erase(s.begin());
			s.insert(sw);
			//cout<<sw<<" ";
			sw = 1;
			//sort(s.begin(), s.end());
			//cout << "ok";
		}
		i++;
	}
	//cout<<-1;
}