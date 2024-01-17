// Binary search
#include <iostream>
using namespace std;
void printSubsequences(string str, string output, int i)
{
    // Base case
    if (i >= str.length()) // abc ke bahar niklega to
    {
        cout << output << endl;
        return;
    }
    // Exclude case
    printSubsequences(str, output, i + 1);

    // Include
    output.push_back(str[i]); // current char lo include kar ne ke liye
    printSubsequences(str, output, i + 1);
}
int main()
{
    string str = "abc";
    string output = "";
    int i = 0;
    printSubsequences(str, output, i);
    return 0;
}