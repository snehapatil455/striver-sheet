// to understnd this problem let's take an example
// 2^10=(2*2)^5= 4^5(ans)
// 4^5= as power is odd we can write it as 4*4^4(so let's find ans for 4^4)  ---------eq(1)
// 4^4= as power is even we can simply do our operations like (4*4)^2= 16^2 [(x*x)^n/2]
// 16^2=(16*16)^1= 256 (now put this value in eq(1))
// 4*256= 1024 
// I hope You understood the logic now let's jump to the code
class Solution {
public:
    double myPow(double x, int n) {
double ans=1.0;
long long nn =n;
if(nn<0) nn = -1*nn;
while(nn){
    if(nn % 2)     {
        ans = ans*x;
        nn=nn-1;
    }
    else{
        x=x*x;
        nn=nn/2;
    }
}

if(n<0) ans =(double)(1.0)/(double)(ans);
return ans;
}
};
////