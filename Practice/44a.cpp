#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
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
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds; // find_by_order, order_of_key

void solution(){
    ll n, count = 0;
    cin >> n;
    map <string, ll> mp;
    while(n--)
    {
        string s, c;
        cin >> s >> c;
        mp[s + " " + c]++;
        if(mp[s + " " + c] == 1)
            count++;
    }
    cout << count << endl;
}

int main(){
    fast;
    ll t = 1;
    // cin >> t;
    for(ll c = 1; c <= t; c++){
        // cout << "Case " << c << ": ";
        solution();
        // cout << '\n';
    }
    return 0;
}