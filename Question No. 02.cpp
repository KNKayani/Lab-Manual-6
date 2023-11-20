/*_____________________________________________
 Create Floyd's Triangle with nested loops.
LAB MANUAL 6 Q#02
KASHIF NADEEM KAYANI            456466           ME-15 SEC A
*/
#include<iostream>
using namespace std;
int main()
{
	int n;  //declaring number of rows
	cin>>n;   //input from user 
	int sum=1;    //declarong a variable sum.
	for (int i=1;i<=n;i++)    //using for loop for i 
	{ 

		for( int j=1; j<=i;j++ )   //using for loop for j.
{
	
	 cout<<sum<<" ";    //printing sum
	sum++;
	 }   cout<<endl;   //going to next line
	 }
	 return 0;
}
