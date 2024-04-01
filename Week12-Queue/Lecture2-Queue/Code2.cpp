// Reverses first k element
#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void reverseK(queue<int> &q, int k)
{
    // StepA: queue -> k elements  -> stack

    stack<int> s;
    int count = 0;
    int n = q.size();

    if (k <= 0 || k > n)
        return;

    while (!q.empty())
    {
        int temp = q.front();
        q.pop();
        s.push(temp);
        count++;

        if (count == k)
            break;
    }

    // stepB: stack -> q me qapas
    while (!s.empty())
    {
        int temp = s.top();
        s.pop();
        q.push(temp);
    }

    // step C: push n-k element from q front to back
    count = 0;
    while (!q.empty() && n - k != 0)
    {
        int temp = q.front();
        q.pop();
        q.push(temp);
        count++;

        if (count == n - k)
            break;
    }
}

void interleaveQueue(queue<int> &q)
{
    // Step A: separate both halves
    int n = q.size();
    if (q.empty())
        return;
    int k = n / 2;
    int count = 0;
    queue<int> q2;

    while (!q.empty())
    {
        int temp = q.front();
        q.pop();
        q2.push(temp);
        count++;

        if (count == k)
            break;
    }

    // step B: interleaving start krdo
    while (!q.empty() && !q2.empty())
    {
        int first = q2.front();
        q2.pop();

        q.push(first);

        int second = q.front();
        q.pop();

        q.push(second);
    }
    // odd wala case
    if (n & 1)
    {
        int element = q.front();
        q.pop();
        q.push(element);
    }
}

int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    q.push(9);

    // reverseK(q, 3);

    interleaveQueue(q);

    cout << "printing Queue after reversing recursively" << endl;
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    return 0;
}