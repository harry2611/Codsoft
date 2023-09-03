/* Student grading system
Create a program that manages student grades. Allow the user to input
student names and their corresponding grades.
Calculate the average grade and display it along with the highest and
lowest grades.

codsoft- task3 */

#include<iostream.h>
#include<conio.h>
#include<stdio.h>

struct student
{
 char name[30];
 int grades;
};

void main()
{
 int size,i,sum=0,avg,j;
 student s[30],temp;

 clrscr();

 cout<<"\n\n Enter the number of students :";
 cin>>size;

 for(i=0;i<size;i++)
 {
  cout<<"\n\n Enter name:";
  gets(s[i].name);

  cout<<"\n\n Enter grade:";
  cin>>s[i].grades;
 }

//Lowest grade 

for(i=0;i<3;i++)
{
 for(j=i+1;j<size;j++)
 { 
   if(s[i].grades>s[j].grades)
   {
     temp=s[i];
     s[i]=s[j];
     s[j]=temp;
   }
  }
}

cout<<"\n\n Lowest grade: ";
 cout<<s[0].grades;


//Highest grade 

for(i=0;i<3;i++)
{
 for(j=i+1;j<size;j++)
 { 
   if(s[i].grades<s[j].grades)
   {
     temp=s[i];
     s[i]=s[j];
     s[j]=temp;
   }
  }
}

cout<<"\n\n Highest grade: ";
 cout<<s[0].grades;

// Average

 for(i=0;i<size;i++)
 {
  sum=sum+s[i].grades;
  avg=(sum)/size;
 }

 cout<<"\n\n Average :"<<avg;

getch();
}
