#include <stdio.h>

int main() {
	char A[2];
	while(scanf("%c",&A[0])){
		if(A[0]=='\n'){
			printf("%c",A[1]);  //A[0]是enter 所以print A[1]
			break;	
		}else{
			if(A[0]>='0'&&A[0]<='9')
				A[1]=A[0];  //每次皆把最後一位存在A[1]
			else{
				printf("輸入錯誤");  //如果不為數字 跳出
				break;
			}	
		}		
	}
}
