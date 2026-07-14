class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int ans=0;
        for(int i=0;i<arr.size();i++)
        {
            int temp1=i,temp2=i;
            bool pt=false;
            while(temp1>0)
            {
                if(arr[temp1]>arr[temp1-1])
                {
                    pt=true;
                    temp1--;
                }
                else break;
            }
            if(pt) pt=false;
            else continue;
            while(temp2<arr.size()-1)
            {
                if(arr[temp2]>arr[temp2+1])
                {
                    pt=true;
                    temp2++;
                }
                else break;
            }
            if(temp2-temp1+1>=3&&pt)
            {
                ans=max(ans,temp2-temp1+1);
            }
            // cout<<temp2-temp1+1<<endl;
        }
        return ans;
    }
};