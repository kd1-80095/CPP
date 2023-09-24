#include<iostream>
using namespace std;

class date
{
    private :
    int day;
    int month;
    int year;

    public :

    void initDate()
    {
      this ->day = 0;
      this ->month= 0;
      this ->year = 0;

    } 
    void printdate()
    {
       cout<<"date Details :"<<endl;
       cout<<"day = "<<day<<endl<<"month = "<<month<<endl<<"year = "<<year<<endl; 

    }
    void acceptdate()
    {
        cout<<"Enter Date Details : day:month:year"<<endl;
        cin>>day>>month>>year;

    }

    bool leapyear()
    {
      return ((this->year % 400 == 0) || ((this->year % 4 == 0) && (this->year % 100 != 0)));
    }
};

int main()
{
    date d1;
    
    
    do
     
    {
    int choice;
    cout<<"---------------------"<<endl;
    cout<<"Enter choice:"<<endl;
    cout<<" 5 = Exit , 1= initdate , 2 = accept date , 3 = print date , 4=Leap year check"<<endl;
    cin>>choice;
    
    {
        switch (choice)
        {
        case 1:
        d1.initDate();
        break;
        case 2:
        d1.acceptdate();
        break;
        case 3 :
        d1.printdate();
        break;
        case 4 :
        if (d1.leapyear())
        {
            cout<<"Leap Year"<<endl;
        }
        else
        {
            cout<<"Not Leap Year"<<endl;
        }
        break;
        case 5 :
        cout<<"exit"<<endl;
        abort();
        break;
        default:
        cout<<"Enter correct choice"<<endl;
            break;
        } 
    }
    }while (true);
    

    return 0;
}