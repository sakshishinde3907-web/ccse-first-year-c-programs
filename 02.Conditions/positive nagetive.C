     #include<stdio.h>

     int main(){
     int n;
     printf("enter the number");
     scanf("%d", &n);

     if(n>0){
     printf("The number is positive\n");
     }
     else if(n<0){
     printf("The number is negative\n");
     }
     else{
     printf("Zero\n");
     }
     return 0;
     }