/* st colorschemes ##

# in st config.h, copy and paste to roughly line 115
# essentially after static const char *colorname[] = {
                                                     */
########################### slappy_blade ############################

"#585858",
"#5f0000",
"#d9d9d9",
"#5f5f00",
"#797979",
"#d7af00",
"#005f00",
"#7c6f64",
"#4fb8cc",
"#9d0006",
"#79740e",
"#b57614",
"#076678",
"#8f3f71",
"#427b58",
"#797979",
[255] = 0,

/* more colors can be added after 255 to use with DefaultXX */
	       "#aaaaaa",
	       "#000000",
	       "#000D2C", /*can use black too*/
};


/*
 * Default colors (colorname index)
 * foreground, background, cursor, reverse cursor
 */
unsigned int defaultfg = 7;
unsigned int defaultbg = 258;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 256;

/* Colors used for selection */
unsigned int selectionbg = 257;
unsigned int selectionfg = 7;

########################### Dracula ############################
"#000000",
"#4D4D4D",
"#FF5555",
"#FF6E67",
"#50FA7B",
"#5AF78E",
"#F1FA8C",
"#F4F99D",
"#BD93F9",
"#CAA9FA",
"#FF79C6",
"#FF92D0",
"#8BE9FD",
"#9AEDFE",
"#BFBFBF",
"#E6E6E6",

[255] = 0,

"#F8F8F2",  //Foreground 256
"#282A36",  //Background 257
"#aaaaaa",  //Default cursor 258
"#aaaaaa",  //Default rev cursor 258
"#000000",  //Selection background 259


########################## Muzieca #############################
"#5f5f5f",
"#828282",
"#d96468",
"#d98f93",
"#a2d964",
"#b8d98f",
"#d9c964",
"#d9cf8f",
"#64a2d9",
"#8f99d9",
"#9a64d9",
"#b08fd9",
"#64d9d5",
"#8fd9d5",
"#989898",
"#c5c5c5",

[255] = 0,

"#93a1a1",  //Foreground 256
"#3c3b37",  //Background 257
"#93a1a1",  //Default cursor 258
"#93a1a1",  //Default rev cursor 258
"#000000",  //Selection background 259

########################## dx #############################
"#5f5f5f",
"#828282",
"#5f5f00",
"#5f0000",
"#303030",
"#d9d9d9",
"#5f5f5f",
"#828282",
"#5f5f00",
"#7f5f00",
"#2f5f00",
"#5f0000",
"#303030",
"#d9d9d9",
"#989898",
"#c5c5c5",

[255] = 0,

"#93a1a1",  //Foreground 256
"#3c3b37",  //Background 257
"#93a1a1",  //Default cursor 258
"#93a1a1",  //Default rev cursor 258
"#000000",  //Selection background 259


#################### solarized (dark) #########################
"#073642",
"#dc322f",
"#859900",
"#b58900",
"#268bd2",
"#d33682",
"#2aa198",
"#eee8d5",
"#002b36",
"#cb4b16",
"#586e75",
"#657b83",
"#839496",
"#6c71c4",
"#93a1a1",
"#fdf6e3",

 };

unsigned int defaultfg = 12;
unsigned int defaultbg = 8;
static unsigned int defaultcs = 14;
static unsigned int defaultrcs = 15;
