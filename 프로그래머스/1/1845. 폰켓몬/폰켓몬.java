import java.util.HashSet;

class Solution {
    public int solution(int[] nums) {
        int max = nums.length / 2;
        
        HashSet<Integer> hash = new HashSet<>();
        
        for (int n : nums){
            hash.add(n);    // 중복 제거
        }
        
        if (max >= hash.size()){
            return hash.size();
        }
        else{
            return max;
        }
    }
}