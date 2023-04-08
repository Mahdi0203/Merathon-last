#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,Case=1;
    cin>>t;
    while(t--)
    {
        int C,F=0;
        cin>>C;
        double cum_sum=0, credit=0;
        for(int i=0; i<C; i++)
        {
            double a,b;
            cin>>a>>b;
            if(a>=80 && a<=100)
            {
                cum_sum += (4*b);
                credit += b;
            }
            else if(a>=75 && a<80)
            {
                cum_sum += (3.75*b);
                credit += b;
            }
            else if(a>=70 && a<75)
            {
                cum_sum += (3.50*b);
                credit += b;
            }
            else if(a>=65 && a<70)
            {
                cum_sum += (3.25*b);
                credit += b;
            }
            else if(a>=60 && a<65)
            {
                cum_sum += (3.00*b);
                credit += b;
            }
            else if(a>=55 && a<60)
            {
                cum_sum += (2.75*b);
                credit += b;
            }
            else if(a>=50 && a<55)
            {
                cum_sum += (2.50*b);
                credit += b;
            }
            else if(a>=45 && a<50)
            {
                cum_sum += (2.25*b);
                credit += b;
            }
            else if(a>=40 && a<45)
            {
                cum_sum += (2.00*b);
                credit += b;
            }
            else if(a>=0 && a<40)
            {
                F++;
            }
        }
        double result = cum_sum/credit;
        if(F>0)
        {
            cout<<"Case "<<Case<<": "<<"Sorry, you have failed in "<<F<<" courses!"<<endl;
            Case++;
        }
        else
        {
            cout<<"Case "<<Case<<": ";
            printf("%.2lf",result);
            cout<<endl;
            Case++;
        }
    }

}
