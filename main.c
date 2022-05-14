#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "manager.h"
#include "product.h"


int main(void){

	Product *p=(Product *)malloc(sizeof(Product)*20);
	int menu;
	int now=0;

	int result;
	while (1){
		menu = selectMenu();
		if (menu == 0) {
			printf("종료됨!\n");
			break;
		}
		if (menu == 1){
			result=listBurger(p,now);
			if(result==0){
				printf("데이터 없음\n");
			}
		}
		else if (menu == 2){
			now=createBurger(p,now);
			if(now!=0)printf("=>추가됨!\n");
		}
		else if (menu == 3){
			result=updateBurger(p,now);
			if(result==1){
				printf("=>수정됨!\n");
			}
		}
		else if (menu == 4){
			result=deleteBurger(p,now);
			if(result==1){
				printf("삭제됨!\n");
			}
		}
        else if(menu==5){
        saveData(p,now);
                printf("저장됨!\n");
        }
        else if(menu==6){
            result=searchName(p,now);
            if(result==0){
                printf("검색된 데이터 없음!\n");
            }
        }
        else if(menu==7){
            result=searchPrice(p,now);
            if(result==0){
                printf("검색된 데이터 없음!\n");
            }
        }
	}
	free(p);
	return 0;
}
