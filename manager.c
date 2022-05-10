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

