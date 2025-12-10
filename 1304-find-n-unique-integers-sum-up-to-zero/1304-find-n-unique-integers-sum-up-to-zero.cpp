class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> ans;
        if(n==1)
        {
            ans.push_back(0);
            return ans;
        }
        if(n%2!=0){
        int pos=n/2;
        int temp=n-(pos+1);
        int start=0;
        while(pos>=0)
        {
            ans.push_back(start);
            start++;
            pos--;
        }
        pos=0;
        while(temp>0)
        {
            pos--;
            ans.push_back(pos);
            temp--;
        }
        return ans;}
        else
        {
            int pos=n/2;
            int ele=1;
            while(pos>0)
            {
                ans.push_back(ele);
                ele++;
                pos--;
            }
            pos=n/2;
            ele=-1;
            while(pos>0)
            {
                ans.push_back(ele);
                ele--;
                pos--;
            }
            return ans;
        }

    }
};