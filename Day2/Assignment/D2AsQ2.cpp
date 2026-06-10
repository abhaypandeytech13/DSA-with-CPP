#include <iostream>
using namespace std;
int main()
{
  int pencost;
  int pencilcost;
  int erasercost;

  cout<<"Enter Pen Price : ";
  cin>>pencost;
  cout<<"Enter Pencil Price : ";
  cin>>pencilcost;
  cout<<"Enter Eraser Price : ";
  cin>>erasercost;
  float totalcost = pencost + pencilcost + erasercost;
  cout<<"Total-Cost : "<<totalcost<<endl;
  //include the 18% GST on the Price 
  cout<<"Total-Cost Incuding Tax "<<( totalcost + (totalcost * 0.18))<<endl;
  return 0;

}