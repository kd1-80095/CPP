#include <iostream>
using namespace std;

class Date
{
private:
    int day;
    int month;
    int year;

public:
    Date()
    {
        this->day = 1;
        this->month = 1;
        this->year = 2023;
    }

    Date(int day, int month, int year)
    {
        this->day = day;
        this->month = month;
        this->year = year;
    }

    int getDay()
    {
        return this->day;
    }

    void setDay(int day)
    {
        this->day = day;
    }

    int getMonth()
    {
        return this->month;
    }

    void setMonth(int month)
    {
        this->month = month;
    }

    int getYear(int year)
    {
        return this->year;
    }

    void setYear(int year)
    {
        this->year = year;
    }

    void display()
    {
        cout << "the date is" << this->day << "/" << this->month << "/" << this->year << endl;
    }

    void accept()
    {
        cout << "Enter the date in the form Day,Month,Year" << endl;
        cin >> day >> month >> year;
    }

    bool isLeapYear()
    {
        if ((year % 4 == 0 and year % 100 != 0) or (year % 400 == 0))
        {
            cout << "this is a Leap Year" << endl;
            return true;
        }

        else
        {
            cout << "Its not a Leap Year" << endl;
            return false;
        }
    }
};

class Person
{
private:
    string name;
    string addr;
    Date dob;

public:
    Person()
    {
        this->name = "Person1";
        this->addr = "karad";
        this->dob = dob;
    }

    Person(string name, string addr, Date dob)
    {
        this->name = name;
        this->addr = addr;
        this->dob = dob;
    }

    string getName()
    {
        return this->name;
    }

    void setName(string name)
    {
        this->name = name;
    }

    string getAddress()
    {
        return this->addr;
    }

    void setAddress(string addr)
    {
        this->addr = addr;
    }

    Date getBirthDate()
    {
        return this->dob;
    }

    void setBirthDate(Date dob)
    {
        this->dob = dob;
    }

    void display()
    {
        cout << "Name is: " << this->name << endl;
        cout << "Address is: " << this->addr << endl;
        cout << "Date of Birth: " << endl;
        dob.display();
    }

    void accept()
    {
        cout << "Enter the Name";
        cin >> this->name;
        cout << "Enter the Address" << endl;
        cin >> addr;
        cout << "Enter the date" << endl;
        dob.accept();
    }
};

class Employee
{
private:
    int id;
    float salary;
    string dept;
    Date doj;

public:
    Employee()
    {
        this->id = 0;
        this->salary = 0;
        this->dept = "Training";
        this->doj = doj;
    }

    Employee(int a, float b, string s, Date doj)
    {
        this->id = a;
        this->salary = b;
        this->dept = s;
        this->doj = doj;
    }

    int getId()
    {
        return id;
    }

    void setId(float id)
    {
        this->id=id;
    }

    float getSal()
    {
        return this->salary;
    }

    void setSal(float sal)
    {
        this->salary=sal;
    }

    string getDept()
    {
        return this->dept;
    }

    void setDept(float dept)
    {
        this->dept=dept;
    }

    Date getJoiningDate()
    {
        return this->doj; 
    }

    void setJoiningDate(Date doj)
    {
        this->doj=doj;
    }

    void displayEmployee()
    {
        cout<<"ID: "<<this->id;
        cout<<"Salary: "<<this->salary;
        cout<<"Dept: "<<this->dept;
        cout<<"Doj: ";
        doj.display();
    }

    void acceptEmployee()
    {
        cout<<"Enter ID"<<endl;
        cin>>this->id;
        cout<<"Enter Salary: "<<endl;
        cin>>this->salary;
        cout<<"Enter Department"<<endl;
        cin>>dept;
        doj.accept();
    }

};

int main()
{
    Employee e1;
    e1.acceptEmployee();
    e1.displayEmployee();

    Person p1;
    p1.accept();
    p1.display();


};
