#include<bits/stdc++.h> 
#define ll long long 
using namespace  std; 

void solve() 
{
   int a[6][6]; 
   int i,j,r,s ; 

   for(i = 1; i < 6; i++) 
   {
        for(j = 1; j < 6; j++) 
        {
            cin >> a[i][j] ; 

            if(a[i][j] == 1) 
            {
                r = abs(3-i); 
                s = abs(3-j); 
                cout << r + s ; 
            }
        }
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