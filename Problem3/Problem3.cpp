#include <iostream>
using namespace std;
int main(int argc,char** argv);
int main(int argc,char** argv){
  float regPay;
  float overPay=0;
  float hours =stof(argv[1]);
  cout<<"Hours worked: "<<hours<<endl;
  if(hours>40){
    regPay=40*16;
    overPay=(hours-40)*16*1.5;
  }else{
    regPay=hours*16;
  }

  float grossPay = regPay+overPay;
  float SS = grossPay*0.06;
  float fedIncome = grossPay*0.14;
  float stateTax = grossPay*0.05;
  short medInsurance = 10;

  cout<<"Gross pay: "<<grossPay<<endl;
  cout<<"Social security tax: "<<SS<<endl;
  cout<<"Federal income tas: "<<fedIncome<<endl;
  cout<<"State income tax: "<<stateTax<<endl;
  cout<<"Medical insurance: "<<medInsurance<<endl;
  cout<<"Net take-home pay: "<<grossPay-SS-fedIncome-stateTax-medInsurance<<endl;

  return 1;
}
