class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int minP =100000;
        int currM = 0;
        int m = 0;

        for(int i = 0; i<n; i++){
            currM = prices[i] - minP;
            if(prices[i]>minP){
                if(currM>m){
                    m = currM;
                }
            } 
            else minP = prices[i];
        }

        return m;
    }
};