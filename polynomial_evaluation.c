#include<stdio.h>
#include<math.h>

int main(){
    double x,sum;
    int y;
    scanf("%lf%d",&x,&y);
    double A[y];
    int B[y];
    for(int i=0 ;i<y;i++){
        scanf("%lf%d",&A[i],&B[i]);
        sum+=A[i]*pow(x,B[i]);
    }
    printf("%lf",sum);
}
