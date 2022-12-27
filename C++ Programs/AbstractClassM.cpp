#include<iostream>
using namespace std;
class smartphone
{
	public:
		virtual void application()=0;
};
class bluetooth: smartphone
{
	public:
		void application()
		{
			cout<<"Turn on your bluetooth..."<<endl;
			cout<<"Bluetooth searching..."<<endl;
			cout<<"Bluetooth paired."<<endl;
		}
};
class wifi:smartphone
{
	public:
		void application()
		{
			cout<<"Turn on your wifi..."<<endl;
			cout<<"Wifi is searching..."<<endl;
			cout<<"Wifi connected."<<endl;
		}
};
int main()
{
	bluetooth blu;
	wifi wi;
	blu.application();
	wi.application();
	return 0;
}
