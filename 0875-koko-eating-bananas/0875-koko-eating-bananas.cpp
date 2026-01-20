class Solution {
public:

    bool CheckHours(int mid, vector<int>& piles, int h){
        int n = piles.size();
        long long count = 0;  // changed to long long

        for(int i = 0; i < n; i++){
            count += (piles[i] + mid - 1) / mid; // ceil
            if(count > h) return false; // prune
        }

        return count <= h;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        float n = piles.size();
        float max = INT_MIN;
        float sum = 0;
        
        for(int i = 0; i < n; i++){
            if(max < piles[i]) max = float(piles[i]);
            sum += float(piles[i]);
        }

        int lo = 1;
        int hi = int(max); // FIX #1: was sum before
        int leastNum = 0;
        int mid;

        while(lo <= hi){
            mid = lo + (hi - lo) / 2;   // FIX #2: mid is int

            if(CheckHours(mid, piles, h)){
                leastNum = mid;
                hi = mid - 1;
            } 
            else {
                lo = mid + 1;
            }
        }

        return leastNum;
    }
};
