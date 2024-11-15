#include"header.h"
int main(int argc, char *argv[]) {
	if (argc !=3) 
	{
		cout << "Usage: " << argv[0] << " <source file>" << endl;
		return 1;
	}

	ifstream src(argv[1]);
	if (!src) {
		cerr << "Error opening source file." << endl;
		return 1;
	}
	int max=1000;

	int numbers[max];
	int count = 0;

	char buffer[256];

	while (src >> buffer && count < max) {
		numbers[count] = atoi(buffer);  
		count++;
	}
	src.close();

	for (int i = 0; i < count; i++) 
	{
		cout << numbers[i] << " ";
	}
	cout << endl;

	merge obj1(numbers,0,count-1);

	for (int i = 0; i < count; i++) 
	{
		cout << numbers[i] << " ";
	}
	cout << endl;

	ofstream des(argv[2]);

	for(int i=0;i<count;i++)
	{
		des<<numbers[i]<<' ';
	}

	des.close();

	return 0;
}
