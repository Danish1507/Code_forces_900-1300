#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        long long n,k;
        cin>>n>>k;
        int sum = 1+k+k*k+k*k*k;
        cout<<n/sum<<" "<<(n*k)/sum<<" "<<(n*k*k)/sum<<" "<<(n*k*k*k)/sum<<endl;
    }

    return 0;
}