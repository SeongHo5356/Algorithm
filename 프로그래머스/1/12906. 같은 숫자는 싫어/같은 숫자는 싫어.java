import java.util.*;

public class Solution {
    public int[] solution(int []arr) {
        List<Integer> answerList = new ArrayList<>();
        int flag = -1;
        for(int i =0;i<arr.length;i++){
            if(flag != arr[i]){
                answerList.add(arr[i]);    
                flag = arr[i];
            }
        }
        
        int answer[] = new int[answerList.size()];
        for(int i=0; i<answerList.size(); i++){
            answer[i] = answerList.get(i);
        }
        
        return answer;
    }
}