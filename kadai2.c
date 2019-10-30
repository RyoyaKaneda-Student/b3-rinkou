#include <stdio.h>

int issosuu(int x){
    int i=0;
    if(x%2==0){
        if(x==2) return 1;
        else return 0;
    }
    for(i=3;i<x/2;i=i+2)
        if(x%i==0) return 0;
    return 1;
}

int main(){
    const int max=100;
    int i=0;
	for(i=2;i<=max;i++){
        if(issosuu(i)) printf("%d is sosuu\n",i);
    }
    return 0;
}