#include<iostream>
using namespace std;
int main()
{
    int anshii;
    cin>>anshii;
    while (anshii--)
    {
        int a;
        cin>>a;
        int arr[a];
        int sum=0;
        for (int i = 0; i < a; i++)
        {
            cin>>arr[i];
        }
        for (int i = 0; i < a; i++)
        {
        int count=0;
           for (int j = 0; j < a; j++)
           {
               if (arr[i]<arr[j])
                   count++;
               }
               if (count<a-count)
                sum++;
   }
        cout<<sum<<endl;
    }
    return 0;
}
