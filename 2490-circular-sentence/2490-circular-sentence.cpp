class Solution {
public:
    bool isCircularSentence(string sentence) {
        for(int i=0;i<sentence.length();i++)
        {
            if(sentence[i]==' ')
            {
                if(sentence[i-1]!=sentence[i+1])
                {
                    return false;
                }
            }
        }
        if(sentence[0]!=sentence[sentence.length()-1]) return false;
        else if(sentence[0]==sentence[sentence.length()-1]) return true;
        return false;
    }
};