import java.util.HashSet;
import java.util.Set;
    
class Solution {
    public boolean solution(String[] phone_book) {
        boolean answer = true;
        
        // 1. HashSet을 선언한다.
        Set<String> set = new HashSet<>();
        
        // 2. 모든 전화번호를 HashSet에 넣는다.
        for (String phone : phone_book){
            set.add(phone);
        }
        
        // 3. 각 전화번호의 접두어가 다른 번호에 포함되어 있는지 확인한다.
        for (String phone : phone_book) {
            for(int i=1; i<phone.length(); i++){
                // 접두어 substring(0, i)이 다른 전체 번호에 존재하면 접두어 관계이므로 false 반환
                if(set.contains(phone.substring(0, i))){
                    answer = false;
                }
            }
        }
        return answer;
    }
}