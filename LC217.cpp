#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;
using namespace std;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define endl "\n"
#define MOD 1000000007
#define MX 100010
bool containsDuplicate(vector<int>& nums) {
    unordered_set <int> x;
    for(int i = 0 ; i < nums.size();i++){
        if(x.find(nums[i])!=x.end()){
            return false;
        }else x.insert(nums[i]);
    }return true;
}
void solve(){
    vi v = {7,1,5,3,6,4};
    cout<<containsDuplicate(v)<<endl;    
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