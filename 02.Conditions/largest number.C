    #include<stdio.h>

    int main(){
    int x,y;
    printf("enter two numbers");
    scanf("%d %d", &x, &y);

    if(x<y){
    printf("%d is the largest\n", y);
    }
    else if(x>y){
    printf("%d is the largest\n", x);
    }
    else{
    printf("the both numbers are equal\n");
    }
    return 0;
    }