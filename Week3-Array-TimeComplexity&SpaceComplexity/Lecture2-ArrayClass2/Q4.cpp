// WAP of pair sum
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr{1, 2, 5, 3, 6};
    int sum = 11;
    // print all terms
    // outer loo will travers for each element
    for (int i = 0; i < arr.size(); i++)
    {
        int element = arr[i];

        // for every element ,will traverse on aage wale element
        for (int j = 0; j < arr.size(); j++)
        {
            if (element + arr[j] == sum)
            {
                cout << "Pair Found " << element << "," << arr[j] << endl;
            }
        }
    }
}