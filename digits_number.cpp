#include<iostream >
#include<stack>
using namespace std;


/*
1      2    3     4 
10^3  10^2 10^1 10^0

*/


// int Digit_count(int num)
// {
//     int count =0;
//     while(num>0)
//     {
//         num =num/10;
//         count++;
//     }
//     return count;
// }

// int main ()
// {
//     int num;
//     cin >> num;
//     cout<< "number of digit= "<< Digit_count(num)<< std::endl;
//     return 0;

// }

/*

1234 % 10 == 4
1234 /10 =123
123 % 10 == 3
123/10 = 12
12% 10 = 2
12/10= 1

*/
void digit_count(int num)
{
    std::stack<int>digit;
    while(num>0)
    {
        digit.push(num %10);
        num = num /10;
    }

    while ( digit.size()>0)
    {
        std::cout << digit.top() << std::endl;
        digit.pop ();
    }
}

int main()
{
    int num;
    std::cin >> num;

    digit_count(num);

    return 0;

}