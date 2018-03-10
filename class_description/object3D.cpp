#include <iostream>
#include <fstream>
#include <point.cpp>

using namespace std;

class generate_3D{
public:
	/*!
	 * This is for putting a 3D graph in proper data structures from a given 3D graph in input file.
	 */

	create_3D(string file){
		ifstream inFile;

		inFile.open(file);
		


		/*!
		 *A 3D graph can be represented as list/array of connected edges and overlapping points.
		 *3D points and edges can be saved in different lists/arrays.
		 *These inputs will be saved in proper data stuructures for a 3D graph, and then can be provided to different calsses for further processes.
		 */
	}
}

