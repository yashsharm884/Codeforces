#include<bits/stdc++.h> 
using namespace std; 


int32_t main() 
{
    long long int test_cases; cin >> test_cases; 
    while (test_cases--) 
    {
        int a; cin >> a; 
        vector<int> arrayOf(a); 

        if(a == 4) 
        {
            cout << 2 << " " << 1 << " " << 3 << " " << 4 << endl; 
        }
        else 
        {
             arrayOf[a-1] = a; 
             arrayOf[a-2] = a-1;
             arrayOf[a-3] = 1;
             arrayOf[a-4] = 3;
             arrayOf[a-5] = 2 ; 

             for(int i = 0 ; i < a - 5; i++) 
             {
                arrayOf[i] = i + 4; 
             }

             for(int i = 0 ; i < a; i++) 
             {
                cout << arrayOf[i] << " " ;
             }
             cout << endl; 
        }
    }
    
    
    return 0; 
}