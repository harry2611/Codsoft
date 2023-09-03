/* Word count
Develop a program that counts the number of words in a given text file.
Prompt the user to enter the file name and display the total word count.

CodSoft - task 4 */


#include<fstream.h>
#include<conio.h>
#include<stdio.h>

void main()
{
 char filename[50];
 clrscr();

 cout<<"\n\n Enter filename : ";
 gets(filename);

 ofstream obj(filename, ios::out);
 
 obj<<"This is my file";
 obj<<"\nThis is my file";
 obj<<"\nThis is my file";

 obj.close();

 char ch;
 int count=0;

 ifstream obj2(filename, ios::in);

 while(! obj2.eof())
 {
   obj2.get(ch);

   if(ch == '\n' || ch==' ')
   {
      count++;
   }
}

obj2.close();

cout<<"\n\n No of words in file = "<<count+1;

getch();
}