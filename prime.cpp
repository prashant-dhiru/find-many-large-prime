#include<stdio.h>
#include<conio.h>
#include<vector>
#include <math.h>
using namespace std;

typedef long LL;
vector<LL> primeList;

int sqrtf(LL);
int main(){
	
	register LL lb=10000000,ub=20000000,i,j;
	register int sqrt = sqrtf(ub),size,count=0;
	
	for(i=2;i<=sqrt;i++){		
		for(j=2;j<i;j++)
			if(i%j==0)
				break;
		
		if(j == i ){
			primeList.push_back(i);			
		}							
	}
	
	size = primeList.size();
	for(i=lb;i<=ub;i++){
		for(j=0;j<size;j++)
			if(i%primeList[j] == 0 )
				break;
		
		if(j == size ){
		//if you want to print all prime but it slows down the calculation 
		//printf("%ld\n",i);
		count++;
		}							
	}
	
	printf("%d",primeList.size());
return 0;
}

int sqrtf(LL n){
	int i =1;
	while(i*i<=n){
		i++;
	}
	return i;
}
