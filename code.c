#include<stdio.h>
int compound(float p, int time, float interest);

int main(){
    float p,interest,tamt;
    int time;
    printf("\t\tCalculating Compound Interest\n\n");
    printf("Enter the amount  (₹)\t\t\t: ");
    scanf("%f",&p);
    printf("Enter interest  (%)\t\t\t\t: ");
    scanf("%f",&interest);
    printf("Enter duartion\t\t\t\t\t: ");
    scanf("%d",&time);
    tamt=compound(p,time,interest);
    printf("\n\nTotal amount\t\t\t\t\t: %f ₹", tamt);
    return 0;
}

int compound(float p, int time, float interest){
    if(time==0){
        return p;
    }
    else{
    p=(interest/100)*p+p;
    compound (p,(time-1),interest);
    }
}
