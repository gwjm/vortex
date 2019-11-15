
/* autogenerated by CMake, but edited by hand to not
 * stop with #error when the compiler isn't gcc/clang */

#ifndef POCL_COMPILER_DETECTION_H
#define POCL_COMPILER_DETECTION_H

#ifndef __cplusplus
# define POCL_COMPILER_IS_Intel 0
# define POCL_COMPILER_IS_PathScale 0
# define POCL_COMPILER_IS_Embarcadero 0
# define POCL_COMPILER_IS_Borland 0
# define POCL_COMPILER_IS_Watcom 0
# define POCL_COMPILER_IS_OpenWatcom 0
# define POCL_COMPILER_IS_SunPro 0
# define POCL_COMPILER_IS_HP 0
# define POCL_COMPILER_IS_Compaq 0
# define POCL_COMPILER_IS_zOS 0
# define POCL_COMPILER_IS_XL 0
# define POCL_COMPILER_IS_VisualAge 0
# define POCL_COMPILER_IS_PGI 0
# define POCL_COMPILER_IS_Cray 0
# define POCL_COMPILER_IS_TI 0
# define POCL_COMPILER_IS_Fujitsu 0
# define POCL_COMPILER_IS_TinyCC 0
# define POCL_COMPILER_IS_Bruce 0
# define POCL_COMPILER_IS_SCO 0
# define POCL_COMPILER_IS_AppleClang 0
# define POCL_COMPILER_IS_Clang 0
# define POCL_COMPILER_IS_GNU 0
# define POCL_COMPILER_IS_MSVC 0
# define POCL_COMPILER_IS_ADSP 0
# define POCL_COMPILER_IS_IAR 0
# define POCL_COMPILER_IS_ARMCC 0
# define POCL_COMPILER_IS_SDCC 0
# define POCL_COMPILER_IS_MIPSpro 0

#if defined(__INTEL_COMPILER) || defined(__ICC)
# undef POCL_COMPILER_IS_Intel
# define POCL_COMPILER_IS_Intel 1

#elif defined(__PATHCC__)
# undef POCL_COMPILER_IS_PathScale
# define POCL_COMPILER_IS_PathScale 1

#elif defined(__BORLANDC__) && defined(__CODEGEARC_VERSION__)
# undef POCL_COMPILER_IS_Embarcadero
# define POCL_COMPILER_IS_Embarcadero 1

#elif defined(__BORLANDC__)
# undef POCL_COMPILER_IS_Borland
# define POCL_COMPILER_IS_Borland 1

#elif defined(__WATCOMC__) && __WATCOMC__ < 1200
# undef POCL_COMPILER_IS_Watcom
# define POCL_COMPILER_IS_Watcom 1

#elif defined(__WATCOMC__)
# undef POCL_COMPILER_IS_OpenWatcom
# define POCL_COMPILER_IS_OpenWatcom 1

#elif defined(__SUNPRO_C)
# undef POCL_COMPILER_IS_SunPro
# define POCL_COMPILER_IS_SunPro 1

#elif defined(__HP_cc)
# undef POCL_COMPILER_IS_HP
# define POCL_COMPILER_IS_HP 1

#elif defined(__DECC)
# undef POCL_COMPILER_IS_Compaq
# define POCL_COMPILER_IS_Compaq 1

#elif defined(__IBMC__) && defined(__COMPILER_VER__)
# undef POCL_COMPILER_IS_zOS
# define POCL_COMPILER_IS_zOS 1

#elif defined(__IBMC__) && !defined(__COMPILER_VER__) && __IBMC__ >= 800
# undef POCL_COMPILER_IS_XL
# define POCL_COMPILER_IS_XL 1

#elif defined(__IBMC__) && !defined(__COMPILER_VER__) && __IBMC__ < 800
# undef POCL_COMPILER_IS_VisualAge
# define POCL_COMPILER_IS_VisualAge 1

#elif defined(__PGI)
# undef POCL_COMPILER_IS_PGI
# define POCL_COMPILER_IS_PGI 1

#elif defined(_CRAYC)
# undef POCL_COMPILER_IS_Cray
# define POCL_COMPILER_IS_Cray 1

#elif defined(__TI_COMPILER_VERSION__)
# undef POCL_COMPILER_IS_TI
# define POCL_COMPILER_IS_TI 1

#elif defined(__FUJITSU) || defined(__FCC_VERSION) || defined(__fcc_version)
# undef POCL_COMPILER_IS_Fujitsu
# define POCL_COMPILER_IS_Fujitsu 1

