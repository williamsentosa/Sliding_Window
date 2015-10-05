/* Nama File : frame.h */
/* Deskripsi : membuat frame untuk dikirim */

#include <iostream>
using namespace std;

class Frame {
	private :
		const char SOH;
		int frameNumber;
		const char STX;
		char* data;
		const char ETX;
		char checksum;	/* Masih bingung */
		const int lengthOfData;	
		
	public :
		Frame();
		Frame(int num, char* data);
		Frame(const Frame &frame);
		~Frame();
		char* convertToBytes();
		bool isError();
		
};