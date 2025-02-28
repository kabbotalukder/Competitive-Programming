#include <bits/stdc++.h>
#define ll long long int
#define pub push_back
#define pob pop_back
#define PI 3.14159265359
#define vi vector<int>
#define vll vector<ll>
#define full(a) (a).begin(),(a).end()
#define loopi(a) for(ll i = 0; i < (a); i++)
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);                \
    cout.tie(NULL);
#define pi pair<ll, ll>
#define vpair vector<pair<ll, ll>>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define cyes cout << "Yes" << endl
#define cno cout << "No" << endl
#define minus cout << -1 << endl
using namespace std;

void solution(){
    ll n;
    cin >> n;
    map<ll, vll> mp;
    for(ll i = 0; i < n; i++){
        ll k;
        cin >> k;
        mp[k].push_back(i + 1);
    }
    ll max_d = -1;
    for(auto &it: mp){
        ll comp = (it.second[it.second.size() - 1] - it.second[0]);
        if(comp > max_d && comp != 0)
            max_d = it.second[it.second.size() - 1] - it.second[0];
    }
    cout << max_d;
}

int main(){
    fast;
    ll t = 1;
    // cin >> t;
    for(ll c = 1; c <= t; c++){
        // cout << "Case " << c << ": ";
        solution();
        cout << '\n';
    }
    return 0;
}