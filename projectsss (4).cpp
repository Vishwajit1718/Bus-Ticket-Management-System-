#include <conio.h>
#include <cstdio>
#include <iostream>
#include <string.h>
#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;
int p = 0;
class a
{
  char busn[5], driver[10], arrival[5], depart[5], from[10], to[10], seat[8][4][10];
  float number[10];
  int otp;
  public:
  a();

  void install();
  void allotment();
  void payment();
  void show();
  void avail();
  void position(int i);

}obj;
void vline(char ch)
{
  cout<<ch;
}
a::a()
{
 float number[10];
    int captcha;

    cout<<"\n\tLet's get started...\t\t";
    cout<<"\n\n\t*** LOGIN ***\n\t";
    cout<<"\n\tPlease Enter Yours Mobile Number :";
    cin>>number[10];
    int a=1 + rand() % 50;
    int b=1 + rand() % 50;
    int sum = a+b;

    cout<<"\n\tCaptcha :"<<"("<<a<<"+"<<b<<")";
    cin>>captcha;
    if(captcha==sum)
    {
        cout<<"\nLogin Successfully";
        cout<<"\n-----------------------------------------------------------------------------------------\t";
    }
    else
    {
        cout<<"login Unsuccessful";
    }
}
void a::install()
{
  cout<<"\n\n\t\t\t**** ADD INFORMATION ****\n\n\t\t\t";

  cout<<"\n\t\t\tFirst Name: ";
  cin>>obj.busn;
  cout<<"\n\t\t\tLast Name: ";
  cin>>obj.driver;
  cout<<"\n\t\t\tPhone Number: ";
  cin>>obj.arrival;
  cout<<"\n\t\t\tDeparture: ";
  cin>>obj.depart;

  p++;

  cout<<"\n\t\t\tInformation Added Successfully \n\n";
  cout<<"\n_______________________________________________________________________________________________\t";
}


void a::show()
{
  int n;
  char number[5];
  int num;

  cout<<"\n\n\t\t\t*** Buses available ***\n\n\t\t\t";

  cout<<"\n 1] Mumbai To Pune: ";
  cout<<"\n 2] Pune To Mumbai";
  cout<<"\n 3] Mumbai To Goa";
  cout<<"\n 4] Pune To Satara";
  cout<<"\n\n Please enter one of them :";
  cin>>num;


  if(num==1)
  {
      cout<<"\n\t\tYou Have selected Mumbai To Goa !\n\t\t Price Per Person=2000 \n\t\tKm=600";
      cout<<"\n\t\tDriver name - Pratik Chikane";
      cout<<"\n\t\tDriver Number - 8421228699";
      cout<<"\n\t\tBus No - MH12 SQ 3838";

  }
  if(num==2)
  {
      cout<<"\n\t\tYou Have Selected Pune To Mumbai !\n\t\tPrice Per person=1000 \n\t\tKm=200";
      cout<<"\n\t\t Driver Name - Vishwajit Aute";
      cout<<"\n\t\tDriver Number - 5879654875";
      cout<<"\n\t\tBus No - NH12 BQ 8484";
  }
  if(num==3)
  {
      cout<<"\n\t\tYou Have Selected Mumbai To Pune !\n\t\t Price Per Person=1200 \n\t\tKm=200";
      cout<<"\n\t\t Driver Name - Ajay Pandit";
      cout<<"\n\t\t Driver Number - 7666614835";
      cout<<"\n\t\t Bus No - MH12 AQ 2612";
  }
  if(num==4)
  {
      cout<<"\n\t\tYou Have Selected Pune To Goa !\n\t\tPrice Per Person=1500 \n\t\tKm=300";
      cout<<"\n\t\t Driver Name:Spandan Jagtap";
      cout<<"\n\t\t Driver Number:9373184330";
      cout<<"\n\t\t Bus No - MH12 PQ 5433";
  }

  cout<<"\n-------------------------------------------------------------------------------------";
}
void a::payment()
{
    float payment;
    char address;
    int cvv;
    int price=2000;
    int pay;
    int seats;
    int n;
    int i;
    int confirmation;
    cout<<"\n\t\t*** Please Enter Yours Payment Details ***";
    cout<<"\n\n\t\tCredit Card No :";
    cin>>payment;
    cout<<"\n\t\tCVV :";
    cin>>payment;
    cout<<"\n\t\tTotal no.of Seats:";
    cin>>seats;
    cout<<"\n\t\tDo you want to purchase then click 1 if no then click 2:";
    cin>>confirmation;
    if(confirmation==1)
    {
        cout<<"\n\t\tTicket Purchased !";

        cout<<"\n\t\tYou paid :"<<seats*price<<endl<<"\n\n\n";

    }

}
int main()
{
  system("cls");
  int w,g=1;
  float payment;
  char address;
  int cvv;
  int price=2000;
  int pay;
  int seats;
  int n;
  int i;
  int confirmation;

  cout<<"\n\n\n\n\n";
  cout<<"\t\t*******************************************\t\n\n";
  cout<<"\t\t\tWELCOME TO HUMSAFAR TRAVELS\t\n\n";
  cout<<"\t\t*******************************************\t\n\n";

  while(g)
  {

    cout<<"\t\t\t1.BUSES AVAILABLE\n\t\t\t"
    <<"2.Add Information\n\t\t\t"
    <<"3.Payment\n\t\t";
    cout<<"_________________________________________";

    obj.show();
    obj.install();
    obj.payment();
    break;

  }
  return 0;
}
