#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int x;
    double y,answer;
    cin>>x>>y;
    answer=x/y;
    cout<<fixed;
    cout<<setprecision(3)<<answer<<" km/l"<<endl;

    return 0;
}