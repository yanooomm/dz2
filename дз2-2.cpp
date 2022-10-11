/* Дано натуральное число N (1<=N<=9). Найти значение выражения:
(1/9)^N + (1/8)^N + (1/7)^N + ... + 1/N^N*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    long float s = 0;
    cin >> n;
    for (long float i = 9; i >= n; i--)
        s += pow((1./i),n);
    cout << s;
}
// 1 -> 2.828968 
// 2 -> 0.539768
// 5 -> 0.000555553