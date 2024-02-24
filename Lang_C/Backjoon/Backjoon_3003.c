#include <stdio.h>

int main()
{
    int difference=0;
    int arr1[6] = {1, 1, 2, 2, 2, 8};
    int arr2[6] = {0,};

    for(int repeat=0; repeat<6; repeat++)
    {
        scanf("%d",&arr2[repeat]);
    }

    /*문자열 입력받을 경우에만 &생략가능함. 
    문자열 자체-> 주소로 표현이 됨 -> 이름만 표현해줘도 됨 
    요소의 값 -? 우리가 그 주소에 따로 저장해야하는것 -> 때문에 차이가 발생. 이해에 중점두기
    결론 : 문자열 배열을 받을 때는 &을 안붙임. 정수배열에는 붙인다.*/

    for(int idx=0; idx<6 ; idx++)
    {   
        difference = arr1[idx]-arr2[idx];
        printf("%d ",difference);
        difference=0;
    }
}