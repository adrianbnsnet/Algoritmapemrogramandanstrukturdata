#include <iostream>

using namespace std;
int main()
{
    int i,j,rows;
    cout<<"Silakan masukan jumlah baris\n";
    cin>>rows;
    
for(i=1; i<=rows; i++){
    for(j=i; j<=rows; j++){
     cout<<"*";
  }
  for(j=1; j<=(2*i-2); j++){
     cout<<" ";
  }
  for(j=i; j<=rows; j++){
     cout<<"*";
  }
  cout<<"\n";
}
  
for(i=1; i<=rows; i++){
    for(j=1; j<=i; j++){
     cout<<"*";
  
  }
  for(j=(2*i-2); j<(2*rows-2); j++){
     cout<<" ";
  
  }
  for(j=1; j<=i; j++){
     cout<<"*";
  
  }
  cout<<"\n";
  
  }
  getchar();
  
  return 0;
  
  }
		
