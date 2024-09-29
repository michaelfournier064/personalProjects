#include <iostream>
#include "rectangleType.h"

using namespace std;


// part e
int main()
{
rectangleType rectangle1(10, 5);
rectangleType rectangle2(8, 7);
rectangleType rectangle3;
rectangleType rectangle4;

cout << "rectangle1: " << rectangle1 << endl;

cout << "rectangle2: " << rectangle2 << endl;

rectangle3 = rectangle1 + rectangle2;

cout << "rectangle3: " << rectangle3 << endl;

rectangle4 = rectangle1 * rectangle2;

cout << "rectangle4: " << rectangle4 << endl;

if (rectangle1 > rectangle2)
cout << "Area of rectangle1 is greater than the area "
<< "of rectangle2 ." << endl;
else
cout << "Area of rectangle1 is less than or equal to the area "
<< "of rectangle2 ." << endl;

rectangle1++;

cout << "After increment the length and width of "
<< "rectangle1 by one unit, \nrectangle1: "
<< rectangle1 << endl;

rectangle4 = ++rectangle3;

cout << "New dimension of rectangle3: " << rectangle3 << endl;
cout << "New dimension of rectangle4: " << rectangle4 << endl;

return 0;
}