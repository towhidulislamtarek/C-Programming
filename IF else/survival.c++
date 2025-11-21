#include <iostream>
using namespace std;

int main()
{
   int d, x, t, a;
   cin >> d >> x;
   cin >> a >> t;

   int remaing_distance = d - x - 0.5 * a * t * t;

   if (remaing_distance <= 0)
   {
      cout << "Allah bachaisa" << endl;
   }

   else
   {
      cout << "Moyra gasa" << endl;
   }
}