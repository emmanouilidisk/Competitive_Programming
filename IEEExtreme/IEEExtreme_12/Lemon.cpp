#include <iostream>

using namespace std;

int main() {
    int N, M, S;
    cin >>N>>M>>S;
    int error=0;
    int i=1;
  while(i<=N)
      {
          error=error+2*M+S;
          i=i+2;
          if (i>M && i%2==0)
          {
              i--;
          }
          else
          {
              i=i;
          }
   

      }
       cout<<error-M<<endl;
        return 0;
}
// #include <iostream>

// using namespace std;

// int main() {
//   int a, b,c;
//   int error=0;
//   //arr[a];
//   cin >> a >> b>>c;
//   //bool check=0;
  
//       cout<<error-b<<endl;
//   return 0;
// }