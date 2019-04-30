#include <iostream>
#include <vector>
using namespace std;

void print(auto A)
{
   for (auto a : A) 
        cout <<a<<" ";

   cout<<endl;
}

void mystery1(auto& Data)
{
  cout<<endl<<"Mystery 1"<<endl<<"---------------------"<<endl;

  for (int i = 0 ; i < Data.size( ) ; i++)
  {
    for ( int j = 0 ; j < i ; j++)
	if ( Data[ i ] < Data[ j ] )
	    swap( Data[ i ] , Data[ j ] );

    print(Data);
  }//end outer for (this brace is needed to include the print statement)

}

//... Other mysteries...
void mystery2(auto& Data)
{
	cout<<endl<<"Mystery 2"<<endl<<endl;
	for(int x = 0; x < Data.size(); x++)
	{
		for(int y = 0; y < Data.size()-1; y++)
		if(Data[y+1] < Data[y])
		swap(Data[y+1], Data[y]);
		
	print(Data);
	}
}

void mystery3(auto& Data)
{
	cout<<endl<<"Mystery 3"<<endl<<endl;
	for( int x = 0; x < Data.size(); x++)
	{
		for(int y = x; y < Data.size(); y++)
		if(Data[y] < Data[x])
		swap(Data[y], Data[x]);
	print(Data);
	}	
}

int main()
{
    
  vector<int> Data = {36, 18, 22, 30, 29, 25, 12};

  vector<int> D1 = Data;
  vector<int> D2 = Data;
  vector<int> D3 = Data;

  mystery1(D1);
  mystery2(D2);
  mystery3(D3);

}
