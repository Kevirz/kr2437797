/* 
 * File:   main.cpp
 * Author: Kevin Rivas
 *
 * Created on July 23, 2014, 10:49 AM
 */

#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include <cmath>

using namespace std;
//User Libraries

//Function Prototypes
//Asks User to press enter to continue
void con();
//Function to calculate mark-up
//Gaddis required to name variable calculateRetail
float calculateRetail(float,float);
//Asks for quarterly sales, 
float getSales(float &sales1,float &sales2,float &sales3,float &sales4);
//Compares sales with each other in order to get produce max
float maxSales(float &max,float &sales1,float &sales2,float &sales3,float &sales4);
//Asks user for input of accident reports
float getReports(float &rep1,float &rep2,float &rep3,float &rep4);
//Compares accidents to produce the minimum
float minReports(float &min,float &rep1,float &rep2,float &rep3,float &rep4);
//Function for the falling distance: Book Required to name it this.
float fallingDistance(float &time);
//Function to calculate the Kinecic energy of an object:Book required to name it this
float kineticEnergy (float &mss,float &vel);
//Function: Celsius converter 
float cvs (int &fah);
//Function: to calculate what the present value is
float presentValue(float &futv, float &annl, float &n, float &prev);
//Asks users to input scores
//Gaddis Requires us to name it
void getScore(int &score);
//Function: to calculate the average of the scores
//Gaddis requires us to name it this
void calcAverage(int score1, int score2, int score3, int score4, int score5, int lowest);
//Find the score to drop
//Gaddis requires us to name it this
int findLowest(int score1, int score2, int score3, int score4, int score5);
//Input number of employees
int empl();
//Input number of days missed
int Days(int);
//calculate the average number of days missed
float avgDays(int,int);
//Global Constants

