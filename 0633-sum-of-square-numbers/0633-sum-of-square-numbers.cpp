class Solution {
public:
    bool isPerfectSquare(int n){
        int root= sqrt(n);
        if(root*root == n) return true;
        else return false;
    }

    bool judgeSquareSum(int c) {
        int x=0;
        int y= c;

        while(x<=y){
            if( isPerfectSquare(x) && isPerfectSquare(y))
                return true;
            else if(!isPerfectSquare(y)){
                int m= sqrt(y);
                y= m*m;
                x=c-y;
            }
            else{
                x=(((int)sqrt(x)+1)*((int)sqrt(x)+1));
                y=c-x;
            }
        }
        return false;
    }
};