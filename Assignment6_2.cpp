# include<iostream>
using namespace std;

class Employee
{
    private:

    int id;
    float sal;

    public:
    Employee()
    {
        this->id=0;
        this->sal=0;

        cout<<"Inside non parameterized constructor of base class"<<endl;
    }

    Employee(int a, float b)
    {
        this->id=a;
        this->sal=b;

        cout<<"inside parameterized constructor of base class"<<endl;

    }

    int getId()
    {
        return this->id;
    }

    void setId(int a)
    {
        this->id=a;
    }

    float getSal()
    {
        return this->sal;
    }

    void setSal(float a)
    {
        this->sal=a;
    }

    void display()
    {
        cout<<"The id is: "<<this->id<<".  The sal is: "<<this->sal<<endl;
    }

    void accept()
    {
        cout<<"Enter the id"<<endl;
        cin>>id;
        cout<<"enter the salary"<<endl;
        cin>>sal;
    }

};

class Manager : public virtual Employee 
{
    private:

    float bonus;

    public:

   
    Manager()
    {
        this-> bonus=0;
       
       this->setId(1);
       Employee::setSal(1000);
        cout<<"inside non parameterized constructor of derived class manager"<<endl;
        
    }

    Manager(int a, float b, float c) 
    {
        cout<<"inside parameterized constructor of derived class manager"<<endl;
        this-> bonus=b;
        Employee::setId(a);
        this->setSal(c);
    }

    float getBonus()
    {
        return bonus;
    }

    void setBonus(float bonus)
    { Manager m1(1,5000,100);
    m1.display();
        this->bonus=bonus;
    }

    void display()
    {
        Employee::display();
      cout<<"bonus = "<<bonus<<endl;
      
    }

    void accept()
    {   Employee::accept();
        cout<<"Enter the bonus ="<<endl;
        cin>>this->bonus;

    }

protected:

    void display_manager()
    {
        cout<<"Bonus is ="<<bonus<<endl;
    }

    void accept_manager()
    {
        cout<<"enter bonus= ";
        cin>>this->bonus;
    }

};

class Salesman : public virtual Employee
{
private:
   
    float comm;

public:
    
    Salesman()
    {
        cout<<"inside non parameterized constructor of Salesman"<<endl;
        this->comm=0;
    }

    Salesman(int a,float b, float c)
    {
        cout<<"inside parameterized constructor of middle class2"<<endl;
        Employee::setId(a);
        Employee::setSal(b);
        this->comm=c;
    }

    float getComm()
    {
      return this->comm;
    }

    void setComm(float a)
    {
        this->comm=a;
    }

    void display()
    {
        Employee::display();
        cout<<"the comm is= "<<this->comm<<endl;
    }

    void accept()
    {
        Employee::accept();
        cout<<"enter the commission"<<endl;
        cin>>this->comm;
    }

protected:
    void display_salesman()
    {
        cout<<"the comm is= "<<comm<<endl;
    }

    void accept_salesman()
    {
        cout<<"Commission= "<<endl;
        cin>>this->comm;

    }

};

class Sales_manager : public Manager ,public Salesman
{
    private: 


    public:

    Sales_manager()
    {
        cout<<"inside non parameterized constructor of last class"<<endl;
    }

    Sales_manager(int a,float b,float c,float d)
    {
        cout<<"inside parameterized constructor of last class"<<endl;
        Employee::setId(a);
        Employee::setSal(b);
        Manager::setBonus(c);
        Salesman::setComm(d);
        
    }

    void display()
    {
        Employee::display();
        Manager::display_manager();
        Salesman::display_salesman();

    }

    void accept()
    {
        Employee::accept();
        Manager::accept_manager();
        Salesman::accept_salesman();

    }

};

int main()
{
   Sales_manager sm1(1,2000,300,400);
   
//    sm1.accept();
   sm1.display();
};

