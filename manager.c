#include "manager.h"
#include <stdio.h>
#include <string.h>
void saveData(Product *p,int now){      
    FILE *fp;
    fp=fopen("burger.txt","wt");
        for(int i=0;i<now;i++){
        if(p[i].price==-1){
            continue;
        }
        else if(p[i].price!=-1){
        fprintf(fp,"%s\t%d\t%s\t%s\t%s\n",p[i].name,p[i].price,p[i].bread,p[i].patty,p[i].sauce);
        }
    }
    fclose(fp);
    return ;
}

int loadData(Product *p){
    char buffer[20];
int i;
FILE *fp;
fp=fopen("burger.txt","rt");
if(fp==NULL){
    printf("파일 없음\n");
    return 0;
 }  else{
    for(i=0;i<20;i++){
        if(i!=0){
            fgets(buffer,sizeof(buffer),fp);
        }
        fscanf(fp,"%[^\t]s",p[i].name);
        if(feof(fp)){
            
            break;
        }
        fscanf(fp," %d",&p[i].price);
        fscanf(fp," %[^\t]s",p[i].bread);
        fscanf(fp," %[^\t]s",p[i].patty);
        fscanf(fp,"%[^\t]s",p[i].sauce);
    }
 }
    fclose(fp);
    if(i>0){
    printf("=>로딩 성공!\n");
    }
    return i;
}

int searchName(Product *p,int now){ 
int scnt=0;
char search[20];
    printf("검색할 이름은? ");
    scanf("%[^\n]s",search);
    printf("Name price bread patty sauce\n");
    printf("================================\n");
    for(int i=0;i<now;i++){
    if(p[i].price==-1)continue;
    if(strstr(p[i].name,search)){
        scnt++;
        readBurger(p[i]);
    }
    }
    if(scnt==0){
        return 0;
    }
    return 1;
}

int searchPrice(Product *p,int now){
int scnt=0;
int min;
int max;
    printf("검색할 최소 가격은? ");
    scanf("%d",&min);
    printf("검색할 최대 가격은? ");
    scanf("%d",&max);
    printf("Name comment weight price delivery\n");
    printf("================================\n");
    for(int i=0;i<now;i++){
    if(p[i].price==-1)continue;
    if((p[i].price>=min)&&(p[i].price<=max)){
        scnt++;
        readBurger(p[i]);
    }
    }
    if(scnt==0){
        return 0;
    }
    return scnt;
}  
