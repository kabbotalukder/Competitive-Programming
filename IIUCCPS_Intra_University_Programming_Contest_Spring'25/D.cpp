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


ll findMin(vll &mq, ll s, ll n)
{
    ll min_val = mq[0], min_idx = 0;
    for(int i = 1; i < mq.size(); i++)
    {
        if(mq[i] < min_val)
        {
            min_val = mq[i];
            min_idx = i;
        }
    }
    return min_idx;
}

ll findMax(vll &mq, ll s, ll n)
{
    ll max_val = mq[0], max_idx = 0;
    for(int i = 1; i < mq.size(); i++)
    {
        if(mq[i] > max_val)
        {
            max_val = mq[i];
            max_idx = i;
        }
    }
    return max_idx;
}

void solution()
{
    vll v;
    vll mq;
    ll n, m;
    cin >> n >> m;
    for(int i = 0; i < n; i++)
    {
        ll k;
        cin >> k;
        v.pub(k);
    }
    if(n == m)
    {
        ll max_val = v[0];
        for(int i = 1; i < n; i++)
        {
            if(v[i] > max_val)
                max_val = v[i];
        }
        cout << max_val << endl;
        return;
    }
    stack<ll> stk;
    ll i;
    for(i = 0 ; i < m; i++)
    {
        mq.pub(v[i]);
    }
    ll x = n - 1;
    for(ll j = n - 1; j >= i; j--)
    {
        stk.push(v[j]);
    }
    while(!stk.empty())
    {
        ll minIdx = findMin(mq, 0, mq.size());
        mq[minIdx] += stk.top();
        stk.pop();
    }
    cout << mq[findMax(mq, 0, mq.size())] << endl;
}

int main()
{
    ll t = 1;
    cin >> t;
    for(ll c = 1; c <= t; c++)
    {
        solution();
    }
    return 0;
}
