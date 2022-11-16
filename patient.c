#include<stdio.h>
#include<string.h>

struct patient
{
    int patient_id;
    char patient_name[20];
    float no_of_days;
};

void through_id(int no_of_patients,struct patient *record,int key_id)
{
int i=1,bill_amount,sea1=0;
while(i<=no_of_patients){
if(record[i].patient_id==key_id){
    bill_amount=record[i].no_of_days*1250;
    printf("---Bill amount of %s = $ %d ---",record[i].patient_name,bill_amount);
    sea1++;
    break;
}
i++;
}
if(sea1==0)
printf("---No patient with id %d is exist---",key_id);
}


void through_name(int no_of_patients,struct patient *record,char key_name[])
{
int i=1,bill_amount,sea1=0;
while(i<=no_of_patients){
    if(strcmp(record[i].patient_name,key_name)==0){
        bill_amount=record[i].no_of_days*1250;
        printf("--Bill amount of %s = $ %d ---",record[i].patient_name,bill_amount);
        sea1++;
        break;
    }
    i++;
}
if(sea1==0)
printf("---No patient with name %s is exist---",key_name);

}

void main()
{
    struct patient record[100];
    int no_of_patients,i;

    printf("Enter the no of patients : ");
    scanf("%d",&no_of_patients);

    for(i=1;i<=no_of_patients;i++){
        printf("---Enetr the details of patient %d ---\n",i);
        printf("Enter the id of patient %d : ",i);
        scanf("\n%d",&record[i].patient_id);
        printf("Enter the name of patient %d : ",i);
        scanf("\n%[^\n]s",record[i].patient_name);
        printf("Enter the no.of days of patient %d addmitted in ICU :",i);
        scanf("\n%f",&record[i].no_of_days);   
    }
    printf("* * * * * * * * * * * * * * * * * * * * * * * \n");
    
    int way;
    printf("---If you have patient id press 1 or if you have patient name press 0 : ");
    scanf("%d",&way);
    
    switch(way)
    {

    case 0:{
        char key_name[20];
        printf("Enter the name of required patient : ");
        scanf("\n%[^\n]",key_name);
        through_name(no_of_patients,record,key_name);
    } 
    break;
    
    case 1:{
        int key_id;
        printf("Entre the id of required patient : ");
        scanf("%d",&key_id);
        through_id(no_of_patients,record,key_id);
    }
    break;
    
    default: printf("---In Valid Option---");
    }

}
