// Finding set bit 
#include <iostream>
using namespace std;
int main()
{
    int n = 10;
    // ans -> store number of ser bit 
    int ans = 0;
    while (n != 0)
    {
        if (n & 1)
        {
            // found one set bit,
            // so increment set bit count
            ans++;
        }
        // right shift
        n = n >> 1;
    }
    cout << "Number of set bits : " << ans << endl;
    return 0;
}