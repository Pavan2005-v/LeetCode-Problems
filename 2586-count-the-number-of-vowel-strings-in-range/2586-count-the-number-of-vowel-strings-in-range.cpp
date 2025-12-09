class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        int count=0;
        for(int i=left;i<=right;i++)
        {
            string temp=words[i];
            if(temp[0]=='a'||temp[0]=='e'||temp[0]=='i'||temp[0]=='o'||temp[0]=='u'){
                if(temp[temp.size()-1]=='a'||temp[temp.size()-1]=='e'||temp[temp.size()-1]=='i'||temp[temp.size()-1]=='o'||temp[temp.size()-1]=='u')
            {
                count++;
            }}
        }
        return count;       
    }
};