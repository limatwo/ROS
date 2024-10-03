#include<iostream>

using namespace std;

class calculator 

{
    public:
    int num1;
    int num2;

    int add()
    {
    
      return  num1+num2;

    }
   

    int sub ()

    {
       return num1-num2;
    }

    int div ()
    {
       return num1/num2;
    }
};

int main()
{
    calculator cal;
    
    cin>>cal.num1;
    cin>>cal.num2;

    
    cout<<cal.add()<< endl;

    cout<<cal.sub()<< endl;

    cout<<cal.div()<< endl;
    

};
