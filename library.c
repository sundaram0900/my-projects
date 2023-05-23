#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>


struct library
{
char book_name[30];
char author[30];
int pages;
float price;
};

int main()
{
  printf("..............................=.$.$.$.$.$.$.$.$.$.$.$.$.$.$.$.$.=................................................\n");
  printf("..............................=.................................=................................................\n");
  printf("------------------------------= HELLO WELCOME TO GROUP3 LIBRARY-=------------------------------------------------\n");
  printf("..............................=.................................=................................................\n");
  printf("..............................=.$.$.$.$.$.$.$.$.$.$.$.$.$.$.$.$.=................................................\n");
  


struct library l[100];
char author_name[30],book_name[30];
int i,j, keepcount;
i=j=keepcount = 0;
//case condition
while(j<=6)
{
printf(" \n");
printf("**********************************************************\n");	
printf("\n\n1. ADD BOOK INFORMATION\n2. DISPLAY BOOK INFORMATION\n");
printf("3. LIST OF ALL BOOKS OF AN AUTHOR\n");
printf("4. LIST THE TITLE OF THE SPECIFIED BOOK\n");
printf("5. LIST THE COUNT OF BOOKS IN GROUP3 LIBRARY\n");
printf("6. EXIT");
printf(" \n");
printf(" \n");
printf("**********************************************************");

//to seaarch book
printf ("\n\nENTER THE ABOVE OPTION : ");
scanf("%d",&j);

switch (j)
{
//to enter book details in the library
case 1:  

printf ("ENTER THE BOOK NAME = ");
scanf("%s",&l[i].book_name);
printf ("ENTER THE AUTHOR NAME = ");
scanf("%s",l[i].author);
printf ("ENTER THE NOMOF PAGES = ");
scanf ("%d",&l[i].pages);

printf ("ENTER THE PRICE = ");
scanf ("%f",&l[i].price);
keepcount++;

printf("---------------THANK YOU VISIT AGAIN GROUP3 LIBRARY------------------------");

break;
//to have the book details
case 2:
printf("you have entered the following information\n");
for(i=0; i<keepcount; i++)
{
printf ("BOOK NAME = %s\n",l[i].book_name);
printf("AUTHOR OF THE BOOK IS= %s\n",l[i].author);
printf ("PRICE = %f\n",l[i].price);
printf("PAGES= %d\n",l[i].pages);
}
printf("---------------THANK YOU VISIT AGAIN GROUP3 LIBRARY------------------------");
break; 
//by entering the author name to give book details
case 3:
printf ("ENTER THE AUTHOR NAME : \n");
scanf ("%s",author_name);
for (i=0; i<keepcount; i++)
{
if (strcmp(author_name, l[i].author) == 0){
printf("book name is: %s\n",l[i].book_name);
printf("author name is: %s\n",l[i].author);
printf("no of pages are: %d\n",l[i].pages);
printf("price of the book is:%f\n",l[i].price);

}
else{
  printf("NO such book is found");
}


}
printf("---------------THANK YOU VISIT AGAIN GROUP3 LIBRARY------------------------");

break;
//by entering the book name to give book details
case 4:
printf ("ENTER THE BOOK NAME : ");
scanf ("%s",book_name);
for (i=0; i<keepcount; i++)
{
if (strcmp(book_name, l[i].book_name) == 0){


printf ("book name is: %s\n",l[i].book_name);
printf ("author of the book is: %s\n",l[i].author);
printf ("no of pages of the book is: %d\n",l[i].pages);
printf ("price of the book is= %f\n",l[i].price);


}
else{
	printf("NO SUCH BOOK IS FOUND IN GROUP3 LIBRARAY");
}

}
printf("---------------THANK YOU VISIT AGAIN GROUP3 LIBRARAY------------------------");

break;
/*to search how many books are ther in the library*/
case 5:
printf("\n NO OF BOOKS IN GROUP3 LIBRARY : %d\n", keepcount);
printf("---------------THANK YOU VISIT AGAIN GROUP3 LIBRARY------------------------");

break;
case 6:
	printf("---------------THANK YOU VISIT AGAIN GROUP3 LIBRARY------------------------");


exit (0); 


}
}
return 0;

}





