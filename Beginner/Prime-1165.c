#include<stdio.h>
int main()
{
 int x,n,i,j,flag=0;
 scanf("%d",&n);
 for(j=1;j<=n;j++){
 scanf("%d",&x);
 for(i=2;i<=x/2;i++){
    if(x%i==0){
        flag=1;
        break;
    }
 }
 if(flag==0)
    printf("%d eh primo\n",x);
 else
    printf("%d nao eh primo\n",x);

}
return 0;
}
