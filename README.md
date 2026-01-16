# 42 Seoul Piscine

42서울 라피신 과정에서 작성한 코드 모음입니다.

## 📚 프로젝트 개요

이 저장소는 42서울 라피신 과정을 통해 학습한 내용을 정리한 것입니다. C 언어 기초부터 고급 개념까지, 그리고 쉘 스크립트까지 다양한 과제들을 포함하고 있습니다.

## 📁 프로젝트 구조

### C 언어 과제 (c00 ~ c11)

#### **c00** - 기초 함수
- `ft_putchar`: 문자 출력 함수
- `ft_print_alphabet`: 알파벳 출력
- `ft_print_reverse_alphabet`: 역순 알파벳 출력
- `ft_print_numbers`: 숫자 출력
- `ft_is_negative`: 음수 판별
- `ft_print_comb`: 조합 출력
- `ft_print_comb2`: 두 자리 조합 출력
- `ft_putnbr`: 숫자 출력
- `ft_print_combn`: n자리 조합 출력

#### **c01** - 포인터 기초
- `ft_ft`: 포인터를 통한 값 변경
- `ft_ultimate_ft`: 다중 포인터 연습
- `ft_swap`: 두 변수 값 교환
- `ft_div_mod`: 나눗셈과 나머지
- `ft_ultimate_div_mod`: 포인터를 통한 나눗셈과 나머지
- `ft_putstr`: 문자열 출력
- `ft_strlen`: 문자열 길이 계산
- `ft_rev_int_tab`: 배열 역순 정렬
- `ft_sort_int_tab`: 배열 정렬

#### **c02** - 문자열 처리
- `ft_strcpy`: 문자열 복사
- `ft_strncpy`: 지정 길이만큼 문자열 복사
- `ft_str_is_alpha`: 알파벳 검증
- `ft_str_is_numeric`: 숫자 검증
- `ft_str_is_lowercase`: 소문자 검증
- `ft_str_is_uppercase`: 대문자 검증
- `ft_str_is_printable`: 출력 가능 문자 검증
- `ft_strupcase`: 대문자 변환
- `ft_strlowcase`: 소문자 변환
- `ft_strcapitalize`: 첫 글자 대문자 변환
- `ft_strlcpy`: 안전한 문자열 복사
- `ft_putstr_non_printable`: 비출력 문자 처리
- `ft_print_memory`: 메모리 출력

#### **c03** - 문자열 비교 및 연결
- `ft_strcmp`: 문자열 비교
- `ft_strncmp`: 지정 길이만큼 문자열 비교
- `ft_strcat`: 문자열 연결
- `ft_strncat`: 지정 길이만큼 문자열 연결
- `ft_strstr`: 부분 문자열 찾기
- `ft_strlcat`: 안전한 문자열 연결

#### **c04** - 문자열 및 숫자 변환
- `ft_strlen`: 문자열 길이
- `ft_putstr`: 문자열 출력
- `ft_putnbr`: 숫자 출력
- `ft_atoi`: 문자열을 정수로 변환
- `ft_putnbr_base`: 진법 변환 출력
- `ft_atoi_base`: 진법 변환 입력

#### **c05** - 재귀 및 수학 함수
- `ft_iterative_factorial`: 반복 팩토리얼
- `ft_recursive_factorial`: 재귀 팩토리얼
- `ft_iterative_power`: 반복 거듭제곱
- `ft_recursive_power`: 재귀 거듭제곱
- `ft_fibonacci`: 피보나치 수열
- `ft_sqrt`: 제곱근 계산
- `ft_is_prime`: 소수 판별
- `ft_find_next_prime`: 다음 소수 찾기
- `ft_ten_queens_puzzle`: 10퀸 문제

#### **c06** - 명령줄 인자 처리
- `ft_print_program_name`: 프로그램 이름 출력
- `ft_print_params`: 인자 출력
- `ft_rev_params`: 역순 인자 출력
- `ft_sort_params`: 인자 정렬

