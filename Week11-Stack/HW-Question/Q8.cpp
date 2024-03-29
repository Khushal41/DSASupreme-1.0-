// Find minimum and maximum number of nodes between critical points [Leetcode-2058]
class Solution
{
public:
    vector<int> nodesBetweenCriticalPoints(ListNode *head)
    {
        vector<int> ans = {-1, -1}; // minDist,maxDist
        ListNode *prev = head;
        if (!prev)
            return ans;
        ListNode *curr = head->next;
        if (!curr)
            return ans;
        ListNode *nxt = head->next->next;
        if (!nxt)
            return ans;

        int firstCP = -1;
        int lastCP = -1;
        int minDist = INT_MAX;
        int i = 1;
        while (nxt)
        {
            bool isCP = ((curr->val > prev->val && curr->val > nxt->val) ||
                         (curr->val < prev->val && curr->val < nxt->val))
                            ? true
                            : false;
            if (isCP && firstCP == -1)
            {
                firstCP = i;
                lastCP = i;
            }
            else if (isCP)
            {
                minDist = min(minDist, i - lastCP);
                lastCP = i;
            }
            ++i;
            prev = prev->next;
            curr = curr->next;
            nxt = nxt->next;
        }
        if (lastCP == firstCP)
        {
            // only one cp found
            return ans;
        }
        else
        {
            ans[0] = minDist;
            ans[1] = lastCP - firstCP;
        }
        return ans;
    }
};