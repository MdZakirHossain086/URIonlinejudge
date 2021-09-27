 #include<stdio.h>
 int main(){
     int x,y,i,c=0;
     scanf("%d%d",&x,&y);
     if(x>y){
     for(y=y+1;y<x;y++)
     {
         if(y%2==1||y%2==-1)
         {

         c=c+y;
         }

     }
      printf("%d\n",c);
     }
     else if(x<y){
        for(x=x+1;x<y;x++)
     {
         if(x%2==1||x%2==-1)
         {
             c=c+x;
         }

     }
     printf("%d\n",c);
     }
return 0;
 }
