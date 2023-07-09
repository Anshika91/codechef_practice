#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
   int t, n, b;
   cin >> t;
   while (t--)
   {
      cin >> n >> b;
      int width[n], price[n], height[n], area[n];
      bool inBudget[n];
      for (int i = 0; i < n; i++)
      {
         cin >> width[i] >> height[i] >> price[i];
         area[i] = width[i] * height[i];
         if (price[i] > b)
         {
            inBudget[i] = false;
         }
         else
         {
            inBudget[i] = true;
         }
      }
      int ans = 0;
      for (int i = 0; i < n; i++)
      {
         if (inBudget[i] == true)
         {
            if (area[i] > ans)
            {
               ans = area[i];
            }
         }
      }
      if (ans == 0)
      {
         cout << "no tablet" << endl;
      }
      else
      {
         cout << ans << endl;
      }
   }
   return 0;
}
