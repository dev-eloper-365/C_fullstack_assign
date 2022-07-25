#include<stdio.h>

int main(){
    int num=1675766;
    
    printf("Enter a num : ");
    scanf("%d",&num);

    printf("%d",findlargest(num));
    return 0;
}

int findlargest(int num){
     
    while(num!=0)
    {
        int rem=0,prev_num=0,big_num,largest=0;

        rem = num % 10;
        if(prev_num>rem)
        {
            big_num = prev_num;
        }
        else{
            big_num = rem; 
        }
        
        if(big_num>=largest){
            largest = big_num; 
            
        }
        prev_num=rem;
        num = num /10;
    }
    return largest;
}