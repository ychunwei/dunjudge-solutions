#include <iostream>
using namespace std;
int findMin(int N, int A[])
{
    int m;
    m = A[0];
    for (int i = 1; i < N; ++i)
    {
        if (A[i] < m)
        {
            m = A[i];
        }
    }
    return m;
}
// don't need the main function (will result in multiple definition of main())
