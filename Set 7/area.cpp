#include<iostream>
using namespace std;

class Shape {
	public:
		int width, height;
		
	public:
		Shape () {
			cout << "Please enter width:";
			cin >> width;
			
			cout << "Please enter height:";
			cin >> height;
		}
};

class Rectangle:public Shape {
	public:
		void area () {
			cout << "Area of Rectangle is:" << width*height << endl;
		}
};

class Triangle:public Shape {
	public:
		void area () {
			cout << "Area of Triangle is:" << 0.5*width*height << endl;
		}
};

int main () {
	Rectangle r;
	r.area();
	
	Triangle t;
	t.area();
	
	return 0;
}
