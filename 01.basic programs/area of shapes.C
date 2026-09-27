    #include<stdio.h>

    int main(){
    int radius,sideofs,sidea,sideb;
    printf("enter the radius of circle:\n");
    scanf("%d", &radius);
    printf("enter the side of square:\n");
    scanf("%d", &sideofs);
    printf("enter the sides of rectangle:\n");
    scanf("%d %d", &sidea, &sideb);

    printf("%f is the area of circle\n", 3.14*radius*radius);
    printf("%d is the area of square\n", sideofs*sideofs);
    printf("%d is the area of rectangle\n", sidea*sideb);
    return 0;
    }

