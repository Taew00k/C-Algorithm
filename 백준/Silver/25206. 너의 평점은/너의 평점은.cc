#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string a;
    float point;
    float pointsum=0;
    float gradesum=0;
    int b;
    char grade[3];
    float realgrade;
    for(int i=0; i<20; i++)
    {
        cin >> a >> point >> grade;
        pointsum += point;
        if (grade[0]==65){
            if(grade[1]==43)
               realgrade = 4.5;
            else if(grade[1]==48)
               realgrade = 4.0;}
        else if (grade[0]==66){
            if(grade[1]==43)
               realgrade = 3.5;
            else if(grade[1]==48)
               realgrade = 3.0;}
        else if (grade[0]==67){
            if(grade[1]==43)
               realgrade = 2.5;
            else if(grade[1]==48)
               realgrade = 2.0;}
        else if (grade[0]==68){
            if(grade[1]==43)
               realgrade = 1.5;
            else if(grade[1]==48)
               realgrade = 1.0;}
        else if (grade[0]==80)
            {
                realgrade= 0.0;
                pointsum -= point;
            }
        else if (grade[0]==70){
            realgrade=0.0;}
        float x = realgrade * point;
        gradesum += x;
    }
    float y= gradesum / pointsum;
    cout.precision(7);
    if (y==0)
    {
        cout << "0.000000";
    }
    else
        cout << y;
}