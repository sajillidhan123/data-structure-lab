#include<stdio.h>
#include<stdlib.h>
int front=-1,rear=-1;
void insert(int *q,int SZ)
{  
    if (front==(rear+1)%SZ)
   {    printf("Queue is full\n");
       return;
   }
   if(front==-1)
    front=0;
   rear=(rear+1)%SZ;
   printf("Enter the element to insert\n");
   scanf("%d",&q[rear]);

}
void delete(int  *q,int SZ)
{
   if (front==-1)
   {    printf("Queue is empty\n");
    return;
   }
   printf("Deleted Element %d ",q[front]);
   if (front==rear)
      front=rear=-1;
   else
     front=(front+1)%SZ;
   return;
}
void search(int *q,int SZ)
{ int x,f,pos;
  if (front==-1)
  {   printf("Queue is empty\n");
     return;
  }
  printf("Enter the element to be searched\n");
  scanf("%d",&x);
  f=front;
  pos=1;
  while(1)
  {   if (q[f]==x)
      {  printf("Element found location %d",pos)    ;
     break;
       }
       if (f==rear)
       { printf("Element not found\n");
      break;
       }
       f=(f+1)%SZ;      
       pos=pos+1;
   }
}

void display(int *q,int SZ)
{ int f;
  if (front==-1)
  {   printf("Queue is empty")  ;
     return;
  }
  f=front;
  printf("Elements are:");
   while(1)
  {   printf(" %d ",q[f]);
      if (f==rear)
    break;
      f=(f+1)%SZ;

  }
}
void main()
{ 
    int opt;
    int SZ;
    printf("Enter the size of queue:");
    scanf("%d",&SZ);
    int q[SZ];
    while(1)
    {  
    printf("\nMenu\n");
    printf("1.INSERT\n2.DELETE\n3.SEARCH\n4.Display\n5.EXIT\nEnter the Option:");
    scanf("%d",&opt);
    switch(opt)
    {   case 1:insert(q,SZ);
            break;
        case 2:delete(q,SZ) ;
            break;
        case 3:search(q,SZ);
           break;
        case 4:display(q,SZ);
            break;
        case 5: exit(0);
        default:printf("Invalid Option");
          
    }
     }
}
