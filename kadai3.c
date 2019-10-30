#include <stdio.h>

int main(){
	int isdead[16]={0};
	int dienum=0;
	int index=0;

	while(dienum<15){
		for(int i=0;i<16;i++){
			if(isdead[i]==0) index++;
			if(index==10){
				index=0;
				isdead[i]=1;
				dienum++;
				printf("%d is dead\n",i+1);
			}
		}
	}
	for(int i=0;i<16;i++){
		if(isdead[i]==0){
			printf("winner is %d\n",i+1);
			break;
		}

	}
	return 0;
}