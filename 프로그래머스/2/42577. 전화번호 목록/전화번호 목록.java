import java.util.HashSet;
import java.util.Set;
    
class Solution {
    public boolean solution(String[] phone_book) {
        boolean answer = true;
        // 1. HashSet을 선언한다.
        Set<String> set = new HashSet<>();
        
        // 2. 모든 전화번호를 HashMap에 넣는다.
        for (String phone : phone_book){
            set.add(phone);
        }
        
        for (String phone : phone_book) {
            for(int i=0; i<phone.length(); i++){
                if(set.contains(phone.substring(0,i))){
                    answer = false;
                }
            }
        }
        return answer;
    }
}