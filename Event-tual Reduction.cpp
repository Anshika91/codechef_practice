#include <iostream>
#include <bits/stdc++.h>
// #include <string.h>
// #include <stdlib.h>
#include <math.h>
using namespace std;

int givefreq(char a,string str,int n){
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if (a==str[i])
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int testcase;
    cin >> testcase;
    for (int testcase_variable = 0; testcase_variable < testcase; testcase_variable++)
    {
        int n,ans=0;
        cin>>n;
        string str;
        cin>>str;
        if (n%2==1)
        {
            cout<<"NO"<<endl;
        }
        else{
            for (int i = 0; i < n; i++)
            {
                int x;
                x=givefreq(str[i],str,n);
                if (x%2==1)
                {
                    ans++;
                    break;
                }
            }
            if (ans>0)
            {
                cout<<"NO"<<endl;
            }
            else cout<<"YES"<<endl;

        }
 
    }
}
