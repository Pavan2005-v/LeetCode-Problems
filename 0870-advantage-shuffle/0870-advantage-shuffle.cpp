class Solution {
public:
    vector<int> advantageCount(vector<int>& nums1, vector<int>& nums2) {
        vector<int>org=nums2;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int l=0,r=0,n=nums1.size();
        while(r<n&&l<n)
        {
            if(nums1[l]<=nums2[r])
            {
                int ind=l;
                while(l<n&&nums1[l]<=nums2[r])
                {
                    l++;
                }
                if(l<n)
                {
                    swap(nums1[l],nums1[ind]);
                }
                else break;
                l=ind;
            }
            l++;
            r++;
        }
        unordered_map<int,vector<int>>mpp;
        for(int i=0;i<n;i++)
        {
            mpp[nums2[i]].push_back(nums1[i]);
        }
        for(auto it:mpp)
        {
            sort(it.second.rbegin(),it.second.rend());
        }
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            vector<int>temp=mpp[org[i]];
            int size=temp.size();
            ans.push_back(temp[size-1]);
            mpp[org[i]].pop_back();
        }
        return ans;
    }
};