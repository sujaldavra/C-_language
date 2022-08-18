#include<iostream>
using namespace std;

class Shape {
	public:
		float radius, width, height;
		
	public:
		void setradius (float r) {
			this->radius = r;
		}
		
		void setwidth (float w) {
			this->width = w;
		}
		
		void setheight (float h)  {
			this->height = h;
		}
		
		virtual void getArea () = 0;
};

class Circle: public Shape {
	public:
		void getArea () {
			cout << "Area of Circle is: " << 3.14*radius*radius << endl;
		}
};

class Rectangle: public Shape {
	public:
		void getArea () {
	    	cout << "Area of Rectangle is: " << width*height << endl;
		}
};

int main () {
	Circle c;
	c.setradius (20);
	c.getArea ();
	
	Rectangle r;
	r.setwidth (10);
	r.setheight(20);
	r.getArea();
	
	return 0;	
}
