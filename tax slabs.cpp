#include <iostream>
using namespace std;

int main() {
    int anshii;
    cin>>anshii;
    while(anshii--){
        int a;
        cin>>a;
        
        int c,d,e,f,g;
        c=250000*5/100;
        d=250000*10/100;
        e=250000*15/100;
        f=250000*20/100;
        g=250000*25/100;
        if(a <= 250000){
            cout<<a<<endl;
        }
        else if( a >= 250001 && a <=500000 ){
            cout<<(a-((a-250000)*5/100))<<endl;
        }
        else if( a >= 500001 && a <= 750000){
            cout<<(a-((a-500000)*10/100)-c)<<endl;
        }
        else if( a >= 750001 && a <= 1000000){
            cout<<(a-((a-750000)*15/100)-c-d)<<endl;
        }
        else if( a >= 1000001 && a <= 1250000){
            cout<<(a-((a-1000000)*20/100)-c-d-e)<<endl;
        }
        else if( a >= 1250001 && a <= 1500000){
            cout<<(a-((a-1250000)*25/100)-c-d-e-f)<<endl;
        }
        else if( a >= 1500001 ){
            cout<<(a-((a-1500000)*30/100)-c-d-e-f-g)<<endl;
        }
    }
}
