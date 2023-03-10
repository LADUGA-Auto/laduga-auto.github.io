/* config.h.in.  Generated from configure.ac by autoheader.  */
#ifndef __CONFIG_H__
#define __CONFIG_H__

/* __BEGIN_DECLS should be used at the beginning of your declarations,
   so that C++ compilers don't mangle their names.  Use __END_DECLS at
   the end of C declarations. */
#undef __BEGIN_DECLS
#undef __END_DECLS
#ifdef __cplusplus
# define __BEGIN_DECLS extern "C" {
# define __END_DECLS }
#else
# define __BEGIN_DECLS
# define __END_DECLS
#endif

#ifndef _GNU_SOURCE
#define _GNU_SOURCE 1
#endif



/* Where the binary files go. */
#define BINARYDIR "c;/DINAMA/Qucs/bin"

/* Where the data files go. */
#define BITMAPDIR "c;/DINAMA/Qucs/share/qucs/bitmaps"

/* Define if debug output should be supported. */
#define DEBUG "/adm/Debug"

/* Where the documentation files go. */
#define DOCDIR "c;/DINAMA/Qucs/share/qucs/docs"

/* Define to 1 if you have the <ieeefp.h> header file. */
#undef HAVE_IEEEFP_H

/* Define to 1 if you have the <inttypes.h> header file. */
#undef HAVE_INTTYPES_H

/* Define to 1 if you have the <memory.h> header file. */
#undef HAVE_MEMORY_H

/* Define to 1 if you have the <stdint.h> header file. */
#undef HAVE_STDINT_H

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H

/* Define to 1 if you have the <strings.h> header file. */
#undef HAVE_STRINGS_H

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H

/* Define to 1 if you have the <sys/stat.h> header file. */
#undef HAVE_SYS_STAT_H

/* Define to 1 if you have the <sys/types.h> header file. */
#undef HAVE_SYS_TYPES_H

/* Define to 1 if you have the <unistd.h> header file. */
#undef HAVE_UNISTD_H

/* Where the language files go. */
#define LANGUAGEDIR "c;/DINAMA/Qucs/share/qucs/lang"

/* Where the component library files go. */
#define LIBRARYDIR "c;/DINAMA/Qucs/share/qucs/library"

/* Define if debug code should be suppressed. */
#undef NDEBUG

/* Define to the address where bug reports for this package should be sent. */
#undef PACKAGE_BUGREPORT

/* Define to the full name of this package. */
#define PACKAGE_NAME "Qucs"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "Qucs 4.4"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "Qucs.4.4"

/* Define to the version of this package. */
#define PACKAGE_VERSION "4.4.0"

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define to 1 if the X Window System is missing or not being used. */
#undef X_DISPLAY_MISSING

#endif