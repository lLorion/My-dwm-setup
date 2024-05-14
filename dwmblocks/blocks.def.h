//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
/*Icon*//*Command*//*Update Interval*//*Update Signal*/

	{" 󰍛 ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",		3,	0},

	{" ", "date '+ %I:%M %p'",							5,	0},

	{" 󰔠  ",  "date '+%b %d (%a)'",						5,	0},

	{"   ", "acpi | awk '{print $4}' | sed s/,//",				10,	0},
	
	{"", "/home/arch/scripts/weather",						50,	0},

	{" ", "acpi -t | awk '{print $4}' ",						5,	0},

	{ "󰻠 ", "/home/arch/scripts/core",						5,	0},

	{"", "/home/arch/scripts/print",						0,	0},

};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
