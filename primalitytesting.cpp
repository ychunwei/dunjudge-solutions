#include <iostream>
#include <vector>
using namespace std;
bool isPrime(int num)
{
    if (num <= 1)
    {
        return false;
    }
    for (int k = 2; k < num; k++)
        if (num % k == 0)
            return false;

    return true;
}


int main()
{
    int n;
    cin >> n;
    vector<int> nums = {};

    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        nums.push_back(a);
    }
    for (int j = 0; j < nums.size(); j++)
    {
        if (isPrime(nums[j]))
        {
            cout << nums[j] << " is a prime number." << endl;
        }
        else if (!isPrime(nums[j]))
        {
            cout << nums[j] << " is a composite number." << endl;
        }
    }
}
