#include<stdio.h> 
#include<stdlib.h> 
int main()
{ 
int a[10];
int n;
int i; 
printf("Enter decimal number \n"); 
scanf("%d",&n); 
for(i=0;n>0;i++) 
{ 
a[i]=n%2; 
n=n/2; 
} 
printf("\nBinary number is "); 
for(i=i-1;i>=0;i--) 
{ 
printf("%d",a[i]); 
} 
return 0; 
}