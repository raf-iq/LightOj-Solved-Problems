#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T,test=1,n,m,d,p;
	char op;
	cin >> T;
	while(T--){
		cin >> n >> m;
		vector<int> v(n);
		for(int i=0; i<n; ++i){
			cin >> v[i];
		}
		for(int i=0; i<m; ++i){
			cin >> op;
			if(op=='S'){
				cin >> d;
				for(int j=0; j<n; ++j){
					v[j]+=d;
				}
			}
			else if(op=='M'){
				cin >> d;
				for(int j=0; j<n; ++j){
					v[j]*=d;
				}
			}
			else if(op=='D'){
				cin >> d;
				for(int j=0; j<n; ++j){
					v[j]/=d;
				}
			}
			else if(op=='P'){
				cin >> d >> p;
				swap(v[d],v[p]);
			}
			else if(op=='R'){
				reverse(v.begin(),v.end());
			}
		}
		cout << "Case " << test++ << ":\n";
		for(int i=0; i<n-1; ++i){
			cout << v[i] << " ";
		}
		cout << v[v.size()-1] << endl;
	}
    return 0;
}