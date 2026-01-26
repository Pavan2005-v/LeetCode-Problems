class Solution {
public:
    int compress(vector<char>& chars) {
        int index=0;
        for(int i=0;i<chars.size();)
        {
            char c=chars[i];
            int count=0;
            while(i<chars.size()&&c==chars[i])
            {
                count++;
                i++;
            }
            if(count==1)
            {
                chars[index++]=c;
            }
            else
            {
                string s=to_string(count);
                chars[index++]=c;
                for(char c1:s)
                {
                    chars[index++]=c1;
                }
            }
        }
        chars.resize(index);
        return index;
    }
};