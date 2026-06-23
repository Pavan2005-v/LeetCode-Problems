class Solution {
public:
    int compareVersion(string version1, string version2) {
        vector<long long>v1;
        long long num=0,ind=0;
        while(ind<version1.length())
        {
            if(version1[ind]!='.')
            {
                num=num*10+(version1[ind]-'0');
            }
            else
            {
                v1.push_back(num);
                num=0;
            }
            ind++;
        }
        v1.push_back(num);
        vector<long long>v2;
        num=0,ind=0;
        while(ind<version2.length())
        {
            if(version2[ind]!='.')
            {
                num=num*10+(version2[ind]-'0');
            }
            else
            {
                v2.push_back(num);
                num=0;
            }
            ind++;
        }
        v2.push_back(num);
        ind=0;
        while(ind<v1.size()&&ind<v2.size())
        {
            if(v1[ind]>v2[ind]) return 1;
            else if(v1[ind]<v2[ind]) return -1;
            ind++;
        }
        int temp=ind;
        while(ind<v1.size())
        {
            if(v1[ind]>0) return 1;
            ind++;
        }
        while(temp<v2.size())
        {
            if(v2[temp]>0) return -1;
            temp++;
        }
        if(temp==v2.size()) return 0;
        return 0;
    }
};