/* user and group to drop privileges to */
static const char *user  = "harry";
static const char *group = "users";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#1a1b26",     /* after initialization */
	[INPUT] =  "#444b6a",   /* during input */
	[FAILED] = "#f7769e",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
