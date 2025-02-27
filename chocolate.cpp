#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    int i=0;
    int j=0;
    while(j<n){
        if(v[i]==0){
        while(j<n && v[j]==0) j++;
        if(j<n){
            swap(v[i],v[j]);
            i++;
        }
        else break;
    }
    else i++;
    j++;
    }

    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
 
    return 0;
}