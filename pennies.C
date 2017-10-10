/*Tyler Allen
CS111
3-17-2015
This program will output the pay of a worker who is paid a penny for their initial salary and then is doubled for every day after*/
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
  int numDays;
  double pay = 0.01;
  double total=0.0;
  do
    {
      cout<<"Enter the number of days you have worked for: ";
	cin>>numDays;
    }while(numDays<=0);//ask for input while numDays is negative

	for(int i=1; i<=numDays;i++)
	  {//multiplay pay by 2 and print results
	    total+=pay;
	    cout<<setw(5)<<i<<setw(10)<<pay<<endl;
	    pay*=2;
	  }
	cout<<endl<<setw(5)<<"Total"<<setw(10)<<total<<endl;
	//output total
	return 0;
}
