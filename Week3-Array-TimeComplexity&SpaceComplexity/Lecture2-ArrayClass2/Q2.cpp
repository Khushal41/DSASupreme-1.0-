// WAP find unique/sum of 2 array
#include <iostream>
#include <vector>
using namespace std;
int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    int sizea = 5;
    int brr[] = {2, 9, 7, 6, 11};
    int sizeb = 5;
    
    vector<int> ans;
    for (int i = 0; i < sizea; i++)
    {
        ans.push_back(arr[i]);
    }
    for (int i = 0; i < sizeb; i++)
    {
        ans.push_back(brr[i]);
    }

    cout << "Printing ans array :" << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}