#include <iostream>

using namespace std;

int main(void)
{
    int lenOfArray;
    cin >> lenOfArray;

    int* intArray = new int[lenOfArray];

    for(int i=0; i<lenOfArray; i++)
    {
        cin >> intArray[i];
    }

    int max = -10000000;
    int min = +10000000;
    for(int i=0; i<lenOfArray; i++)
    {
        if (intArray[i] < min)
        {
            min = intArray[i];
        }
        if (intArray[i] > max)
        {
            max = intArray[i];
        }
    }

    cout << min << " " << max << endl;

}