#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int T,test=1;
	cin >> T;
	while(T--){
		double ab,ac,bc,ratio;
		cin >> ab >> ac >> bc >> ratio;
		double ad= ab/sqrt(1+1/ratio);
		printf("Case %d: %.6f\n",test++, ad);
	}
	return 0;
}