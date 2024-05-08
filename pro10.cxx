#include <iostream>
using namespace std;
float sm(float x)
{
    cout << " enter x drhm " << endl;
    cin >> x;
    if (x > 200)
    {
        x = x - (x * 15 / 100);
        cout << "after offer x=" << x << "drhm" << endl;
    }
    x = x + (x * 20 / 100);
    cout << "the total after dariba it is x=" << x << "drhm" << endl;
    return x;
}
int main()
{
    float x;
    sm(x);
}