#include <iostream>
using namespace std;

bool checkEligible(int age, int limit)
{
    return age >= limit;
}

int main()
{
    int voting_limit = 18;

    bool is_eligible_for_voting = checkEligible(25, voting_limit);

    if (is_eligible_for_voting)
    {
        cout << "Yes, the current person is eligible to vote" << endl;
    }
    else
    {
        cout << "No, the current person is not eligible to vote" << endl;
    }

    return 0;
}
