#include <stdio.h>
int main()
{
float sum=0;
int i, j=1;
for(i=1;i<=100;i++){
sum += 1.0/i;
j*=-1;
}
printf("%f", sum);
printf("hello lain");
return  0;
}
