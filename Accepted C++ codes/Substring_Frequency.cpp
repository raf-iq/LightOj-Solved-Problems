#include <bits/stdc++.h>
using namespace std;

int main() {
	int T,test=1;
	scanf("%d",&T);
	while(T--){
		string to,from;
		cin >> to >> from;
		int cnt=0;
		size_t p=0;
		while(1){
			p = to.find(from,p);
			if(p != string::npos)
			{
			cnt++;
			}
			if((int)p > to.size())
			{
				break;
			}
			p++;
			
		}
		printf("Case %d: %d\n",test++,cnt);
	}
	return 0;
}