class Solution {
public:

    bool ValidTrips(long long mid, vector<int>& time, int totalTrips){
        int n= time.size();
        long long trips = 0;

        for(int i = 0; i < n; i++){
            trips += mid/time[i]; 
        }
        
        if(trips < (long long)(totalTrips)) return false; // prune
        else return true; 
        // trips >= totalTrips;
        
    }

    long long minimumTime(vector<int>& time, int totalTrips) {
        int n= time.size();
        long long max= INT_MIN;

        for(int i =0 ;i<n;i++){
            if(max < time[i]) max =(long long) (time[i]);
            // sum*= time[i];
        }
        

        long long lo = 1;
        long long hi = max*totalTrips; 
        long long leastTrips = 0;
        long long mid;

        while(lo <= hi){
            mid = lo + (hi - lo) / 2;   

            if(ValidTrips(mid, time, totalTrips)){
                leastTrips =mid;
                hi = mid - 1;
            } 
            else {
                lo = mid + 1;
            }
        }

        return leastTrips;
    }
};