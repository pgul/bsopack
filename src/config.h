/* $Id$ */

#ifndef _CONFIG_H
#define _CONFIG_H

#define VER_MAJOR 1
#define VER_MINOR 9
#define VER_PATCH 0
#define VER_BRANCH BRANCH_CURRENT

#include <fidoconf/fidoconf.h>

#define MAXPATH 256


extern s_fidoconfig *fidoConfig;
extern char *logFileName;
extern int enable_quiet;
extern int enable_debug;
extern char *fidoConfigFile;
extern char *VERSION;

void getConfig();
void freeConfig();
void getOpts(int argc, char **argv);

#endif
