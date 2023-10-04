#include <iostream>
using namespace std;

class date
{
private:
    int day;
    int month;
    int year;

public:
    date()
    {
        this->day = 0;
        this->month = 0;
        this->year = 0;
    }
    date(int day, int month, int year)
    {
        this->day = day;
        this->month = month;
        this->year = year;
    }
    int get_day()
    {
        return this->day;
    }
    void set_day(int day)
    {
        this->day = day;
    }
    int get_month()
    {
        return this->month;
    }
    void set_month(int month)
    {
        this->month = month;
    }
    int get_year()
    {
        return this->year;
    }
    void set_year(int year)
    {
        this->year = year;
    }
    void display()
    {
        cout << "Date is:" << endl;
        cout << this->day << ":" << this->month << ":" << this->year << endl;
    }
    void accept()
    {
        cout << "Enter day:" << endl;
        cin >> this->day;
        cout << "Enter month:" << endl;
        cin >> this->month;
        cout << "Enter year:" << endl;
        cin >> this->year;
    }
    bool is_leap_year()
    {
        if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
        {
            cout << "Is a leap year" << endl;
            return 1;
        }
        else
        {
            cout << "Is not a leap year" << endl;
            return 0;
        }
    }
};

class person
{
private:
    string name;
    string addr;
    date birth_date;

public:
    person()
    {
        this->name = "";
        this->addr = "";
    }
    person(string name, string addr, int day, int month, int year) : birth_date(day, month, year)
    {
        this->name = "Manas";
        this->addr = "Pune";
    }
    string get_name()
    {
        return this->name;
    }
    void set_name(string name)
    {
        this->name = name;
    }
    string get_addr()
    {
        return this->addr;
    }
    void set_addr(string addr)
    {
        this->addr = addr;
    }

    date get_birth_date()
    {
        return this->birth_date;
    }
    void set_birth_date(date birth_date)
    {
        this->birth_date = birth_date;
    }

    void display()
    {
        cout << "Name:" << name << "Address:" << addr << endl;
        birth_date.display();
    }
    void accept()
    {
        cout << "Enter Name:" << name << endl;
        cin >> name;
        cout << "Address:" << addr << endl;
        cin >> addr;
        birth_date.accept();
    }
};

class employee : public person
{
private:
    int id;
    float sal;
    string dept;
    date joining;

public:
    employee()
    {
        this->id=0;
        this->sal=0;
        this->dept="";
        this->joining;
    }
    employee(string name,string addr,int id,float sal,string dept,date joining,int day,int month,int year) :joining(day,month,year)
    {
        this->id=208;
        this->sal=6000;
        this->dept="Clerk";
        //this->joining;
    }
    int get_id()
    {
        return this->id;
    }
    void set_id(int id)
    {
        this->id=id;
    }

    float get_sal()
    {
        return this->sal;
    }
    void set_sal(float sal)
    {
        this->sal=sal;
    }

    string get_dept()
    {
        return this->dept;
    }
    void set_dept(string dept)
    {
        this->dept=dept;
    }

    date get_joining_date()
    {
        return this->joining;
    }
    void set_joining(date joining)
    {
        this->joining=joining;
    }

    void display()
    {
        person ::display();
        cout<<"Id:"<<id<<"sal:"<<sal<<"dept"<<dept<<endl;
        cout<<"Joining date:"<<endl;
        joining.display();
    }

    void accept()
    {
        person ::accept();
        cout<<"Id:"<<endl;
        cin>>id;
        cout<<"sal:"<<endl;
        cin>>sal;
        cout<<"dept"<<endl;
        cin>>dept;
        cout<<"Enter Joining date:"<<endl;
        joining.accept();
    }

};

int main()
{
    /*
    person p1;
    p1.accept();
    p1.display();
    */

   /*employee e1;
   e1.accept();
   e1.display();*/

   employee *eptr=new employee;
   eptr->accept();
   eptr->display();
}