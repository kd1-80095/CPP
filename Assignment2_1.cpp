#include<iostream>
using namespace std;

namespace Nstudent 
{
class student
{
    private :
    int rollno;
    string name;
    int marks;

    public :

    void initstudent()
    {
      this ->rollno = 0;
      this ->name="";
      this ->marks = 0;

    } 
    void printstudent()
    {
       cout<<"Student Details :"<<endl;
       cout<<"Roll no = "<<rollno<<endl<<"Name = "<<name<<endl<<"Marks = "<<marks<<endl; 

    }
    void acceptstudent()
    {
        cout<<"Enter Student Details : Rollno , name , marks"<<endl;
        cin>>rollno>>name>>marks;

    }
};

}

int main()
{
    Nstudent::student s1;
    do
    {
    int choice;
    cout<<"---------------------"<<endl;
    cout<<"Enter choice:"<<endl;
    cout<<" 4 = Exit , 1= initstudent , 2 = accept student , 3 = print student"<<endl;
    cin>>choice;
        switch (choice)
        {
        case 1:
         s1.initstudent();
        break;
        case 2:
        s1.acceptstudent();
        break;
        case 3 :
        s1.printstudent();
        break;
        case 4 :
        cout<<"exit"<<endl;
        abort();
        break;
        
        default:
        cout<<"Enter correct choice"<<endl;
            break;
        } 
        

    }while (true);
    

    return 0;
}