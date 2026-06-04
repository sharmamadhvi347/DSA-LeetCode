class Solution {
    public:
        int totalWaviness(int num1, int num2) {
            int a,m,b,n,c;
            int wave = 0;
            int y = num2-num1;
            int x = num1;
            for(int i= 0; i<=y; i++){
                int x = num1+i;
                while(x>99){
                    a = x%10;
                    m = x/10;
                    b = m%10;
                    n= m/10;
                    c = n%10;
                    x=x/10;

                    if((b>a && b>c)||(b<a && b<c)) wave++;
                }
                if(num1 == num2)return wave;
            }

            return wave;
        
    }
};