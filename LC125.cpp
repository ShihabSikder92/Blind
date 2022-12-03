#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;
using namespace std;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define endl "\n"
#define MOD 1000000007
#define MX 100010
bool isPalindrome(string s) {
    transform(s.begin(),s.end(),s.begin(),::tolower);
    string x = "";
    for(int i=0; i < s.length();i++){
        if(isalpha(s[i])||isdigit(s[i]))x+=s[i];
    }
    int i = 0;
    int j = x.length()-1;
    while(i<j){
        if(x[i]!=x[j])return false;
        i++;
        j--;
    }
    return true;
}
void solve(){
    cout<<isPalindrome("0P")<<endl;    
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