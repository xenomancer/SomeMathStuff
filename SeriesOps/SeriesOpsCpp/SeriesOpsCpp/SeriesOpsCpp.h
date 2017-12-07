// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the SERIESOPSCPP_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// SERIESOPSCPP_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef SERIESOPSCPP_EXPORTS
#define SERIESOPSCPP_API __declspec(dllexport)
#else
#define SERIESOPSCPP_API __declspec(dllimport)
#endif

// This class is exported from the SeriesOpsCpp.dll
class SERIESOPSCPP_API CSeriesOpsCpp {
public:
	CSeriesOpsCpp(void);
	// TODO: add your methods here.
};

extern SERIESOPSCPP_API int nSeriesOpsCpp;

SERIESOPSCPP_API int fnSeriesOpsCpp(void);
