//Beca para Estudiantes
//Un estudiante recibe beca si su promedio es mayor o igual a 85 y tiene menos de 3 faltas.

#include<iostream>
using namespace std;

int main(){
int fouls;
double grade1,grade2,grade3,grade4,grade5,finalGrade,finalAverage;

cout<<"Could you write your grade of the first exam"<<endl;
cin>>grade1;

cout<<"Could you write your grade of the second exam"<<endl;
cin>>grade2;

cout<<"Could you write your grade of the third exam"<<endl;
cin>>grade3;

cout<<"Could you write your grade of the fourth exam"<<endl;
cin>>grade4;

cout<<"Could you write your grade of the fifth exam"<<endl;
cin>>grade5;

cout<<"Now could you write how many fouls commited in the year"<<endl;
cin>>fouls;

finalGrade=grade1+grade2+grade3+grade4+grade5;

finalAverage=(finalGrade/5)*10;

if (finalAverage>=85.0 && fouls<3)
{
    cout<<"Congratulations, you have the scolarship!!"<<endl;
}
else
{
    cout<<"I'm sorry, you don't apply for the scolarship"<<endl;
}

    return 0;
}
