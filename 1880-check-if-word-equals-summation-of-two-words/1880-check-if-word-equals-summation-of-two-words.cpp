class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        int count1=0;
        int count2=0;
        int count3=0;
        for(char i:firstWord)
        {
            count1=count1*10+(i-'a');
        }
        for(char i:secondWord)
        {
            count2=count2*10+(i-'a');
        }
        for(char i:targetWord)
        {
            count3=count3*10+(i-'a');
        }
        return (count1+count2)==count3;
    }
};