#include<bits/stdc++.h> 
using namespace std; 


int32_t main() 
{
    long long int test_cases; cin >> test_cases; 
    while (test_cases--) 
    {
        long long int numOfElements; cin >> numOfElements;  
        long long int MAX_NUM = INT_MIN; 
        long long int index = -1; 

        vector<int> arrayOf(numOfElements);  

        for(long long int i = 0 ; i < numOfElements; i++) 
        {
            cin >> arrayOf[i] ; 

            if(arrayOf[i] >= MAX_NUM) 
            {
                MAX_NUM = arrayOf[i]; 
                index = i + 1; 
            }
        }
        cout << index << endl; 
    }
    
    
    return 0; 
}