 /*____________________________________________________________
 Write a program using break or continue statement that only adds prime numbers from 1 to 50 
and display the sum on screen.
HOME TASK  6 Q#03
KASHIF NADEEM KAYANI            456466           ME-15 SEC A
*/
#include <iostream>
using namespace std;
int main()
{
int sum=0;               //declaring sum equals to 0
for (int i=2; i<=50; i++)    //using for loop for i
{
bool prime=true;    //using boolean
  
for (int j=2; j<i; j++)   //using for loop for j
{
   if (i%j==0)           //is i is exactly divisible on j
{
   prime=false;       
   break;                
}
}
   if (prime)          
{
   sum += i;    //if number is prime then it will be added in sum          
}
    
}
cout << "The sum of prime numbers from 1 to 50 is : " << sum << endl;   //printing sum
return 0;
}
