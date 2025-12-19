class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        sort(seats.begin(),seats.end());
        sort(students.begin(),students.end());
        int count=0;
        for(int i=0;i<seats.size();i++)
        {
            count+=abs(seats[i]-students[i]);
        }
        return count;
    }
};