//Execution starts here!
int main(int argc, char** argv) {
    
    int choice;
 
   do{
       
   
    do{               
            cout<<" [1] Problem 1 - Gaddis Chapter 6                "<<endl;
            cout<<" [2] Problem 3 - Gaddis Chapter 6                "<<endl;
            cout<<" [3] Problem 4 - Gaddis Chapter 6                "<<endl;
            cout<<" [4] Problem 5 - Gaddis Chapter 6                "<<endl;
            cout<<" [5] Problem 6 - Gaddis Chapter 6                "<<endl;
            cout<<" [6] Problem 7 - Gaddis Chapter 6                "<<endl;
            cout<<" [7] Problem 8 - Gaddis Chapter 6                "<<endl;
            cout<<" [8] Problem 9 - Gaddis Chapter 6                "<<endl;    
            cout<<" [9] Problem 10 - Gaddis Chapter 6               "<<endl;    
            cout<<" [10] Problem 12 - Gaddis Chapter 6              "<<endl;    
               
            cout<<" [0] Exit Program                               "<<endl;
               
            cout<<" Enter choice:  ";
            cin>>choice;
            cin.ignore();
        }
    
    while(choice<0||choice >10);
        
        switch(choice){
            case 0:
            {
                break;
            }
            case 1:
            {
                cout<<"Problem 1"<<endl;
                con();
                
                    
                    //Declare variables
                    float whlcst;
                    float mrkper;
                    cout<<"==========================================="<<endl;
                    cout<<"Welcome to the Calculation Retail Problem: "<<endl;
                    cout<<"==========================================="<<endl;
                    cout<<"Please Enter the wholesale cost: "<<endl;
                    cin>>whlcst;
                    cin.ignore();
                    cout<<"Now enter the markup percentage: ";
                    cin>>mrkper;
                    cin.ignore();
                    
                    while(whlcst<0||mrkper<0)
                    {
                      cout<<"Invalid Answer: Please enter positive numbers."<<endl;
                      cout<<"Please Enter the wholesale cost: "<<endl;
                      cin>>whlcst;
                      cin.ignore();
                      cout<<"Now enter the markup percentage: ";
                      cin>>mrkper;
                      cin.ignore();
                    }
                    
                    mrkper/=100;
                    
                    cout<<"The Retail Price is: "<<endl;
                    cout<<"$"<<fixed<<setprecision(2);
                    cout<<calculateRetail(whlcst, mrkper)<<endl;
                    con();
                    break;
            }
                    
           
            case 2:
            {
                cout<<"Problem 3"<<endl;
                con();
                

                float sales1,sales2,sales3,sales4;
                float max;
                
                cout<<fixed<<showpoint<<setprecision(2)<<endl;
                cout<<"======================================="<<endl;
                cout<<"Welcome to the Winning Division Program"<<endl;
                cout<<"======================================="<<endl;
                cout<<"The Divisions which are competing are:"<<endl;
                cout<<"Northeast,Southeast,Northwest,Southwest."<<endl;
                
                getSales(sales1, sales2, sales3, sales4);
                
                cout<<"Northeast"<<" Sales: $"<<sales1<<endl;
                cout<<"Southeast"<<" Sales: $"<<sales2<<endl;
                cout<<"Northwest"<<" Sales: $"<<sales3<<endl;
                cout<<"Southwest"<<" Sales: $"<<sales4<<endl;
                
                
                maxSales(max, sales1, sales2, sales3, sales4);
                
                cout<<max<<endl;
                
                if (max==sales1)
                    cout<<"Northeast sold the most! They sold $"<<max<<endl;
                if (max==sales2)
                    cout<<"Southeast sold the most! They sold $"<<max<<endl;
                if (max==sales3)
                    cout<<"Northwest sold the most! They sold $"<<max<<endl;
                if (max==sales4)
                    cout<<"Southwest sold the most! They sold $"<<max<<endl;
                con();
                break;
            }
                
            case 3:
            {
                cout<<"Problem 4"<<endl;
                con();
                
                float rep1,rep2,rep3,rep4;
                float min;
                
                
                cout<<"=========================================="<<endl;
                cout<<"Welcome to the Safest Driving Area Program"<<endl;
                cout<<"=========================================="<<endl;
                cout<<"The regions which are competing are:"<<endl;
                
                
                getReports(rep1, rep2, rep3, rep4);
                
                cout<<"North accidents: "<<rep1<<endl;
                cout<<"South accidents: "<<rep2<<endl;
                cout<<"East accidents: "<<rep3<<endl;
                cout<<"West accidents: "<<rep4<<endl;
                
                
                minReports(min, rep1, rep2, rep3, rep4);
                
                cout<<min<<endl;
                
                if (min==rep1)
                    cout<<"North had the least amount of accidents! Only "<<min<<endl;
                if (min==rep2)
                    cout<<"South had the least amount of accidents! Only "<<min<<endl;
                if (min==rep3)
                    cout<<"East had the least amount of accidents! Only "<<min<<endl;
                if (min==rep4)
                    cout<<"West had the least amount of accidents! Only "<<min<<endl;
                con();
                break;
            }
            
            case 4:
            {
                
                
                cout<<"Problem 5"<<endl;
                con();
                
                float dis;
                float time;
                float g=9.8; 
                
                cout<<"=========================================="<<endl;
                cout<<"Welcome to the Falling Distance Program"<<endl;
                cout<<"=========================================="<<endl;
                cout<<fixed<<showpoint<<setprecision(2)<<endl;
                 
                
    
                for(time=1;time<=10;time++)
                {
                    dis=fallingDistance(time);
                    cout<<"Distance:  "<<time<<" "<<"Meters "<<dis<<endl; 
              
                }
                break;
            }
            case 5:
            {
                
                cout<<"Problem 6"<<endl;
                con();
                float mss;
                float vel;
                
                
                cout<<"=========================================="<<endl;
                cout<<"Welcome to the Kinetic Energy Program"<<endl;
                cout<<"=========================================="<<endl;
                cout<<fixed<<showpoint<<setprecision(2)<<endl;                

                
                cout<<"Enter the Mass of an object (kg)"<<endl;
                cin>>mss;
                cout<<"Enter the velocity of an object (mps)"<<endl;
                cin>>vel;
                kineticEnergy(mss,vel);
                con();
                
                break;
            } 
            case 6:{
                cout<<"Problem 7"<<endl;
                con();
                
                float clc;
                
                cout<<"=========================================="<<endl;
                cout<<"Welcome to the Celsius Temperature Program"<<endl;
                cout<<"=========================================="<<endl;
                cout<<fixed<<showpoint<<setprecision(2)<<endl;
                con();
                
                for(int fah=0;fah<=20;fah++)
                {
                    clc= cvs(fah);
                    
                    cout<<"Fahrenheit: "<<fah;
                    cout<<"  Celsius: "<<clc<<endl;
                }
                
                con();
                break;
            }
                 
                case 7:
                {
                    cout<<"Problem 8";
                    con();
                    
                    int coinToss();
                    int hd;
                    int tl = 0;
                    int x;
                    int num;
                    
                cout<<"=========================================="<<endl;
                cout<<"Welcome to the Coin Flip Program"<<endl;
                cout<<"=========================================="<<endl;
   
                cout<<"How many times do you want to flip the coin?"<<endl;
                cin>>x;
   
 
                for(int i=0; i<=x; i++)
                {
                num = coinToss();
                if(num == 1)
                {
                 cout<<"Heads"<<endl;  
                        hd ++;    
                }
                
                else
                {
                        cout<<"tails"<<endl; 
                        tl ++;
                }
                }

                cout<<"Total Heads: "<<hd<<endl;
                cout<<"Total Tails: "<<tl<<endl;
                
                con();
                break;
                }
            
            case 8:
            {
                cout<<"Program 9"<<endl;
                con();
                float futv,annl,noy, prev;
    
                cout<<"=========================================="<<endl;
                cout<<"Welcome to the Present Value Program"<<endl;
                cout<<"=========================================="<<endl;
                cout<<fixed<<showpoint<<setprecision(2)<<endl;
                con();
                
                cout<<"Enter the future value: ";
                cin>>futv;
                cout<<"Enter the annual interest rate: ";
                cin>>annl;
                cout<<"Enter the number of years: ";
                cin>>noy;
                presentValue(futv,annl,noy,prev);
                cout<<prev<<endl;
                con();
                break;
            }
        
        
        case 9:
        {
            cout<<" Program 10"<<endl;
            con();
            int score1, score2, score3, score4 , score5 , low;
            
        //Program 10 Intro
            cout<<"=========================================="<<endl;
            cout<<"Welcome to the Lowest Score Drop Program"<<endl;
            cout<<"=========================================="<<endl;
            cout<<fixed<<showpoint<<setprecision(2)<<endl;
            con();
            
            //Calling functions to input score
            getScore(score1);
            getScore(score2);
            getScore(score3);
            getScore(score4);
            getScore(score5);
            
            //Function to find the score to drop
            low=findLowest(score1, score2, score3, score4, score5);
            
            //calls on function to average scores
            calcAverage(score1, score2, score3, score4, score5, low);
            con();
            break;
        }
        
            case 10:
            {
                cout<<"Problem 12"<<endl;
                con();
                
                //Declare variables
                int emp, ttl; 
                float avg;
                
                
                //Program 12 Intro
                cout<<"=========================================="<<endl;
                cout<<"Welcome to the Days Out Program"<<endl;
                cout<<"=========================================="<<endl;
                cout<<fixed<<showpoint<<setprecision(2)<<endl;
                
                 emp=empl();
                 ttl=Days(emp);
                 avg=avgDays(emp,ttl);
    
                 cout<<"Average number of absent days: "<<avg<<endl;
                 con();
                 break;
            }

            }    
                
        }
    
    
   while(choice);
    cout<<"Ending program"<<endl;

    return 0;
}

