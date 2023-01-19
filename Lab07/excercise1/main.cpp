/*------------------------------------------------------------------------------------------------------------
**File Name: main.cpp
*Author: Tony Czajka
*Assignment: Lab07 excercise 1
*Description: Obtain a file name from user containing data pertaining to a 2D array, then create a file for
*			  The average, reverse, flip, and diagonal (if dimensions of array are symetric) of the array.
*Date: 10/19/2020
*-------------------------------------------------------------------------------------------------------------
*/
#include <iostream>
#include <fstream>

int main()
{
	//------------------Input File Name and Check that it is valid-------------------------------------
	std::string userFileName = "";
	std::ifstream inFile;
	do
	{
		std::cout << "Enter file name to use for data: ";
		std::cin >> userFileName;
		inFile.open(userFileName);
	} while (!inFile.is_open());

	int numRows = 0; // variable for first numb in input.txt also shows how many rows
	int numCols = 0; // variable for second numb in input.txt also shows how many columns

	inFile >> numRows;
	inFile >> numCols;

	double **grid;
	grid = new double *[numRows]; // initialize and create larger grid

	//----------inputting values from input.txt into a 2D array---------------------------------------------
	for (int i = 0; i < numRows; i++)
	{
		grid[i] = new double[numCols]; // initialize and create the arrays inside
		for (int j = 0; j < numCols; j++)
		{
			inFile >> grid[i][j]; // grabbing each individual value
		}
	}

	/*//========================test for loop=====================
	for(int i=0; i<numRows ; i++)
	{
		for(int j=0; j<numCols ; j++)
		{
			std::cout<<grid[i][j];
		}
		std::cout<<std::endl;
	}
	*/

	//-------------------Reverse File Creation---------------------------------------------------
	std::ofstream outFileReverse;
	outFileReverse.open("reverse.txt");
	//-------------------Average File Creation---------------------------------------------------
	std::ofstream outFileAverage;
	outFileAverage.open("averages.txt");
	//-------------------Flipped File Creation----------------------------------------------------
	std::ofstream outFileFlipped;
	outFileFlipped.open("flipped.txt");
	//-------------------Diagonal File Creation----------------------------------------------------
	// Occurs with the actual part later down bleow
	//---------------------Average file output---------------------------------------------------
	double arrayTotal = 0;

	for (int i = 0; i < numRows; i++)
	{
		for (int j = 0; j < numCols; j++)
		{
			arrayTotal += grid[i][j];
		}
	}
	outFileAverage << "Total average: " << arrayTotal / (numCols * numRows) << '\n';

	for (int i = 0; i < numRows; i++)
	{
		double rowTotal[numRows];
		double finalTotal = 0.0;

		for (int j = 0; j < numCols; j++)
		{
			rowTotal[i] += grid[i][j];
			if (i == numRows - 1)
			{
				finalTotal += grid[i][j];
			}
		}
		if (i != numRows - 1)
		{
			outFileAverage << "Row " << i + 1 << " average: " << (rowTotal[i]) / numCols << '\n';
		}
		if (i == numRows - 1)
		{
			outFileAverage << "Row " << i + 1 << " average: " << finalTotal / numCols << '\n';
		}
	}
	outFileAverage.close();

	//------------------Reverse File Creation---------------------------------------------------
	for (int i = 0; i < numRows; i++)
	{
		for (int j = numCols - 1; j >= 0; j--)
		{

			if (j == 0)
			{
				outFileReverse << grid[i][j];
			}
			else
			{
				outFileReverse << grid[i][j] << " ";
			}
		}
		outFileReverse << std::endl;
	}
	outFileReverse.close();
	//---------------Flipped File Creation------------------------------------------
	for (int i = numRows - 1; i >= 0; i--)
	{
		for (int j = 0; j < numCols; j++)
		{
			if (j == numCols - 1)
			{
				outFileFlipped << grid[i][j] << '\n';
			}
			else
			{
				outFileFlipped << grid[i][j] << " ";
			}
		}
	}
	outFileFlipped.close();
	//--------------------------Reverse File-------------------------------------------------------------
	if (numCols == numRows)
	{
		std::ofstream outFileDiagonal;
		outFileDiagonal.open("diagonal.txt");
		for (int i = 0; i < numRows; i++)
		{
			for (int j = 0; j < numCols; j++)
			{
				if (j == numCols - 1)
				{
					outFileDiagonal << grid[j][i] << '\n';
				}
				else
				{
					outFileDiagonal << grid[j][i] << " ";
				}
			}
		}
		outFileDiagonal.close();
	}
	//------------------Deleting the arrays-------------------------------------------------------
	for (int i = 0; i < numRows; i++)
	{
		delete[] grid[i];
	}
	delete[] grid;
	//-------------------Closing files------------------------------------------------------------
	inFile.close(); // closing infile

} // HAVE YOU CLOSED ALL FILES AND DELETED BOTH ARRAYS
