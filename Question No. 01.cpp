/*_____________________________________________
Generate the Fibonacci sequence using nested loops.
LAB MANUAL 6 Q#01
KASHIF NADEEM KAYANI            456466           ME-15 SEC A
*/

#include<iostream>
using namespace std;
int main (){
	int a,b,n;    //  declaring 3 variables
	a=1;       //assigning value a=0.
	b=1;      //assigning value b=1.
	cout<<"enter the number of terms of fibonacci sequence ";
	cin>>n;
		cout<<a<<" "<<b<<" ";       //printing a and b
	for ( int i=1;i<n;i++)     //using for loop for i
	{
		for( int j=i-1;j<i;j++)   //using for loop for j.
		{ 
	int res=0;     //declaring res as a=b.
	 res=a+b;
	cout<<res<<" ";   ///printing result [a=b].
	
	a=b;b=res;   //rotating variable b and res.
	} 
	

} return 0;
}
