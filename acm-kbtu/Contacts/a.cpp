#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;
multiset<string> s;
string k;
int main()
{
	int n;
	cin>>n;
	for(int i=0; i<n; i++){
		string r,l;
		cin>>r>>l;
		if(r[0]=='a'){
			s.insert(l);
		}
		if(r[0]=='f'){
			int cnt=0;
			int k=0;
			poisk(0,e);	
			
			int w = 0, e = s.size();
			while(w<e){
				int mid = (w + e)/2;
				if(s[mid]==l){
					k = mid;
					break;
				}
				if(s[mid]<l){
					w = mid+1;
				}
				else{
					e = mid;
				}
			}
			for(int j=k; j<s.size(); j++){
				bool tr = true;
				if(s[j][0]!=l[0]){
					break;
				}
				for(int k=0; k<l.size(); k++){
					if(s[j][k]!=l[k]){
						tr = false;
						break;
					}
				}
				if(tr){
					cnt++;	
				}
			}
			cout<<cnt-1<<endl;
		}
	}
}