class Solution {
public:
    int compress(vector<char>& chars) {
        int l=0,r=0,ind=0,count=0;
        char curr=chars[0];
        while(r<chars.size())
        {
            if(curr!=chars[r])
            {
                chars[ind]=curr;
                ind++;
                if(count>1)
                {
                    int temp=ind;
                    while(count>0)
                    {
                        chars[ind]=count%10+'0';
                        count/=10;
                        ind++;
                    }
                    reverse(chars.begin()+temp,chars.begin()+ind);
                }
                curr=chars[r];
                l=r;
                count=0;
            }
            count++;
            r++;
        }
        chars[ind]=curr;
        ind++;
        if(count>1)
        {
            int temp=ind;
            while(count>0)
            {
                chars[ind]=count%10+'0';
                count/=10;
                ind++;
            }
            reverse(chars.begin()+temp,chars.begin()+ind);
        }
        return ind;
    }
};