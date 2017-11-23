#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

int f=0;
int i=0,count=0,cl=0;
char name[10];
char add[20],key, pass[10];
long mob,card;
int des1,des2;

struct node{
int info;
int prn;
struct node *next;
}*start=NULL;

void insert(int el,int p)
{
	struct node *temp,*temp1;
	temp=(struct node *) malloc(sizeof(struct node));
	temp->info=el;
	temp->prn=p;
	if(start==NULL)
	{
		start=temp;
		temp->next=NULL;
	}
	else
	{
		if(start->prn>p)
		{
			temp->next=start;
			start=temp;
		}
		else
		{
			temp1=start;
			while(temp1->next!=NULL)
			{
				if((temp1->next)->prn>p)
				{
					temp->next=temp1->next;
					temp1->next=temp;
					f=1;
					break;
				}
				temp1=temp1->next;
			}
			if(f==0)
			{
				temp1->next=temp;
				temp->next=NULL;
			}
		}
	}
	count++;
}
                                           //insert end

void del()
{
	struct node *temp=start;
	if(temp==NULL)
    {
		printf("It's all empty. Nothing can be deleted");
		printf("First enter some data.");
    }
	else
	{
		if(temp->next!=NULL)
		{
			temp=temp->next;
			free(start);
			start=temp;
		}
		else
		{
			free(start);
			start=NULL;
		}
	}
	count--;
}                                       //deletion end

void display()
{
	struct node *temp=start;
	if(start==NULL)
    {
		printf("\nAll Empty! Nothing to display in the display Section");
		printf("\n Please enter some data first!!");
    }
	else
	{
		    printf("\nThe IDs of the employees you have selected are: ");
		while(temp!=NULL)
		{
			printf("\n \t  ID no.->%d ",temp->info);
			temp=temp->next;
			}
	}
}                                               //display end
void next()
{
    printf("\n \t\t\t WELCOME TO THE NEXT ESSENCE OF THE PAGE");
    printf("\n \t There are %d people who wants to travel  via the package offered to xyz company", count);
        if(count==0)
    printf("\n\nPLEASE RUN THE PROGRAM AGAIN and insert some employees to associate with the same");
        for(i=0;i<count;i++)
    {
        printf("\n\nPlease enter the information for customer %d \n",i+1);
        printf("Enter the name: ");
        scanf("%s",name);                           //name
        printf("Enter the mobile number: ");
        scanf("%li",&mob);                          //mob
        printf("Enter the address: ");
        scanf("%s",add);                            //add
        //printf("\n\n\t\t\tname : %s=",name);


    }
}
    void info()
    {
        printf("\n\nYOUR CUSTOMER LIST IS AS FOLLOWS : ");
        printf("\nPLEASE CHECK IT CAREFULLY TO AVOID ANY PROBLEMS FURTHER");
        for(i=0;i<count;i++)
        {

        printf("\n\n\t\t\tname : %s",name);
        printf("\n\t\t\tmobile number is :%li",&mob);
        printf("\n\t\t\taddress is : %s",add);
        }

    }

    void confirm()
    {
        printf("\t \nplease Enter any key to confirm for payment and press ''q'' to quit ");
        scanf("%c",&key);                   //key

        if (key!='q')
          {
              printf("\nEnter the credit card number ");
        scanf("%li",&card);                 //card
        printf("\nEnter the password : ");
        scanf("%s",&pass);
        printf("\nThe desired amount will be withdrawn from the account (card number=  %li)",card);
        printf("\n\t\t\t\tTHANK YOU");
//        printf("enter ''y'' to continue and ''n'' to exit");
  //      scanf("%c",&fin);                       //fin
          }
        else
            exit(0);
    }
int main()
{
	int opt,el,pr;
	char ch,des;
            printf("\n\t\t\tHello Ma'am");
            printf("\n\t\tWELCOME TO OUR TRAVEL AGENCY");
            printf("\nplease click '1' for getting the details about this travel agency   ");
            scanf("%d",&cl);
            if(cl==1)
            {
                printf("\nThis is basically a program for any company who sends their employees here \n and there for the business or promotional trips across the country ");
                printf("\n  The most amazing thing is that you can \n enter the employees' preference and according to that preference the seats will be booked if we have the space!");
                printf("\nI hope you have an amazing experience here");
            }

      printf("\n\nPlease enter the details for the employees who wantto go for any business trip in the given package");
	while(opt!=5){
		printf("\n1.Insert\n2.Delete the first added employee(acc to pq(FIFO))\n3.Display\n4.Exit\n5.Move to the next/further page   ");
		scanf("%d",&opt);
		switch(opt)
		{
			case 1:
			printf("\nEnter the ID of the employee who wants to go and his priority :  ");
			scanf("%d %d",&el,&pr);
			insert(el,pr); break;
			case 2:
			del(); break;
			case 3:
			display(); break;
			case 4: exit(0);
				break;
				case 5:next();
				break;
				default:printf("Please enter a correct choice");
				break;
		}}
      info();
	for (i=0;i<count;i++)
        {
	printf("\n\nFrom where do you want to board the flight for your destination?");
        printf("\n1.delhi\n2.chennai\n3.mumbai\n4.jaipur   ");
        scanf("%d",&des1);
	printf("\nSelect the place where do you want to go:- ");
	printf("\n1.delhi\n2.chennai\n3.mumbai\n4.jaipur   ");
	scanf("%d",&des2);
	if((des1==1&&des2==1)||(des1==2&&des2==2)||(des1==3&&des2==3)||(des1==4&&des2==4))
        printf("\t\t\tYour cost of travelling from destination 1 to destination 2 is 0");
    else if((des1==1 && des2==2)||(des1==2 && des2==1))
        printf("\t\t\tYour cost of travelling from destination 1 to destination 2 is 3000");
        else if((des1==1 && des2==3)||(des1==3 && des2==1))
        printf("\t\t\tYour cost of travelling from destination 1 to destination 2 is 2000");
        else if((des1==1 && des2==4)||(des1==4 && des2==1))
        printf("\t\t\tYour cost of travelling from destination 1 to destination 2 is 1000");
        else if((des1==2 && des2==3)||(des1==3 && des2==2))
        printf("\t\t\tYour cost of travelling from destination 1 to destination 2 is 1500");
        else if((des1==2 && des2==4)||(des1==4 && des2==2))
        printf("\t\t\tYour cost of travelling from destination 1 to destination 2 is 3500");
        else if((des1==3 && des2==4)||(des1==4 && des2==3))
        printf("\t\t\tYour cost of travelling from destination 1 to destination 2 is 2500");
        else
            printf("\n\n\n\t\t\tPlease enter a correct choice carefully");
        }
           confirm();
           exit(0);
}       //end of main
