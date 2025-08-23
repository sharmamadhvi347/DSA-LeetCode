class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int minc=0;
        int maxc = n-1;
        int minr = 0;
        int maxr = m-1;
        vector <int> v;
        int count = 0;


//j for col and i for row iteration
        while(minc<=maxc && minr<=maxr){
            for(int j = minc; j<=maxc && count<(n*m) ; j++){
                v.push_back(matrix[minr][j]);
                count++;
            }
            minr++;

            for(int i = minr; i<=maxr && count<(n*m) ; i++){
                v.push_back(matrix[i][maxc]);
                count++;
            }
            maxc--;

            for(int j = maxc; j>=minc && count<(n*m) ; j--){
                v.push_back(matrix[maxr][j]);
                count++;
            }
            maxr--;

            for(int i = maxr; i>=minr && count<(n*m) ; i--){
                v.push_back(matrix[i][minc]);
                count++;
            }
            minc++;
        }

        return v;

    }
};