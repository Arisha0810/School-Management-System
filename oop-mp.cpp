#include<iostream.h>
#include<conio.h>

class staff
{
  protected:
      int code;
      char name[20];
  public:
      void getstaff(void)
      {
    cout<<"\n\nEnter ID :";
    cin>>code;
    cout<<"Enter name :";
    cin>>name;
      }
      void dispstaff(void)
      {
       cout<<"\nNAME       :"<<name;
       cout<<"\nCODE       :"<<code;
      }
};

class teacher : public staff
{
      char sub[20];
      int sal;
  public:
      void create(void)
      {
    getstaff();
    cout<<"Enter Subject :";
    cin>>sub;
    cout<<"Enter Salary :";
    cin>>sal;
      }
      void display(void)
      {
     dispstaff();
     cout<<"\nSUBJECT    :"<<sub;
     cout<<"\nSALARY     :"<<sal;
      }
};

class student : public staff
{
       char grade;
   public:
    void create(void)
    {
       getstaff();
       cout<<"Enter Grade (ex: any character):";
       cin>>grade;
    }
    void display(void)
    {
       dispstaff();
       cout<<"\nGRADE      :"<<grade;
    }
};

class principle : public staff
{
       int age;
  public:
      void get(void)
      {
    getstaff();
    cout<<"Enter age:";
    cin>>age;
      }
      void disp(void)
      {
    dispstaff();
    cout<<"\nAGE      :"<<age;
      }
};


class casual : public principle
{
     int salary;
   public:
       void create(void)
    {
      get();
      cout<<"Enter Salary :";
      cin>>salary;
    }
    void display(void)
    {
      disp();
      cout<<"\nSalary:"<<salary;
    }
};

void main()
{
clrscr();
teacher o1t[10];
casual  o1c[10];
student  o1s[10];
int choice,i;
char test;
while(1)
{
int count;
start:
 clrscr();
   cout<<"\n=====OBJECT ORIENTED PROGRAMMING USING C++ MICRO PROJECT=====\n"<<endl;
   cout<<"\n=====SCHOOL MANAGEMENT SYSTEM=====\n\n\n";
   cout<<"Choose Category of Information\n";
   cout<<"1)   Teachers\n";
   cout<<"2)   Students\n";
   cout<<"3)   Principles\n";
   cout<<"4)   Exit\n";
   cout<<"Enter your choice:";
   cin>>choice;
   switch(choice)
   {
      case 1 :  while(1)
	{
	clrscr();
	cout<<"\n=====TEACHERS INFORMATION=====\n\n";
	cout<<"\nChoose your choice\n";
	cout<<"1) Create\n";
	cout<<"2) Display\n";
	cout<<"3) Jump to Main Menu\n";
	cout<<"Enter your choice:";
	cin>>choice;
	switch(choice)
	{
	 case 1 :  for(count=0,i=0;i<10;i++)
	       {
		 cout<<endl;
		 o1t[i].create();
		 count++;
		 cout<<endl;
		 cout<<"\n\nAre you Interested in entering data\n";
		 cout<<"Enter y or n:";
		 cin>>test;
		 if(test=='y' || test=='Y')
		continue;
		 else goto out1;
		 }
		 out1:
		 break;
	 case 2 : for(i=0;i<count;i++)
	       {
		cout<<endl;
		 o1t[i].display();
		 cout<<endl;
	       }
	       getch();
	       break;
	 case 3 : goto start;
	 default: cout<<"\nEnter choice is invalid\ntry again\n\n";
	 }
	 }
      case 2 :   while(1)
	 {
	 clrscr();
	cout<<"\n=====STUDENTS INFORMATION=====\n\n";
	cout<<"\nChoose your choice\n";
	cout<<"1) Create\n";
	cout<<"2) Display\n";
	cout<<"3) Jump to Main Menu\n";
	cout<<"Enter your choice:";
	cin>>choice;
	switch(choice)
	{
	 case 1 : for(count=0,i=0;i<10;i++)
	       {
		cout<<endl;
		o1s[i].create();
		 count++;
		 cout<<endl;
		 cout<<"\n\nAre you Interested in entering data\n";
		 cout<<"Enter y or n:";
		 cin>>test;
		 if(test=='y' || test=='Y')
		continue;
		 else goto out2;
		 }
		 out2:
		 break;
	 case 2 : for(i=0;i<count;i++)
	       {
		cout<<endl;
		 o1s[i].display();
		 cout<<endl;
	       }
	       getch();
	       break;
	 case 3 : goto start;
	 default: cout<<"\nInvalid choice\ntry again\n\n";
	 }
	 }
      case 3 :  while(1)
	{
	clrscr();
	cout<<"\n=====PRINCIPLE INFORMATION=====\n\n";
	cout<<"\nChoose your choice\n";
	cout<<"1) Create\n";
	cout<<"2) Display\n";
	cout<<"3) Jump to Main Menu\n";
	cout<<"Enter your choice:";
	cin>>choice;
	switch(choice)
	{
	 case 1 : for(count=0,i=0;i<10;i++)
	       {
		 cout<<endl;
		 o1c[i].create();
		 count++;
		 cout<<endl;
		 cout<<"\n\nAre you Interested in entering data\n";
		 cout<<"Enter y or n:";
		 cin>>test;
		 if(test=='y' || test=='Y')
		continue;
		 else goto out3;
		 }
		 out3:
		 break;
	 case 2 : for(i=0;i<count;i++)
	       {
		 cout<<endl;
		 o1c[i].display();
		 cout<<endl;
	       }
	       getch();
	       break;
	 case 3 : goto start;
	 default: cout<<"\nInvalid choice\ntry again\n\n";
	 }
	 }
      case 4 : goto end;
    }
 }
 end:
 }
