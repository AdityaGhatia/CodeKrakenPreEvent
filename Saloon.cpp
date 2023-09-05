#include <iostream>
using namespace std;
class saloon
{};
class haircut: public saloon
{
public:
    int a,b;
    haircut()
    {
        cout<<"What haircut do you want?\n1.Only Trim for Rs 100\n2.One-sided for Rs 100\n3.Two-sided for Rs 150\n4.S-cut for Rs 150\n";
        cin>>a;
    }
    void trim()
    {
        cout<<"Only Trim for Rs 100. Press 1 to confirm?\n";
        cin>>b;
        if (b!=1)
        {
            cout<<"Incorrect choice.\n";
        }
    }
    void one()
    {
        cout<<"One-sided for Rs 100. Press 1 to confirm?\n";
        cin>>b;
        if (b!=1)
        {
            cout<<"Incorrect choice.\n";
        }
    }
    void two()
    {
        cout<<"Two-sided for Rs 150. Press 1 to confirm?\n";
        cin>>b;
        if (b!=1)
        {
            cout<<"Incorrect choice.\n";
        }
    }
    void s()
    {
        cout<<"S-cut for Rs 150. Press 1 to confirm?\n";
        cin>>b;
        if (b!=1)
        {
            cout<<"Incorrect choice.\n";
        }
    }
};
class colour: public saloon
{
public:
    int q,p;
    colour()
    {
        cout<<"\nWhat hair colour do you want?\n1.Red for Rs 1000\n2.Blue for Rs 1000\n3.Green for Rs 1000\n4.Blonde for Rs 1500\n";
        cin>>q;
    }
    void red()
    {
        cout<<"Red colour for Rs 1000. Press 1 to confirm?\n";
        cin>>p;
        if (p!=1)
        {
            cout<<"Incorrect choice.\n";
        }
    }
    void blue()
    {
        cout<<"Blue colour for Rs 1000. Press 1 to confirm?\n";
        cin>>p;
        if (p!=1)
        {
            cout<<"Incorrect choice.\n";
        }
    }
    void green()
    {
        cout<<"Green colour for Rs 1000. Press 1 to confirm?\n";
        cin>>p;
        if (p!=1)
        {
            cout<<"Incorrect choice.\n";
        }
    }
    void blonde()
    {
        cout<<"Blonde colour for Rs 1500. Press 1 to confirm?\n";
        cin>>p;
        if (p!=1)
        {
            cout<<"Incorrect choice.\n";
        }
    }
};
class hair_spa: public saloon
{
public:
    int hs,x=1;
    hair_spa()
    {
        while (x==1)
        {
            cout<<"Hair spa for Rs 300. Press 1 to Confirm\n";
            cin>>hs;
            if (hs!=1)
            {
                cout<<"Incorrect choice.\n";
            }
            else
                break;
        }
    }
};
int main()
{
    char name[20];
    long contact_no,sum=0;
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Enter your contact no.: ";
    cin>>contact_no;
    int h,y=1,z;
    while (y==1)
    {
        cout<<"1.Haircut 2.Hair-colour 3.Hair-spa\n";
        cin>>h;
        switch (h)
    {
    case 1:
        {
            haircut obj;
            switch (obj.a)
            {
            case 1:
                {
                    obj.trim();
                    sum=sum+100;
                    break;
                }
            case 2:
                {
                    obj.one();
                    sum=sum+100;
                    break;
                }
            case 3:
                {
                    obj.two();
                    sum=sum+150;
                    break;
                }
            case 4:
                {
                    obj.s();
                    sum=sum+150;
                    break;
                }
            }
            break;
        }
    case 2:
        {
            colour obj;
            switch (obj.q)
            {
            case 1:
                {
                    obj.red();
                    sum=sum+1000;
                    break;
                }
            case 2:
                {
                    obj.blue();
                    sum=sum+1000;
                    break;
                }
            case 3:
                {
                    obj.green();
                    sum=sum+1000;
                    break;
                }
            case 4:
                {
                    obj.blonde();
                    sum=sum+1500;
                    break;
                }
            }
            break;
        }
    case 3:
        {
            hair_spa obj;
            sum=sum+300;
            break;
        }
    }
    cout<<"Do you want to continue? 1.Yes 2.No\n";
    cin>>z;
    if(z!=1)
    {
        cout<<"------------------------------------------------------------------------------\n";
        cout<<"Name: "<<name<<endl;
        cout<<"Contact No: "<<contact_no<<endl;
        cout<<"Your Total amount is: "<<sum<<endl;
        cout<<"------------------------------------------------------------------------------\n";
        cout<<"You can come to our Saloon anytime. =)\n";
        cout<<"_______________~THANK YOU~_______________";
    }
    }
}
