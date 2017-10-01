class Solution {
public:
    /*
     * @param : An integer
     * @param : An integer
     * @return: The sum of a and b
     */
     int aplusb(int a, int b) 
     {
        // write your code here
        int c=0,d=0;
        while((a&b)!=0)
        {
            c=a^b;
            d=(a&b)<<1;
            a=c;
            b=d;
        }
        return a|b;
     }
     
};

class Solution2 {
public:
    /*
     * @param : An integer
     * @param : An integer
     * @return: The sum of a and b
     */
    int aplusb(int a,int b)
    {
        if((a&b)==0)
            return a|b;
        return aplusb(a^b,(a&b)<<1);
    }
     
};