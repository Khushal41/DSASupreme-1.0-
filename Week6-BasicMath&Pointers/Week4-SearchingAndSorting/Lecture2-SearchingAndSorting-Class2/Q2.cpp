// Search in rotater array 

#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<int> arr{3, 4, 5, 6, 7, 1, 2};
    int ans = rotatedArray(arr); 

    cout << "Target Element is : " << arr[ans] << endl;
    return 0;
}