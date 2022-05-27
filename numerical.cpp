#include <bits/stdc++.h>
using namespace std;

double f(double x){
	return 2*x*x - 4*x + 2; //the main mathematical function
}

double g(double x){
	return 4*x - 4; //first derivative of the function
}


int it=0;

void bisection(double x1, double x2, int iteration, double error=0){

	while(iteration--){
		++it;
		cout<<"\n\niteration: "<<it<<endl;

		double x0 = (x1+x2)/2;
		cout<<"the root is: "<<x0<<endl;

		//error finding
		if(it>1){
			error = (abs((x0-error)/x0))*100;
			cout<<"Error: "<<error<<"%"<<endl;
		}

		if(f(x1)*f(x0) < 0) return bisection(x1, x0, iteration, x0);
		else return bisection(x2, x0, iteration, x0);
	}
}


void false_position(double x1, double x2, int iteration, double error=0){

	while(iteration--){
		++it;
		cout<<"\n\niteration: "<<it<<endl;

		double x0 = x1-f(x1)*(x2-x1)/(f(x2)-f(x1));
		cout<<"the root is: "<<x0<<endl;

		//error finding
		if(it>1){
			error = (abs((x0-error)/x0))*100;
			cout<<"Error: "<<error<<"%"<<endl;
		}

		if(f(x1)*f(x0) < 0) return false_position(x1, x0, iteration, x0);
		else return false_position(x2, x0, iteration, x0);
	}
}

void secant(double x0, double x1, int iteration){

	while(iteration--){
		++it;
		cout<<"\n\niteration: "<<it<<endl;

		double x2 = x1-((f(x1)*(x1-x0))/(f(x1)-f(x0)));
		cout<<"the root is: "<<x2<<endl;

		//error finding

		double error = (abs((x2-x1)/x2))*100;
		cout<<"Error: "<<error<<"%"<<endl;

		x0 = x1, x1 = x2;
		return secant(x0, x1, iteration);
	}
}


void newton_rapsan(double x0, int iteration){

	while(iteration--){
		++it;
		cout<<"\n\niteration: "<<it<<endl;

		double x1 = x0- (f(x0)/g(x0));
		cout<<"the root is: "<<x1<<endl;

		//error finding

		double error = (abs((x1-x0)/x1))*100;
		cout<<"Error: "<<error<<"%"<<endl;

		x0 = x1;
		return newton_rapsan(x0, iteration);
	}
}

int main(){
	//freopen("input.txt", "r", stdin);
	int n;
	cout<<"Enter 1 for bisection method"<<endl<<"Or Enter 2 for false_position method"<<endl<<"Or Enter 3 for secant method"<<endl<<"Or Enter 4 for newton_rapsan method"<<endl;

		cout<<"Enter:";
		cin>>n;


		double x1, x2, iteration;

		cout<<"Enter two initial guesses:";
		//only x1 input will work for Newton-Rapsan method
		cin>>x1>>x2;

		cout<<"How many times of iteration you want: "<<endl;
		cin>>iteration;

		if(n==1)
        {
            bisection(x1, x2, iteration, 0);
        }
        else if(n==2)
        {
          false_position(x1, x2, iteration, 0);
        }
        else if(n==3)
        {
            secant(x1, x2, iteration);
        }
        else if(n==4)
		newton_rapsan(x1, iteration);


   return 0;
}
