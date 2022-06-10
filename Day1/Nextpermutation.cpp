//Time complexity = O(n)
//space  complexity =O(1)

class Solution {
public:
    void nextPermutation(vector<int>& a) {
        
//         if(nums.size()==1){
//             return;
//         }
        
//         int idx1;
//         for(int i=nums.size()-2; i>=0; i--){
//             if(nums[i]<nums[i+1]){
//                 idx1=i;
//                 break;
//             }
//         }
//         if(idx1<0){
//             reverse(nums.begin(),nums.end());
            
//         }else{
//             int idx2=0;
//             for(int i=nums.size()-1; i>=0; i--){
//                 if(nums[i]>nums[idx1]){
//                     idx2=i;
//                     break;
//                 }
//             }
//             swap(nums[idx1],nums[idx2]);
//             reverse(nums.begin()+idx1+1,nums.end());
//         }
        
        

int idx =-1;
int n = a.size();
for(int i=n-1; i>0; i--){
    if(a[i]>a[i-1]){
        idx=i;
        break;
    }
}
if(idx==-1){
    reverse(a.begin(),a.end());
}
else{
    int prev =idx;
    for(int i=idx+1; i<n; i++){
        if(a[i]>a[idx-1] and a[i]<=a[prev]){
            prev=i;
        }
    }

    swap(a[idx-1],a[prev]);
    reverse(a.begin()+idx, a.end()); 
}
        
    }
};