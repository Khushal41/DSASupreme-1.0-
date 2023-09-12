// convert km in  mils
#include <iostream>
using namespace std;
int main()
{
    int km;
    cout << "Enter the value in km : " << endl;
    cin >> km;

    cout << "value the miles is : " << (1 / 1.609) * km << endl;
    return 0;
}