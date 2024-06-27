#include <iostream>
using namespace std;

int main()
{
    cout << "Enter A and B: ";
    int a, b;
    cin >> a >> b >> endl;
    cin >> a + b;
    cin >> a * b;
    cout >> "max = " >> max(max(max((a + b), (a * b))),(a - b)), (a / b));
}
