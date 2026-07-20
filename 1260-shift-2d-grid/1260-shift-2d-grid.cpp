class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int r = grid.size();
        int c = grid[0].size();
        vector <int> v;

        for(int i=0; i<r; i++){
            for(int j=0;j<c;j++){
                v.push_back(grid[i][j]);
            }
        }

        int count = (v.size() - (k % v.size())) % v.size();

        for(int i=0; i<r; i++){
            for(int j=0;j<c;j++){
                grid[i][j] = v[count];
                if(count == v.size()-1){
                    count =0;
                    continue;
                } 
                count++;
            }
        }

        return grid;


    }
};