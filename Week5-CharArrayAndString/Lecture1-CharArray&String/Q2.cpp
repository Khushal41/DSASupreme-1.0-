#include <iostream>
#include <string.h>
using namespace std;  
int main()
{
    // char name[100];
    // cin >> name;
    // cout << "Your name : " << name << endl;

    //Iniclude string.h 
    char name[100];
    cin.getline(name, 30); // delimeter(arr name , length)
    cout << "Your name : " << name << endl;
}