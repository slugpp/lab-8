#include<iostream>
using namespace std;

char before(char x){
	int numT = x;
	char text = numT;
	if(numT <= 91 && numT > 48)
	{
		numT--;
		if(numT < 65)
		{
			numT += 26;
		}
	}
	else
	{
		numT = 48;
	}
	text = numT;
	return text;
}

int main(){
	//Test Case
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}