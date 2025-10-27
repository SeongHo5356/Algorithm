import java.util.*;

class Solution_1026 {
    public int solution(String[][] clothes) {
        int answer = 1;
        Map<String, Integer> map = new HashMap<>();
        // 각 의상 종류별 개수 저장
        for (String[] cloth : clothes){
            map.put(cloth[1], map.getOrDefault(cloth[1], 0) + 1);
        }
        
        // 각 종류별로 (선택 + 선택 안함)의 곱
        for (int count : map.values()){
            answer *= (count + 1);
        }
        
        // 아무것도 안 입는 경우 제외
        return answer - 1;
    }
}

class Solution {
    public int solution(String[][] clothes) {
        int answer = 1;
        
        HashMap<String, Integer> hash = new HashMap<>();
        for (String[] cloth:clothes){
            hash.put(cloth[1], hash.getOrDefault(cloth[1],0) + 1);
        }
        
        for (int count : hash.values()){
            answer *= (count+1);
        }
        
        return answer - 1;
    }
}