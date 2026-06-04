class Solution {
public:
    bool bouq(int mid, vector<int>& bloomDay,int m, int k){
        int n = bloomDay.size();
        int count=0;
        int mn=0;

        for(int i =0;i<n;i++){
            if(bloomDay[i]<=mid ){
                count++;
                if (count == k){
                    mn++;
                    count =0;
                }
                
                if(mn == m) return true;
            }
            if(bloomDay[i]>mid) count =0;
        }
        return false;
    }


    int minDays(vector<int>& bloomDay, int m, int k) {
        //flowers should also be adj according to k
        int high = *max_element(bloomDay.begin(), bloomDay.end());
        int low = *min_element(bloomDay.begin(), bloomDay.end());
        long long n = bloomDay.size();
        int days= high;
        if(1LL*m*k> n) return -1;

        while(low<=high){
            int mid = (low+high)/2;

            if(bouq(mid,bloomDay,m,k)==true && mid<days ){
                days=mid;
                high = mid-1;
            }else low = mid+1;
    
        }

        return days;
    }
};