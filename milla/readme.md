Java 기초 문법
---
## 1.length() vs length
- length(): 문자열의 길이를 반환하는 메서드
```
String str = "hello";
System.out.println(str.length()); // 5
```
- length: 배열의 길이를 반환하는 속성
```
int[] arr = {1, 2, 3, 4, 5};
System.out.println(arr.length); // 5
```

## 2. 배열 vs 리스트
- 배열: 크기가 고정되어 있고, 한번 생성한 배열은 크기를 변경할 수 없음. 반드시 처음부터 크기를 지정해야 함.
- 배열의 길이를 알고 싶을 때는 length 속성을 사용
- 값 저장 시 인덱스를 사용
```
int[] arr = {1, 2, 3};
System.out.println(arr.length); // 3

int[] arr = new int[3];
arr[0] = 1;
arr[1] = 2;
arr[2] = 3;
```

- 리스트: 동적으로 크기가 관리되는 배열. 크기를 동적으로 변경할 수 있음.
- 리스트의 길이를 알고 싶을 때는 size() 메서드를 사용
- 값 저장 시 add() 메서드를 사용
```
List<Integer> list = new ArrayList<>();
list.add(1);
list.add(2);
System.out.println(list.size()); // 2
```

## 3. 문자열 변환
- 문자열을 정수로 변환
```
String str = "123";
int num = Integer.parseInt(str);
System.out.println(num); // 123
```

- 정수를 문자열로 변환
```
int num = 123;
String str = Integer.toString(num);
System.out.println(str); // "123"
```

## 4. 배열을 리스트로 변환
- 배열을 리스트로 변환
```
int[] arr = {1, 2, 3};
List<Integer> list = Arrays.asList(1, 2, 3);
```
- 리스트를 배열로 변환
```
List<Integer> list = new ArrayList<>();
list.add(1);
list.add(2);
list.add(3);
int[] arr = list.stream().mapToInt(i -> i).toArray();
```

## 5. 제곱근과 거듭제곱
이때, 반환 값은 double이므로 정수로 변환하려면 형변환을 해야 함.
- 제곱근: Math.sqrt() 메서드 사용
```
int num = 16;
System.out.println(Math.sqrt(num)); // 4.0
```
- 거듭제곱: Math.pow() 메서드 사용
```
int num = 2;
System.out.println(Math.pow(num, 3)); // 8.0
```

## 6. 최대값과 최소값
List로 변환한 뒤 Collections 클래스의 max()와 min() 메서드를 사용
- 최대값: Collections.max() 메서드 사용
```
List<Integer> list = Arrays.asList(1, 2, 3);
System.out.println(Collections.max(list)); // 3
```
- 최소값: Collections.min() 메서드 사용
```
List<Integer> list = Arrays.asList(1, 2, 3);
System.out.println(Collections.min(list)); // 1
```

## 7. 배열 정렬
배열을 정렬할 때는 Arrays 클래스의 sort() 메서드를 사용
- 오름차순 정렬
```
int[] arr = {3, 1, 2};
Arrays.sort(arr);
System.out.println(Arrays.toString(arr)); // [1, 2, 3]
```
- 내림차순 정렬
```
int[] arr = {3, 1, 2};
Arrays.sort(arr, Collections.reverseOrder());
```
- 조건 오름차순 정렬
- Comparator 인터페이스를 사용하여 정렬 조건을 지정
```
Integer[] arr = {3, 1, 2};
Arrays.sort((a, b) -> map.get(a) - map.get(b));
```
- 조건 내림차순 정렬
- Comparator 인터페이스를 사용하여 정렬 조건을 지정
```
Integer[] arr = {3, 1, 2};
Arrays.sort((a, b) -> map.get(b) - map.get(a));
```

## 8. 배열 복사
배열을 복사할 때는 Arrays 클래스의 copyOf() 메서드를 사용
- 전체 복사
```
int[] arr = {1, 2, 3};
int[] arr2 = Arrays.copyOf(arr, arr.length);
System.out.println(Arrays.toString(arr2)); // [1, 2, 3]
```
- 일부 복사
```
int[] arr = {1, 2, 3};
int[] arr2 = Arrays.copyOfRange(arr, 1, 2);
System.out.println(Arrays.toString(arr2)); // [2]
```