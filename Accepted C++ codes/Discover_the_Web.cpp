#include <bits/stdc++.h>
using namespace std;

int main() {
	int T,test=1;
	scanf("%d",&T);
	while(T--){
		stack<string>_forward,_backward;
		string corrent_site="http://www.lightoj.com/";
		string command;
		cout << "Case " << test++ << ":" << endl;
		while(cin >> command){
            if(command == "QUIT"){
                break;
            }
            switch (command[0]) {
            case 'B':
                if(_backward.empty()){
                    cout << "Ignored" << endl;
                    break;
                }
                else {
                    _forward.push(corrent_site);
                    corrent_site=_backward.top();
                    cout << corrent_site << endl;
                    _backward.pop();
                    break;
                }
            case 'F':
                if(_forward.empty()){
                    cout << "Ignored" << endl;
                    break;
                }
                else {
                    _backward.push(corrent_site);
                    corrent_site=_forward.top();
                    cout << corrent_site << endl;
                    _forward.pop();
                    break;
                }
            case 'V':
                string new_site;
                cin >> new_site;
                _backward.push(corrent_site);
                corrent_site=new_site;
                cout << corrent_site << endl;
                while(!_forward.empty()){
                    _forward.pop();
                }
                break;
            }
		}
	}
	return 0;
}