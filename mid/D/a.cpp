#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main()
{
	long long n;
	cin>>n;
	int cnt=0;
	//int mn = 100001;
	vector<pair<string,int> > p;
	multiset<int> mn;
	for(int i=0; i<n; i++){
		int a;
		cin>>a;
		if(a!=-1){
			string s;
			cin>>s;
			mn.insert(a);	
			p.push_back(make_pair(s,a));
		}   	
		else{
			vector<pair<string,int> > t;
			while(!p.empty()){
				if(p.back().second!=*mn.begin()){
				 	t.push_back(p.back());
					p.pop_back();
				}
				else{
					break;
				}
			}
			cout<<t.size()<<" "<<p.back().first<<endl;
			mn.erase(mn.begin());
			p.pop_back();
			while(!t.empty()){
				p.push_back(t.back());
				t.pop_back();
			}
		}
	}
}