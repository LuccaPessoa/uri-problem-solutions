#include <stdio.h>

int check(int azinho){
	
	if(azinho==0)
        printf("vai ter copa!\n");
    else if(azinho>0)
        printf("vai ter duas!\n");

}

int main(){
	
    int a;
    
    while(scanf("%d" ,&a)!=EOF){
    	
    	check(a);

    }
    
    return 0;
  
}
