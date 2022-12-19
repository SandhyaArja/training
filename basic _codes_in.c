check  given num is even  
#include <stdio.h>

int main()
{
    int num=0;
    /*printf("enter a num");*/
    scanf("%d",&num);
    if(num%2==0){
       printf("%d num is even",num); 
    }
    

    return 0;
}
2.greatest num among 3
  
#include <stdio.h>

int main()
{
   int a,b,c; 
   scanf("%d%d%d",&a,&b,&c);
   if (a>b&&b>c){
   printf("%d",a);
   }else if (b>c &&b>a){
       printf("%d",b);
   }else if (c>b &&c>a){
       printf("%d",c);
   }
    

    return 0;
}
3.check given num is odd
  #include <stdio.h>

int main()
{
   int num=0;
   scanf("%d",&num);
   if (num %2==1){
     printf("%dnum is an odd num",num);
   }
  
    

    return 0;
}

4.Eligible for  vote
#include <stdio.h>

int main()
{
   int age;
   scanf("%d",&age);
   if (age>18){
     printf("%d age is eligible for vote",age);
   }
  
    else{
        printf("not eligible for vote");
    }

    return 0;
}
5.alternative of if else 
  Switch case
    #include <stdio.h>

int main()
{
   int num;
   scanf("%d",&num);
   switch(num){
       case 10:
       printf("num is equal to 10");
       break;
       case 20:
       printf("num is equal to 20");
       break;
       case 30:
       printf("num is equal to 30");
       break;
       case 40:
       printf("num is equal to 40");
       break;
       case 50:
       printf("num is equal to 50");
       break;
       default:  
       printf("number is not equal to 10, 20 ,30 ,40 or 50")
   }
   return 0;
}
6.print 100 num in for loop 

#include <stdio.h>

int main()
{
   int num=0,i=1;  
   scanf("%d",&num);
   for (i=1;i<=num;i++){
       printf("%d \n",i);
   }
   return 0;
}


7.Generate multiplication table 
#include <stdio.h>

int main()
{
   int num,i;
   scanf("%d",&num);
   for (i=1;i<=10;i++){
       printf("%d * %d = %d \n",num,i,num*i);
       
   }
   return 0;
}
8.
  
  
