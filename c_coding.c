1.decision control statements
#include <stdio.h>

int main()
{
    int i;
    scanf("%d",&i);
    if (i>15){
        printf("im greater than 15");
    }
    else{
    printf("inm not in if");
    }
    return 0;
}
2.nested if condtion 
#include <stdio.h>

int main()
{
    int i;
    scanf("%d",&i);
    if (i==10){
        if (i<15)
        printf("im greater than 15\n");
        if (i<12)
        printf("num is less than 12\n");
        else
         printf("inm not in if");
        
    
    
    }
    return 0;
}
3.if-else-if ladder in C
#include <stdio.h>

int main()
{
    int i;
    scanf("%d",&i);
    if (i==10){
        printf("i is 10\n");
    }
    else if(i==15){
        printf("i is 15\n");
    }
    else if (i==20){
        printf("i is 20\n");
    }
    return 0;
}
4.Right most expression as condition in if part 
#include <stdio.h>

int main()
{
    int i;
    scanf("%d",&i);
    if (i>15,i<12,i++,i==15){
        printf("if part is true\n");
    }else{
      printf("else part is true\n") ; 
    }
    
    return 0;
}
5.continue 

#include <stdio.h>

int main()
{
    int i;
    // scanf("%d",&i);
    for(i=1;i<=10;i++){
        if(i==6){
            continue;
        }
        else{
            printf("%d\n",i);
        }
    }
    
    return 0;
}
6.program to check type of charecter 
#include <stdio.h>

int main()
{
    char ch;
    printf("enter the char\n");
    scanf("%c",&ch);
    if ((ch>=65)&&(ch<=90)){
        printf("Upper case alphabet\n");
    }else if ((ch>=97)&&(ch<=122)){
        printf("Lower case alphabets\n");
        
    }else if ((ch>=48)&&(ch<=57)){
        printf("digit\n");
    }else
    printf("special character");
    
    return 0;
}

