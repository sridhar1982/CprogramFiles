#include <stdio.h>
#include<stdlib.h>
//added a comment

void mathOper(int n1,int n2,int *sum,int *diff){
      *sum=n1+n2;
      *diff=n1-n2;
}

void swap(int* n1, int* n2){
   int temp=*n1;
   *n1=*n2;
   *n2 = temp;
}

void reference(int z){
   z+=10;
}

int main()
{
    printf("hello");
    int *p;   /* a pointer to an integer */
    int a = 5;
    int b=10;
    int z =99;
    int sum,diff;
    mathOper(a,b,&sum,&diff);
    printf("sum = %d\n",sum);
    printf("diff=%d\n",diff);
    swap(&a,&b);
    printf("swapped values are =%d,%d\n",a,b);
    reference(z);
    printf("z value is %d\n",z);
}


