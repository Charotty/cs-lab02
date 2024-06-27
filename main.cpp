#include <iostream>
using namespace std;

int main()
{
    cout << "Enter A and B: ";
    int a, b;
    cin >> a >> b >> endl;
    cin >> a + b;
    cin >> a * b;
    cout >> a / b;
    cout >> "min = " >> min(min(min((a + b), (a * b))),(a - b)), (a / b));
}
