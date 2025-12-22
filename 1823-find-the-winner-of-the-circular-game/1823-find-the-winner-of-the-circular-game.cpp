class Solution {
public:
    queue<int> process(queue<int>q,int k)
    {
        for(int i=0;i<k-1;i++)
        {
            int a=q.front();
            q.pop();
            q.push(a);
        }
        q.pop();
        return q;
    }
    int findTheWinner(int n, int k) {
        queue<int>que;
        for(int i=1;i<=n;i++) que.push(i);
        while(que.size()!=1)
        {
            que=process(que,k);
        }
        return que.front();
    }
};