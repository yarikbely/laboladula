
#include <iostream>
#include <math.h>
using namespace std;

int main() 
{
    unsigned char x, y;
    short i;
    int x1, result;
    x = 98;

    setlocale(LC_ALL, "Rus");

    cout << "введите индекс i го бита: \n";
    cin >> i;

    y = int(pow(2, i));
    x1 = x & y;
    result = x1 / (pow(2, i));

    cout << result;
}