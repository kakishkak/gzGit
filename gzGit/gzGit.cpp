#include <iostream>

using namespace std;

class Square {
	int sideSize;
public:
	Square() {
		sideSize = 10;
	}
	void PrintSquare() {							   //
		for (int i = 0; i < sideSize; i++)			   //
		{											   //
			for (int j = 0; j < sideSize; j++)		   //
			{										   //
				cout << "#";						   // Выводим квадратик
			}										   //
			cout << "" << endl;						   //
		}											   //
		cout << endl;								   //
	}												   //
};

class Rectangle {

	int sideSize1;
	int sideSize2;
public:
	Rectangle() {
		sideSize1 = 10;
		sideSize2 = 5;
	}

	void PrintRectangle() {												 //
		for (int i = 0; i < sideSize1; i++)								 //
		{																 //
			for (int j = 0; j < sideSize2; j++)							 //
			{															 //
				cout << "#";											 // Выводим прямоугольничик
			}															 //
			cout << "" << endl;											 //
		}																 //
		cout << endl;													 //
	}																	 //
};

class Triangle {
	int sym1;
	int sym2;
	int height;
	int width;
public:
	Triangle() {
		sym1 = 5;
		sym2 = 5;
		height = 7;
		width = 11;
	}
	void PrintTriangle() {											  //
																	  //
		for (int i = 0; i < height; i++)							  //
		{															  //
			if (i == 6) {											  //
				cout << "###########";								  //
				break;												  //
			}														  //
			for (int j = 0; j < width; j++)							  //
			{														  //
				if (j == sym1 or j == sym2) {						  //
					cout << '#';									  //
																	  //А тут треугольничик
				}													  //
				else {												  //
					cout << ' ';									  //
																	  //
				}													  //
			}														  //
			sym1--;													  //
			sym2++;													  //
			cout << "" << endl;										  //
		}															  //
		cout << endl;												  //
	}																  //

};
int main()
{
	Square squareObj;
	squareObj.PrintSquare();
	Rectangle rectangleObj;
	rectangleObj.PrintRectangle();
	Triangle triangleObj;
	triangleObj.PrintTriangle();
}
