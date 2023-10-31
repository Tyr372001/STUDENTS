#include<iostream>

using namespace std;

class Time{
	
	private:
		int hrs;
		int min;
		int sec;
		
	public:
		Time(){
			hrs = 0;
			min = 0;
			sec = 0;
		}
		
		Time(int h, int m, int s){
			hrs = h;
			min = m;
			sec = s;
		}
	public:
		Time add(Time theta);
		
		void displayTime();
};

Time Time :: add(Time theta){
	
	Time result;
	result.sec = sec + theta.sec;
	result.min = min + theta.min;
	result.hrs = hrs + theta.hrs;
	
	if(result.sec >= 60){
		result.sec = result.sec - 60;
		result.min = min + 1;
	}
	
	if(result.min >= 60){
		result.min = result.min - 60;
		result.hrs = hrs + 1;
	}
	
	return result;
}

void Time::displayTime(){
	cout<<hrs<<" hrs "<< min <<" mins "<< sec <<" sec "<<endl; 
}

int main(){
	Time t1(5,45,59);
	Time t2(6,45,20);
	
	Time result = t1.add(t2);
	
	result.displayTime();
}


