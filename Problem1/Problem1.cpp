#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    //Write a C++ program to print integer numbers in the range 1 to 100.

    int n = 1;
    int rows = 10;
    int columns = 10;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << setw(2) << n << " ";
            n++;
        }
        cout << endl;
    }
}