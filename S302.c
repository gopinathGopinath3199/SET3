#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,max,min,size,element;
int arr[100];
printf("enter the size of array");
scanf("%d",&size);
printf("enter the elements of array");
scanf("%d",&element);
for(i=0;i<size;i++)
{
scanf("%d",arr[i]);
}
max=arr[0];
min=arr[0];
for(i=1;i<size;i++)
{
if(arr[i]>max)
{
max=arr[i];
}
if(arr[i]<min)
{
min=arr[i]);
}
}
printf("maximum element in array=%d\n",max);
printf("minimum element in array=%d\n",min);
getch();
}
