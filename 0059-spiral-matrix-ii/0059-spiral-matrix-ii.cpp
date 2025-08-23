class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int minc=0;
        int maxc = n-1;
        int minr = 0;
        int maxr = n-1;
        int count = 1;
        vector<vector<int>> matrix(n, vector<int>(n));


//j for col and i for row iteration
        while(minc<=maxc && minr<=maxr){
            for(int j = minc; j<=maxc && count<=(n*n) ; j++){
                matrix[minr][j]= count;
                count++;
            }
            minr++;

            for(int i = minr; i<=maxr && count<=(n*n) ; i++){
                matrix[i][maxc]=count;
                count++;
            }
            maxc--;

            for(int j = maxc; j>=minc && count<=(n*n) ; j--){
                matrix[maxr][j]=count;
                count++;
            }
            maxr--;

            for(int i = maxr; i>=minr && count<=(n*n) ; i--){
                matrix[i][minc] = count;
                count++;
            }
            minc++;
        }

        return matrix;

    }
};