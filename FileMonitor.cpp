// FileMonitor.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "FileMonitor.h"

void usage()
{
	printf("Invalid parameter\n");
	printf("Usage: FileMonitor \"path\"\n");
	printf("eg. FileMonitor d:\\test\\");
}

int _tmain(int argc, TCHAR** argv)
{
	if (argc <= 1)
	{
		usage();
		return -1;
	}

	FileMonitor fileMonitor(argv[1]);
	fileMonitor.Init();
	fileMonitor.Run();
    return 0;
}

