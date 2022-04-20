//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	   /*Icon*/                 /*Command*/                                                   /*Update Interval*/	/*Update Signal*/
    {  "",                    "dwmblocks-battery",                                               2,                  0                  },
    {  " ",                    "mpc current -f %title%",                                        1,                  0                  },
	{  " ",                    "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",       20,                 0                  },

	{  " ",                    "date '%F %R (%a)'",                                             60,                 0                  },
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;



// $(for bat in /sys/class/power_supply/BAT* ; echo "$(cat $bat/capacity)%" | tr '\n' ' '
