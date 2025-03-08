// check which is the biggest number element in the array

#include <iostream>
using namespace std;
int main()
{
    int A[] = {3,8,10,6,7,11,2};
    int max = A[0];
    for (int x : A)
    {
        if (x > max)
        {
            max = x;
        }
    }
    cout << "The biggest element in the array is: " << max << endl;
}