#include <bits/stdc++.h>
using namespace std;

int comb(int, int);
//function to find the combination

int fact(int);
//function to find the factorial

int main() {
    int X,N;
    cin>>X>>N;
    int tics=0;
    //number of tickets that can be issued

    while(N--){
        string s;
        cin>>s;
        //input string
        
        int i=0;
        int j=0;
        int n=1;
        //n represents the compartment number in each car
        
        while(n<10){
        //we have total of 9 compartments
            
            string str;
            //stores the arrangement of each compartment
            //for n=1 if str=100101 it means that only 1, 4 and 53 are booked
            
            for(;i<4*n;i++){    //for(i=0;i<4*n;i++)
                str+=s[i];
            }
            //this stores the arrangement of the part of the compartment that has 4 seats
            
            for(;j<2*n;j++){
                str+=s[53-j];
            }
            //stores the arrangement of the part of the compartment that has only two seats
            
            int cnt=0;
            //to count the number of available spaces in each compartment
            
            for(int k=0;k<6;k++){
                if(str[k]=='0')
                    cnt++;
            }
            
            if(cnt>=X)
            //if the available spaces are more than or equal to the required number
                tics+=comb(cnt,X);
                //find the possible number of combinations of selling the tickets and add it to the final tics counter
            
            n++;
            //when the operation for one compartment is completed increment to the next compartment
        }
    }
    cout<<tics<<endl;
    //final answer
    
	return 0;
}

int comb(int a, int b){
    int c;
    c=fact(a)/(fact(b)*fact(a-b));
    return c;
}
int fact(int a){
    int f=1;
    while(a>=1){
        f*=a;
        a--;
    }
    return f;
}
