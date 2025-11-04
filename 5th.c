#include<stdio.h>

int main(){
int l1,b1,l2,b2,l3,b3 ;
int p1,p2,p3 , largest ;

printf("Enter length for first rectangle : ");
scanf("%d",&l1);
printf("Enter breadth for first rectangle : ");
scanf("%d",&b1);
printf("Enter length for second rectangle : ");
scanf("%d",&l2);
printf("Enter length for second rectangle : ");
scanf("%d",&b2);
printf("Enter length for third rectangle : ");
scanf("%d",&l3);
printf("Enter length for third rectangle : ");
scanf("%d",&b3);
p1=2*(l1+b1);
p2=2*(l2+b2);
p3=2*(l3+b3);
largest = (p1>p2)?((p1>p3)?p1:p3):((p2>p3)?p2:p3);
printf("Largest perimeter is %d",largest);

return 0;
}