#include <iostream>
using namespace std;
#include <vector>

#define ll long long

string s;
int n_b,n_s,n_c;
int c_b,c_s,c_c;
ll r;

bool cancook(ll m){
    ll e_b = max(0ll , m * c_b - n_b);
    ll e_s = max(0ll, m * c_s - n_s);
    ll e_c = max(0ll, m * c_c - n_c);
    
    ll e_r = e_b * p_b + e_s * p_s +  e_c * p_c;
    return e_r <= r; 
}

int main(){
    cin>>s;
    cin>> nb >> ns >> nc;
    cin>> pb >> ps >> pc;
    cin>> r;
    for(char c : s){
        if(c == 'B') c_b++;
        else if(c == 'S') c_s++;
        else if(c == 'C')c_c++;

    }

    ll ho=0;
    ll hi = 1e12 + 100;
    ll ans  =0 ;
    while(lo <= hi){
        ll m = lo + (hi - lo) / 2;
        if(cancook(m)){
            ans = m;
            lo = m + 1;
        }
        else {
            hi = m - 1;
        }
    }
    cout<<ans<<endl;
    return 0;
}