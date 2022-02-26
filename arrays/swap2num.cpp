#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    cout << "before swapping : " << a << " " << b << endl;
    int temp = a;
    a = b;
    b = temp;
    cout << "after swapping : " << a << " " << b;
}