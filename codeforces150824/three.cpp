
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    ll n,k;
    cin>>n>>k;

    // cout<<n<<" "<<k<<endl;
    vector<ll>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];

    sort(arr.begin(),arr.end(),greater<int>());

    // for(auto it:arr)cout<<it<<" ";
    // cout<<endl;

    ll ans=0;
    for(int i=0;i<n;i++){
        if(i&1){
            ans-=arr[i];
            if(k>0){
                ans-=min(k,arr[i-1]-arr[i]);
                k-=min(k,arr[i-1]-arr[i]);
            }
        }
        else{
        ans+=arr[i];
        }
    }
    cout<<ans<<endl;
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
