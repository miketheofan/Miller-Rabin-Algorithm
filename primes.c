#include <stdio.h>
#include <math.h>
#define MINNUM 1990000000
#define MAXNUM 2000000000
int main(){
	long int curNum,check=0,primes=0,posNum;
	for(curNum=MINNUM;curNum<=MAXNUM;curNum++){
		for(posNum=2;posNum<=sqrt(curNum);posNum++){
			if(curNum%posNum==0){
				check=1;
				break;
			}	
		}
		if(check==0)
			primes++;
		check=0;
	}
	
	printf("The total amount of prime numbers between %d and %d is %ld.\n",MINNUM,MAXNUM,primes);
}
