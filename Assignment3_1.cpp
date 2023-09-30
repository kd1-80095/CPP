#include<iostream>
using namespace std;


class volume
{
private :

int length;
int width;
int height;
int volume;
public :

void acceptvalues()
{
cout<<"Enter Values of length, width,height"<<endl;
cin>>length>>width>>height;
}

void calculatevolume()
{
  this-> volume = length *width * height ;
}

void displayvolume()
{
    cout<<"Volume is :"<<volume<<endl;

}



};

int menu()
{   
    int value;
    cout<<"------------------"<<endl;
    cout<<"Enter the choice"<<endl;
    cout<<" 0 = EXIT"<<endl;
    cout<<" 1 = Accept Values"<<endl;
    cout<<" 2 = Calculate Volume"<<endl;
    cout<<" 3 = Display Volume"<<endl;
    cout<<"------------------"<<endl;
    cin>>value;
    return value;

}

int main()
{
    volume v1;
    int choice;

    while ((choice = menu())!= 0)
    {
        switch (choice)
        {
        case 1:
         v1.acceptvalues();
            break;
        case 2:
         v1.calculatevolume();
         break;
        case 3:
          v1.displayvolume(); 
          break;    
        default:
        cout<<"Enter correct choice"<<endl;
            break;
        }
        
    }
    

}