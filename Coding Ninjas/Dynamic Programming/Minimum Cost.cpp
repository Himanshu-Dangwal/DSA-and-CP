//Minimum Cost::


int min_cost(int** input, int si, int sj, int ei, int ej) {
	if (si == ei && sj == ej) {
		return input[ei][ej];
	}
	if (si > ei || sj > ej) {
		return INT_MAX;
	}
	int option1 = min_cost(input, si + 1, sj, ei, ej);
	int option2 = min_cost(input, si + 1, sj + 1, ei, ej);
	int option3 = min_cost(input, si, sj + 1, ei, ej);
	return input[si][sj] + min(option1, min(option2, option3));
}

int main() {
	int ** input = new int*[3];
	input[0] = new int[3];
	input[1] = new int[3];
	input[2] = new int[3];
	input[0][0] = 4;
	input[0][1] = 3;
	input[0][2] = 2;
	input[1][0] = 1;
	input[1][1] = 8;
	input[1][2] = 3;
	input[2][0] = 1;
	input[2][1] = 1;
	input[2][2] = 8;

	cout << min_cost(input, 0,0,2,2) << endl;
	cout << min_cost2(input,3,3) << endl;
	delete [] input[0];
	delete [] input[1];
	delete [] input[2];
	delete [] input;
}

int min_cost(int **a,int si,int sj,int ei,int ej){
	if(si==ei && sj==ej){
		return a[si][sj];
	}
	if(s[i]>e[i] || s[j]>e[j]){
		return INT_MAX;
	}
	int option1 = min_cost(a,si,sj+1,ei,ej);
	int option2 = min_cost(a,si+1,sj+1,ei,ej);
	int option3 = min_cost(a,si+1,sj,e1,ej);
	return a[si][sj]+min(option1,min(option2,option3));	
}

int min_cost2(int **arr,int a,int b){ //a and b represents a cross b matrix 
	int **output = int *[a];
	for(int i=0;i<b;i++){
		output[i] = new int[b];
	}
	output[a-1][b-1] = arr[a-1][b-1];
	for(int i=a-2;i>=0;i--){
		output[i][b-1] = output[i+1][b-1] + arr[i][b-1];
	}
	for(int i=n-2;i>=0;i--){
		output[a-1][i] = output[a-1][i] + arr[a-1][i+1];
	}
	for(i=a-2;i>=0;i--){
		for(j=n-2;j>=0;j--){
			output[i][j] = min(output[i][j+1],min(output[i+1][j+1],output[i+1][j])) + arr[i][j];
		}
	}
	return output[0][0];
}














