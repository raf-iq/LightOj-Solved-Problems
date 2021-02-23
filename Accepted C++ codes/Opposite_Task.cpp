#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios :: sync_with_stdio(false);
    int N,T;
    cin >> T;
    while(T--){
        cin >> N;
        if(N%2 == 0){
            cout << N/2 << " " << N/2 << endl;
        }
        else
            cout << N/2 << " " << N/2+1 << endl;
    }
    return 0;
}

