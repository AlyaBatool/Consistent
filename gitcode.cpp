//Program for largest three number in an array using for loop
#include<iostream>
using namespace std;
int main(){
	int a[20];
	int n,i;
	int first,second,third;
	cout<<"Enter length of an array:\n";
	cin>>n;
	cout<<"Enter Elements in an array\n";
	for(i=0; i<n; i++){
		cin>>a[i];
	}
	for(i=0; i<n; i++){
		if(a[i]>first){
			third=second;
			second=first;
			first=a[i];
		}else if(a[i]>second && a[i]!=first){
			third=second;
			second=a[i];
		}else if(a[i]>third && a[i]!=second)
		third=a[i];
	}cout<<"The three largest numbers are : " <<first<< "  "<<second<<"  "<<third;
	
	return 0;
}
