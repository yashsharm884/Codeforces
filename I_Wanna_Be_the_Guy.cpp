#include<bits/stdc++.h> 
#define ll long long 
#define int ll 
using namespace  std; 

void solve() 
{
    set<int> st; 
   int n; cin >> n; 
   int p; cin >> p; 
   int pArr[p]; 

   for (int i = 0; i < p; i++)
   {
        cin >> pArr[i]; 
        st.insert(pArr[i]);  
   }

   int q; cin >> q; 
   int qArr[q] ; 

   for(int i = 0 ; i < q; i++) 
   {
        cin >> qArr[i] ; 
        st.insert(qArr[i]); 
   }
   
   if(st.size() == n) 
   {
        cout << "I become the guy." << endl; 
   }
   else 
   {
    cout << "Oh, my keyboard!" << endl; 
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
























