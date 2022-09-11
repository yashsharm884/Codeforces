#include<bits/stdc++.h> 
#define ll long long 
using namespace  std; 

void solve() 
{
    int n, x, y, z, xsum(0), ysum(0), zsum(0);
    cin >> n;

    while (n--)
    {
        cin >> x >> y >> z;
        xsum += x;  // column wise addition of first column 
        ysum += y;  // column wise addition of second column 
        zsum += z;  // column wise addition of third column 
    }

    if (xsum == 0 && ysum == 0 && zsum == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    
}

int32_t main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
            freopen("input.txt", "r", stdin);
            freopen("output.txt", "w", stdout);
    #endif 

    solve(); 
}