#include<stdio.h>
#include<stdlib.h>
void main()

{
int arr1[30],i,n,a,b,temp,arr2[30],ch;
clrscr();
printf("\n1.create");
printf("\n2.union");
printf("\n3.find");
printf("\n4.EXIT");
while(1)
{
printf("\n enter choice:");
scanf("%d",&ch);
switch(ch)
{
case 1://CREATE SET
      printf("enter no.of elements in set:");
      scanf("%d",&n);
      printf("Enter elemnts in set:");
      for(i=0;i<n;i++)
       {
       scanf("%d",&arr1[i]);
       arr2[i]=i;
}
      break;
case 2://UNION
      printf("\n enter the index of elements () which are to be scanned(union):\n");
      scanf("%d%d",&a,&b);
      temp=arr2[a];
      for(i=0;i<n;i++)
      {
      if(arr2[i]==temp)
      arr2[i]=arr2[b];
      }
      printf("\n elemnts status -after-union\n");
      for(i=0;i<n;i++)
      {
      printf("%d\t\t%d\n",arr1[i],arr2[i]);
      }
      printf("\n elements have been successfully connected (union opertion)\n");
      break;
      case 3://FIND-reurns true if A and B are connected,else returns false
      printf("\n enetr the index of elemnts (2 indices)whose connection is to be checkd (find operation):\n");
      scanf("%d%d",&a,&b);
      if(arr2[a]==arr2[b])
      printf("\n elemnts  at indices %d & %d are connected\n",a,b);
      else
      printf("\n elements at indics %d &%d are not connected\n",a,b);
      break;
      case 4://Exit
	    exit(0);
	    break;
default:
    printf("\n wrong choice,please select a valid coice");
break;
}
}
}