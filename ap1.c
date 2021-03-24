#include <stdio.h>
#include <stdlib.h>

void main()
{
    int list[5];
    int *plist[5] = {NULL,};
    plist[0] = (int *)malloc(sizeof(int)); //plist[0]에 4bytes만큼 동적할당

    list[0] = 1;
    list[1] = 100;
    *plist[0] = 200;

    printf("----------[2016039030] [하준형]-------------\n\n");
    printf("value of list[0]        = %d\n", list[0]); //list[0]의 값 = 1
    printf("address of list[0]      = %p\n", &list[0]); //아래 세 주소는 동일
    printf("value of list           = %p\n", list);
    printf("address of list (&list) = %p\n", &list);
    printf("-------------------------------------\n\n");
    
    printf("value of list[1]    = %d\n", list[1]); //list[1]의 값 = 100
    printf("address of list[1]  = %p\n", &list[1]); //list[1]의 주솟값
    printf("value of *(list+1)  = %d\n", *(list + 1)); //주소 기준으로 +1을 하면 자료형 크기만큼 이동함
    printf("address of list+1   = %p\n", list+1); //list[1]의 주솟값 = list+1의 주솟값
    printf("-------------------------------------\n\n");
    
    printf("value of *plist[0] = %d\n", *plist[0]); //heap영역의 plist[0]가 가리키는 값
    printf("&plist[0]          = %p\n", &plist[0]); //plist[0]의 주솟값
    printf("&plist             = %p\n", &plist);    //위와 동일
    printf("plist              = %p\n", plist);     //위와 동일
    printf("plist[0]           = %p\n", plist[0]);  //heap영역의 주솟값
    printf("plist[1]           = %p\n", plist[1]);  //비어있음
    printf("plist[2]           = %p\n", plist[2]);  //비어있음
    printf("plist[3]           = %p\n", plist[3]);  //비어있음
    printf("plist[4]           = %p\n", plist[4]);  //비어있음

    free(plist[0]);    
}
