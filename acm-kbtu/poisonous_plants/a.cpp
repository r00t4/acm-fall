#include<iostream>
#include<vector>
#include<stack>
#include<stdio.h>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	vector<int> s;
	int a;
	for(int i=0; i<n; i++){
		//cin>>a;
		scanf("%d", &a);
		s.push_back(a);
	}
	int cnt=0;
	int pos[100100];
	int k;
	vector<int> l;
	while(true){
		k = 0;    	
		vector<int> sw = s;
		for(int i=0; i<sw.size()-1; i++){
			if(sw[i]<sw[i+1]){
				l.push_back(sw[i+1]);
				k++;
				continue;
			}
			else if(l.back()>sw[i+1] && !l.empty()){
				s.push_back(l.back());
				l.pop_back();
				continue;
			}
			if(l.back()<sw[i+1] && !l.empty()){
				l.push_back(sw[i+1]);
				k++;
				continue;
			}
			s.push_back(sw[i+1]);
		}
		if(k!=0){
			cnt++;	
		}
		else{
			printf("%d", cnt);
			return 0;
		}
	}
}