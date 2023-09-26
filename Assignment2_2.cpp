#include<iostream>
using namespace std;

class address
{
private:
string building;
string street;
string city;
int pin;
public :

address()
{
this ->building = "Anuda";
this ->street = "Path";
this ->city = "karad";
this ->pin = 415001;
}

address(string building,string street,string city,int pin)
{
this ->building = building;
this ->street = street;
this ->city = city;
this ->pin = pin;


}

void accept()
{
 cout<<"Enter Building , Street, City,Pin"<<endl;
 cin>>building>>street>>city>>pin;
}

void display()
{
cout<<"Building :"<<building<<" "<<"Street:"<<street<<" "<<"city:"<<city<<" "<<"Pin:"<<pin<<endl;
}

string get_building()
{
    return this->building;
}

string get_street()
{
    return this->street;
}

string get_city()
{
    return this->city;
}

int get_pin()
{
    return this->pin;
}

void set_building(string building)
{
     this->building = building;
}

void set_street(string street)
{
     this->street = street;
}

void set_city(string city)
{
     this->city = city;
}

void set_pin(int pin)
{
     this->pin = pin;
}


};

int main()
{
    address a1;
    a1.accept();
    a1.display();
    //default
    address a2;
    a2.display();
    
    //parameterized
    address a3 ("Laksha","street","pune",401231);
    a3.display();
    
    address a4;
    a4.set_pin(415414);
    cout<<a4.get_pin()<<endl;

}