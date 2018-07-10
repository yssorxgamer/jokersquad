#include <iostream>
#include <vector>
using namespace std;

int main() 
{
  vector <int> vector1;
  vector <int> vector2;
  
  vector1.push_back(10);
  vector1.push_back(20);
  
  cout<<"vector1 is : "<<vector1.at(0)<<endl;
  cout<<"vector1 is : "<<vector1.at(1)<<endl;
  cout<<endl<<"size of vector1 is : "<<vector1.size()<<" elemnts "<<endl;
  cout<<"\n==============================================="<<endl;
  
  vector2.push_back(100);
  vector2.push_back(200);
  
  cout<<"vector2 is : "<<vector2.at(0)<<endl;
  cout<<"vector2 is : "<<vector2.at(1)<<endl;
  cout<<endl<<"size of vector2 is : "<<vector2.size()<<" elemnts "<<endl;
  cout<<"\n==============================================="<<endl;
  
  vector<vector<int>> vector_2d;
  
  vector_2d.push_back(vector1);
  vector_2d.push_back(vector2);
  
  cout<<"\n==============================================="<<endl;
  
   cout<<"Vector_2d :"<<endl;
  cout<<endl<<vector_2d.at(0).at(0)<<" "<<vector_2d.at(0).at(1)<<endl;
  cout<<endl<<vector_2d.at(1).at(0)<<" "<<vector_2d.at(1).at(1)<<endl;
  
  
  cout<<"\n==============================================="<<endl;
  cout<<endl<<" AFTER THE CHANGE "<<endl;
  vector1.at(0) = 1000;
  cout<<"Vector_2d :"<<endl;
  cout<<endl<<vector_2d.at(0).at(0)<<" "<<vector_2d.at(0).at(1)<<endl;
  cout<<endl<<vector_2d.at(1).at(0)<<" "<<vector_2d.at(1).at(1)<<endl;
  cout<<endl;
  cout<<"vector1 :"<<endl;
  cout<<"vector1 is : "<<vector1.at(0)<<endl;
  cout<<"vector1 is : "<<vector1.at(1)<<endl;
  cout<<endl<<"size of vector1 is : "<<vector1.size()<<" elemnts "<<endl;
  
    return 0;
}
