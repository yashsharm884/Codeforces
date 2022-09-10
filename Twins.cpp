#include<bits/stdc++.h> 
using namespace std; 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n; 
    int a[n];  int totalSum = 0 ; 

    for(int i = 0 ; i < n; i++) 
    {
        cin >> a[i] ;
        totalSum += a[i] ;
    }

    totalSum  = totalSum / 2; 
    int counter = 0 ; 
    int answer = 0; 

    sort(a, a+n) ;                                    // log N time complexity because of this. So total time complexity is: N(log N)  

    for(int i = n-1; i <= 0; i--)  
    {
        answer = answer + a[i]; 
        counter++; 

        if(answer > totalSum) 
        {
            break; 
        }
    }
    cout << counter << endl; 
    return 0; 
}