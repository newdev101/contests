#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve2(ll s_index,ll t_index,ll temp_ans,vector<string>&rooms,vector<bool>&visited,ll &ans){
    //base case
    // cout<<s_index<<" "<<t_index<<" "<<temp_ans<<" "<<ans<<endl;
    //direct check
    if(rooms[s_index][0]==rooms[t_index][0] || rooms[s_index][0]==rooms[t_index][1] || rooms[s_index][1]==rooms[t_index][0] || rooms[s_index][1]==rooms[t_index][1]){
        temp_ans+=abs(t_index-s_index);
        ans = min(ans,temp_ans);
        return;
    }
 

    //recursive cases
    for(int i=1;i<rooms.size();i++){
        if(visited[i]==false)
        if(rooms[s_index][0]==rooms[i][0] || rooms[s_index][0]==rooms[i][1] || rooms[s_index][1]==rooms[i][0] || rooms[s_index][1]==rooms[i][1])
        {
            visited[i]=true;
            temp_ans+=abs(i-s_index);
            solve2(i,t_index,temp_ans,rooms,visited,ans);
            temp_ans-=abs(i-s_index);
            visited[i]=false;
        }
    }


}

void solve(){
    ll n,q;
    cin>>n>>q;

    vector<string>rooms(n+1);
    for(int i=1;i<=n;i++)cin>>rooms[i];

    vector<pair<ll,ll>>queries;
    for(int i=0;i<q;i++){
        ll a,b;
        cin>>a>>b;
        queries.push_back({a,b});
    }


    for(int i=0;i<q;i++){
        ll s_index = queries[i].first;
        ll t_index = queries[i].second;
        ll ans = INT_MAX;
        vector<bool>visited(n+1,false);
        visited[s_index]=true;
        solve2(s_index,t_index,0,rooms,visited,ans);
        if(ans==INT_MAX)cout<<-1<<endl;
        else cout<<ans<<endl;
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