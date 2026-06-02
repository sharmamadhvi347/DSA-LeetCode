class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int landFinish = 0;
        int waterFinish = 0;
        int finalFinishLW = 0;
        int finalFinishWL = 0;
        int mn1 =100000;
        int mn2 =100000;
        
        for(int i = 0; i<landStartTime.size(); i++){
            landFinish = landStartTime[i] + landDuration[i];
            for(int j=0; j<waterDuration.size(); j++){

                finalFinishLW = max(landFinish, waterStartTime[j]) + waterDuration[j];

                if(mn1>finalFinishLW) mn1 = finalFinishLW;
            }
        }

        for(int i = 0; i<waterStartTime.size(); i++){
            waterFinish = waterStartTime[i] + waterDuration[i];
            for(int j=0; j<landDuration.size(); j++){

                finalFinishWL = max(waterFinish, landStartTime[j]) + landDuration[j];

                if(mn2>finalFinishWL) mn2 = finalFinishWL;
            }
        }

        if(mn1< mn2) return mn1;
        else return mn2;
    }
};