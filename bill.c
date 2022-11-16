#include<stdio.h>
#define a 99

struct subsciber
{
    char name[a],address[a];
    float street,monthly_bill;
};

void list_all(int no_of_subsciber,struct subsciber *sub)
{
    int i=1,sea1=0;
    printf("The subscibers are : ");
    while(i<=no_of_subsciber){
        if(sub[i].monthly_bill<750){
            printf("%s\t",sub[i].name);
            sea1++;
        }
        i++;
    }
    if(sea1==0)
    printf("no body");
}

void main()
{
    int no_of_subsciber,i=1;
    printf("Enter the no.of subsciber : ");
    scanf("%d",&no_of_subsciber);

    struct subsciber sub[no_of_subsciber+1];

    for(i=1;i<=no_of_subsciber;i++){
        printf("----Enter the details of subsciber %d ---- \n",i);
        printf("Enter the name of subsciber %d : ",i);
        scanf("\n%[^\n]",sub[i].name);
        printf("Enter the street of subsciber %d : ",i);
        scanf("\n%f",&sub[i].street);
        printf("Enter the address of subsciber %d : ",i);
        scanf("\n%[^\n]",sub[i].address);
        printf("Enter the mothly bill of subsciber %d : ",i);
        scanf("\n%f",&sub[i].monthly_bill);
    }

    list_all(no_of_subsciber,sub);
}
