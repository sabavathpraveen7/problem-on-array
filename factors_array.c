#include <stdio.h>
void main()
{
    int size;
    int i;
    printf("enter the elements to store \n");
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<=size-1;i++)
    {
printf("enter the %d element\n",(i+1));
scanf("%d",&a[i]);
}
int sum=0;
for(int i=0;i<=size-1;i++)
{
  sum=sum+a[i];}
  printf("the sum is %d\n",sum);
  for(i=0;i<=size-1;i++)
  {
if(sum%a[i]==0)
{
printf("%d\n",a[i]);
}
}
}