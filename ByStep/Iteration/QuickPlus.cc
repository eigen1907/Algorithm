#include <iostream>

using namespace std;

int iter;
int a, b;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> iter;
    for (int i=0; i<iter; i++)
    {
        cin >> a >> b;
        cout << a+b << "\n";
    }
    return 0;
}
