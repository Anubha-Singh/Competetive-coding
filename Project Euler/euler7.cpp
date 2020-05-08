#include<iostream>
using namespace std;

int main(){
	const int N=10001;
	int array[N];
	int aux;
	int j;

	array[0]=2;
	array[1]=3;

	for(int i=2;i<N;i++){
		aux=array[i-1]+2;
		j=0;
		while(j<i){
			while((j<i)and(aux%array[j]!=0)){//while the number is not a multiple of a previous prime
				j++;
			}
			if(j==i)//if it is prime
				array[i]=aux;//we store it in the array
			else{//try again with the following number
				aux+=1;
				j=0;
			}
		}
	}

	cout<<array[N-1]<<endl;

	return 0;
}
