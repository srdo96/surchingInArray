#include <iostream>
#include <cmath>
using namespace std;

class Point{
private:
    double x;
    double y;
public:
    //Default constructor
    Point(){
        x = 0.0;
        y = 0.0;
    }
    Point(double xp, double yp){
        x = xp;
        y = yp;
    }
    double getX(){
        return x;
    }
    double getY(){
        return y;
    }
    void setX(double newX){
        x = newX;
    }
    void setY(double newY){
        y = newY;
    }
    void translate(double tx, double ty){
        x = tx + x;
        y = ty + y;
    }
    void print(){
        cout << x << ", " << y <<  endl;
    }
};
int linearSearch(Point A[], Point KEY, int numberOfPoints){
    int index = -1;
    for(int i = 0; i < numberOfPoints; i++){
        if(A[i].getX() == KEY.getX() && A[i].getY() == KEY.getY()){
            index = i;
            break;
        }
    }
    return index;
}

int linearSearch(int A[], int KEY, int numberOfElements){
    int foundInIndex = -1;
    for(int i = 0; i < numberOfElements; i++){
        if(A[i] == KEY){
            foundInIndex = i;
            break;
        }
    }
    return foundInIndex;
}

int countFrequency(int A[], int KEY, int numberOfElements){
    int frequency = 0;
    for(int i = 0; i < numberOfElements; i++){
        if(A[i] == KEY)
            frequency++;
    }
    return frequency;
}
int factorial(int n){
    int total = 1;
    if(n == 0 || n == 1)
        return total;
    else{
        for(int i = 0; i < n; i++){
           total = total * (n - i);
        }
    return total;
    }
}

double myCos(double x){
    int m = 10;
     double sum = 0;
    for(int i = 0; i < m; i++){
        int n = 2 * i;
        double numerator = pow(x, n);
        double denominator = factorial(n);
        double val = numerator/denominator;
        if(i % 2 == 0)
            sum = sum + val;
        else
            sum = sum - val;
    }
    return sum;
}
int main()
{
    int Ab[] = {6, 5, 1, 6, 10, 9, 6};
    int key = 2;
    int index = linearSearch(Ab, 66, 7);
    int frequency = countFrequency(Ab, 6, 7);
    cout << index << endl;
    cout << "Frequency: " << frequency << endl;

    Point p[3];
    p[0].setX(1.2);
    p[0].setY(2.3);
    p[1].setX(3.1);
    p[1].setY(5.0);
    p[2].setX(5.0);
    p[2].setY(2.3);
    Point K(5.0, 2.0);
    int pointIndex = linearSearch(p, K, 3);
    if(pointIndex != -1)
        cout << "Point in index: " << pointIndex << endl;
    else
        cout << "Point NOT FOUND in any index....." << endl;

    int facto = factorial(5);
    cout << "factorial 5! = " << facto << endl;
    double x = M_PI;
    cout << cos(x) << endl;
    cout << "i am hear "<<myCos(x) << endl;
    //return 0;
}