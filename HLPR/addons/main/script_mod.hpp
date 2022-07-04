#define MAINPREFIX x
#define MODFOLDER HLPR
#ifndef PREFIX
    #define PREFIX HLPR
#endif

#include "script_version.hpp"
#define VERSION MAJOR.MINOR.PATCHLVL.BUILD
#define VERSION_AR MAJOR,MINOR,PATCHLVL,BUILD

#define REQUIRED_VERSION 2.06

#ifdef COMPONENT_BEAUTIFIED
    #define COMPONENT_NAME QUOTE(PREFIX - COMPONENT_BEAUTIFIED)
#else
    #define COMPONENT_NAME QUOTE(PREFIX - COMPONENT)
#endif

#ifndef AUTHOR
    #define AUTHOR "KiloSwiss"
#endif
#ifndef AUTHORS
// sepperate authors with a comma
    #define AUTHORS "KiloSwiss, PulsarNeutronStar"
#endif

#include "script_macros.hpp"

#define PATHTOFOLDER_SYS(var1,var2,var3) \MAINPREFIX\##var1\SUBPREFIX\##var2\##var3
#define PATHTOFOLDER(var1) PATHTOFOLDER_SYS(MODFOLDER,COMPONENT,var1)
#define QPATHTOFOLDER(var1) QUOTE(PATHTOFOLDER(var1))

#define EPATHTOFOLDER(var1,var2) PATHTOFOLDER_SYS(MODFOLDER,var1,var2)
#define EQPATHTOFOLDER(var1,var2) QUOTE(EPATHTOFOLDER(var1,var2))
