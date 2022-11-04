// Chapter 04 4.8 floats.c
// floats.c -- 一些浮点型修饰符的组合
 #include <stdio.h>

 #define PAGES 99599

 int main(void)
 {
    const double RENT = 3852.99;

    printf("*%f*\n",RENT);
    printf("*%e*\n",RENT);
    printf("*%4.2f*\n",RENT);
    printf("*%3.1f*\n",RENT);
    printf("*%10.3f*\n",RENT);
    printf("*%10.3E*\n",RENT);
    printf("*%+4.2f*\n",RENT);
    printf("*%010.2f*\n",RENT);

    return 0;
 } 
 
