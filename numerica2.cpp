#include <bits/stdc++.h>

using namespace std;

void gauss_elimination(int n){
	float matrix[n][n+1], x[n], ratio;

	for(int i=0; i<n; i++){
		for(int j=0; j<n+1; j++){
			cin>>matrix[i][j];
		}
	}
	//applying gauss elimination
	for(int i=0; i<n-1; i++){
		if(matrix[i][i] == 0.0){
			cout<<"Mathematical Error!"<<endl;
			return;
		}
		for(int j=i+1; j<n; j++){
			ratio = matrix[j][i]/matrix[i][i];
			for(int k=0; k<n+1; k++){
				matrix[j][k] -= matrix[i][k]*ratio;
			}
		}
	}

	x[n-1] = matrix[n-1][n]/matrix[n-1][n-1];

	for(int i=n-2; i>=0; i--){
		x[i] = matrix[i][n];
		for(int j=i+1; j<n; j++){
			x[i] = x[i] - matrix[i][j]*x[j];
		}
		x[i] = x[i]/matrix[i][i];
	}

	//printing upper triangular matrix
	cout<<"\nDisplaying upper tirangular marix: "<<endl;
	for(int i=0; i<n; i++){
		for(int j=0; j<n+1; j++){
			cout<<matrix[i][j]<<"\t";
		}
		cout<<endl;
	}

	//outputing solution
	cout<<"Displaying the solution: "<<endl;
	for(int i=0; i<n; i++){
		cout<<"x["<<i<<"] = "<<x[i]<<endl;
	}
}

int main (){
	//freopen("input.txt", "r", stdin);

	cout<<"Enter the size of the row of the matrix: ";
      int row;
	cin>>row;
	//cout<<setprecision(3)<<fixed;
	gauss_elimination(row);


	return 0;
}
