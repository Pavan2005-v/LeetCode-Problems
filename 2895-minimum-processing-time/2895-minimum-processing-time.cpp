class Solution {
public:
    int minProcessingTime(vector<int>& time, vector<int>& tasks) {
        sort(time.rbegin(),time.rend());
        sort(tasks.begin(),tasks.end());
        vector<int>temp;
        int c=0;
        for(int i=0;i<tasks.size();i+=4)
        {
            int t=INT_MIN;
            cout<<i<<endl;
            for(int j=i;j<i+4;j++)
            {
                t=max(t,time[c]+tasks[j]);
            }
            c++;
            temp.push_back(t);
        }
        int ans=*max_element(temp.begin(),temp.end());
        return ans;

    }
};