void con(){
    cout<<"Press Enter to continue...";
    cin.ignore();
}
float calculateRetail(float whlcst, float mrkper){
    return whlcst*mrkper+whlcst;
}
float getSales(float &sales1, float &sales2, float &sales3, float &sales4)
{
    do{
        cout<<"Please Enter a positive quarterly sales figure for Northeast"<<endl;
        cin>>sales1;
        cin.ignore();
        cout<<"Now for Southeast"<<endl;
        cin>>sales2;
        cin.ignore();
        cout<<"Now for Northwest"<<endl;
        cin>>sales3;
        cin.ignore();
        cout<<"Now for Southwest"<<endl;
        cin>>sales4;
        cin.ignore();
    }while(sales1<0||sales2<0||sales3<0||sales4<0);
    
     return sales1,sales2,sales3,sales4;  
}
float  maxSales(float &max,float &sales1,float &sales2,float &sales3,float &sales4){
    
    max=sales1;
    if(sales2>max) 
        max=sales2;
    if(sales3>max) 
        max=sales3;
    if(sales4>max) 
        max=sales4;
    else if (sales1>max) 
        max=sales1;

    return max;   
} 
float getReports(float &rep1,float &rep2,float &rep3,float &rep4){
    do{
        cout<<"Please enter the amount of accidents in the North"<<endl;
        cin>>rep1;
        cin.ignore();
        cout<<"Now for South"<<endl;
        cin>>rep2;
        cin.ignore();
        cout<<"Now for East"<<endl;
        cin>>rep3;
        cin.ignore();
        cout<<"Now for West"<<endl;
        cin>>rep4;
        cin.ignore();
    }while(rep1<0||rep2<0||rep3<0||rep4<0);
    
     return rep1,rep2,rep3,rep4;  
}
float minReports(float &min,float &rep1,float &rep2,float &rep3,float &rep4){
    
    min=rep1;
    if(rep2<min) 
        min=rep2;
    if(rep3<min) 
        min=rep3;
    if(rep4<min) 
        min=rep4;
    else if (rep1<min) 
        min=rep1;

    return min;   
}
float fallingDistance (float &time)
{
    float dis,g=9.8;
    dis=(0.5*g*time*time);
    return dis;
}
float kineticEnergy (float &mss, float &vel)
{
    float ken;
    ken=((0.5*mss)*vel)*vel;
    cout<<"Kinetic Energy is: "<<ken<<endl;
}
float cvs (int &fah)
{
    return (static_cast<float>(fah)-32)*5/9;
}
int coinToss()
{
    int num;   
    srand ((unsigned) time(0));
    num = rand()%2 + 1;  
    return num;
}
float presentValue(float &futv, float &annl, float &noy, float &prev)
{
    noy=1/(1+annl);
    prev=futv/noy;
    return prev;
}
void getScore(int &score)
{
    
    cout << "Enter a score between 0-100: "<<endl;
    cin >> score;             
    while ((score < 0) || (score > 100))
    {
        cout << "Please put a valid test score";
        cin >> score;                   
                    }           
}
int findLowest(int score1, int score2, int score3, int score4, int score5)
{
    int low=score1;
    
    if (score2<low)
       {
           low=score2;
       }
    if (score3<low)
       {
           low= score3;
       }
    if (score4<low)
       {
           low=score4;
       }
    if (score5 < low)
       {
           low=score5;
       }
       
       cout << "The test score to drop is: " <<low<<endl;
       
       return low;
}
void calcAverage(int score1, int score2, int score3, int score4, int score5, int lowest)
{
     float average;
     average=((score1+score2+score3+score4+score5)-lowest)/4.0;
     cout<<"The average score is: "<<average<<endl;
}
int empl()
{
    int emp;
    cout<<"Please enter the # of Employees: ";
    cin>>emp;
    
    if(emp<1)
    {
        cout<<"Input a valid number";
                cin>>emp;
    }
    return emp;
}
int Days(int emp)
{
    int ttl=0, msd;
    
    for(int i=0;i<emp;i++)
    {
        cout<<"Enter leaves for employee: ";
        cin>>msd;
        ttl+=msd;
    }
    return ttl;
}
float avgDays(int emp, int ttl)
{
    float avg=ttl/emp;
    return avg;
}