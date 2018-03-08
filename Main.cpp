///      بسم الله الرحمن الرحيم الذي خلقني     By The Name of Allah, Who Created Me.
///      بسميلة الرحمن الرحمن الرحيم       BISMILLAH AR-RAHMAN AR-RAHEEM.

/**
    * Arik Md. Isthiaque
    * Mamun Ahmed
    * Rafid Mahboob
**/

#include<bits/stdc++.h>
using namespace std;

float grade_count(float num)
{
    int number=num;

    if(number < 40)
        { cout<<"F" <<endl; return 0.00; }

    else if(number >= 40 && number < 45)
    { cout<<"D" <<endl; return 2.00; }

    else if(number >= 45 && number < 50)
    { cout<<"C" <<endl; return 2.25; }

    else if(number >= 50 && number < 55)
    { cout<<"C+"<<endl; return 2.50; }

    else if(number >= 55 && number < 60)
    { cout<<"B-"<<endl; return 2.75; }

    else if(number >= 60 && number < 65)
    { cout<<"B" <<endl; return 3.00; }

    else if(number >= 65 && number < 70)
    { cout<<"B+"<<endl; return 3.25; }

    else if(number >= 70 && number < 75)
    { cout<<"A-"<<endl; return 3.50; }

    else if(number >= 75 && number < 80)
    { cout<<"A" <<endl; return 3.75; }

    else
    { cout<<"A+"<<endl; return 4.00; }
}

void l1t1(int no_of_stdudent)
{

}

void l1t2(int no_of_student)
{

}

void l2t1(int no_of_stdudent)
{

}

void l2t2(int no_of_student)
{
    for(int i=1;i<=no_of_student;i++)
    {
    cout<<"================================================================="<<endl;
    cout<<"NO : "<<i<<endl;
    float CSE_210,CSE_211,CSE_212,CSE_213,CSE_215,CSE_216,CSE_217,CSE_220,MATH_247;

    cout<<"CSE-210 [ Assembly Language Programming Sessional ] : ";
    cin>>CSE_210;
    cout<<"CSE-210 Grade = ";
    CSE_210=grade_count(CSE_210);
    cout<<endl;

    cout<<"CSE-211 [ Digital Electronics and Pulse Technique ] : ";
    cin>>CSE_211;
    cout<<"CSE-211 Grade = ";
    CSE_211=grade_count(CSE_211);
    cout<<endl;

    cout<<"CSE-212 [ Digital Electronics and Pulse Technique Sessional ] : ";
    cin>>CSE_212;
    cout<<"CSE-212 Grade = ";
    CSE_212=grade_count(CSE_212);
    cout<<endl;

    cout<<"CSE-213 [ Computer Architecture ] : ";
    cin>>CSE_213;
    cout<<"CSE-213 Grade = ";
    CSE_213=grade_count(CSE_213);
    cout<<endl;

    cout<<"CSE-215 [ Algorithms ] : ";
    cin>>CSE_215;
    cout<<"CSE-215 Grade = ";
    CSE_215=grade_count(CSE_215);
    cout<<endl;

    cout<<"CSE-216 [ Algorithms Sessional ] : ";
    cin>>CSE_216;
    cout<<"CSE-216 Grade = ";
    CSE_216=grade_count(CSE_216);
    cout<<endl;

    cout<<"CSE-217 [ Theory of Computation ] : ";
    cin>>CSE_217;
    cout<<"CSE-217 Grade = ";
    CSE_217=grade_count(CSE_217);
    cout<<endl;

    cout<<"CSE-220 [ Object Oriented Programming language Sessional-II (Java) ] : ";
    cin>>CSE_220;
    cout<<"CSE-220 Grade = ";
    CSE_220=grade_count(CSE_220);
    cout<<endl;

    cout<<"MATH-247 [ Mathematics-IV (Complex Variable and Laplace Transform) ] : ";
    cin>>MATH_247;
    cout<<"MATH Grade = ";
    MATH_247=grade_count(MATH_247);
    cout<<endl;

    float cgpa=((CSE_210*1.5)+(CSE_211*3)+(CSE_212*.75)+(CSE_213*3)+(CSE_215*3)+(CSE_216*1.5)+(CSE_217*3)+(CSE_220*.75)+(MATH_247*3))/19.50;
    cout<<"CGPA = ";
    printf("%.2f\n",cgpa);
    cout<<"================================================================="<<endl;
    }
}

void l3t1(int no_of_stdudent)
{

}

void l3t2(int no_of_student)
{

}

void l4t1(int no_of_stdudent)
{

}

void l4t2(int no_of_student)
{

}

int main()
{
    ///freopen("input.txt", "r", stdin);
    cout<<"        Welcome    "<<endl;
    cout<<"        BAIUST    "<<endl;
    cout<<"Automated Result Analyzer"<<endl;

    while(1)
    {
        cout<<"-----------------------"<<endl;
        cout<<"1. Level 1 Term 1 "<<endl;
        cout<<"2. Level 1 Term 2 "<<endl;
        cout<<"3. Level 2 Term 1 "<<endl;
        cout<<"4. Level 2 Term 2 "<<endl;
        cout<<"5. Level 3 Term 1 "<<endl;
        cout<<"6. Level 3 Term 2 "<<endl;
        cout<<"7. Level 4 Term 1 "<<endl;
        cout<<"8. Level 4 Term 2 "<<endl;
        cout<<"-----------------------"<<endl<<endl;

        int option;
        cout<<"Select Level Term : ";
        cin>>option;

        int no_of_student;
        cout<<"Number of total student : ";
        cin>>no_of_student;
        cout<<endl;


        switch(option)
        {
        case 1:
            l1t1(no_of_student);
            break;


        case 2:
            l1t2(no_of_student);
            break;


        case 3:
            l2t1(no_of_student);
            break;


        case 4:
            l2t2(no_of_student);
            break;


        case 5:
            l3t1(no_of_student);
            break;


        case 6:
            l3t2(no_of_student);
            break;


        case 7:
            l4t1(no_of_student);
            break;


        case 8:
            l4t2(no_of_student);
            break;

        default:
            cout<<"Wrong input"<<endl;
            cout<<"Please try again"<<endl;
            break;
        }
    }

    return 0;
}
