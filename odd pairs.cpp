#include <iostream>
#include <bits/stdc++.h>
// #include <string.h>
// #include <stdlib.h>
#include <math.h>
using namespace std;


int main()
{
    int testcase;
    cin >> testcase;
    for (int testcase_variable = 0; testcase_variable < testcase; testcase_variable++)
    {
        long long n;
        cin>>n;
        long long odd_a,odd_b,even_a,even_b;
        if (n%2==0)
        {
            odd_a=n/2;
            odd_b=n/2;
            even_a=n/2;
            even_b=n/2;
        }
        else{
            odd_a=n/2+1;
            odd_b=n/2+1;
            even_a=n/2;
            even_b=n/2;
        }
        long long ans=0;
        ans=(odd_a*even_b)+(even_a*odd_b);
        cout<<ans<<endl;
    }
}
