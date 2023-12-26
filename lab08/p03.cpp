#include<iostream>
#include<cmath>

using namespace std;

double distance(double x1,double y1,double x2,double y2){
    return sqrt(pow((x2 - x1),2)+ pow((y2 - y1),2));
}


int main(){
    const int NumOfPoint = 8;
    double points[NumOfPoint][2];

    cout << "Enter " << NumOfPoint << "points: ";
    for(int i = 0; i < NumOfPoint ;  i++){
        cin >> points[i][0] >> points[i][1];
    }

    int p1 = 0,p2 = 1;
    double shortDistaince = distance(points[p1][0], points[p1][1],points[p2][0], points[p2][1]);
    for (int i = 0; i < NumOfPoint ; i++){
        for (int j = 0; j < NumOfPoint; j++){
            double dis = distance(points[i][0], points[i][1],points[j][0], points[j][1]);
                if(shortDistaince > dis){
                    p1 = i;
                    p2 = j;
                    shortDistaince = dis;
                }
            }
        }
    cout << "The closest two points are" << "(" << points[p1][0] << ", " << points[p1][1] << ") and (";
    cout << points[p2][0] << ", " << points[p2][1] << ")" << endl;
    return 0;
}
