
#include<iostream>


using namespace std;

int main()

 {
	int a,b,c;
	cout<<" Enter value for first number";
	cin>>a;
	cout<<" Enter value for second number";
	cin>>b;
	cout<<" Enter value for third number";
	cin>>c;		
	if(a>b&&a>c)
	{
		cout<<" First number is greatest:"<<endl<<"which is= "<<a;
	} 
	
	else if(b>a&&b>c) 
	{
		cout<<" Second number is greatest"<<endl<<"which is= "<<b;
	} 
	
	else 
	{
		cout<<" Third number is greatest"<<endl<<"which is= "<<c;
	}
	
	return 0;
	
}
