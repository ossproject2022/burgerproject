
#include <stdio.h>
#include <stdlib.h>
#include "product.h"



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

int deleteBurger(Product *p,int now){
    int pick;
    int deleteok;
    listBurger(p,now);
    printf("번호는 (취소:0)? ");
    scanf("%d",&pick);
    if(pick!=0){
        printf("정말로 삭제하시겠습니까?(삭제:1)");
        scanf("%d",&deleteok);
        if(deleteok==1){
            p[pick-1].price=-1;
        }
    }
    if(pick==0)return 0;
    return 1;

void readBurger(Product p){            
if(p.price!=-1){  
printf("%s %d %s %s %s\n",p.name,p.price,
p.bread,p.patty,p.sauce);
}
return ;
}

int  listBurger(Product *p,int now) {    
    printf("no Name price bread patty sauce\n");;
    int count=0;
    for(int i=0;i<now;i++){
    if(p[i].price==-1){
        continue;
    }
    else if(p[i].price!=-1){
        count++;
        printf("%d ",count);
        readBurger(p[i]);
    }
    }
    if(count<=0)return 0;
    return 1;
}
