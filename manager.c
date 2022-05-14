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
        fscanf(fp,"%[^\t]s",p[i].name);
        if(feof(fp)){
            
            break;
        }
        fscanf(fp," %d",&p[i].price);
        fscanf(fp," %[^\t]s",p[i].bread);
        fscanf(fp," %[^\t]s",p[i].patty);
        fscanf(fp,"%[^\n]s",p[i].sauce);
	fgets(buffer,sizeof(buffer),fp);   
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

   int searchBurger(Product *p,int now){ 
int scnt=0;
int bcount=0;
int pcount=0;
int scount=0;
char sbread[20];
char spatty[20];
char ssauce[20];
    printf("검색할 빵 종류는? (검색 X: 0)");
    scanf("%[^\n]s",sbread);
    getchar();
    printf("검색할 패티 종류는? (검색 X: 0)");
    scanf("%[^\n]s",spatty);
    getchar();
    printf("검색할 소스 종류는? (검색 X: 0)");
    scanf("%[^\n]s",ssauce);
    getchar();
    printf("Name price bread patty sauce\n");
    printf("================================\n");
    for(int i=0;i<now;i++){
    if(p[i].price==-1)continue;
    if(strcmp(sbread,"0")==0){
      bcount=1;
    }
    if(strcmp(spatty,"0")==0){
        pcount=1;
    }
    if(strcmp(ssauce,"0")==0){
        scount=1;
    }
    if(bcount==0&&pcount==0&&scount==0){
       if(strstr(p[i].bread,sbread)&&strstr(p[i].patty,spatty)&&strstr(p[i].sauce,ssauce)){
        scnt++;
        readBurger(p[i]);
    } 
    }
    else if(bcount==0&&pcount==0&&scount==1){
        if(strstr(p[i].bread,sbread)&&strstr(p[i].patty,spatty)){
        scnt++;
        readBurger(p[i]);
    } 
    }
    else if(bcount==0&&pcount==1&&scount==0){
        if(strstr(p[i].bread,sbread)&&strstr(p[i].sauce,ssauce)){
        scnt++;
        readBurger(p[i]);
    } 
    }
    else if(bcount==0&&pcount==1&&scount==1){
       if(strstr(p[i].bread,sbread)){
        scnt++;
        readBurger(p[i]);
    } 
    }
    else if(bcount==1&&pcount==0&&scount==0){
       if(strstr(p[i].patty,spatty)&&strstr(p[i].sauce,ssauce)){
        scnt++;
        readBurger(p[i]);
    } 
    }
    else if(bcount==1&&pcount==0&&scount==1){
       if(strstr(p[i].patty,spatty)){
        scnt++;
        readBurger(p[i]);
    } 
    }
    else if(bcount==1&&pcount==1&&scount==0){
       if(strstr(p[i].sauce,ssauce)){
        scnt++;
        readBurger(p[i]);
    } 
    }
    /*if(strstr(p[i].bread,sbread)&&strstr(p[i].patty,spatty)&&strstr(p[i].sauce,ssauce)){
        scnt++;
        readBurger(p[i]);
    }*/
    }
    if(scnt==0){
        return 0;
    }
    return 1;
}  
