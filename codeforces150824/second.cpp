
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
  int l1,r1,l2,r2;
  cin>>l1>>r1>>l2>>r2;
  
  
  if(l1>l2){
      swap(l1,l2);
      swap(r1,r2);
  }
  
  //same
  if(l1==l2 && r1==r2){
    cout<<(r1-l1)<<endl;
    return;
  }
  //disjoint
  else if(r1<l2){
    cout<<1<<endl;
  }


  //overlap
  else if(r1>=l2 && l2>l1 && r2>r1)cout<<(r1-l2+2)<<endl;

  //subset
  else if(l1==l2 || r1==r2)cout<<min(r1-l1,r2-l2)+1<<endl;
  else cout<<(r2-l2)+2<<endl;
  //left same

}

void solve2(){
  int l1,r1,l2,r2;
  cin>>l1>>r1>>l2>>r2;

  int arr[101]={0};
  for(int i=l1;i<=r1;i++){
    arr[i]=1;
  }
  int ans=0;
  for(int i=l2;i<=r2;i++){
    if(arr[i]==1){
      ans++;
    }
  }

  if(ans==0)cout<<1<<endl;
  else if(l1==r1 && l2==r2)cout<<ans<<endl;
  else if(l1==l2 || r1==r2)cout<<ans+1<<endl;
  else cout<<ans+2<<endl;
}

int main(){

        #ifndef ONLINE_JUDGE  
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif


    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}
