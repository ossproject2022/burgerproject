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
}
free(p);
return 0;
}