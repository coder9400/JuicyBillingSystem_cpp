#include<iostream>
#include<string.h>
using namespace std;
class Invoice
{
    public : 
    char products[10][100];
    int amt[10];
    int total,quantity[100],items[100],n,sum;
    Invoice()
    {
        sum = 0;
        strcpy(products[0],"CocaCola");
        strcpy(products[1],"Sprite");
        strcpy(products[2],"Mirinda");
        strcpy(products[3],"ThumsUP");
        strcpy(products[4],"Pride");
        strcpy(products[5],"Coconut Water");
        strcpy(products[6],"Lime Juice");
        strcpy(products[7],"Pinapple Juice");
        strcpy(products[8],"Watermelon Juice");
        strcpy(products[9],"Mango Juice");

        amt[0] = 10;
        amt[1] = 20;
        amt[2] = 30;
        amt[3] = 40;
        amt[4] = 50;
        amt[5] = 60;
        amt[6] = 70;
        amt[7] = 80;
        amt[8] = 90;
        amt[9] = 100;
    }
    void input(){}
    void Products(){}
    void display(){}
};
class Input : public Invoice
{
    string name,number,add,date;
    public:
    void input()
    {
        cout<<"Enter your number : ";
        cin>>number;
        cout<<"Enter your name : ";
        cin>>name;
        cout<<"Enter your address : ";
        cin>>add;
        cout<<"Enter date : ";
        cin>>date;
    }
    void display()
    {
        cout<<"Number : "<<number;
        cout<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Address : "<<add;
        cout<<endl;
        cout<<"Date : "<<date;
        cout<<endl;
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    }
};
class Pproducts : public Invoice
{
    public : 
    void Products()
    {
    cout<<"Enter how many items u have purchased : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter item no : ";
        cin>>items[i];
        cout<<"Enter Quantity : ";
        cin>>quantity[i];
        sum = sum + (amt[items[i]]*quantity[i]);
    }
    }
    void display()
    {
        for(int i=0;i<n;i++)
        {
            cout<<i+1<<".           "<<products[items[i]]<<"               ->>             "<<quantity[i]<<"               ->>             "<<(amt[items[i]]*quantity[i])<<endl;
        }
        cout<<"~~~~~~~~~~~~~Total Amount To be Paid : "<<sum<<"/-~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    }
};
int main()
{
    Input k;
    Pproducts p;
    Invoice obj;
     cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout<<"Products We are offering\n";
    for(int i=0;i<10;i++)
    {
        cout<<i<<".     "<<obj.products[i]<<"       ->>     "<<"Rs "<<obj.amt[i];
        cout<<endl;
    }
    cout<<endl;
    k.input();
    cout<<"Enter Product no for billing\n";
    p.Products();
    cout<<"Printing the bill\n\n";
    cout<<"************************************************\n\n";
    k.display();
    cout<<"SrNo.        NameOfItem                       Quantity                            Amount\n";
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    p.display();
    return 0;
}

                                    //THAMSON//