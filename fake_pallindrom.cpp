#include<bits/stdc++.h>
using namespace std;
bool check(string s, int i, int j){
    if(i==j) return true;
    vector<int> v(26,0);
    for(int k=i; k<=j; k++){
        v[s[k]-'a']++;
    }
    int odd=0;
    for(int i=0; i<26; i++){
        if(v[i]%2) odd++;;
    }
    if(odd>1) return false;
    return true;
}
int main(){
    string s;
    cin>>s;
    int cnt=0;
    for(int i=0; i<s.size(); i++){
        for(int j=i; j<s.size(); j++){
            if(check(s,i,j)){
                cnt++;
            }
        }
    }
    cout<<cnt;;
    return 0;
}