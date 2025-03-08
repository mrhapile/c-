// add all the elements of an array and show the sum

#include <iostream>
using namespace std;
int main()
{
    int A[] = {1, 2, 3, 4, 5};
    int sum = 0;
    for (int x : A)
    {
        sum += x;
    }
    cout << "Sum of all elements of the array is: " << sum << endl;
}