#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; 
    cin>>n;
    vector<pair<string, vector<int>>> m;
    for(int i=0; i<n; i++){
        string s;
        cin>>s;
        vector<int> v(7);
        for(int j=0; j<7; j++){
            cin>>v[j];
        }
        m.push_back({s,v});
    }
    int max = 0;
    string lead="";
    for(auto x:m){
        int sum = 0;
        sum+=x.second[0]*100 - x.second[1]*50;
        for(int i=2; i<7; i++){
           sum+=x.second[i];
        }
        if(sum>max){
            max = sum;
            lead = x.first;
        }
    }
    cout<<lead;
    return 0;
}