
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    ll n;
    cin>>n;
    vector<ll>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(n>2)cout<<"NO"<<endl;
    else if(abs(arr[0]-arr[1])==1){
        cout<<"NO"<<endl;
    }
    else {
        cout<<"YES"<<endl;
        // cout<<abs(arr[0]-arr[1])<<endl;
    }

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
