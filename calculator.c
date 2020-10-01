#include<stdio.h>
int sum(int a,int b){
return a+b;}
int diff(int a,int b){
return a-b;
}
int main() 
{
  int a,b;
  printf("Enter two values\n");
  scanf("%d %d",&a,&b);
printf("sum=%d\n",sum(a,b));
printf("diff=%d\n",diff(a,b));
return 0;
}

