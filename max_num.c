#include<stdio.h>

int main(){
    int num=5149,rem[6],i,result=0,last;
    
    for(i=0;num!=0;i++){
        rem[i] = num%10;
        num = num/10;
    }
    for(i=3;i>=0;i--){
        if(rem[i]<rem[i--])
        {
            result = rem[i--];
        }
    }
    printf("%d",result);
}