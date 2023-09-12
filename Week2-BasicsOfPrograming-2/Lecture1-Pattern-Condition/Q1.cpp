// Full Pyramid 

#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter number to print full pyramid : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        // spce print 
        for (int j = 0; j < n-i-1; j++)
        {
            cout << " ";
        }
        // star print 
        for (int j = 0; j < i+1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    
}