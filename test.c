#include <stdio.h>
#include <string.h>

int main(){
    
    char bread[40];
    long bread_l;
    char empty = ' ';
    int count=0;
    printf("이름은? ");
    scanf("%[^\n]s",bread);
    
    bread_l =strlen(bread);
    
    
    for(int i=0; i<bread_l;i++){
        if(bread[i]==empty){
            count ++;
        }
    }
    printf("%d",count);
}
