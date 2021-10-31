#include <iostream>
using namespace std;

int main() {
    int x;   
    cin>>x;
   int sum=0;
    int matrix[x][3];
    for(int i=0;i<x;i++){
        cin>>matrix[i][0];
        cin>>matrix[i][1];
        cin>>matrix[i][2];
    }
    
   for (int i=0; i<x-1; i++)
    {
        
            for(int j=i+1; j<x; j++)
            {
                if(matrix[j][1]!=-1)
                {
                    if(matrix[i][1]>matrix[j][0] && matrix[i][2]>matrix[j][2] )  
                    {
                        //&& (matrix[i][0]<matrix[j][1]))
                        matrix[j][2]=0;
                        //matrix[j][0]=-1;
                        matrix[j][1]=-1;
                        continue;
                    }
                     else if( matrix[i][1]>matrix[j][0] && matrix[i][2] < matrix[j][2] )
                    {
                         matrix[i][2]=0;
                        // matrix[i][0]=-1;
                        matrix[i][1]=-1;
                        break;
                    }
                    else{
                        continue;
                    }
                }
                else{
                    break;
                }
            }
       
        
    }
  /*  for(int i=0;i<x;i++){
        for(int j=0;j<3;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }*/
            for (int i=0; i<x; i++)
            {
                if(matrix[i][1]!=-1){
                    sum=sum+matrix[i][2];        
                }
            
            }
            
    
    cout<<sum<<endl;
    return 0;
}