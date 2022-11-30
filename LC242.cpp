#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;
using namespace std;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define endl "\n"
#define MOD 1000000007
#define MX 100010
bool isAnagram(string s, string t) {
    if(s.length()!=t.length())return false;
    vector<int> fir(26,0);
    vector<int> sec(26,0);
    for(int i  = 0 ; i< s.length();i++){
        fir[s[i]-'a']++;
        sec[t[i]-'a']++;
    }
    for(int i = 0 ; i < fir.size();i++){
        if(fir[i]!=sec[i]){
            return false;
        }
    }
    return true;
}
void solve(){
    cout<<isAnagram("nl","cx")<<endl;    
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