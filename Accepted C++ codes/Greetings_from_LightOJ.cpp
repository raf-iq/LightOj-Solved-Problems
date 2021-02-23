#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios :: sync_with_stdio(false);
    int N,a,b,test=1;
    cin >> N;
    while(N--){
        cin >> a >> b;
        cout << "Case " << test++ << ": " << a+b << endl;
    }
    return 0;
}

