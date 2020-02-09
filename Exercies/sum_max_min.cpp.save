#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int n;
    float maxx,minn,avg,sum=0,x,i;
    cin>>n;
    cin>>x;
    maxx= x;
    minn= x;
    sum+=x;
    for(i=1;i<n;i++){
        cin>>x;
        if(x>maxx){
            maxx = x;
        }
        if(x<minn){
            minn = x;
        }
        sum += x;
    }
    avg=(float)sum/n;
    cout.precision(2);
    cout<<fixed<<avg<<endl;
    cout<<fixed<<maxx<<endl;
    cout<<fixed<<minn;
}
