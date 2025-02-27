#include <bits/stdc++.h>

using namespace std;
int solve(int n){
    if(n==2) return 1;
    if(n<2) return 0;
    int x = (n-1)*(solve(n-1)+solve(n-2));

    return x;
}
int main(){
    int n;
    cin>>n;
    int ans = solve(n);

    cout<<ans;

    return 0;
}