#ifndef _Reader_H
#define _Reader_H


#include "Solid.h"
#include "Array.h"
#include "Point.h"


namespace MeshLib
{
   
    /*	
        defines reading file in format and generating corresponding mesh file
    */

    class Reader
    {
    private:
        //	vertex id
        int vID;
        //	face id
        int fID;

    public:
        //	 Constructor
        Reader ();

        //	Destructor
        ~Reader();

        //	read input file, handle different contents
        void readToSolid( Solid *mesh, std::istream &in);

        // double to string convertor
        std::string d2String( double value);

    };
}
#endif