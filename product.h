#ifndef pro_h
#define pro_h

typedef struct{
    char name[40];
    int price;
    char bread[30];
    char patty[30];
    char sauce[30];
}Product;
int selectMenu();
int createBurger(Product *p,int now);
void readBurger(Product p);
int updateBurger(Product *p,int now);
int deleteBurger(Product *p,int now);
int listBurger(Product *p,int now);
#endif
