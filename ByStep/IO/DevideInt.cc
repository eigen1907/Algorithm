#include <iostream>

using namespace std;

int a, b;


int main()
{
    cin >> a >> b;
    double result = a / (double) b;
    cout.precision(12);
    cout << result << endl;
    return 0;
}