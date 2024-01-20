// Permutation of string 
#include <iostream>
using namespace std;
// By reference string pass 
void printPermutation(string &str, int i)
{
    // Base case
    if (i >= str.length())
    {
        // print permutation 
        // String ke bahar nikal jayto print kar na 
        cout << str << " ";
        return;
    }
    // Swappping
    for (int j = i; j < str.length(); j++)
    {
        // swap
        swap(str[i], str[j]);
        // Recursive call
        printPermutation(str, i + 1);
        // Backtraking -> To create original input
        swap(str[i], str[j]);
    }
}
int main()
{
    string str = "xy";
    int i = 0;
    printPermutation(str, i);
    return 0;
}