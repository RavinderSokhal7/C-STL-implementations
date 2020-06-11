// Logic code, not actual replacement of next_permutation() in c++
// Changing nums to lexicographically next greater permuttation
// Only function snippet

void next_permutation(vector<int> & nums){
        int n = nums.size();
        if(n==0 || n==1) return;
        // next_permutation =>
        int i=n-1;
        for(i=n-1;i>0;i--){
            if(nums[i]>nums[i-1])
                break;
        }
        reverse(nums.begin()+i,nums.end());
        if(i!=0){
            auto it = upper_bound(nums.begin()+i,nums.end(),nums[i-1]);
            swap(nums[i-1],*it);
        }
}
