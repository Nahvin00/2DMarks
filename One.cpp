#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int min,max,mark[30][5];
    double tot_mark,avg_mark,tot_sub,avg_sub;
    for(int i=0;i<30;i++)
    {
        cout<<"Sudent "<<i+1<<":\n";
        tot_mark=0;
        cout<<"Enter five marks:\n";
        for(int j=0;j<5;j++)
        {
            cin>>mark[i][j];
            tot_mark+=mark[i][j];
        }
        avg_mark=tot_mark/5.0;
        cout<<setprecision(3)<<"\n\nThe total mark is "<<tot_mark<<"\nThe average mark is "<<avg_mark<<"\n\n";
    }
    for(int j=0;j<5;j++)
    {
        tot_sub=0;
        min=mark[0][j];
        max=mark[0][j];
        for(int i=0;i<30;i++)
        {
            if(mark[i][j]<min)
            {
                min=mark[i][j];
            }
            if(mark[i][j]>max)
            {
                max=mark[i][j];
            }
            tot_sub+=mark[i][j];
        }
        avg_sub=tot_sub/30.0;
        cout<<setprecision(3)<<"Subject "<<j+1<<":\n"
            <<"\nThe lowest mark for subject is "<<min
            <<"\nThe highest mark for subject is "<<max
            <<"\nThe average mark for subject is "<<avg_sub<<"\n\n";
        
    }

    return 0;
}
