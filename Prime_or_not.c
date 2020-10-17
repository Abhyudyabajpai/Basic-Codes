#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    scanf("%d",&n);
    int isprime=1;
    
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            isprime=0;
        }
        
    }
    if(isprime==1){
        printf("%d is prime \n",n);
    }
    else{
        printf("%d is not prime",n);
    }
    
	return 0;
} 
