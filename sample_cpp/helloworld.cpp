// Your First C++ Program

#include <iostream>

using namespace std;

int main()
{
    int number;

    cout << "Hello World! \n";
    cout << "1 + 1 = ? ";
    cin >> number;

    if (number == 2)
    {
        cout << "Correct!";
    }
    else
    {
        cout << "Incorrect!";
    }

    return 0;
}