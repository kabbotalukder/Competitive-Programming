#include <bits/stdc++.h>
#define ll long long int
#define pub push_back
#define vll vector<ll>
#define full(a) (a).begin(), (a).end()
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define cyes cout << "Yes" << endl
#define cno cout << "No" << endl
using namespace std;

void solution()
{
    vector<string> months = {"X", "January", "February", "March", "April", "May", "June", "July"};
    vll dates = {31, 31, 30, 31, 30, 31};
    for(ll i = 0; i < dates.size(); i++)
    {
        dates[i + 1] += dates[i];
    }
    ll m, d;
    cin >> m >> d;
    if(m < 8)
        cout << months[m] << " " << d << endl;
    else
    {
        ll n = m - 7;
        cout << months[7] << " " << dates[n - 1] + d << endl;
    }
}

int main()
{
    ll t = 1;
    //cin >> t;
    for(ll c = 1; c <= t; c++)
    {
        solution();
    }
    return 0;
}
