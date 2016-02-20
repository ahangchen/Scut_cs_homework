#pragma once
static bool strcontain(char*sbig,char*spiece)
{
	string str=sbig;
	string str1=spiece;
	string::size_type idx = str.find( str1 );

	if ( idx != string::npos )
	{
		return 1;
	}
	else
	{
		return 0;
	}
}