#include<iostream>
#include<math.h>
using namespace std;

class Vector{
	private:
		int i;
		int j;
		int k;
	
	public:
		Vector(){
			i = 0;
			j = 0;
			k = 0;
		}
		
	public:
		Vector(int i, int j, int k){
			this-> i = i;
			this-> j = j;
			this-> k = k;
		}
	
	public:
		Vector add(Vector alpha);
		
		friend ostream & operator << (ostream &out, const Vector &beta);
};

Vector Vector :: add (Vector alpha){
	Vector result;
	result.i = i + alpha.i;
	result.j = j + alpha.j;
	result.k = k + alpha.k;
	
	return result;
}

ostream & operator << (ostream & out, const Vector &beta){
	
	out<< beta.i<<"i + "<<beta.j<<"j + "<<beta.k<<"k";
	return out;
}

int main(){
	Vector alpha(5,4,7);
	Vector beta(5,4,7);
	
	Vector result;
	
	result = alpha.add(beta);
	
	cout<<result<<endl;
}
