class Solution {
public:

    bool ValidDays(int mid, vector<int>& weights, int days){
        int n= weights.size();
        int m = mid;
        int count = 1;

            for(int i=0;i<n;i++){
                m=m-weights[i];
                if(m<0){
                    count++;
                    i--;
                    m=mid;
                }
            }
        if(count<=days) return true;
        else return false;
        
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int n= weights.size();
        int max= INT_MIN;
        int sum=0;

        for(int i= 0; i<n;i++){
            if(max<weights[i]) max = weights[i];
            sum += weights[i];
        }

        int lo = max;
        int hi = sum;
        int minWeight=sum;

        while(lo<=hi){
            int mid = lo + (hi-lo)/2;

            if(ValidDays(mid,weights,days)){
                minWeight=mid;
                hi=mid-1;
            }
            else lo = mid+1;
        }

        return minWeight;

    }
};