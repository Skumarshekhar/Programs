#include<iostream>
using namespace std;
class shape
{
	public:
		virtual void draw();
};
class reactangle:shape
{
	public:
		void draw()
		{
			cout<<"Drawing circle..."<<endl;
		}
};
class circle: shape
{
	public:
		void draw()
		{
			cout<<"Drawing circle..."<<endl;
		}
};
int main()
{
	reactangle rec;
	circle c;
	rec.draw();
	c.draw();
	return 0;
}
