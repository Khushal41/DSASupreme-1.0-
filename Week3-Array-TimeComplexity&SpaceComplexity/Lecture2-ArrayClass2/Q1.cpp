// WAP to find unique element evry element occurs twice except one
#include <iostream>
#include <vector>
using namespace std;
int findUnique(vector<int> arr)
{
    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter size of array : " << endl;
    cin >> n;

    vector<int> arr(n);
    cout << "Enter element : " << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }

    int uniqueElement = findUnique(arr);
    cout << "Unique Element : " << uniqueElement << endl;

    return 0;
}