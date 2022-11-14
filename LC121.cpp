#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;
using namespace std;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define endl "\n"
#define MOD 1000000007
#define MX 100010
int maxProfit(vector<int>& prices) {
    int l = 0 , r = 1;
    int maxP = 0;
    while(r<prices.size()){
        if(prices[l]<prices[r]){
            maxP = max(maxP,(prices[r]-prices[l]));
        }else l = r;
        r++;
    }
    return maxP;   
}
void solve(){
    vi v = {7,1,5,3,6,4};
    cout<<maxProfit(v)<<endl;    
}
int main(){
    fast;
    int t = 1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}