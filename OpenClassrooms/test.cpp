#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using namespace std;

int main()
{

	ofstream		file_out("./test", ios::app);
	ifstream		file_in("./test");
	string 			line;

/*
MOYENNE --------------------------
*/
	vector<double>	notes;
	double 			moyenne(0);
	notes.push_back(15.5);  
	notes.push_back(19.5);
	notes.push_back(6);
	notes.push_back(12);
	notes.push_back(14.5);
	notes.push_back(15);

	for(int i(0); i < (int) notes.size(); ++i)
	{
		moyenne += notes[i];	
	}
	moyenne /= notes.size();
// ------------------------------

	file_in.seekg(0, ios::end);
	cout << "Taille du fichier : " << file_in.tellg() << " octets." << endl;
	file_in.seekg(0, ios::beg);

	file_out << "Votre moyenne est : " << moyenne << endl;
	while (getline(file_in, line))
		cout << line << endl;
	return 0;
}