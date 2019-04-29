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
	int x, y, unsort, tmp;
	for (x = 0; x < Data.size()-1; x++)
	{
		unsort = x;
		for (y = x + 1; y < Data.size(); y++)
		{
			if(Data[y] < Data[unsort])
				unsort = y;
		}
		if (unsort != x)
		{
			tmp = Data[x];
			Data[x] = Data[unsort];
			Data[unsort] = tmp;
		}
	print(Data);
	}
}

void mystery3(auto& Data)
{
	cout<<endl<<"Mystery 3"<<endl<<endl;
	int nxtIdex, move, instVal;
	
	for (nxtIdex = 1; nxtIdex < Data.size(); nxtIdex++)
	{
		instVal = Data[nxtIdex];
		move = nxtIdex;
		
		while(move > 0 && Data[move - 1] > instVal)
		{
			Data[move] = Data[move - 1];
			move--;
		}
		Data[move] = instVal;
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
