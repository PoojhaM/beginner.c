#include<stdio.h>

#include<conio.h>

int main()

{
  
int array[100],k,i,j,temp,n,x[30],t=0;
   
printf("Enter The length Of The Array ");
  
scanf("%d%d",&n,&k);
  
printf("\nEnter The Numbers:");
  
for(i=0;i<n;i++)
  
 {
    
scanf("%d",&array[i]);
    
}
 
 for(i=0;i<n;i++)
    
{
     
for(j=0;j<n-1;j++)
      
{
      
 if(array[j]>array[j+1])
        
{
         
temp=array[j];
         
array[j]=array[j+1];
         
array[j+1]=temp;
         
}
       
 }
     
 }
   
for(i=0;i<n;i++)
   
{
    
if(array[i]%2!=0)
    
{
    
x[t]=array[i];
    
t++;
    
}
   
}
   
x[t]='\0';
  
for(t=0;x[t]!='\0';t++)
  
{
      
if(t==k-1)
      
{
          
printf("%d",x[t]);
      
}
  
}
   
return 0;

}
