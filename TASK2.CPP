/* Develop a calculator program that performs basic arithmetic operations such as
addition, subtraction, multiplication and division.
Allow the user to input two numbers and choose an operation to perform.

codsoft- task 2 */

#include<iostream.h>
#include<conio.h>
#include<process.h>


void add()
{
  int a,b;
  cout<<"\n\n Enter 2 numbers :";
  cin>>a>>b;
   
  cout<<"\n\n Addition:"<<a+b;
}

void sub()
{ 
  int a,b;
  cout<<"\n\n Enter 2 numbers :";
  cin>>a>>b;
  
  cout<<"\n Subtraction: "<<a-b;
}

void mul()
{
  int a,b;
  cout<<"\n\n Enter 2 numbers :";
  cin>>a>>b;
  
  cout<<"\n Multiply: "<<a*b;
}

void div()
{
  int a,b;
  cout<<"\n\n Enter 2 numbers :";
  cin>>a>>b;
  
  cout<<"\n Division: "<<a/b;
}


int menu()
{
  int choice;
  
 cout<<"\n\n 1.ADD ";
 cout<<"\n\n 2.SUB ";
 cout<<"\n\n 3.MUL ";
 cout<<"\n\n 4.DIV ";
 cout<<"\n\n 5.EXIT ";
 cout<<"\n\n Enter your choice: ";
 cin>>choice;
 
return choice;
}
 
void main()
{
 int ch;
 clrscr();


 do{
  ch=menu();
 switch(ch)
 {
  case 1:
    add();
    break;

  case 2:
    sub();
    break;

  case 3:
    mul();
    break;

  case 4:
    div();
    break;

  case 5:
    cout<<"\n\n EXIT";
    getch();
    exit(0);

   default:
    cout<<"\n\n Invalid Input";

 }getch(); //switch case over 

}while(ch!=5); //do while over 

}

