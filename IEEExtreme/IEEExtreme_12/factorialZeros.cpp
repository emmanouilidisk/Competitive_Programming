#include <iostream> 
#include<string>
using namespace std; 
string str;
int Factorial(int x){
    int sum=1;
    for(int i=1;i<=x;i++){
        sum*=i;
    }
    return sum;
}
string toBaseB(int x, int y)
{
   if ( x < y )
   {
      str+= x;
      return str;
   }

   int rem = x%y;
   toBaseB(x/y, y);
  // cout << rem;
  str+=rem;
}
void test(int b,int n){
    int fac;
    string temp,str1;
    for(int i=2;i<10;i++){
        fac=Factorial(i);
        temp=toBaseB(fac,b);
        for(int j=temp.length()-1;j>=0;i--){
            str1+=temp[j];
            if(str1.length()==n){
                break;
            }
        }
        for(int k=0;k<str1.length();k++){
            if(str1[k]==0){
                if(k+1==str1.length()){
                    cout<<i<<endl;
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
   cout<<-1;
}

int main() 
{ 
	
	int  t,nz,base;
	cin>> t;
	for(int i=0;i<t;i++){
	    cin>>base;
	    cin>>nz;
	    test(base,nz);
	}
	
	
	
	return 0; 
} 


