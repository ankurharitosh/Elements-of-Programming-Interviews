#include<bits/stdc++.h>
using namespace std;

int main(){
	
	cout<<"Enter number";	
	unsigned int x, mask=0;
	cin>>x;
	
	if((x&1)==0){
		mask|= x & ~(x-1);//Lowest bit set 1	
		mask|=(mask>>1); // Swap with lowest bit different
		x^=mask;
	}	

	else if((x&1)==1){
		mask= ~x & (x+1);//Lowest bit set 0		
		mask|=(mask>>1);		
		x^=mask;	
	}

	cout<<"Answer: "<<x<<endl;

	return 0;
}
