#include <stdio.h>
#include <stdlib.h>

void main()
{
    int list[5];
    int* plist[5];

    list[0] = 10;
    list[1] = 11;

    plist[0] = (int*)malloc(sizeof(int));  

    printf("------Minju Kim 2020039062------\n");
    
    printf("list[0] \t=%d\n", list[0]);  //list[0]에는 10이 저장되어있다.
    printf("address of list \t=%p\n", list);  //list 배열의 주소이다.
    printf("address of list[0] \t=%p\n", &list[0]);  //list[0]의 주소와 list 배열의 주소는 같다.
    printf("address of list + 0 \t=%p\n", list + 0);  //list 시작주소로부터 0만큼 떨어진 곳의 주소이다. list[0]과 같다.
    printf("address of list + 1 \t=%p\n", list + 1);
    printf("address of list + 2 \t=%p\n", list + 2);
    printf("address of list + 3 \t=%p\n", list + 3);
    printf("address of list + 4 \t=%p\n", list + 4);  //list 시작주소로부터 4만큼 떨어진 곳의 주소이다. list[4]와 같다.
    printf("address of list[4] \t=%p\n", &list[4]);  //list 시작주소로부터 4만큼 떨어진 곳의 주소이다. list +4와 같다.

    free(plist[0]);

}
