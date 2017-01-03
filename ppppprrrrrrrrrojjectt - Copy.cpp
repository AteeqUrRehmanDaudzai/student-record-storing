
//****************************************************
//   Project of  file handling 
//****************************************************


#include<iostream>
#include<fstream>
#include<cstring>
#include<conio.h>
using namespace std;

//****************************************************
//  Funtion prototypes 
//****************************************************

void display_all();
void write_student();
void display_sp(int n);
void modify_student(int n);

//***************************************************
//  Structure to get and show data
//***************************************************

class student {
       char name[50],  department[60],fname[60];
       
       int   rollno,  regno;
       
       double gpa;
      
      public: 
       
       void getdata()
       {
            cout<<"\n\tEnter   Name of student ";
            cin>>name;
            cout<<"\n\n\tEnter father name ";
            cin>>fname;  
            cout<<"\n\n\tEnter department ";
            cin>>department;
            cout<<"\n\n\tEnter ROLL NO ";
            cin>>rollno;
            
            cout<<"\n\n\tEnter Registration NO ";
            cin>>regno;
            cout<<"\n\n\tEnter GPA ";
            cin>>gpa;
            }
            
            void showdata()
            {
                 cout<<"\n\tName of student is "<<name;
                 cout<<"\n\n\tFather name is "<<fname;
                 cout<<"\n\n\tDepartment is "<<department;
                 cout<<"\n\n\tRoll NO is "<<rollno;
                 cout<<"\n\n\tRegistration NO is "<<regno;
                 cout<<"\n\n\tGPA is  "<<gpa;
                 }
                 
                 int returnregno()
                 {
                     return regno;
                     }
                     
                     };
 
 //**************************************************
 //                  Main Funtion
 //**************************************************

	}
	File.close();
	if(found==0)
		cout<<"\n\n\t Record Not Found ";
	getch();
}

//**************************************************
//       End of Project
//**************************************************
