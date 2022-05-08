#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
void readBurger(Product p){
    
    long bread_l =strlen(p.bread);
    long patty_l =strlen(p.patty);
    long sauce_l =strlen(p.sauce);
   // printf("%lu, %lu, %lu\n", bread_l,patty_l,sauce_l);
	if(p.price!=-1){
        printf(" name: %s \n price: %d \n",p.name,p.price);
        printf("(￣￣￣￣￣￣￣￣￣￣￣)\n");

        printf(" | %s",p.bread);
        for(int i = 0;i<(27-bread_l)/3;i++){
            printf("  ");
        }
        printf(" |\n");

        printf(" | %s",p.patty);
        for(int i = 0;i<(27-patty_l)/3;i++){
            printf("  ");
        }
        printf(" |\n");
        
        printf(" | %s",p.sauce);
        for(int i = 0;i<(27-sauce_l)/3;i++){
            printf("  ");
        }
        printf(" |\n");
        printf("(＿＿＿＿＿＿＿＿＿＿＿)\n");
	}
	return ;
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
}
int  listBurger(Product *p,int now) {

   
    int count=0;
	for(int i=0;i<now;i++){
		if(p[i].price==-1){
			continue;
		}
		else if(p[i].price!=-1){
			count++;
			printf("\n no %3d\n",count);
			readBurger(p[i]);
		}
	}
	if(count<=0)return 0;
	return 1;
}

int selectMenu(){
	int menu;
	printf("\n*** Burger Project ***\n");
	printf("1. 조회\n");
	printf("2. 추가\n");
	printf("3. 수정\n");
	printf("4. 삭제\n");
	printf("0. 종료\n\n");
	printf("=> 원하는 메뉴는? ");
	scanf("%d", &menu);
	getchar();
	printf("\n");
	return menu;
}
