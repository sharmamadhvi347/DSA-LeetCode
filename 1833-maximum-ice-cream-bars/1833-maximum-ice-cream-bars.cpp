class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        //can be done with simple sorting but they are asking for count sorting so here is the sol with that:
        int n = costs.size();
        long long max = *max_element(costs.begin(), costs.end());
        vector<long long> mx(max + 1, 0);
        int count = 0;

        for(int i: costs){
            mx[i] ++;
        }

        for(int j=0; j<mx.size();j++){
            if(mx[j] != 0){
                if(coins !=0 && coins >=  j*mx[j]){
                    coins = coins -j*mx[j];
                    count = count+ mx[j];
                }else if(coins !=0 && coins >=  j){
                    int k = mx[j];
                    while(k>0 && coins>=j){
                        coins = coins - j;
                        count += 1;
                        k--;
                    }
                }
            }
        }

        return count;
    }
};