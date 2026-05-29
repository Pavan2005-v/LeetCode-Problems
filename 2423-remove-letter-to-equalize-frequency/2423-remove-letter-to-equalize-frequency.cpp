class Solution {
public:
    bool equalFrequency(string word) {
        vector<int>freq(26);
        for(char c:word) freq[c-'a']++;
        unordered_map<int,int>mpp;
        int count=0;
        for(int i:freq)
        {
            if(i!=0)
            {
                mpp[i]++;
                count++;
            }
        }
        if(count==1) return true;
        if(mpp.size()>2) return false;
        int num1=-1,num2=-1;
        if(mpp.size()<2)
        {
            for(auto it:mpp)
            {
                num1=it.first;
            }
            if(num1==1) return true;
            else return false;
        }
        if(mpp.size()>2) return false;
        for(auto it:mpp)
        {
            if(it.second==1)
            {
                num1=it.first;
            }
            else
            {
                num2=it.first;
            }
        }
        cout<<num1<<" "<<num2;
        if(num2==-1)
        {
            vector<int>t;
            for(auto it:mpp)
            {
                if(it.second==1&&it.first==1)
                {
                    return true;
                }
                t.push_back(it.first);
            }
            if(t[0]-1==t[1]) return true;
            else if(t[1]-1==t[0]) return true;
        }
        if(num1-1==0&&mpp[num1]==1) return true;
        else if(num2-1==0&&mpp[num2]==1) return true;
        if(num1-1!=num2) return false;
        return true;
    }
};