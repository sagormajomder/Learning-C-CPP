#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int row,col,i,j;
    cout << "Enter How many row you want: ";
    cin>>row;

    cout << "Enter How many col you want: ";
    cin>>col;

    int array[row][col];

    /**
    direct initialization
    array[2][3] ={
                {1,2,3},
                {4,5,6}
                }

    */

      for(i=0;i<row;i++){

        for(j=0;j<col;j++){
            cout<< "Enter " << i << " row and " << j << " col value :";
            cin>>array[i][j];
        }
      }

      cout<<endl;


       for(i=0;i<row;i++){

        for(j=0;j<col;j++){
            cout<<array[i][j] << " " ;
        }
        cout<<endl;
      }



    getch();

}

