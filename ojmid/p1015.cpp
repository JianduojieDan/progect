#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    double x1,y1,x2,y2,Distance;

    cin>>x1>>y1;
    cin>>x2>>y2;

    Distance=sqrt(pow((x2-x1),2)+pow((y2-y1),2));

    cout<<fixed;
    cout<<setprecision(4)<<Distance<<endl;

    return 0;
}