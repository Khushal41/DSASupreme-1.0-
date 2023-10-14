// Common element in 3 sorted array 
// GFG 

class Solution 
{
    public: 
    vector<int> commonElement(int A[],int B[],int C[],int n1,int n2,int n3) {
        vector<int>ans;
        set<int>st;
        int i,j,k;
        i=j=k=0;
        while (i<n1 && i<n2 && i<n3)
        {
            if (A[i]==B[j] && B[j]==C[k])
            {
                st.insert(A[i]);
                i++;j++,k++;
            }
            else if (A[i] < B[j])
            {
                i++;
            }
            else if (B[j]<C[k])
            {
                j++;
            }
            else {
                k++;
            }
        }
        for (auto i:st)
        {
            ans.push_back(i);
        }
        return ans;
    }
}