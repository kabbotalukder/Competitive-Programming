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
    ll d, s;
    int arr[4][4] = {
    {1, 2, 3},
    {3, 1, 2},
    {2, 3, 1},
    {1, 2, 3},
    };
    cin >> d >> s;
    if(d % 3 == 0)
        d = 2;
    else
        d = (d % 3) - 1;
    //cout << d << " " << s -1 << endl;
    if((arr[d][s - 1]) == 1)
        cout << 'A' << endl;
    else if((arr[d][s - 1]) == 2)
        cout << 'B' << endl;
    else if((arr[d][s - 1]) == 3)
        cout << 'C' << endl;
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
