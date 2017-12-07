// SeriesOpsCpp.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "SeriesOpsCpp.h"


// This is an example of an exported variable
SERIESOPSCPP_API int nSeriesOpsCpp=0;

// This is an example of an exported function.
SERIESOPSCPP_API int fnSeriesOpsCpp(void)
{
    return 42;
}

// This is the constructor of a class that has been exported.
// see SeriesOpsCpp.h for the class definition
CSeriesOpsCpp::CSeriesOpsCpp()
{
    return;
}
