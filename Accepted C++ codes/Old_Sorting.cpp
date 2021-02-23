#include<bits/stdc++.h>
using namespace std;
int pos(vector<int> a,int i){
    int m=a[i],n=i;
    for(int j=i+1; j<a.size(); ++j){
        if(m > a[j]){
            m=a[j];
            n=j;
        }
    }
    return n;
}
int main ()
{
    int T,N,test=1,ip;
    cin >> T;
    while(T--){
        cin >> N;
        vector <int> arr;
        for(int i=0; i<N; ++i){
            cin >> ip;
            arr.push_back(ip);
        }
        int lagche=0;
        for(int i=0; i<N; ++i){
            int j=pos(arr,i);
            if(i != j){
                lagche++;
                swap(arr[i],arr[j]);
            }
        }
        cout << "Case " << test++  << ": " << lagche << endl;
    }
    return 0;
}
