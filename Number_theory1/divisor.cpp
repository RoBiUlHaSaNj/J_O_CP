#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n ;
    cin>>n;
    vector<int>divisor;
    for(int i=1; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            divisor.push_back(i);  //1 2  cz half 
            if(i!=n/i)divisor.push_back(n/i);// 6 3
        }
    }

    for(int i=0; i<divisor.size(); i++)
        cout<<divisor[i]<<" ";
    cout<<endl;
}
