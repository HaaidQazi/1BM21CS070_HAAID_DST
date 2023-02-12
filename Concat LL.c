#include<stdio.h>
#include<stdlib.h>
struct node
{
  int value;
  struct node *link;
};
typedef struct node *NODE;
NODE getnode ()
{
  NODE temp;
  temp = (NODE) malloc (sizeof (struct node));
  temp->link = NULL;
  return temp;
}

NODE insertbeg (NODE first, int item)
{
  NODE new;
  new = getnode ();
  new->value = item;
  new->link = NULL;
  if (first == NULL)
    {
      return new;
    }
  else
    {
      new->link = first;
      first = new;
      return first;
    }
}
NODE Concat(NODE head1,NODE head2)
{    
    NODE ptr=head1;
    if(head1==NULL && head2!=NULL)
    {
        return head2;
    }
   else if(head1!=NULL && head2==NULL)
    {
        return head1;
    }
   else if(head1==NULL && head2==NULL)
    {
        return NULL;
    }
    else
    {
        while(ptr->link!=NULL)
        {
            ptr=ptr->link;
        }
        ptr->link=head2;
        return head1;
    }
}

void display(NODE first)
{
  NODE ptr;
  ptr = first;
  while (ptr != NULL)
    {
      printf ("%d\t", ptr->value);
      ptr = ptr->link;
    }
printf("\n");
}

int main()
{
    NODE head1=NULL;
    NODE head2=NULL;
    int a[5];int b[5];
    printf("Enter the data for first linked list\n");
    for(int i=0;i<5;i++)
    {
      scanf("%d",&a[i]);
      head1=insertbeg(head1,a[i]);
}
    printf("Enter the data for 2nd linked list\n");
    for(int i=0;i<5;i++)
    {
      scanf("%d",&b[i]);
      head2=insertbeg(head2,b[i]);
}
    printf("First before concat\n");
    display(head1);
    printf("2nd after concat\n");
    display(head2);
    head1=Concat(head1,head2);
    printf("After concatenation\n");
    display(head1);
return 0;
}