#### **c07** - 동적 메모리 할당
- `ft_strdup`: 문자열 복제
- `ft_range`: 정수 배열 생성
- `ft_ultimate_range`: 포인터를 통한 배열 생성
- `ft_strjoin`: 문자열 결합
- `ft_convert_base`: 진법 변환
- `ft_split`: 문자열 분할

#### **c08** - 구조체 및 헤더 파일
- `ft.h`: 함수 선언 헤더
- `ft_boolean.h`: 불린 타입 정의
- `ft_abs.h`: 절댓값 매크로
- `ft_point.h`: 포인트 구조체
- `ft_strs_to_tab`: 문자열 배열을 구조체 배열로 변환
- `ft_show_tab`: 구조체 배열 출력

#### **c09** - 라이브러리 및 Makefile
- `libft_creator.sh`: 정적 라이브러리 생성 스크립트
- `Makefile`: 빌드 자동화
- `ft_split`: 문자열 분할 (재구현)

#### **c11** - 함수 포인터 및 고급 개념
- `ft_foreach`: 배열 순회 함수
- `ft_map`: 배열 변환 함수
- `ft_any`: 조건 검사 함수
- `ft_count_if`: 조건 만족 개수 계산
- `ft_is_sort`: 정렬 여부 확인
- `cal.c`: 계산기 프로그램 (함수 포인터 활용)
- `ft_sort_string_tab`: 문자열 배열 정렬
- `ft_advanced_sort_string_tab`: 고급 문자열 배열 정렬

### 러시 프로젝트 (Rush)

#### **rush00** - 사각형 출력
- 다양한 패턴의 사각형을 출력하는 프로그램
- `rush00.c`, `rush01.c`, `rush02.c`, `rush03.c`, `rush04.c`: 서로 다른 패턴 구현

#### **rush01** - 스도쿠 뷰 문제
- 4x4 스도쿠를 주어진 뷰 조건에 맞게 채우는 프로그램
- `find_case.c`: 경우의 수 탐색
- `view_check.c`: 뷰 조건 검증
- `main.c`: 메인 로직

### 쉘 스크립트 과제 (sh00 ~ sh01)

#### **sh00** - 기본 쉘 스크립트
- 파일 권한 및 속성 관리
- Git 관련 스크립트
- 시스템 명령어 활용

#### **sh01** - 고급 쉘 스크립트
- 파일 검색 및 필터링
- 그룹 및 사용자 정보 출력
- MAC 주소 추출
- 문자열 처리 및 변환

## 🛠️ 사용 방법

### C 언어 과제 컴파일 및 실행

각 과제 디렉토리로 이동하여 컴파일:

```bash
cd c00/ex00
gcc -Wall -Wextra -Werror ft_putchar.c main.c -o program
./program
```

### 러시 프로젝트 실행

```bash
cd rush00/ex00
gcc -Wall -Wextra -Werror *.c -o rush00
./rush00 [width] [height]
```

### 쉘 스크립트 실행

```bash
chmod +x sh00/ex00/z
./sh00/ex00/z
```

## 📝 학습 내용

이 프로젝트를 통해 학습한 주요 개념:

- **C 언어 기초**: 변수, 함수, 포인터
- **메모리 관리**: 동적 할당, 메모리 조작
- **알고리즘**: 정렬, 검색, 재귀
- **자료구조**: 배열, 문자열 처리
- **고급 개념**: 함수 포인터, 구조체, 매크로
- **시스템 프로그래밍**: 쉘 스크립트, 시스템 호출
- **빌드 시스템**: Makefile 작성

## 🎯 특징

- 42서울 코딩 스타일 가이드 준수
- 모든 함수는 `ft_` 접두사 사용
- 엄격한 컴파일 옵션 (`-Wall -Wextra -Werror`)
- 메모리 안전성 고려
- 효율적인 알고리즘 구현

## 📅 작성 기간

2023년 1월 ~ 2월 (42서울 라피신 과정)

## 📄 라이선스

이 프로젝트는 42서울 교육 과정의 일부로 작성되었습니다.

---

**42서울 라피신 과정을 통해 C 언어와 시스템 프로그래밍의 기초를 탄탄히 다졌습니다! 🚀**
