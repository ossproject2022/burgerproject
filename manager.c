#include <stdio.h>
#include <stdlib.h>
#include "product.h"

int updateBurger(Product *p,int now){
    int pick;
    listBurger(p,now);
    printf("번호는(취소: 0)? ");
    scanf("%d",&pick);
    getchar();
    if(pick!=0){
    printf("새 이름은? ");
    scanf("%[^\n]s",p[pick-1].name);
    getchar();
    printf("새 가격은? ");
    scanf("%d",&p[pick-1].price);
    getchar();
    printf("새 빵 종류는? ");
    scanf("%[^\n]s",p[pick-1].bread);
    getchar();
    printf("새 패티 종류는? ");
    scanf("%[^\n]s",p[pick-1].patty);
    getchar();
    printf("새 소스 종류는? ");
    scanf("%[^\n]s",p[pick-1].sauce);
    getchar();
    }
    return 1;
}
int createBurger(Product *p,int now){
    printf("이름은? ");
    scanf("%[^\n]s",p[now].name);
    getchar();
    printf("가격은? ");
    scanf("%d",&p[now].price);
    getchar();
    printf("빵 종류는? ");
    scanf("%[^\n]s",p[now].bread);
    getchar();
    printf("패티 종류는? ");
    scanf("%[^\n]s",p[now].patty);
    getchar();
    printf("소스 종류는? ");
    scanf("%[^\n]s",p[now].sauce);
    getchar();
    now++;
    return now;
}    
