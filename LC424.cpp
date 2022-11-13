#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;
using namespace std;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define endl "\n"
#define MOD 1000000007
#define MX 100010
// template<class keyType,  class valueType>
// pair<keyType,valueType> get_max(const map<keyType,valueType>& m){
//     using pairType = pair<keyType,valueType>;
//     return max_element(m.begin(),m.end(),[](const pairType &p1 , const pairType &p2){
//         return p1.second < p2.second;
//     });
// }
int characterReplacement(string s , int k){
    map<char,int> m;
    int res = 0;
    int l = 0;
    int maxf = 0;
    for(int r = 0 ; r < s.length(); r++){
        if(m.find(s[r])==m.end()){
            m.insert(make_pair(s[r],1));
        }else{
            m[s[r]]++;
        }
        // auto p = max_element(m.begin(),m.end(),[](const auto &p1,const auto &p2){
        //     return p1.second < p2.second;
        // });
        maxf = max(maxf,m[s[r]]);
        while(((r-l+1)-maxf)>k){
            m[s[l]]-=1;
            l+=1;
        }
        res = max(res,r-l+1);
    }  
    return res;
}
void solve(){
    cout<<characterReplacement("AABABBA",1)<<endl;    
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