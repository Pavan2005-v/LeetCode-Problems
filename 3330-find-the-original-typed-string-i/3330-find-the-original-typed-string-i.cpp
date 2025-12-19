class Solution {
public:
    int possibleStringCount(string word) {
        int count=0;
        int i=0;
        while(i<word.length())
        {
            int j=0;
            int k=i+1;
            while(k<word.length()&&word[i]==word[k])
            {
                k++;
                j++;
            }
            count+=j;
            i=k;
        }
        return count+1;
    }
};