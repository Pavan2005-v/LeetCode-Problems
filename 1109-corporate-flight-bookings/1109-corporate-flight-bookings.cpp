class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int>pref(n);
        for(int i=0;i<bookings.size();i++)
        {
            pref[bookings[i][0]-1]+=bookings[i][2];
            if(bookings[i][1]<n) pref[bookings[i][1]]-=bookings[i][2];
        }
        for(int i=1;i<n;i++)
        {
            pref[i]+=pref[i-1];
        }
        return pref;
    }
};