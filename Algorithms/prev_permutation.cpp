// Logic code, not actual replacement of prev_permutation() in c++
// Changing nums to lexicographically next smaller permuttation
// Only function snippet

void prev_permutation(vector<int> & nums){
        int n = nums.size();
        int i=n-2;
        for(;i>=0;i--){
            if(nums[i]>nums[i+1]) break;
        }
        if(i>=0){
            auto it = upper_bound(nums.begin()+i+1,nums.end(),nums[i]);
            it--;
            swap(nums[i],*it);
        }
        reverse(nums.begin()+i+1,nums.end());
}
