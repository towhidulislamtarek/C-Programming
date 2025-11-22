#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "Cow is an Animal";
    int vowelCount = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if ((s[i] == 'a') || (s[i] == 'e') || (s[i] == 'i') || (s[i] == 'o') || (s[i] == 'u'))
        {
            vowelCount++;
        }
    }

    cout << vowelCount << endl;
    return 0;
}
