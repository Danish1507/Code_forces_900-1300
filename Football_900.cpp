#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int l = s.length();
    int cnt = 1;
    for(int i=0; i<l-1; i++){
        if(s[i]==s[i+1]){
            cnt++;
        }
        else{
            cnt=1;
        }

        if(cnt>=7){
            cout<<"YES";
            break;
        }
    }
   if(cnt<7) cout<<"NO";
    return 0;
}