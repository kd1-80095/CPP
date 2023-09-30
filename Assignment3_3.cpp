#include<iostream>
using namespace std;

class cylinder
{
    private:
    double radius;
    double height;
    const float pi=3.14;
    double volume;
    public:
    cylinder()
    {
      this-> radius=0;
      this->height=0;
    }

    cylinder(double radius,double height):pi(3.14)
    {
        this->radius=radius;
        this->height=height;
        
    }
    double getRadius()
    {
        return this->radius;
    }
    void setRadius(double radius)
    {
        this->radius=radius;
    }
    double getHeight()
    {
        return this->height;
    }
    void setHeight(double h)
    {
        this->height=h;
    }
    double getVolume()
    {
      this->volume = this->pi * this->radius * this->radius *this->height;
      return this->volume;
    }
    void printVolume()
    {
        cout<<"Volume is"<<endl;
        cout<<this->volume;
    }


};

int main()
{
    
    cylinder c2;
 
 cout<<"-------------------------"<<endl;
 cout<<"1. Set radius"<<endl;
 cout<<"2. Get radius"<<endl;
 cout<<"3. Set Height"<<endl;
 cout<<"4. Get Height"<<endl;
 cout<<"5. Get Volume"<<endl;
 cout<<"6. Print Volume"<<endl;
 cout<<"0. EXIT"<<endl;
 
   while (true)
   { int choice;
    double h,r;
    cout<<"Enter Choice"<<endl;
    cin>>choice;
      
      switch(choice)
      {
        case 0:
        cout<<"EXIT"<<endl;
        abort();
        break;
        case 1:
        cout<<"enter radius"<<endl;
        cin>>r;
        c2.setRadius(r);
        break;
        case 2:
        cout<<"radius="<<endl;
        cout<<c2.getRadius()<<endl;
        break;
        case 3:
        cout<<"enter height"<<endl;
        cin>>h;
        c2.setHeight(h);
        break;
        case 4:
        cout<<"Height="<<endl;
        cout<<c2.getHeight()<<endl;
        break;
        case 5:
        cout<<"Get Volume"<<endl;
        cout<<c2.getVolume()<<endl;
        break;
        case 6:
        cout<<"Print Volume"<<endl;
        c2.printVolume();
        break; 
        default :
        cout<<"Enter correctr choice00"<<endl;
        break;
      
      }
   } 
return 0;
}
