/*
파일명: ex13-05-string-function.c

문자열 처리함수
    1. strlen
        문자열 길이
    2. strcpy
        문자열 복사
    3. strncpy
        문자열 원하는 개수만큼 복사
*/
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[50] = "apple is good";
    char str2[50] = "berry is good";
    char str3[50];

    // 각 문자열의 길이 출력
    printf("str1의 길이: %d, str2의 길이: %d\n", strlen(str1), strlen(str2));
    printf("str1의 길이: %d, str2의 길이: %d\n", sizeof(str1), sizeof(str2));

    // str1의 내용 전체를 str3에 복사(대입)하기
    strcpy(str3, str1);

    // str1의 내용 일부를 str2에 복사(대입)하기
    strncpy(str2, str1, 2);

    printf("%s\n%s\n%s\n", str1, str2, str3);

    return 0;
}