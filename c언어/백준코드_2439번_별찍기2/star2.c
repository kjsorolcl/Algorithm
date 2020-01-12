#include <stdio.h>

/*
https://jsdevlog.tistory.com/entry/c%EC%96%B8%EC%96%B4-%EB%B0%B1%EC%A4%80%EC%BD%94%EB%93%9C-%EC%95%8C%EA%B3%A0%EB%A6%AC%EC%A6%98-%EB%B3%84-%EC%B0%8D%EA%B8%B02-%EC%BD%94%EB%93%9C
*/

int main(){
    int count;
    scanf("%d", &count);
    for(int i = 0; i < count; i++) {
        for(int j = count - i - 1; j > 0; j--)
            printf(" ");
        for(int j = 0; j < i + 1; j++) 
            printf("*");
        if(i != count - 1)
            printf("\n");
    }

    return 0;
}
