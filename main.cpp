#include <iostream>
#include <cstring>
#include <string>
#include <iomanip>
using namespace std;

void getGraphMatrix ( string arr1[][3],int edges);






int main()
{
  cout<<"please insert the number of edges : ";
  int edges;
  cin>>edges;
  while(edges <0)
  {
    cout<<"please insert a valid number of edges : ";

  cin>>edges;
  }
  string arr1[edges][3];

  cout<<"please insert the the vertice 1 then vertice 2 the the number of edges \nEx. a(v1)   b(v2)   5(# of edges)\n";

   for(int i=0 ; i <edges ; i++)
  {
      for(int k=0 ; k<3 ; k++)
      {
          cin>>arr1[i][k];

  }}

  /* for(int i=0 ; i <edges ; i++)
  {
      for(int k=0 ; k<3 ; k++)
      {
          cout<<arr1[i][k]<<" ";

  }

  cout<<"\n";
  }*/
  getGraphMatrix(arr1,edges);


    return 0;

}
void getGraphMatrix ( string arr1[][3],int edges)
{

    string arr2[7][7];

   arr2[0][0]=" ";
   arr2[0][1]="a";
   arr2[0][2]="b";
   arr2[0][3]="c";
   arr2[0][4]="d";
   arr2[0][5]="e";
   arr2[0][6]="f";
   arr2[1][0]="a";
   arr2[2][0]="b";
   arr2[3][0]="c";
   arr2[4][0]="d";
   arr2[5][0]="e";
   arr2[6][0]="f";

   for(int i = 1; i<7;i++)
   {
       for(int k=1 ; k<7 ; k++ )
       {
           arr2[i][k]='0';
       }
   }


  for (int i=0 ; i <edges ; i++)
  {

          if (arr1[i][0]=="a")
          {

                if (arr1[i][1]=="a")
                   {arr2[1][1]= arr1[i][2];}
                else if (arr1[i][1]=="b")
                  {arr2[1][2]= arr1[i][2];
                  arr2[2][1]= arr1[i][2];}
                else if (arr1[i][1]=="c")
                {arr2[1][3]= arr1[i][2];
                arr2[3][1]= arr1[i][2];}

                else if (arr1[i][1]=="d")
                {arr2[1][4]= arr1[i][2];
                arr2[4][1]= arr1[i][2];}

               else if (arr1[i][1]=="e")
                {arr2[1][5]= arr1[i][2];
                arr2[5][1]= arr1[i][2];}

               else if (arr1[i][1]=="f")
                {arr2[1][6]= arr1[i][2];
                arr2[6][1]= arr1[i][2];}}


        else if (arr1[i][0]=="b"){
                if (arr1[i][1]=="a")
                {arr2[2][1]= arr1[i][2];
                arr2[1][2]= arr1[i][2];}

           else if (arr1[i][1]=="b")
                arr2[2][2]= arr1[i][2];


          else if (arr1[i][1]=="c")

                {arr2[2][3]= arr1[i][2];
                arr2[3][2]= arr1[i][2];}

           else if (arr1[i][1]=="d")
                {arr2[2][4]= arr1[i][2];
                arr2[4][2]= arr1[i][2];}

           else if (arr1[i][1]=="e")
                {arr2[2][5]= arr1[i][2];
                arr2[5][2]= arr1[i][2];}

            else if (arr1[i][1]=="f")
                {arr2[2][6]= arr1[i][2];
                arr2[6][2]= arr1[i][2];}}

           else if (arr1[i][0]=="c")

            {
            if (arr1[i][1]=="a")
                {arr2[3][1]= arr1[i][2];
                arr2[1][3]= arr1[i][2] ;}

            else if (arr1[i][1]=="b")
                {arr2[3][2]= arr1[i][2];
                arr2[2][3]= arr1[i][2] ;}

          else  if (arr1[i][1]=="c")
                arr2[3][3]= arr1[i][2];


           else if (arr1[i][1]=="d")
                {arr2[3][4]= arr1[i][2];
                arr2[4][3]= arr1[i][2] ;}

          else if (arr1[i][1]=="e")
                {arr2[3][5]= arr1[i][2];
                arr2[5][3]= arr1[i][2] ;}

           else if (arr1[i][1]=="f")
                {arr2[3][6]= arr1[i][2];
                arr2[6][3]= arr1[i][2] ;}}

            if (arr1[i][0]=="d")

            {
           if (arr1[i][1]=="a")
                {arr2[4][1]= arr1[i][2];
                arr2[1][4]= arr1[i][2];}

           else if (arr1[i][1]=="b")
                {arr2[4][2]= arr1[i][2];
                arr2[2][4]= arr1[i][2] ;}

            else if (arr1[i][1]=="c")
                {arr2[4][3]= arr1[i][2];
                arr2[3][4]= arr1[i][2] ;}

            else if (arr1[i][1]=="d")
                arr2[4][4]= arr1[i][2];


           else if (arr1[i][1]=="e")
                {arr2[4][5]= arr1[i][2];
                arr2[5][4]= arr1[i][2] ;}

            else if (arr1[i][1]=="f")
                {arr2[4][6]= arr1[i][2];
                arr2[6][4]= arr1[i][2] ;}}


            if (arr1[i][0]=="e")

            {
            if (arr1[i][1]=="a")
                {arr2[5][1]= arr1[i][2];
                arr2[1][5]= arr1[i][2] ;}

            else if (arr1[i][1]=="b")
                {arr2[5][2]= arr1[i][2];
                arr2[2][5]= arr1[i][2] ;}

            else if (arr1[i][1]=="c")
                {arr2[5][3]= arr1[i][2];
                arr2[3][5]= arr1[i][2] ;}

           else if (arr1[i][1]=="d")
                {arr2[5][4]= arr1[i][2];
                arr2[4][5]= arr1[i][2] ;}

            else if (arr1[i][1]=="e")
                arr2[5][5]= arr1[i][2];


            else if (arr1[i][1]=="f")
                {arr2[5][6]= arr1[i][2];
                arr2[6][5]= arr1[i][2] ;}}

            if (arr1[i][0]=="f")
                {

            if (arr1[i][1]=="a")
                {arr2[6][1]= arr1[i][2];
                arr2[1][6]= arr1[i][2] ;}

            else if (arr1[i][1]=="b")
                {arr2[6][2]= arr1[i][2];
                arr2[2][6]= arr1[i][2] ;}

            else if (arr1[i][1]=="c")
                {arr2[6][3]= arr1[i][2];
                arr2[3][6]= arr1[i][2] ;}

            else if (arr1[i][1]=="d")
                {arr2[6][4]= arr1[i][2];
                arr2[4][6]= arr1[i][2] ;}

            else if (arr1[i][1]=="e")
                {arr2[6][5]= arr1[i][2];
                arr2[5][6]= arr1[i][2] ;}

            else if (arr1[i][1]=="f")
                arr2[6][6]= arr1[i][2];}



        for(int i =0 ; i<7 ; i++)
        {
            for(int k=0 ; k<7 ; k++)
            {

                cout<<setw(2)<<arr2[i][k]<<" "<<setw(2);
            }
            cout<<"\n";
            }
        }

}



