

#include <iostream>
using namespace std;

class Time
{
private:
    int *hh;
    int *mm;
    int *ss;

public:
    Time()
    {
    }
    Time(int h, int m, int s)
    {
        this->hh = new int;
        this->mm = new int;
        this->ss = new int;
        *this->hh = h;
        *this->mm = m;
        *this->ss = s;
    }
    int getHour()
    {
        return *this->hh;
    }
    int getMinute()
    {
        return *this->mm;
    }
    int getSeconds()
    {
        return *this->ss ;
    }
   
    void printTime()
    {
        cout << " " << *this->hh;
        cout << " : " << *this->mm;
        cout << " : " << *this->ss << endl;
    }
    void setHour()
    {
        cout << "Enter hour to set : ";
        cin >> *this->hh;
        *this->hh = *this->hh;
    }
    void setMinute()
    {
        cout << "Enter minute to set : ";
        cin >> *this->mm;
        *this->mm = *this->mm;
    }
    void setSeconds()
    {
        cout << "Enter minutes to set : ";
        cin >> *this->ss;
        *this->ss = *this->ss;
    }
    ~Time()
    {
        delete this->hh;
        delete this->mm;
        delete this->ss;
    }
};

int main()
{
    Time *t[3];
    t[0] = new Time(0, 0, 0);
    t[1] = new Time(5, 15, 42);
    t[2] = new Time(12, 20, 59);
   
    for (int col = 0; col < 3; col++)
    {
        cout << "\nTime in : " << col << endl;
        t[col]->printTime();
    }
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter Time for : " << i << endl;
        t[i]->setHour();
        t[i]->setMinute();
        t[i]->setSeconds();
    }
    for (int i = 0; i < 3; i++)
    {
        cout<< "Time in : " << i << "\n" ;
        cout<< (t[i]->getHour() ) <<" : "<<(t[i]->getMinute()) << " : " << (t[i]->getSeconds())<<endl;
    }

    for (int i = 0; i < 3; i++)
        delete t[i];
   
}
