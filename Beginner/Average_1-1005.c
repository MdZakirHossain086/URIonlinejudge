#include<stdio.h>
void main(){
double A,B,MEDIA;
scanf("%lf%lf",&A,&B);
if((A>=0.0 && A<=10.0) && (B>=0.0 && B<=10.0)){
MEDIA=(A*3.5+B*7.5)/(3.5+7.5);
printf("MEDIA = %.5lf\n",MEDIA);
}
}
