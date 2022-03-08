#include <stdio.h>
struct medical{
    int id;
    char name[15];
};
int main() {
    struct medical data;
    int priority;
    char referralcode;
    printf("Enter patient id:");
    scanf("%d",&data.id);
    printf("Enter patient name:");
    scanf("%s",&data.name);
    fflush(stdin);
    printf("Enter patient priority:");
    scanf("%d",&priority);

    switch(priority) {
        case 1:
            printf("The patient id is:%d\n",data.id);
            printf("The patient name is:%s\n",data.name);
            printf("Patient referred to doctor on duty");
            printf("Referral cost: $1500");
            break;
        case 2:
            printf("Enter referral code(N,H,R)");
            scanf(" %c",&referralcode);
            fflush(stdin);
            if(referralcode=='N') {
                printf("The patient id is:%d\n",data.id);
                printf("The patient name is:%s\n",data.name);
                printf("Patient referred to Nurses Treatment room\n");
                printf("Referral cost: $700");
            }
            else if(referralcode=='H'){
                printf("The patient id is:%d\n",data.id);
                printf("The patient name is:%s\n",data.name);
                printf("Patient referred to Health center\n");
                printf("Referral cost: $100");
            }
            else {
                printf("The patient id is:%d\n",data.id);
                printf("The patient name is:%s\n",data.name);
                printf("Patient referred to Regional Hospital\n");
                printf("Referral cost: $4500");
            }
            break;
        case 3:
            printf("Enter referral code(H,R)");
            scanf(" %c",&referralcode);
            if(referralcode=='H'){
                printf("The patient id is:%d\n",data.id);
                printf("The patient name is:%s\n",data.name);
                printf("Patient referred to Health center\n");
                printf("Referral cost: $100");
            }
            else {
                printf("The patient id is:%d\n",data.id);
                printf("The patient name is:%s\n",data.name);
                printf("Patient referred to Regional Hospital");
                printf("Referral cost: $4500");
            }
            break;
        case 4:
            printf("The patient id is:%d\n",data.id);
            printf("The patient name is:%s\n",data.name);
            printf("Patient referred to Regional Hospital");
            printf("Referral cost: $4500");
            break;
    }
    return 0;
}