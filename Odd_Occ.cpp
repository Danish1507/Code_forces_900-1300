#include <iostream>
#include <vector>

using namespace std;
void check(vector<int> &v, int mid, int &mid_l,int &mid_r){
  while(mid_l>=0 && v[mid_l]==v[mid]) mid_l--;
  while(mid_r<v.size() && v[mid_r] == v[mid]) mid_r++;
}

int main() {
   int n;
   cin>>n;
   vector<int> v(n);
   
   for(int i=0; i<n; i++){
     cin>>v[i];
   }
   int l=0;
   int r=n-1;
   int ans=0;
   int mid=0;
   while(l<=r){
       mid = (l+r)/2;
       int mid_l= mid;
       int mid_r = mid;
       check(v,mid,mid_l,mid_r);
       
       if((mid_r-mid_l)%2==0){
         ans=v[mid];
         break;
       }
       else if(mid_r>=n || mid_l%2==0){
         r = mid_l-1;
       }
       else if(mid_l<0 || mid_r%2==0){
         l=mid+1;
       }
    
    }
    cout<<ans;
    return 0;
}
