import java.util.*;

class Solution {
    public int[] solution(String[] genres, int[] plays) {
        
        // 1. 장르별 총 재생 수 
        Map<String, Integer> genreCount = new HashMap<>();
        for(int i=0; i<genres.length; i++){
            genreCount.put(genres[i], genreCount.getOrDefault(genres[i], 0) + plays[i]);
        }
        
        // 2. 각 장르별 (고유번호, 재생수) 저장
        Map<String, Map<Integer, Integer>> playCount = new HashMap<>();
        for(int i =0;i< genres.length; i++){
            // 장르가 없으면 새 HashMap 생성
            playCount.putIfAbsent(genres[i], new HashMap<>());
            
            // 고유 번호와 재생 수 저장
            playCount.get(genres[i]).put(i, plays[i]);
        }
        
        // 3. 장르를 총 재생수 기준으로 내림차순 정렬
        List<String> genreOrder = new ArrayList<>(genreCount.keySet());
        genreOrder.sort((a, b) -> genreCount.get(b) - genreCount.get(a));
            
        // 4. 결과 저장용 리스트
        List<Integer> result = new ArrayList<>();
        
         // 5. 각 장르별 상위 2곡 선택
        for (String genre : genreOrder) {
            Map<Integer, Integer> songMap = playCount.get(genre);

            // 고유번호 기준으로 정렬: 재생수 내림차순, 고유번호 오름차순
            List<Map.Entry<Integer, Integer>> songList = new ArrayList<>(songMap.entrySet());
            songList.sort((a, b) -> {
                if (b.getValue().equals(a.getValue())) {
                    return a.getKey() - b.getKey(); // 고유번호 오름차순
                }
                return b.getValue() - a.getValue(); // 재생수 내림차순
            });

            // 상위 2개만 선택
            int count = 0;
            for (Map.Entry<Integer, Integer> entry : songList) {
                result.add(entry.getKey());
                count++;
                if (count == 2) break;
            }
        }

        // 6. 리스트를 배열로 변환 후 반환
        return result.stream().mapToInt(i -> i).toArray();
    }
}