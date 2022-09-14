#include<bits/stdc++.h> 
#include<iomanip>
#define ll long long 
#define int ll 
using namespace  std; 

// ICPC Assiut University Community 

void solve() 
{   
   int a,b, c , d ; cin >> a >> b >> c >> d ; 
   int start, end; 

   if((c < a && d < a) || (c > b && d > b) ) 
   {
        cout << -1 ; 
   }
   else 
   {
        if(a > c) 
        {
            start = a ; 
        }
        else 
        {
            start = c ;
        }

        if(b > d)  
        {
            end = d; 
        }
        else{
            end = b; 
        }
        cout << start << " " << end << endl; 
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
