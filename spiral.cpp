#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int  main(){

	int x = 0;
	int y = 0;
	int steps = 0;
	int shell = 0;
	int input;
	int num = 1;


	cout << "What number are you trying to find? ";
	cin >> input;

	//Calculations
	while (num < input){
		//Right
		if (num < input){
			if ((input-num) >= ((2*shell)+1)){
				x += ((2*shell)+1);
				num += ((2*shell)+1);
				shell += 1;
				//cout << "finished right, # " <<  num << endl;
			}else{
				x += (input-num);
				num += (input-num);
			}
		}

		//Up
		if (num < input){
			if ((input-num) >= ((2*shell)+1)){
				y += ((2*shell)-1);
				num += ((2*shell)-1);
				//cout << "finished up, # " << num << endl;
			}else{
				y += (input-num);
				num += (input-num);
			}
		}

		//Left
		if (num < input){
			if ((input-num) >= (2*shell)){
				x -= ((2*shell));
				num += (2*shell);
				//cout << "finished left, # " << num << endl;
			}else{
				x -= (input-num);
				num += (input-num);
			}
		}

		//Down
		if (num < input){
			if ((input-num) >= (2*shell)){
				y -= ((2*shell));
				num += (2*shell);
				//cout << "finished down, # " << num << endl;
			}else{
				y -= (input-num);
				num += (input-num);
			}
		}
	}

	//finding steps
	steps = abs(x) + abs(y);

	cout << "\nCoordinate:" << setw(2) << "(" << x << ", " << y << ")" << endl;
	cout << "Steps: " << steps << "\n" << endl;
}
