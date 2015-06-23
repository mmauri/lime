#ifndef LIME_UTILS_BYTES_H
#define LIME_UTILS_BYTES_H


#include <hx/CFFI.h>
#include <utils/QuickVec.h>


namespace lime {
	
	
	struct Bytes {
		
		
		Bytes ();
		Bytes (int size);
		Bytes (value bytes);
		Bytes (const char* path);
		Bytes (const QuickVec<unsigned char> data);
		~Bytes ();
		
		unsigned char *Data ();
		const unsigned char *Data () const;
		int Length () const;
		void Resize (int size);
		value Value ();
		
		unsigned char *_data;
		int _length;
		value _value;
		
		
	};
	
	
}


#endif