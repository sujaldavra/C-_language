#include<iostream>
using namespace std;

class Distance {
	public:
		int feet, inch;
		
	public:
		Distance () {
			this->feet = 0;
			this->inch = 0;
		}
		
		Distance (int f, int i) {
			this->feet = f;
			this->inch = i;
		}
		
		Distance operator + (Distance &d2) {
			Distance d3;
			
			d3.feet = this->feet + d2.feet;
			d3.inch = this->inch + d2.inch;
			
			while (d3.inch >= 12) {
				d3.inch = d3.inch - 12;
				d3.feet++;
			}
			
			return d3;
		}
};

int main () {
	Distance d1 (10, 20);
	Distance d2 (5, 10);
	Distance d3;
	
	d3 = d1 + d2;
	
	cout << "Total Distance is:" << d3.feet << " " << d3.inch;
	
	return 0;
}
