#include <iostream>
#include <cstdlib>//for "exit()" on some systems
#include <vector>
#include <string>

using namespace std;

/**
\fn linearSearch
\brief Search data for the first occurrence of key
\param [in] key The value being searched for
\param [in] data The data set that will be searched
\returns location of key if found or -1 if not found
*/
int linearSearch(auto data, auto key)
{
  for(auto i = 0u; i < data.size(); i++)
   {   
        
     if (data[i] == key)//key found
      return i;
  }
   return -1;//not found
}
	
 void insertionSort (auto &D){
	 int passes = 0;
	 for (int i = 1; i < D.size(); i++){
		 int j = i;
		 string temp;
		 while ((j > 0) && (D[j] < D[j-1])) {
			temp = D[j];
			D[j] = D[j-1];
			D[j-1] = temp;
			j = j-1; 
		 }
		 passes ++;
	 }
	 for (int a = 2; passes = a; a = a + 2){
	 cout << "Passes completed : " << passes << endl;
 }
 }	



int main()
{
  vector<string> inputs;
  string search_key, input;
 

   

   cout<<"Welcome to \"search it\". We first need some input data."<<endl;
   cout<<"We'll assume the inputs do not have any spaces."<<endl<<endl;
   cout<<"To end input type the #-character (followed by Enter)"<<endl<<endl;

   cin>>input;
   
 
    while(input != "#")//read an unknown number of inputs from keyboard
    {
       inputs.push_back(input);
       cin>>input;
       
    }

   cout<<endl<<"["<<inputs.size()<<" values read from input source]"<<endl<<endl;

  if(inputs.size() == 0)//no input
  {
      cout<<endl<<"No input received, quiting..."<<endl<<endl;
       exit(1);//nothing to do but quit program
  }
 
 
   insertionSort(inputs);
   cout << "sorted Data : " << endl;
   for (int k= 0; k < inputs.size(); k++){
	   
	   cout << inputs[k] << endl;
   }

    return 0;
}
