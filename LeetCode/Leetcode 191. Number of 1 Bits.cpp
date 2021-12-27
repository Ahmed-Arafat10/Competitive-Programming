class Solution {
public:
    int hammingWeight(uint32_t n) {
        int cnt = 0;
      while(n>0)
       {
           if(n&1) cnt++;
            n >>= 1;
       }
        return cnt;
    }
};
//--------------------
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int cnt = 0;
        while(n > 0)
        {
            int bit = n % 10;
            if(bit == 1) cnt++;
            n/=10;
            //cout<<n<<" ";
        }
        return cnt;
    }
};