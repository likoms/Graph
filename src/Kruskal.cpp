/*
 * Kruskal.cpp
 *
 *  Created on: May 7, 2015
 *      Author: piotr
 */

#include "Kruskal.h"

Kruskal::Kruskal() {
	// TODO Auto-generated constructor stub

}

Kruskal::~Kruskal() {
	// TODO Auto-generated destructor stub
}

bool Kruskal::makeAlgo(const AdjacencyMatrix& am)
{

	int index=0;
	int indexVisitS=0;
	int indexVisitE=0;
	int edgeCount=am.getEdgeCount();
	int vertexCount = am.getVertexCount();
	int vertexFirst = am.getVertexFirst();
	int **wage = am.getWage();
	int *wageArray=new int[edgeCount];
	int *startIdx=new int[edgeCount];
	int *endIdx=new int[edgeCount];
	int *mstList=new int[edgeCount];
	bool *visitS=new bool[edgeCount];
	bool *visitE=new bool[edgeCount];

	for(int i=0;i<edgeCount;i++)
	{
		wageArray=new int[edgeCount];
		startIdx=new int[edgeCount];
		endIdx=new int[edgeCount];
		visitS[i]=false;
		visitE[i]=false;
		mstList[i]=0;
	}
	for(int i=0;i<vertexCount;i++)
	{
		for(int j=0;j<vertexCount;j++)
		{
			if(wage[i][j]!=0)
			{
				wageArray[index]=wage[i][j];
				startIdx[index]=i;
				endIdx[index]=j;
				index+=1;
			}
		}

	}

/*for(int i=0;i<edgeCount;i++)cout << startIdx[i]<< " " ;
		cout << endl;
		for(int i=0;i<edgeCount;i++)cout << endIdx[i]<< " " ;
		cout << endl;
		for(int i=0;i<edgeCount;i++)cout << wageArray[i]<< " " ;
		cout << "______________________"<< endl;
*/
	//sortujemy tablice
	for( int i = 0; i < edgeCount; i++ )
	    {
	        for( int j = 0; j < edgeCount-1; j++ )
	        {
	            if( wageArray[ j ] > wageArray[ j + 1 ] )
	            {

	            	swap( wageArray[ j ], wageArray[ j + 1 ] );
	                 swap( startIdx[ j ], startIdx[ j + 1 ] );
	                 swap( endIdx[ j ], endIdx[ j + 1 ] );
	            }

	        }
	    }

	// przeglądamy wierzchołki
	/*for(int i=0;i<edgeCount;i++)
	{
		indexVisitS=startIdx[i];
		indexVisitE=endIdx[i];
		if(!visitS[indexVisitS] && !visitE[indexVisitE])
		{

			mstList[i]+=wageArray[i];
			visitS[indexVisitE]=true;
			visitE[indexVisitE]=true;

		}
	}*/
	for(int i=0;i<edgeCount;i++)cout << startIdx[i]<< " " ;
	cout << endl;
	for(int i=0;i<edgeCount;i++)cout << endIdx[i]<< " " ;
	cout << endl;
	//for(int i=0;i<edgeCount;i++)cout << wageArray[i]<< " " ;

for(int i=0;i<edgeCount;i++)
{
	int ins=startIdx[i];
	int ine=endIdx[i];
	if(visitS[ins]==1 && visitE[ine]==1)
	{
		startIdx[i]=-1;
		ine=endIdx[i]=-1;

	}else
	{
		visitS[ins]=true;
		visitE[ine]=true;
	}

}
//cout << endl;
//for(int i=0;i<edgeCount;i++) cout << visitS[i]<< " ";
//cout << endl;
//for(int i=0;i<edgeCount;i++) cout << visitE[i]<< " ";
for(int i=0;i<edgeCount;i++)cout << startIdx[i]<< " " ;
	cout << endl;
	for(int i=0;i<edgeCount;i++)cout << endIdx[i]<< " " ;
	return true;
}


