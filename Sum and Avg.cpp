#include <iostream>
using namespace std;
int main()
{
    int n;
    float number, sum = 0, avg;
    cout << "Enter N: ";
    cin >> n;
    cout << "Enter the numbers: " << endl;
    for(int i = 0; i < n; i++)
    {
        cin >> number;
        sum = sum + number;
    }
    avg = sum / n;
    cout << "Sum = " << sum << endl;
    cout << "Average = " << avg << endl;
    return 0;
}
