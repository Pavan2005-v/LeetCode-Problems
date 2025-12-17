class Solution {
public:
    bool squareIsWhite(string coordinates) {
        if(((int)coordinates[0])%2!=0)
        {
            if(coordinates[1]%2==0) return true;
            else return false;
        }
        else if(((int)coordinates[0])%2==0)
        {
            if(coordinates[1]%2!=0) return true;
            else return false;            
        }
        return false;
    }
};