import java.util.HashMap;

class Solution {
    public String solution(String[] participant, String[] completion) {     
        String answer = "";
        
        // 해시맵을 선언하여 이름을 키로, 이름의 개수를 값으로 저장
        HashMap<String, Integer> map = new HashMap<>();
        
        // participant 배열을 순회하면서 각 참가자의 이름을 해시맵에 저장
        for (String p : participant){
            
            // getOrDefault 매서드를 사용하여 이미 해시맵에 존재하는 이름이면 값을 증가시키고,
            // 존재하지 않으면 0을 기본값으로 설정하고 1을 더해준다.
            map.put(p, map.getOrDefault(p,0) + 1);
        }
        
        // compleion 배열을 순회하면서 각 완주자의 이름의 값을 해시맵에서 감소시킨다.
        for (String c : completion){
            map.put(c, map.get(c) - 1);
        }
        
        for (String key : map.keySet()){
            if (map.get(key) != 0 ){
                return key;
            }
        }
        
        return answer;
    }
}