#elif defined(__TINYC__)
# undef POCL_COMPILER_IS_TinyCC
# define POCL_COMPILER_IS_TinyCC 1

#elif defined(__BCC__)
# undef POCL_COMPILER_IS_Bruce
# define POCL_COMPILER_IS_Bruce 1

#elif defined(__SCO_VERSION__)
# undef POCL_COMPILER_IS_SCO
# define POCL_COMPILER_IS_SCO 1

#elif defined(__clang__) && defined(__apple_build_version__)
# undef POCL_COMPILER_IS_AppleClang
# define POCL_COMPILER_IS_AppleClang 1

#elif defined(__clang__)
# undef POCL_COMPILER_IS_Clang
# define POCL_COMPILER_IS_Clang 1

#elif defined(__GNUC__)
# undef POCL_COMPILER_IS_GNU
# define POCL_COMPILER_IS_GNU 1

#elif defined(_MSC_VER)
# undef POCL_COMPILER_IS_MSVC
# define POCL_COMPILER_IS_MSVC 1

#elif defined(__VISUALDSPVERSION__) || defined(__ADSPBLACKFIN__) || defined(__ADSPTS__) || defined(__ADSP21000__)
# undef POCL_COMPILER_IS_ADSP
# define POCL_COMPILER_IS_ADSP 1

#elif defined(__IAR_SYSTEMS_ICC__ ) || defined(__IAR_SYSTEMS_ICC)
# undef POCL_COMPILER_IS_IAR
# define POCL_COMPILER_IS_IAR 1

#elif defined(__ARMCC_VERSION)
# undef POCL_COMPILER_IS_ARMCC
# define POCL_COMPILER_IS_ARMCC 1

#elif defined(SDCC)
# undef POCL_COMPILER_IS_SDCC
# define POCL_COMPILER_IS_SDCC 1

#elif defined(_SGI_COMPILER_VERSION) || defined(_COMPILER_VERSION)
# undef POCL_COMPILER_IS_MIPSpro
# define POCL_COMPILER_IS_MIPSpro 1


#endif

#  if POCL_COMPILER_IS_GNU

#    if (__GNUC__ * 100 + __GNUC_MINOR__) >= 404
#      define POCL_COMPILER_C_FUNCTION_PROTOTYPES 1
#    else
#      define POCL_COMPILER_C_FUNCTION_PROTOTYPES 0
#    endif

#    if (__GNUC__ * 100 + __GNUC_MINOR__) >= 404 && defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L
#      define POCL_COMPILER_C_RESTRICT 1
#    else
#      define POCL_COMPILER_C_RESTRICT 0
#    endif

#    if (__GNUC__ * 100 + __GNUC_MINOR__) >= 406 && defined(__STDC_VERSION__) && __STDC_VERSION__ >= 201000L
#      define POCL_COMPILER_C_STATIC_ASSERT 1
#    else
#      define POCL_COMPILER_C_STATIC_ASSERT 0
#    endif

#    if (__GNUC__ * 100 + __GNUC_MINOR__) >= 404 && defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L
#      define POCL_COMPILER_C_VARIADIC_MACROS 1
#    else
#      define POCL_COMPILER_C_VARIADIC_MACROS 0
#    endif

#  elif POCL_COMPILER_IS_Clang

#    if ((__clang_major__ * 100) + __clang_minor__) >= 304
#      define POCL_COMPILER_C_FUNCTION_PROTOTYPES 1
#    else
#      define POCL_COMPILER_C_FUNCTION_PROTOTYPES 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 304 && defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L
#      define POCL_COMPILER_C_RESTRICT 1
#    else
#      define POCL_COMPILER_C_RESTRICT 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 304 && defined(__STDC_VERSION__) && __STDC_VERSION__ >= 201112L
#      define POCL_COMPILER_C_STATIC_ASSERT 1
#    else
#      define POCL_COMPILER_C_STATIC_ASSERT 0
#    endif

#    if ((__clang_major__ * 100) + __clang_minor__) >= 304 && defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L
#      define POCL_COMPILER_C_VARIADIC_MACROS 1
#    else
#      define POCL_COMPILER_C_VARIADIC_MACROS 0
#    endif

#  else

#      define POCL_COMPILER_C_FUNCTION_PROTOTYPES 0
#      define POCL_COMPILER_C_RESTRICT 0
#      define POCL_COMPILER_C_STATIC_ASSERT 0
#      define POCL_COMPILER_C_VARIADIC_MACROS 0

#  endif

#  if POCL_COMPILER_C_RESTRICT
#    define POCL_RESTRICT restrict
#  else
#    define POCL_RESTRICT
#  endif

#endif

#endif
