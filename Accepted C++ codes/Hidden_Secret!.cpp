#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int T,test=1;
    cin >> T;
    cin.ignore();
    while(T--){
        string s1,s2;
        getline(cin,s1);
        getline(cin,s2);
        string s3="",s4="";
        for(int i=0; i<s1.size(); ++i){
            if(s1[i]!=' '){
                s3+=tolower(s1[i]);
            }
        }
        for(int i=0; i<s2.size(); ++i){
            if(s2[i]!=' '){
                s4+=tolower(s2[i]);
            }
        }
        cout << "Case " << test++ << ": ";
        if(s3.size()!=s4.size())
            cout << "No" << endl;
        else {
            sort(s3.begin(),s3.end());
            sort(s4.begin(),s4.end());
            bool bl=false;
            for(int i=0; i<s3.size(); ++i){
                if(s3[i]!=s4[i]){
                    bl=true;
                    break;
                }
            }
            if(bl){
                cout << "No" << endl;
            }else {
                cout << "Yes" << endl;
            }
        }
    }
    return 0;
}
