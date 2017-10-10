#include <cstdlib>
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
const int ROWS = 12; 
int main()

{

vector <vector <int> > matrix;   
matrix.resize(13);      
 for(int i=0; i<matrix.size(); ++i)
  matrix[i].resize(13);   
   int product = 0;
    cout<<"X";
  for(int i = 1; i <= ROWS;++i)   

          {

          

            cout<<" "<<i;   

                    }

        cout<<endl;

 

          for(int i = 1; i < matrix.size();++i)

                  {

cout<<" "<<i;

 

 for(int j = 1;j<matrix[i].size();++j)
   {
    product = i * j;  

                    cout<<" "<<product;


 }
   cout<< endl;  

           }

           }



