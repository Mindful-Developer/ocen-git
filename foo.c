# 0 "out.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "out.c"
# 1 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stdarg.h" 3 4

# 40 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 103 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stdarg.h" 3 4
typedef __gnuc_va_list va_list;
# 2 "out.c" 2
# 1 "/usr/include/string.h" 1 3 4
# 26 "/usr/include/string.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 33 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 394 "/usr/include/features.h" 3 4
# 1 "/usr/include/features-time64.h" 1 3 4
# 20 "/usr/include/features-time64.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 21 "/usr/include/features-time64.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/timesize.h" 1 3 4
# 19 "/usr/include/x86_64-linux-gnu/bits/timesize.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 20 "/usr/include/x86_64-linux-gnu/bits/timesize.h" 2 3 4
# 22 "/usr/include/features-time64.h" 2 3 4
# 395 "/usr/include/features.h" 2 3 4
# 502 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 1 3 4
# 576 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 577 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/long-double.h" 1 3 4
# 578 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 503 "/usr/include/features.h" 2 3 4
# 526 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs-64.h" 1 3 4
# 11 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 2 3 4
# 527 "/usr/include/features.h" 2 3 4
# 34 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 2 3 4
# 27 "/usr/include/string.h" 2 3 4






# 1 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 1 3 4
# 214 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 34 "/usr/include/string.h" 2 3 4
# 43 "/usr/include/string.h" 3 4
extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
       size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, const void *__src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));





extern void *memccpy (void *__restrict __dest, const void *__restrict __src,
        int __c, size_t __n)
    __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) __attribute__ ((__access__ (__write_only__, 1, 4)));




extern void *memset (void *__s, int __c, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int memcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 80 "/usr/include/string.h" 3 4
extern int __memcmpeq (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 107 "/usr/include/string.h" 3 4
extern void *memchr (const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 141 "/usr/include/string.h" 3 4
extern char *strcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strcat (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncat (char *__restrict __dest, const char *__restrict __src,
        size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int strncmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcoll (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern size_t strxfrm (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
    __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) __attribute__ ((__access__ (__write_only__, 1, 3)));



# 1 "/usr/include/x86_64-linux-gnu/bits/types/locale_t.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/types/locale_t.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/__locale_t.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/types/__locale_t.h" 3 4
struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
};

typedef struct __locale_struct *__locale_t;
# 23 "/usr/include/x86_64-linux-gnu/bits/types/locale_t.h" 2 3 4

typedef __locale_t locale_t;
# 173 "/usr/include/string.h" 2 3 4


extern int strcoll_l (const char *__s1, const char *__s2, locale_t __l)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));


extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
    locale_t __l) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)))
     __attribute__ ((__access__ (__write_only__, 1, 3)));





extern char *strdup (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));






extern char *strndup (const char *__string, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
# 246 "/usr/include/string.h" 3 4
extern char *strchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 273 "/usr/include/string.h" 3 4
extern char *strrchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 286 "/usr/include/string.h" 3 4
extern char *strchrnul (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern size_t strcspn (const char *__s, const char *__reject)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 323 "/usr/include/string.h" 3 4
extern char *strpbrk (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 350 "/usr/include/string.h" 3 4
extern char *strstr (const char *__haystack, const char *__needle)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strtok (char *__restrict __s, const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



extern char *__strtok_r (char *__restrict __s,
    const char *__restrict __delim,
    char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));

extern char *strtok_r (char *__restrict __s, const char *__restrict __delim,
         char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
# 380 "/usr/include/string.h" 3 4
extern char *strcasestr (const char *__haystack, const char *__needle)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));







extern void *memmem (const void *__haystack, size_t __haystacklen,
       const void *__needle, size_t __needlelen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 3)))
    __attribute__ ((__access__ (__read_only__, 1, 2)))
    __attribute__ ((__access__ (__read_only__, 3, 4)));



extern void *__mempcpy (void *__restrict __dest,
   const void *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern void *mempcpy (void *__restrict __dest,
        const void *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern size_t strlen (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern size_t strnlen (const char *__string, size_t __maxlen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern char *strerror (int __errnum) __attribute__ ((__nothrow__ , __leaf__));
# 432 "/usr/include/string.h" 3 4
extern int strerror_r (int __errnum, char *__buf, size_t __buflen) __asm__ ("" "__xpg_strerror_r") __attribute__ ((__nothrow__ , __leaf__))

                        __attribute__ ((__nonnull__ (2)))
    __attribute__ ((__access__ (__write_only__, 2, 3)));
# 458 "/usr/include/string.h" 3 4
extern char *strerror_l (int __errnum, locale_t __l) __attribute__ ((__nothrow__ , __leaf__));



# 1 "/usr/include/strings.h" 1 3 4
# 23 "/usr/include/strings.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 1 3 4
# 24 "/usr/include/strings.h" 2 3 4










extern int bcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern void bcopy (const void *__src, void *__dest, size_t __n)
  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 68 "/usr/include/strings.h" 3 4
extern char *index (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 96 "/usr/include/strings.h" 3 4
extern char *rindex (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));






extern int ffs (int __i) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern int ffsl (long int __l) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
__extension__ extern int ffsll (long long int __ll)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int strcasecmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));






extern int strcasecmp_l (const char *__s1, const char *__s2, locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));



extern int strncasecmp_l (const char *__s1, const char *__s2,
     size_t __n, locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 4)));



# 463 "/usr/include/string.h" 2 3 4



extern void explicit_bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)))
    __attribute__ ((__access__ (__write_only__, 1, 2)));



extern char *strsep (char **__restrict __stringp,
       const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strsignal (int __sig) __attribute__ ((__nothrow__ , __leaf__));
# 489 "/usr/include/string.h" 3 4
extern char *__stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern char *__stpncpy (char *__restrict __dest,
   const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern size_t strlcpy (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) __attribute__ ((__access__ (__write_only__, 1, 3)));



extern size_t strlcat (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) __attribute__ ((__access__ (__read_write__, 1, 3)));
# 552 "/usr/include/string.h" 3 4

# 3 "out.c" 2
# 1 "/usr/include/ctype.h" 1 3 4
# 26 "/usr/include/ctype.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/timesize.h" 1 3 4
# 19 "/usr/include/x86_64-linux-gnu/bits/timesize.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 20 "/usr/include/x86_64-linux-gnu/bits/timesize.h" 2 3 4
# 29 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;






typedef __int8_t __int_least8_t;
typedef __uint8_t __uint_least8_t;
typedef __int16_t __int_least16_t;
typedef __uint16_t __uint_least16_t;
typedef __int32_t __int_least32_t;
typedef __uint32_t __uint_least32_t;
typedef __int64_t __int_least64_t;
typedef __uint64_t __uint_least64_t;



typedef long int __quad_t;
typedef unsigned long int __u_quad_t;







typedef long int __intmax_t;
typedef unsigned long int __uintmax_t;
# 141 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" 1 3 4
# 142 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/time64.h" 1 3 4
# 143 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;
typedef long int __suseconds64_t;

typedef int __daddr_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void * __timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;


typedef long int __fsword_t;

typedef long int __ssize_t;


typedef long int __syscall_slong_t;

typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;




typedef int __sig_atomic_t;
# 27 "/usr/include/ctype.h" 2 3 4


# 39 "/usr/include/ctype.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/endian.h" 1 3 4
# 35 "/usr/include/x86_64-linux-gnu/bits/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/endianness.h" 1 3 4
# 36 "/usr/include/x86_64-linux-gnu/bits/endian.h" 2 3 4
# 40 "/usr/include/ctype.h" 2 3 4






enum
{
  _ISupper = ((0) < 8 ? ((1 << (0)) << 8) : ((1 << (0)) >> 8)),
  _ISlower = ((1) < 8 ? ((1 << (1)) << 8) : ((1 << (1)) >> 8)),
  _ISalpha = ((2) < 8 ? ((1 << (2)) << 8) : ((1 << (2)) >> 8)),
  _ISdigit = ((3) < 8 ? ((1 << (3)) << 8) : ((1 << (3)) >> 8)),
  _ISxdigit = ((4) < 8 ? ((1 << (4)) << 8) : ((1 << (4)) >> 8)),
  _ISspace = ((5) < 8 ? ((1 << (5)) << 8) : ((1 << (5)) >> 8)),
  _ISprint = ((6) < 8 ? ((1 << (6)) << 8) : ((1 << (6)) >> 8)),
  _ISgraph = ((7) < 8 ? ((1 << (7)) << 8) : ((1 << (7)) >> 8)),
  _ISblank = ((8) < 8 ? ((1 << (8)) << 8) : ((1 << (8)) >> 8)),
  _IScntrl = ((9) < 8 ? ((1 << (9)) << 8) : ((1 << (9)) >> 8)),
  _ISpunct = ((10) < 8 ? ((1 << (10)) << 8) : ((1 << (10)) >> 8)),
  _ISalnum = ((11) < 8 ? ((1 << (11)) << 8) : ((1 << (11)) >> 8))
};
# 79 "/usr/include/ctype.h" 3 4
extern const unsigned short int **__ctype_b_loc (void)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern const __int32_t **__ctype_tolower_loc (void)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern const __int32_t **__ctype_toupper_loc (void)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
# 108 "/usr/include/ctype.h" 3 4
extern int isalnum (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isalpha (int) __attribute__ ((__nothrow__ , __leaf__));
extern int iscntrl (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isdigit (int) __attribute__ ((__nothrow__ , __leaf__));
extern int islower (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isgraph (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isprint (int) __attribute__ ((__nothrow__ , __leaf__));
extern int ispunct (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isspace (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isupper (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isxdigit (int) __attribute__ ((__nothrow__ , __leaf__));



extern int tolower (int __c) __attribute__ ((__nothrow__ , __leaf__));


extern int toupper (int __c) __attribute__ ((__nothrow__ , __leaf__));




extern int isblank (int) __attribute__ ((__nothrow__ , __leaf__));
# 142 "/usr/include/ctype.h" 3 4
extern int isascii (int __c) __attribute__ ((__nothrow__ , __leaf__));



extern int toascii (int __c) __attribute__ ((__nothrow__ , __leaf__));



extern int _toupper (int) __attribute__ ((__nothrow__ , __leaf__));
extern int _tolower (int) __attribute__ ((__nothrow__ , __leaf__));
# 251 "/usr/include/ctype.h" 3 4
extern int isalnum_l (int, locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isalpha_l (int, locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int iscntrl_l (int, locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isdigit_l (int, locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int islower_l (int, locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isgraph_l (int, locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isprint_l (int, locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int ispunct_l (int, locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isspace_l (int, locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isupper_l (int, locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isxdigit_l (int, locale_t) __attribute__ ((__nothrow__ , __leaf__));

extern int isblank_l (int, locale_t) __attribute__ ((__nothrow__ , __leaf__));



extern int __tolower_l (int __c, locale_t __l) __attribute__ ((__nothrow__ , __leaf__));
extern int tolower_l (int __c, locale_t __l) __attribute__ ((__nothrow__ , __leaf__));


extern int __toupper_l (int __c, locale_t __l) __attribute__ ((__nothrow__ , __leaf__));
extern int toupper_l (int __c, locale_t __l) __attribute__ ((__nothrow__ , __leaf__));
# 327 "/usr/include/ctype.h" 3 4

# 4 "out.c" 2
# 1 "/usr/include/time.h" 1 3 4
# 29 "/usr/include/time.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 1 3 4
# 30 "/usr/include/time.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/time.h" 1 3 4
# 34 "/usr/include/time.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/types/clock_t.h" 1 3 4






typedef __clock_t clock_t;
# 38 "/usr/include/time.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/time_t.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/bits/types/time_t.h" 3 4
typedef __time_t time_t;
# 39 "/usr/include/time.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/struct_tm.h" 1 3 4






struct tm
{
  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
  int tm_yday;
  int tm_isdst;


  long int tm_gmtoff;
  const char *tm_zone;




};
# 40 "/usr/include/time.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h" 1 3 4
# 11 "/usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h" 3 4
struct timespec
{



  __time_t tv_sec;




  __syscall_slong_t tv_nsec;
# 31 "/usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h" 3 4
};
# 43 "/usr/include/time.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/types/clockid_t.h" 1 3 4






typedef __clockid_t clockid_t;
# 47 "/usr/include/time.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/timer_t.h" 1 3 4






typedef __timer_t timer_t;
# 48 "/usr/include/time.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/struct_itimerspec.h" 1 3 4







struct itimerspec
  {
    struct timespec it_interval;
    struct timespec it_value;
  };
# 49 "/usr/include/time.h" 2 3 4
struct sigevent;




typedef __pid_t pid_t;
# 68 "/usr/include/time.h" 3 4




extern clock_t clock (void) __attribute__ ((__nothrow__ , __leaf__));



extern time_t time (time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));


extern double difftime (time_t __time1, time_t __time0)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern time_t mktime (struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));
# 100 "/usr/include/time.h" 3 4
extern size_t strftime (char *__restrict __s, size_t __maxsize,
   const char *__restrict __format,
   const struct tm *__restrict __tp)
   __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3, 4)));
# 117 "/usr/include/time.h" 3 4
extern size_t strftime_l (char *__restrict __s, size_t __maxsize,
     const char *__restrict __format,
     const struct tm *__restrict __tp,
     locale_t __loc) __attribute__ ((__nothrow__ , __leaf__));
# 133 "/usr/include/time.h" 3 4
extern struct tm *gmtime (const time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));



extern struct tm *localtime (const time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));
# 155 "/usr/include/time.h" 3 4
extern struct tm *gmtime_r (const time_t *__restrict __timer,
       struct tm *__restrict __tp) __attribute__ ((__nothrow__ , __leaf__));



extern struct tm *localtime_r (const time_t *__restrict __timer,
          struct tm *__restrict __tp) __attribute__ ((__nothrow__ , __leaf__));
# 180 "/usr/include/time.h" 3 4
extern char *asctime (const struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));



extern char *ctime (const time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));
# 198 "/usr/include/time.h" 3 4
extern char *asctime_r (const struct tm *__restrict __tp,
   char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));



extern char *ctime_r (const time_t *__restrict __timer,
        char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));
# 218 "/usr/include/time.h" 3 4
extern char *__tzname[2];
extern int __daylight;
extern long int __timezone;




extern char *tzname[2];



extern void tzset (void) __attribute__ ((__nothrow__ , __leaf__));



extern int daylight;
extern long int timezone;
# 247 "/usr/include/time.h" 3 4
extern time_t timegm (struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));
# 264 "/usr/include/time.h" 3 4
extern time_t timelocal (struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));







extern int dysize (int __year) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
# 282 "/usr/include/time.h" 3 4
extern int nanosleep (const struct timespec *__requested_time,
        struct timespec *__remaining);


extern int clock_getres (clockid_t __clock_id, struct timespec *__res) __attribute__ ((__nothrow__ , __leaf__));


extern int clock_gettime (clockid_t __clock_id, struct timespec *__tp)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));


extern int clock_settime (clockid_t __clock_id, const struct timespec *__tp)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
# 324 "/usr/include/time.h" 3 4
extern int clock_nanosleep (clockid_t __clock_id, int __flags,
       const struct timespec *__req,
       struct timespec *__rem);
# 339 "/usr/include/time.h" 3 4
extern int clock_getcpuclockid (pid_t __pid, clockid_t *__clock_id) __attribute__ ((__nothrow__ , __leaf__));




extern int timer_create (clockid_t __clock_id,
    struct sigevent *__restrict __evp,
    timer_t *__restrict __timerid) __attribute__ ((__nothrow__ , __leaf__));


extern int timer_delete (timer_t __timerid) __attribute__ ((__nothrow__ , __leaf__));



extern int timer_settime (timer_t __timerid, int __flags,
     const struct itimerspec *__restrict __value,
     struct itimerspec *__restrict __ovalue) __attribute__ ((__nothrow__ , __leaf__));


extern int timer_gettime (timer_t __timerid, struct itimerspec *__value)
     __attribute__ ((__nothrow__ , __leaf__));
# 377 "/usr/include/time.h" 3 4
extern int timer_getoverrun (timer_t __timerid) __attribute__ ((__nothrow__ , __leaf__));






extern int timespec_get (struct timespec *__ts, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 453 "/usr/include/time.h" 3 4

# 5 "out.c" 2
# 1 "/usr/include/zlib.h" 1 3 4
# 34 "/usr/include/zlib.h" 3 4
# 1 "/usr/include/zconf.h" 1 3 4
# 254 "/usr/include/zconf.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 1 3 4
# 145 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 329 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 3 4
typedef int wchar_t;
# 425 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 3 4
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
# 436 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 3 4
} max_align_t;
# 255 "/usr/include/zconf.h" 2 3 4
     typedef size_t z_size_t;
# 401 "/usr/include/zconf.h" 3 4
typedef unsigned char Byte;

typedef unsigned int uInt;
typedef unsigned long uLong;





   typedef Byte Bytef;

typedef char charf;
typedef int intf;
typedef uInt uIntf;
typedef uLong uLongf;


   typedef void const *voidpc;
   typedef void *voidpf;
   typedef void *voidp;







# 1 "/usr/lib/gcc/x86_64-linux-gnu/13/include/limits.h" 1 3 4
# 34 "/usr/lib/gcc/x86_64-linux-gnu/13/include/limits.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/13/include/syslimits.h" 1 3 4






# 1 "/usr/lib/gcc/x86_64-linux-gnu/13/include/limits.h" 1 3 4
# 205 "/usr/lib/gcc/x86_64-linux-gnu/13/include/limits.h" 3 4
# 1 "/usr/include/limits.h" 1 3 4
# 26 "/usr/include/limits.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 27 "/usr/include/limits.h" 2 3 4
# 195 "/usr/include/limits.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 2 3 4
# 161 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" 1 3 4
# 38 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" 3 4
# 1 "/usr/include/linux/limits.h" 1 3 4
# 39 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" 2 3 4
# 81 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/pthread_stack_min-dynamic.h" 1 3 4
# 29 "/usr/include/x86_64-linux-gnu/bits/pthread_stack_min-dynamic.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/pthread_stack_min.h" 1 3 4
# 30 "/usr/include/x86_64-linux-gnu/bits/pthread_stack_min-dynamic.h" 2 3 4
# 82 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" 2 3 4
# 162 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 2 3 4
# 196 "/usr/include/limits.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/posix2_lim.h" 1 3 4
# 200 "/usr/include/limits.h" 2 3 4
# 206 "/usr/lib/gcc/x86_64-linux-gnu/13/include/limits.h" 2 3 4
# 8 "/usr/lib/gcc/x86_64-linux-gnu/13/include/syslimits.h" 2 3 4
# 35 "/usr/lib/gcc/x86_64-linux-gnu/13/include/limits.h" 2 3 4
# 429 "/usr/include/zconf.h" 2 3 4
# 439 "/usr/include/zconf.h" 3 4
   typedef unsigned z_crc_t;
# 454 "/usr/include/zconf.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4






typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;


typedef __loff_t loff_t;




typedef __ino_t ino_t;
# 59 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;





typedef __off_t off_t;
# 103 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __id_t id_t;




typedef __ssize_t ssize_t;





typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;
# 144 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 1 3 4
# 145 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;




# 1 "/usr/include/x86_64-linux-gnu/bits/stdint-intn.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/stdint-intn.h" 3 4
typedef __int8_t int8_t;
typedef __int16_t int16_t;
typedef __int32_t int32_t;
typedef __int64_t int64_t;
# 156 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4


typedef __uint8_t u_int8_t;
typedef __uint16_t u_int16_t;
typedef __uint32_t u_int32_t;
typedef __uint64_t u_int64_t;


typedef int register_t __attribute__ ((__mode__ (__word__)));
# 176 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 35 "/usr/include/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 1 3 4
# 33 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
static __inline __uint16_t
__bswap_16 (__uint16_t __bsx)
{

  return __builtin_bswap16 (__bsx);



}






static __inline __uint32_t
__bswap_32 (__uint32_t __bsx)
{

  return __builtin_bswap32 (__bsx);



}
# 69 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
__extension__ static __inline __uint64_t
__bswap_64 (__uint64_t __bsx)
{

  return __builtin_bswap64 (__bsx);



}
# 36 "/usr/include/endian.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/uintn-identity.h" 1 3 4
# 32 "/usr/include/x86_64-linux-gnu/bits/uintn-identity.h" 3 4
static __inline __uint16_t
__uint16_identity (__uint16_t __x)
{
  return __x;
}

static __inline __uint32_t
__uint32_identity (__uint32_t __x)
{
  return __x;
}

static __inline __uint64_t
__uint64_identity (__uint64_t __x)
{
  return __x;
}
# 37 "/usr/include/endian.h" 2 3 4
# 177 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/sys/select.h" 1 3 4
# 30 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/select.h" 1 3 4
# 31 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/types/sigset_t.h" 1 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h" 1 3 4




typedef struct
{
  unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
} __sigset_t;
# 5 "/usr/include/x86_64-linux-gnu/bits/types/sigset_t.h" 2 3 4


typedef __sigset_t sigset_t;
# 34 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h" 1 3 4







struct timeval
{




  __time_t tv_sec;
  __suseconds_t tv_usec;

};
# 38 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4





typedef __suseconds_t suseconds_t;





typedef long int __fd_mask;
# 59 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
typedef struct
  {






    __fd_mask __fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];


  } fd_set;






typedef __fd_mask fd_mask;
# 91 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4

# 102 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);
# 127 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);
# 153 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4

# 180 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4





typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 227 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 1 3 4
# 44 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h" 1 3 4
# 21 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h" 2 3 4
# 45 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/atomic_wide_counter.h" 1 3 4
# 25 "/usr/include/x86_64-linux-gnu/bits/atomic_wide_counter.h" 3 4
typedef union
{
  __extension__ unsigned long long int __value64;
  struct
  {
    unsigned int __low;
    unsigned int __high;
  } __value32;
} __atomic_wide_counter;
# 47 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 2 3 4




typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;

typedef struct __pthread_internal_slist
{
  struct __pthread_internal_slist *__next;
} __pthread_slist_t;
# 76 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/struct_mutex.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/struct_mutex.h" 3 4
struct __pthread_mutex_s
{
  int __lock;
  unsigned int __count;
  int __owner;

  unsigned int __nusers;



  int __kind;

  short __spins;
  short __elision;
  __pthread_list_t __list;
# 53 "/usr/include/x86_64-linux-gnu/bits/struct_mutex.h" 3 4
};
# 77 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 2 3 4
# 89 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/struct_rwlock.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/struct_rwlock.h" 3 4
struct __pthread_rwlock_arch_t
{
  unsigned int __readers;
  unsigned int __writers;
  unsigned int __wrphase_futex;
  unsigned int __writers_futex;
  unsigned int __pad3;
  unsigned int __pad4;

  int __cur_writer;
  int __shared;
  signed char __rwelision;




  unsigned char __pad1[7];


  unsigned long int __pad2;


  unsigned int __flags;
# 55 "/usr/include/x86_64-linux-gnu/bits/struct_rwlock.h" 3 4
};
# 90 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 2 3 4




struct __pthread_cond_s
{
  __atomic_wide_counter __wseq;
  __atomic_wide_counter __g1_start;
  unsigned int __g_refs[2] ;
  unsigned int __g_size[2];
  unsigned int __g1_orig_size;
  unsigned int __wrefs;
  unsigned int __g_signals[2];
};

typedef unsigned int __tss_t;
typedef unsigned long int __thrd_t;

typedef struct
{
  int __data ;
} __once_flag;
# 24 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 2 3 4



typedef unsigned long int pthread_t;




typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;




typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;


union pthread_attr_t
{
  char __size[56];
  long int __align;
};

typedef union pthread_attr_t pthread_attr_t;




typedef union
{
  struct __pthread_mutex_s __data;
  char __size[40];
  long int __align;
} pthread_mutex_t;


typedef union
{
  struct __pthread_cond_s __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;





typedef union
{
  struct __pthread_rwlock_arch_t __data;
  char __size[56];
  long int __align;
} pthread_rwlock_t;

typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;




typedef union
{
  char __size[32];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;
# 228 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4



# 455 "/usr/include/zconf.h" 2 3 4
# 492 "/usr/include/zconf.h" 3 4
# 1 "/usr/include/unistd.h" 1 3 4
# 27 "/usr/include/unistd.h" 3 4

# 202 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/posix_opt.h" 1 3 4
# 203 "/usr/include/unistd.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/environments.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/environments.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/environments.h" 2 3 4
# 207 "/usr/include/unistd.h" 2 3 4
# 226 "/usr/include/unistd.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 1 3 4
# 227 "/usr/include/unistd.h" 2 3 4
# 255 "/usr/include/unistd.h" 3 4
typedef __useconds_t useconds_t;
# 267 "/usr/include/unistd.h" 3 4
typedef __intptr_t intptr_t;






typedef __socklen_t socklen_t;
# 287 "/usr/include/unistd.h" 3 4
extern int access (const char *__name, int __type) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 309 "/usr/include/unistd.h" 3 4
extern int faccessat (int __fd, const char *__file, int __type, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) ;
# 339 "/usr/include/unistd.h" 3 4
extern __off_t lseek (int __fd, __off_t __offset, int __whence) __attribute__ ((__nothrow__ , __leaf__));
# 358 "/usr/include/unistd.h" 3 4
extern int close (int __fd);




extern void closefrom (int __lowfd) __attribute__ ((__nothrow__ , __leaf__));







extern ssize_t read (int __fd, void *__buf, size_t __nbytes)
    __attribute__ ((__access__ (__write_only__, 2, 3)));





extern ssize_t write (int __fd, const void *__buf, size_t __n)
    __attribute__ ((__access__ (__read_only__, 2, 3)));
# 389 "/usr/include/unistd.h" 3 4
extern ssize_t pread (int __fd, void *__buf, size_t __nbytes,
        __off_t __offset)
    __attribute__ ((__access__ (__write_only__, 2, 3)));






extern ssize_t pwrite (int __fd, const void *__buf, size_t __n,
         __off_t __offset)
    __attribute__ ((__access__ (__read_only__, 2, 3)));
# 437 "/usr/include/unistd.h" 3 4
extern int pipe (int __pipedes[2]) __attribute__ ((__nothrow__ , __leaf__)) ;
# 452 "/usr/include/unistd.h" 3 4
extern unsigned int alarm (unsigned int __seconds) __attribute__ ((__nothrow__ , __leaf__));
# 464 "/usr/include/unistd.h" 3 4
extern unsigned int sleep (unsigned int __seconds);







extern __useconds_t ualarm (__useconds_t __value, __useconds_t __interval)
     __attribute__ ((__nothrow__ , __leaf__));






extern int usleep (__useconds_t __useconds);
# 489 "/usr/include/unistd.h" 3 4
extern int pause (void);



extern int chown (const char *__file, __uid_t __owner, __gid_t __group)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;



extern int fchown (int __fd, __uid_t __owner, __gid_t __group) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int lchown (const char *__file, __uid_t __owner, __gid_t __group)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;






extern int fchownat (int __fd, const char *__file, __uid_t __owner,
       __gid_t __group, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) ;



extern int chdir (const char *__path) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;



extern int fchdir (int __fd) __attribute__ ((__nothrow__ , __leaf__)) ;
# 531 "/usr/include/unistd.h" 3 4
extern char *getcwd (char *__buf, size_t __size) __attribute__ ((__nothrow__ , __leaf__)) ;
# 545 "/usr/include/unistd.h" 3 4
extern char *getwd (char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__deprecated__))
    __attribute__ ((__access__ (__write_only__, 1)));




extern int dup (int __fd) __attribute__ ((__nothrow__ , __leaf__)) ;


extern int dup2 (int __fd, int __fd2) __attribute__ ((__nothrow__ , __leaf__));
# 564 "/usr/include/unistd.h" 3 4
extern char **__environ;







extern int execve (const char *__path, char *const __argv[],
     char *const __envp[]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern int fexecve (int __fd, char *const __argv[], char *const __envp[])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));




extern int execv (const char *__path, char *const __argv[])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int execle (const char *__path, const char *__arg, ...)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int execl (const char *__path, const char *__arg, ...)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int execvp (const char *__file, char *const __argv[])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern int execlp (const char *__file, const char *__arg, ...)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
# 619 "/usr/include/unistd.h" 3 4
extern int nice (int __inc) __attribute__ ((__nothrow__ , __leaf__)) ;




extern void _exit (int __status) __attribute__ ((__noreturn__));





# 1 "/usr/include/x86_64-linux-gnu/bits/confname.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3 4
enum
  {
    _PC_LINK_MAX,

    _PC_MAX_CANON,

    _PC_MAX_INPUT,

    _PC_NAME_MAX,

    _PC_PATH_MAX,

    _PC_PIPE_BUF,

    _PC_CHOWN_RESTRICTED,

    _PC_NO_TRUNC,

    _PC_VDISABLE,

    _PC_SYNC_IO,

    _PC_ASYNC_IO,

    _PC_PRIO_IO,

    _PC_SOCK_MAXBUF,

    _PC_FILESIZEBITS,

    _PC_REC_INCR_XFER_SIZE,

    _PC_REC_MAX_XFER_SIZE,

    _PC_REC_MIN_XFER_SIZE,

    _PC_REC_XFER_ALIGN,

    _PC_ALLOC_SIZE_MIN,

    _PC_SYMLINK_MAX,

    _PC_2_SYMLINKS

  };


enum
  {
    _SC_ARG_MAX,

    _SC_CHILD_MAX,

    _SC_CLK_TCK,

    _SC_NGROUPS_MAX,

    _SC_OPEN_MAX,

    _SC_STREAM_MAX,

    _SC_TZNAME_MAX,

    _SC_JOB_CONTROL,

    _SC_SAVED_IDS,

    _SC_REALTIME_SIGNALS,

    _SC_PRIORITY_SCHEDULING,

    _SC_TIMERS,

    _SC_ASYNCHRONOUS_IO,

    _SC_PRIORITIZED_IO,

    _SC_SYNCHRONIZED_IO,

    _SC_FSYNC,

    _SC_MAPPED_FILES,

    _SC_MEMLOCK,

    _SC_MEMLOCK_RANGE,

    _SC_MEMORY_PROTECTION,

    _SC_MESSAGE_PASSING,

    _SC_SEMAPHORES,

    _SC_SHARED_MEMORY_OBJECTS,

    _SC_AIO_LISTIO_MAX,

    _SC_AIO_MAX,

    _SC_AIO_PRIO_DELTA_MAX,

    _SC_DELAYTIMER_MAX,

    _SC_MQ_OPEN_MAX,

    _SC_MQ_PRIO_MAX,

    _SC_VERSION,

    _SC_PAGESIZE,


    _SC_RTSIG_MAX,

    _SC_SEM_NSEMS_MAX,

    _SC_SEM_VALUE_MAX,

    _SC_SIGQUEUE_MAX,

    _SC_TIMER_MAX,




    _SC_BC_BASE_MAX,

    _SC_BC_DIM_MAX,

    _SC_BC_SCALE_MAX,

    _SC_BC_STRING_MAX,

    _SC_COLL_WEIGHTS_MAX,

    _SC_EQUIV_CLASS_MAX,

    _SC_EXPR_NEST_MAX,

    _SC_LINE_MAX,

    _SC_RE_DUP_MAX,

    _SC_CHARCLASS_NAME_MAX,


    _SC_2_VERSION,

    _SC_2_C_BIND,

    _SC_2_C_DEV,

    _SC_2_FORT_DEV,

    _SC_2_FORT_RUN,

    _SC_2_SW_DEV,

    _SC_2_LOCALEDEF,


    _SC_PII,

    _SC_PII_XTI,

    _SC_PII_SOCKET,

    _SC_PII_INTERNET,

    _SC_PII_OSI,

    _SC_POLL,

    _SC_SELECT,

    _SC_UIO_MAXIOV,

    _SC_IOV_MAX = _SC_UIO_MAXIOV,

    _SC_PII_INTERNET_STREAM,

    _SC_PII_INTERNET_DGRAM,

    _SC_PII_OSI_COTS,

    _SC_PII_OSI_CLTS,

    _SC_PII_OSI_M,

    _SC_T_IOV_MAX,



    _SC_THREADS,

    _SC_THREAD_SAFE_FUNCTIONS,

    _SC_GETGR_R_SIZE_MAX,

    _SC_GETPW_R_SIZE_MAX,

    _SC_LOGIN_NAME_MAX,

    _SC_TTY_NAME_MAX,

    _SC_THREAD_DESTRUCTOR_ITERATIONS,

    _SC_THREAD_KEYS_MAX,

    _SC_THREAD_STACK_MIN,

    _SC_THREAD_THREADS_MAX,

    _SC_THREAD_ATTR_STACKADDR,

    _SC_THREAD_ATTR_STACKSIZE,

    _SC_THREAD_PRIORITY_SCHEDULING,

    _SC_THREAD_PRIO_INHERIT,

    _SC_THREAD_PRIO_PROTECT,

    _SC_THREAD_PROCESS_SHARED,


    _SC_NPROCESSORS_CONF,

    _SC_NPROCESSORS_ONLN,

    _SC_PHYS_PAGES,

    _SC_AVPHYS_PAGES,

    _SC_ATEXIT_MAX,

    _SC_PASS_MAX,


    _SC_XOPEN_VERSION,

    _SC_XOPEN_XCU_VERSION,

    _SC_XOPEN_UNIX,

    _SC_XOPEN_CRYPT,

    _SC_XOPEN_ENH_I18N,

    _SC_XOPEN_SHM,


    _SC_2_CHAR_TERM,

    _SC_2_C_VERSION,

    _SC_2_UPE,


    _SC_XOPEN_XPG2,

    _SC_XOPEN_XPG3,

    _SC_XOPEN_XPG4,


    _SC_CHAR_BIT,

    _SC_CHAR_MAX,

    _SC_CHAR_MIN,

    _SC_INT_MAX,

    _SC_INT_MIN,

    _SC_LONG_BIT,

    _SC_WORD_BIT,

    _SC_MB_LEN_MAX,

    _SC_NZERO,

    _SC_SSIZE_MAX,

    _SC_SCHAR_MAX,

    _SC_SCHAR_MIN,

    _SC_SHRT_MAX,

    _SC_SHRT_MIN,

    _SC_UCHAR_MAX,

    _SC_UINT_MAX,

    _SC_ULONG_MAX,

    _SC_USHRT_MAX,


    _SC_NL_ARGMAX,

    _SC_NL_LANGMAX,

    _SC_NL_MSGMAX,

    _SC_NL_NMAX,

    _SC_NL_SETMAX,

    _SC_NL_TEXTMAX,


    _SC_XBS5_ILP32_OFF32,

    _SC_XBS5_ILP32_OFFBIG,

    _SC_XBS5_LP64_OFF64,

    _SC_XBS5_LPBIG_OFFBIG,


    _SC_XOPEN_LEGACY,

    _SC_XOPEN_REALTIME,

    _SC_XOPEN_REALTIME_THREADS,


    _SC_ADVISORY_INFO,

    _SC_BARRIERS,

    _SC_BASE,

    _SC_C_LANG_SUPPORT,

    _SC_C_LANG_SUPPORT_R,

    _SC_CLOCK_SELECTION,

    _SC_CPUTIME,

    _SC_THREAD_CPUTIME,

    _SC_DEVICE_IO,

    _SC_DEVICE_SPECIFIC,

    _SC_DEVICE_SPECIFIC_R,

    _SC_FD_MGMT,

    _SC_FIFO,

    _SC_PIPE,

    _SC_FILE_ATTRIBUTES,

    _SC_FILE_LOCKING,

    _SC_FILE_SYSTEM,

    _SC_MONOTONIC_CLOCK,

    _SC_MULTI_PROCESS,

    _SC_SINGLE_PROCESS,

    _SC_NETWORKING,

    _SC_READER_WRITER_LOCKS,

    _SC_SPIN_LOCKS,

    _SC_REGEXP,

    _SC_REGEX_VERSION,

    _SC_SHELL,

    _SC_SIGNALS,

    _SC_SPAWN,

    _SC_SPORADIC_SERVER,

    _SC_THREAD_SPORADIC_SERVER,

    _SC_SYSTEM_DATABASE,

    _SC_SYSTEM_DATABASE_R,

    _SC_TIMEOUTS,

    _SC_TYPED_MEMORY_OBJECTS,

    _SC_USER_GROUPS,

    _SC_USER_GROUPS_R,

    _SC_2_PBS,

    _SC_2_PBS_ACCOUNTING,

    _SC_2_PBS_LOCATE,

    _SC_2_PBS_MESSAGE,

    _SC_2_PBS_TRACK,

    _SC_SYMLOOP_MAX,

    _SC_STREAMS,

    _SC_2_PBS_CHECKPOINT,


    _SC_V6_ILP32_OFF32,

    _SC_V6_ILP32_OFFBIG,

    _SC_V6_LP64_OFF64,

    _SC_V6_LPBIG_OFFBIG,


    _SC_HOST_NAME_MAX,

    _SC_TRACE,

    _SC_TRACE_EVENT_FILTER,

    _SC_TRACE_INHERIT,

    _SC_TRACE_LOG,


    _SC_LEVEL1_ICACHE_SIZE,

    _SC_LEVEL1_ICACHE_ASSOC,

    _SC_LEVEL1_ICACHE_LINESIZE,

    _SC_LEVEL1_DCACHE_SIZE,

    _SC_LEVEL1_DCACHE_ASSOC,

    _SC_LEVEL1_DCACHE_LINESIZE,

    _SC_LEVEL2_CACHE_SIZE,

    _SC_LEVEL2_CACHE_ASSOC,

    _SC_LEVEL2_CACHE_LINESIZE,

    _SC_LEVEL3_CACHE_SIZE,

    _SC_LEVEL3_CACHE_ASSOC,

    _SC_LEVEL3_CACHE_LINESIZE,

    _SC_LEVEL4_CACHE_SIZE,

    _SC_LEVEL4_CACHE_ASSOC,

    _SC_LEVEL4_CACHE_LINESIZE,



    _SC_IPV6 = _SC_LEVEL1_ICACHE_SIZE + 50,

    _SC_RAW_SOCKETS,


    _SC_V7_ILP32_OFF32,

    _SC_V7_ILP32_OFFBIG,

    _SC_V7_LP64_OFF64,

    _SC_V7_LPBIG_OFFBIG,


    _SC_SS_REPL_MAX,


    _SC_TRACE_EVENT_NAME_MAX,

    _SC_TRACE_NAME_MAX,

    _SC_TRACE_SYS_MAX,

    _SC_TRACE_USER_EVENT_MAX,


    _SC_XOPEN_STREAMS,


    _SC_THREAD_ROBUST_PRIO_INHERIT,

    _SC_THREAD_ROBUST_PRIO_PROTECT,


    _SC_MINSIGSTKSZ,


    _SC_SIGSTKSZ

  };


enum
  {
    _CS_PATH,


    _CS_V6_WIDTH_RESTRICTED_ENVS,



    _CS_GNU_LIBC_VERSION,

    _CS_GNU_LIBPTHREAD_VERSION,


    _CS_V5_WIDTH_RESTRICTED_ENVS,



    _CS_V7_WIDTH_RESTRICTED_ENVS,



    _CS_LFS_CFLAGS = 1000,

    _CS_LFS_LDFLAGS,

    _CS_LFS_LIBS,

    _CS_LFS_LINTFLAGS,

    _CS_LFS64_CFLAGS,

    _CS_LFS64_LDFLAGS,

    _CS_LFS64_LIBS,

    _CS_LFS64_LINTFLAGS,


    _CS_XBS5_ILP32_OFF32_CFLAGS = 1100,

    _CS_XBS5_ILP32_OFF32_LDFLAGS,

    _CS_XBS5_ILP32_OFF32_LIBS,

    _CS_XBS5_ILP32_OFF32_LINTFLAGS,

    _CS_XBS5_ILP32_OFFBIG_CFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LDFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LIBS,

    _CS_XBS5_ILP32_OFFBIG_LINTFLAGS,

    _CS_XBS5_LP64_OFF64_CFLAGS,

    _CS_XBS5_LP64_OFF64_LDFLAGS,

    _CS_XBS5_LP64_OFF64_LIBS,

    _CS_XBS5_LP64_OFF64_LINTFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_CFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LDFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LIBS,

    _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS,


    _CS_POSIX_V6_ILP32_OFF32_CFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LIBS,

    _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LIBS,

    _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS,

    _CS_POSIX_V6_LP64_OFF64_CFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LDFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LIBS,

    _CS_POSIX_V6_LP64_OFF64_LINTFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LIBS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS,


    _CS_POSIX_V7_ILP32_OFF32_CFLAGS,

    _CS_POSIX_V7_ILP32_OFF32_LDFLAGS,

    _CS_POSIX_V7_ILP32_OFF32_LIBS,

    _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_LIBS,

    _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS,

    _CS_POSIX_V7_LP64_OFF64_CFLAGS,

    _CS_POSIX_V7_LP64_OFF64_LDFLAGS,

    _CS_POSIX_V7_LP64_OFF64_LIBS,

    _CS_POSIX_V7_LP64_OFF64_LINTFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LIBS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS,


    _CS_V6_ENV,

    _CS_V7_ENV

  };
# 631 "/usr/include/unistd.h" 2 3 4


extern long int pathconf (const char *__path, int __name)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int fpathconf (int __fd, int __name) __attribute__ ((__nothrow__ , __leaf__));


extern long int sysconf (int __name) __attribute__ ((__nothrow__ , __leaf__));



extern size_t confstr (int __name, char *__buf, size_t __len) __attribute__ ((__nothrow__ , __leaf__))
    __attribute__ ((__access__ (__write_only__, 2, 3)));




extern __pid_t getpid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __pid_t getppid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __pid_t getpgrp (void) __attribute__ ((__nothrow__ , __leaf__));


extern __pid_t __getpgid (__pid_t __pid) __attribute__ ((__nothrow__ , __leaf__));

extern __pid_t getpgid (__pid_t __pid) __attribute__ ((__nothrow__ , __leaf__));






extern int setpgid (__pid_t __pid, __pid_t __pgid) __attribute__ ((__nothrow__ , __leaf__));
# 682 "/usr/include/unistd.h" 3 4
extern int setpgrp (void) __attribute__ ((__nothrow__ , __leaf__));






extern __pid_t setsid (void) __attribute__ ((__nothrow__ , __leaf__));



extern __pid_t getsid (__pid_t __pid) __attribute__ ((__nothrow__ , __leaf__));



extern __uid_t getuid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __uid_t geteuid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __gid_t getgid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __gid_t getegid (void) __attribute__ ((__nothrow__ , __leaf__));




extern int getgroups (int __size, __gid_t __list[]) __attribute__ ((__nothrow__ , __leaf__))
    __attribute__ ((__access__ (__write_only__, 2, 1)));
# 722 "/usr/include/unistd.h" 3 4
extern int setuid (__uid_t __uid) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int setreuid (__uid_t __ruid, __uid_t __euid) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int seteuid (__uid_t __uid) __attribute__ ((__nothrow__ , __leaf__)) ;






extern int setgid (__gid_t __gid) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int setregid (__gid_t __rgid, __gid_t __egid) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int setegid (__gid_t __gid) __attribute__ ((__nothrow__ , __leaf__)) ;
# 778 "/usr/include/unistd.h" 3 4
extern __pid_t fork (void) __attribute__ ((__nothrow__));







extern __pid_t vfork (void) __attribute__ ((__nothrow__ , __leaf__));
# 799 "/usr/include/unistd.h" 3 4
extern char *ttyname (int __fd) __attribute__ ((__nothrow__ , __leaf__));



extern int ttyname_r (int __fd, char *__buf, size_t __buflen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)))
     __attribute__ ((__access__ (__write_only__, 2, 3)));



extern int isatty (int __fd) __attribute__ ((__nothrow__ , __leaf__));




extern int ttyslot (void) __attribute__ ((__nothrow__ , __leaf__));




extern int link (const char *__from, const char *__to)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) ;




extern int linkat (int __fromfd, const char *__from, int __tofd,
     const char *__to, int __flags)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4))) ;




extern int symlink (const char *__from, const char *__to)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) ;




extern ssize_t readlink (const char *__restrict __path,
    char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)))
     __attribute__ ((__access__ (__write_only__, 2, 3)));





extern int symlinkat (const char *__from, int __tofd,
        const char *__to) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3))) ;


extern ssize_t readlinkat (int __fd, const char *__restrict __path,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)))
     __attribute__ ((__access__ (__write_only__, 3, 4)));



extern int unlink (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int unlinkat (int __fd, const char *__name, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



extern int rmdir (const char *__path) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern __pid_t tcgetpgrp (int __fd) __attribute__ ((__nothrow__ , __leaf__));


extern int tcsetpgrp (int __fd, __pid_t __pgrp_id) __attribute__ ((__nothrow__ , __leaf__));






extern char *getlogin (void);







extern int getlogin_r (char *__name, size_t __name_len) __attribute__ ((__nonnull__ (1)))
    __attribute__ ((__access__ (__write_only__, 1, 2)));




extern int setlogin (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







# 1 "/usr/include/x86_64-linux-gnu/bits/getopt_posix.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/getopt_posix.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/getopt_core.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/getopt_core.h" 3 4








extern char *optarg;
# 50 "/usr/include/x86_64-linux-gnu/bits/getopt_core.h" 3 4
extern int optind;




extern int opterr;



extern int optopt;
# 91 "/usr/include/x86_64-linux-gnu/bits/getopt_core.h" 3 4
extern int getopt (int ___argc, char *const *___argv, const char *__shortopts)
       __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));


# 28 "/usr/include/x86_64-linux-gnu/bits/getopt_posix.h" 2 3 4


# 49 "/usr/include/x86_64-linux-gnu/bits/getopt_posix.h" 3 4

# 904 "/usr/include/unistd.h" 2 3 4







extern int gethostname (char *__name, size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)))
    __attribute__ ((__access__ (__write_only__, 1, 2)));






extern int sethostname (const char *__name, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__access__ (__read_only__, 1, 2)));



extern int sethostid (long int __id) __attribute__ ((__nothrow__ , __leaf__)) ;





extern int getdomainname (char *__name, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)))
     __attribute__ ((__access__ (__write_only__, 1, 2)));
extern int setdomainname (const char *__name, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__access__ (__read_only__, 1, 2)));




extern int vhangup (void) __attribute__ ((__nothrow__ , __leaf__));


extern int revoke (const char *__file) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;







extern int profil (unsigned short int *__sample_buffer, size_t __size,
     size_t __offset, unsigned int __scale)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int acct (const char *__name) __attribute__ ((__nothrow__ , __leaf__));



extern char *getusershell (void) __attribute__ ((__nothrow__ , __leaf__));
extern void endusershell (void) __attribute__ ((__nothrow__ , __leaf__));
extern void setusershell (void) __attribute__ ((__nothrow__ , __leaf__));





extern int daemon (int __nochdir, int __noclose) __attribute__ ((__nothrow__ , __leaf__)) ;






extern int chroot (const char *__path) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;



extern char *getpass (const char *__prompt) __attribute__ ((__nonnull__ (1)));







extern int fsync (int __fd);
# 1002 "/usr/include/unistd.h" 3 4
extern long int gethostid (void);


extern void sync (void) __attribute__ ((__nothrow__ , __leaf__));





extern int getpagesize (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern int getdtablesize (void) __attribute__ ((__nothrow__ , __leaf__));
# 1026 "/usr/include/unistd.h" 3 4
extern int truncate (const char *__file, __off_t __length)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 1049 "/usr/include/unistd.h" 3 4
extern int ftruncate (int __fd, __off_t __length) __attribute__ ((__nothrow__ , __leaf__)) ;
# 1070 "/usr/include/unistd.h" 3 4
extern int brk (void *__addr) __attribute__ ((__nothrow__ , __leaf__)) ;





extern void *sbrk (intptr_t __delta) __attribute__ ((__nothrow__ , __leaf__));
# 1091 "/usr/include/unistd.h" 3 4
extern long int syscall (long int __sysno, ...) __attribute__ ((__nothrow__ , __leaf__));
# 1114 "/usr/include/unistd.h" 3 4
extern int lockf (int __fd, int __cmd, __off_t __len) ;
# 1150 "/usr/include/unistd.h" 3 4
extern int fdatasync (int __fildes);
# 1162 "/usr/include/unistd.h" 3 4
extern char *crypt (const char *__key, const char *__salt)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
# 1201 "/usr/include/unistd.h" 3 4
int getentropy (void *__buffer, size_t __length)
    __attribute__ ((__access__ (__write_only__, 1, 2)));
# 1221 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/unistd_ext.h" 1 3 4
# 1222 "/usr/include/unistd.h" 2 3 4


# 493 "/usr/include/zconf.h" 2 3 4
# 35 "/usr/include/zlib.h" 2 3 4
# 81 "/usr/include/zlib.h" 3 4
typedef voidpf (*alloc_func)(voidpf opaque, uInt items, uInt size);
typedef void (*free_func)(voidpf opaque, voidpf address);

struct internal_state;

typedef struct z_stream_s {
    Bytef *next_in;
    uInt avail_in;
    uLong total_in;

    Bytef *next_out;
    uInt avail_out;
    uLong total_out;

    char *msg;
    struct internal_state *state;

    alloc_func zalloc;
    free_func zfree;
    voidpf opaque;

    int data_type;

    uLong adler;
    uLong reserved;
} z_stream;

typedef z_stream *z_streamp;





typedef struct gz_header_s {
    int text;
    uLong time;
    int xflags;
    int os;
    Bytef *extra;
    uInt extra_len;
    uInt extra_max;
    Bytef *name;
    uInt name_max;
    Bytef *comment;
    uInt comm_max;
    int hcrc;
    int done;

} gz_header;

typedef gz_header *gz_headerp;
# 220 "/usr/include/zlib.h" 3 4
extern const char * zlibVersion(void);
# 250 "/usr/include/zlib.h" 3 4
extern int deflate(z_streamp strm, int flush);
# 363 "/usr/include/zlib.h" 3 4
extern int deflateEnd(z_streamp strm);
# 401 "/usr/include/zlib.h" 3 4
extern int inflate(z_streamp strm, int flush);
# 521 "/usr/include/zlib.h" 3 4
extern int inflateEnd(z_streamp strm);
# 611 "/usr/include/zlib.h" 3 4
extern int deflateSetDictionary(z_streamp strm,
                                         const Bytef *dictionary,
                                         uInt dictLength);
# 655 "/usr/include/zlib.h" 3 4
extern int deflateGetDictionary(z_streamp strm,
                                         Bytef *dictionary,
                                         uInt *dictLength);
# 677 "/usr/include/zlib.h" 3 4
extern int deflateCopy(z_streamp dest,
                                z_streamp source);
# 695 "/usr/include/zlib.h" 3 4
extern int deflateReset(z_streamp strm);
# 706 "/usr/include/zlib.h" 3 4
extern int deflateParams(z_streamp strm,
                                  int level,
                                  int strategy);
# 744 "/usr/include/zlib.h" 3 4
extern int deflateTune(z_streamp strm,
                                int good_length,
                                int max_lazy,
                                int nice_length,
                                int max_chain);
# 761 "/usr/include/zlib.h" 3 4
extern uLong deflateBound(z_streamp strm,
                                   uLong sourceLen);
# 776 "/usr/include/zlib.h" 3 4
extern int deflatePending(z_streamp strm,
                                   unsigned *pending,
                                   int *bits);
# 791 "/usr/include/zlib.h" 3 4
extern int deflatePrime(z_streamp strm,
                                 int bits,
                                 int value);
# 808 "/usr/include/zlib.h" 3 4
extern int deflateSetHeader(z_streamp strm,
                                     gz_headerp head);
# 888 "/usr/include/zlib.h" 3 4
extern int inflateSetDictionary(z_streamp strm,
                                         const Bytef *dictionary,
                                         uInt dictLength);
# 911 "/usr/include/zlib.h" 3 4
extern int inflateGetDictionary(z_streamp strm,
                                         Bytef *dictionary,
                                         uInt *dictLength);
# 926 "/usr/include/zlib.h" 3 4
extern int inflateSync(z_streamp strm);
# 945 "/usr/include/zlib.h" 3 4
extern int inflateCopy(z_streamp dest,
                                z_streamp source);
# 961 "/usr/include/zlib.h" 3 4
extern int inflateReset(z_streamp strm);
# 972 "/usr/include/zlib.h" 3 4
extern int inflateReset2(z_streamp strm,
                                  int windowBits);
# 986 "/usr/include/zlib.h" 3 4
extern int inflatePrime(z_streamp strm,
                                 int bits,
                                 int value);
# 1007 "/usr/include/zlib.h" 3 4
extern long inflateMark(z_streamp strm);
# 1035 "/usr/include/zlib.h" 3 4
extern int inflateGetHeader(z_streamp strm,
                                     gz_headerp head);
# 1097 "/usr/include/zlib.h" 3 4
typedef unsigned (*in_func)(void *,
                            unsigned char * *);
typedef int (*out_func)(void *, unsigned char *, unsigned);

extern int inflateBack(z_streamp strm,
                                in_func in, void *in_desc,
                                out_func out, void *out_desc);
# 1171 "/usr/include/zlib.h" 3 4
extern int inflateBackEnd(z_streamp strm);







extern uLong zlibCompileFlags(void);
# 1232 "/usr/include/zlib.h" 3 4
extern int compress(Bytef *dest, uLongf *destLen,
                             const Bytef *source, uLong sourceLen);
# 1247 "/usr/include/zlib.h" 3 4
extern int compress2(Bytef *dest, uLongf *destLen,
                              const Bytef *source, uLong sourceLen,
                              int level);
# 1263 "/usr/include/zlib.h" 3 4
extern uLong compressBound(uLong sourceLen);






extern int uncompress(Bytef *dest, uLongf *destLen,
                               const Bytef *source, uLong sourceLen);
# 1288 "/usr/include/zlib.h" 3 4
extern int uncompress2(Bytef *dest, uLongf *destLen,
                                const Bytef *source, uLong *sourceLen);
# 1305 "/usr/include/zlib.h" 3 4
typedef struct gzFile_s *gzFile;
# 1345 "/usr/include/zlib.h" 3 4
extern gzFile gzdopen(int fd, const char *mode);
# 1368 "/usr/include/zlib.h" 3 4
extern int gzbuffer(gzFile file, unsigned size);
# 1384 "/usr/include/zlib.h" 3 4
extern int gzsetparams(gzFile file, int level, int strategy);
# 1395 "/usr/include/zlib.h" 3 4
extern int gzread(gzFile file, voidp buf, unsigned len);
# 1425 "/usr/include/zlib.h" 3 4
extern z_size_t gzfread(voidp buf, z_size_t size, z_size_t nitems,
                                 gzFile file);
# 1451 "/usr/include/zlib.h" 3 4
extern int gzwrite(gzFile file, voidpc buf, unsigned len);





extern z_size_t gzfwrite(voidpc buf, z_size_t size,
                                  z_size_t nitems, gzFile file);
# 1471 "/usr/include/zlib.h" 3 4
extern int gzprintf(gzFile file, const char *format, ...);
# 1486 "/usr/include/zlib.h" 3 4
extern int gzputs(gzFile file, const char *s);







extern char * gzgets(gzFile file, char *buf, int len);
# 1508 "/usr/include/zlib.h" 3 4
extern int gzputc(gzFile file, int c);





extern int gzgetc(gzFile file);
# 1523 "/usr/include/zlib.h" 3 4
extern int gzungetc(int c, gzFile file);
# 1535 "/usr/include/zlib.h" 3 4
extern int gzflush(gzFile file, int flush);
# 1570 "/usr/include/zlib.h" 3 4
extern int gzrewind(gzFile file);
# 1598 "/usr/include/zlib.h" 3 4
extern int gzeof(gzFile file);
# 1613 "/usr/include/zlib.h" 3 4
extern int gzdirect(gzFile file);
# 1634 "/usr/include/zlib.h" 3 4
extern int gzclose(gzFile file);
# 1647 "/usr/include/zlib.h" 3 4
extern int gzclose_r(gzFile file);
extern int gzclose_w(gzFile file);
# 1659 "/usr/include/zlib.h" 3 4
extern const char * gzerror(gzFile file, int *errnum);
# 1675 "/usr/include/zlib.h" 3 4
extern void gzclearerr(gzFile file);
# 1692 "/usr/include/zlib.h" 3 4
extern uLong adler32(uLong adler, const Bytef *buf, uInt len);
# 1712 "/usr/include/zlib.h" 3 4
extern uLong adler32_z(uLong adler, const Bytef *buf,
                                z_size_t len);
# 1730 "/usr/include/zlib.h" 3 4
extern uLong crc32(uLong crc, const Bytef *buf, uInt len);
# 1748 "/usr/include/zlib.h" 3 4
extern uLong crc32_z(uLong crc, const Bytef *buf,
                              z_size_t len);
# 1771 "/usr/include/zlib.h" 3 4
extern uLong crc32_combine_op(uLong crc1, uLong crc2, uLong op);
# 1784 "/usr/include/zlib.h" 3 4
extern int deflateInit_(z_streamp strm, int level,
                                 const char *version, int stream_size);
extern int inflateInit_(z_streamp strm,
                                 const char *version, int stream_size);
extern int deflateInit2_(z_streamp strm, int level, int method,
                                  int windowBits, int memLevel,
                                  int strategy, const char *version,
                                  int stream_size);
extern int inflateInit2_(z_streamp strm, int windowBits,
                                  const char *version, int stream_size);
extern int inflateBackInit_(z_streamp strm, int windowBits,
                                     unsigned char *window,
                                     const char *version,
                                     int stream_size);
# 1837 "/usr/include/zlib.h" 3 4
struct gzFile_s {
    unsigned have;
    unsigned char *next;
    off_t pos;
};
extern int gzgetc_(gzFile file);
# 1896 "/usr/include/zlib.h" 3 4
   extern gzFile gzopen(const char *, const char *);
   extern off_t gzseek(gzFile, off_t, int);
   extern off_t gztell(gzFile);
   extern off_t gzoffset(gzFile);
   extern uLong adler32_combine(uLong, uLong, off_t);
   extern uLong crc32_combine(uLong, uLong, off_t);
   extern uLong crc32_combine_gen(off_t);
# 1914 "/usr/include/zlib.h" 3 4
extern const char * zError(int);
extern int inflateSyncPoint(z_streamp);
extern const z_crc_t * get_crc_table(void);
extern int inflateUndermine(z_streamp, int);
extern int inflateValidate(z_streamp, int);
extern unsigned long inflateCodesUsed(z_streamp);
extern int inflateResetKeep(z_streamp);
extern int deflateResetKeep(z_streamp);






extern int gzvprintf(gzFile file,
                                           const char *format,
                                           va_list va);
# 6 "out.c" 2
# 1 "/usr/include/dirent.h" 1 3 4
# 27 "/usr/include/dirent.h" 3 4

# 61 "/usr/include/dirent.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/dirent.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/dirent.h" 3 4
struct dirent
  {

    __ino_t d_ino;
    __off_t d_off;




    unsigned short int d_reclen;
    unsigned char d_type;
    char d_name[256];
  };
# 62 "/usr/include/dirent.h" 2 3 4
# 97 "/usr/include/dirent.h" 3 4
enum
  {
    DT_UNKNOWN = 0,

    DT_FIFO = 1,

    DT_CHR = 2,

    DT_DIR = 4,

    DT_BLK = 6,

    DT_REG = 8,

    DT_LNK = 10,

    DT_SOCK = 12,

    DT_WHT = 14

  };
# 127 "/usr/include/dirent.h" 3 4
typedef struct __dirstream DIR;






extern int closedir (DIR *__dirp) __attribute__ ((__nonnull__ (1)));






extern DIR *opendir (const char *__name) __attribute__ ((__nonnull__ (1)))
 __attribute__ ((__malloc__)) __attribute__ ((__malloc__ (closedir, 1)));






extern DIR *fdopendir (int __fd)
 __attribute__ ((__malloc__)) __attribute__ ((__malloc__ (closedir, 1)));
# 164 "/usr/include/dirent.h" 3 4
extern struct dirent *readdir (DIR *__dirp) __attribute__ ((__nonnull__ (1)));
# 185 "/usr/include/dirent.h" 3 4
extern int readdir_r (DIR *__restrict __dirp,
        struct dirent *__restrict __entry,
        struct dirent **__restrict __result)
     __attribute__ ((__nonnull__ (1, 2, 3))) __attribute__ ((__deprecated__));
# 211 "/usr/include/dirent.h" 3 4
extern void rewinddir (DIR *__dirp) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern void seekdir (DIR *__dirp, long int __pos) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int telldir (DIR *__dirp) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int dirfd (DIR *__dirp) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 247 "/usr/include/dirent.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 1 3 4
# 248 "/usr/include/dirent.h" 2 3 4
# 257 "/usr/include/dirent.h" 3 4
extern int scandir (const char *__restrict __dir,
      struct dirent ***__restrict __namelist,
      int (*__selector) (const struct dirent *),
      int (*__cmp) (const struct dirent **,
      const struct dirent **))
     __attribute__ ((__nonnull__ (1, 2)));
# 327 "/usr/include/dirent.h" 3 4
extern int alphasort (const struct dirent **__e1,
        const struct dirent **__e2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 355 "/usr/include/dirent.h" 3 4
extern __ssize_t getdirentries (int __fd, char *__restrict __buf,
    size_t __nbytes,
    __off_t *__restrict __basep)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));
# 404 "/usr/include/dirent.h" 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/dirent_ext.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/dirent_ext.h" 3 4

# 33 "/usr/include/x86_64-linux-gnu/bits/dirent_ext.h" 3 4

# 407 "/usr/include/dirent.h" 2 3 4
# 7 "out.c" 2

# 1 "/usr/include/x86_64-linux-gnu/sys/stat.h" 1 3 4
# 99 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/stat.h" 1 3 4
# 25 "/usr/include/x86_64-linux-gnu/bits/stat.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/struct_stat.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/struct_stat.h" 3 4
struct stat
  {



    __dev_t st_dev;




    __ino_t st_ino;







    __nlink_t st_nlink;
    __mode_t st_mode;

    __uid_t st_uid;
    __gid_t st_gid;

    int __pad0;

    __dev_t st_rdev;




    __off_t st_size;



    __blksize_t st_blksize;

    __blkcnt_t st_blocks;
# 74 "/usr/include/x86_64-linux-gnu/bits/struct_stat.h" 3 4
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
# 89 "/usr/include/x86_64-linux-gnu/bits/struct_stat.h" 3 4
    __syscall_slong_t __glibc_reserved[3];
# 99 "/usr/include/x86_64-linux-gnu/bits/struct_stat.h" 3 4
  };
# 26 "/usr/include/x86_64-linux-gnu/bits/stat.h" 2 3 4
# 102 "/usr/include/x86_64-linux-gnu/sys/stat.h" 2 3 4
# 205 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int stat (const char *__restrict __file,
   struct stat *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int fstat (int __fd, struct stat *__buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
# 264 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int fstatat (int __fd, const char *__restrict __file,
      struct stat *__restrict __buf, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
# 313 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int lstat (const char *__restrict __file,
    struct stat *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
# 352 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int chmod (const char *__file, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int lchmod (const char *__file, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));




extern int fchmod (int __fd, __mode_t __mode) __attribute__ ((__nothrow__ , __leaf__));





extern int fchmodat (int __fd, const char *__file, __mode_t __mode,
       int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) ;






extern __mode_t umask (__mode_t __mask) __attribute__ ((__nothrow__ , __leaf__));
# 389 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int mkdir (const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int mkdirat (int __fd, const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));






extern int mknod (const char *__path, __mode_t __mode, __dev_t __dev)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int mknodat (int __fd, const char *__path, __mode_t __mode,
      __dev_t __dev) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));





extern int mkfifo (const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int mkfifoat (int __fd, const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));






extern int utimensat (int __fd, const char *__path,
        const struct timespec __times[2],
        int __flags)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
# 452 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int futimens (int __fd, const struct timespec __times[2]) __attribute__ ((__nothrow__ , __leaf__));
# 468 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4

# 9 "out.c" 2

# 1 "/usr/include/errno.h" 1 3 4
# 28 "/usr/include/errno.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/errno.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/errno.h" 3 4
# 1 "/usr/include/linux/errno.h" 1 3 4
# 1 "/usr/include/x86_64-linux-gnu/asm/errno.h" 1 3 4
# 1 "/usr/include/asm-generic/errno.h" 1 3 4




# 1 "/usr/include/asm-generic/errno-base.h" 1 3 4
# 6 "/usr/include/asm-generic/errno.h" 2 3 4
# 2 "/usr/include/x86_64-linux-gnu/asm/errno.h" 2 3 4
# 2 "/usr/include/linux/errno.h" 2 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/errno.h" 2 3 4
# 29 "/usr/include/errno.h" 2 3 4








extern int *__errno_location (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
# 52 "/usr/include/errno.h" 3 4

# 11 "out.c" 2

# 1 "/usr/include/x86_64-linux-gnu/sys/wait.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/sys/wait.h" 3 4

# 36 "/usr/include/x86_64-linux-gnu/sys/wait.h" 3 4
# 1 "/usr/include/signal.h" 1 3 4
# 27 "/usr/include/signal.h" 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/signum-generic.h" 1 3 4
# 76 "/usr/include/x86_64-linux-gnu/bits/signum-generic.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/signum-arch.h" 1 3 4
# 77 "/usr/include/x86_64-linux-gnu/bits/signum-generic.h" 2 3 4
# 31 "/usr/include/signal.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/types/sig_atomic_t.h" 1 3 4







typedef __sig_atomic_t sig_atomic_t;
# 33 "/usr/include/signal.h" 2 3 4
# 57 "/usr/include/signal.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/siginfo_t.h" 1 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 5 "/usr/include/x86_64-linux-gnu/bits/types/siginfo_t.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/types/__sigval_t.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/types/__sigval_t.h" 3 4
union sigval
{
  int sival_int;
  void *sival_ptr;
};

typedef union sigval __sigval_t;
# 7 "/usr/include/x86_64-linux-gnu/bits/types/siginfo_t.h" 2 3 4
# 16 "/usr/include/x86_64-linux-gnu/bits/types/siginfo_t.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/siginfo-arch.h" 1 3 4
# 17 "/usr/include/x86_64-linux-gnu/bits/types/siginfo_t.h" 2 3 4
# 36 "/usr/include/x86_64-linux-gnu/bits/types/siginfo_t.h" 3 4
typedef struct
  {
    int si_signo;

    int si_errno;

    int si_code;





    int __pad0;


    union
      {
 int _pad[((128 / sizeof (int)) - 4)];


 struct
   {
     __pid_t si_pid;
     __uid_t si_uid;
   } _kill;


 struct
   {
     int si_tid;
     int si_overrun;
     __sigval_t si_sigval;
   } _timer;


 struct
   {
     __pid_t si_pid;
     __uid_t si_uid;
     __sigval_t si_sigval;
   } _rt;


 struct
   {
     __pid_t si_pid;
     __uid_t si_uid;
     int si_status;
     __clock_t si_utime;
     __clock_t si_stime;
   } _sigchld;


 struct
   {
     void *si_addr;
    
     short int si_addr_lsb;
     union
       {

  struct
    {
      void *_lower;
      void *_upper;
    } _addr_bnd;

  __uint32_t _pkey;
       } _bounds;
   } _sigfault;


 struct
   {
     long int si_band;
     int si_fd;
   } _sigpoll;



 struct
   {
     void *_call_addr;
     int _syscall;
     unsigned int _arch;
   } _sigsys;

      } _sifields;
  } siginfo_t ;
# 58 "/usr/include/signal.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/siginfo-consts.h" 1 3 4
# 35 "/usr/include/x86_64-linux-gnu/bits/siginfo-consts.h" 3 4
enum
{
  SI_ASYNCNL = -60,
  SI_DETHREAD = -7,

  SI_TKILL,
  SI_SIGIO,

  SI_ASYNCIO,
  SI_MESGQ,
  SI_TIMER,





  SI_QUEUE,
  SI_USER,
  SI_KERNEL = 0x80
# 66 "/usr/include/x86_64-linux-gnu/bits/siginfo-consts.h" 3 4
};




enum
{
  ILL_ILLOPC = 1,

  ILL_ILLOPN,

  ILL_ILLADR,

  ILL_ILLTRP,

  ILL_PRVOPC,

  ILL_PRVREG,

  ILL_COPROC,

  ILL_BADSTK,

  ILL_BADIADDR

};


enum
{
  FPE_INTDIV = 1,

  FPE_INTOVF,

  FPE_FLTDIV,

  FPE_FLTOVF,

  FPE_FLTUND,

  FPE_FLTRES,

  FPE_FLTINV,

  FPE_FLTSUB,

  FPE_FLTUNK = 14,

  FPE_CONDTRAP

};


enum
{
  SEGV_MAPERR = 1,

  SEGV_ACCERR,

  SEGV_BNDERR,

  SEGV_PKUERR,

  SEGV_ACCADI,

  SEGV_ADIDERR,

  SEGV_ADIPERR,

  SEGV_MTEAERR,

  SEGV_MTESERR,

  SEGV_CPERR

};


enum
{
  BUS_ADRALN = 1,

  BUS_ADRERR,

  BUS_OBJERR,

  BUS_MCEERR_AR,

  BUS_MCEERR_AO

};
# 178 "/usr/include/x86_64-linux-gnu/bits/siginfo-consts.h" 3 4
enum
{
  CLD_EXITED = 1,

  CLD_KILLED,

  CLD_DUMPED,

  CLD_TRAPPED,

  CLD_STOPPED,

  CLD_CONTINUED

};


enum
{
  POLL_IN = 1,

  POLL_OUT,

  POLL_MSG,

  POLL_ERR,

  POLL_PRI,

  POLL_HUP

};
# 59 "/usr/include/signal.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/types/sigval_t.h" 1 3 4
# 16 "/usr/include/x86_64-linux-gnu/bits/types/sigval_t.h" 3 4
typedef __sigval_t sigval_t;
# 63 "/usr/include/signal.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/types/sigevent_t.h" 1 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 5 "/usr/include/x86_64-linux-gnu/bits/types/sigevent_t.h" 2 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/types/sigevent_t.h" 3 4
typedef struct sigevent
  {
    __sigval_t sigev_value;
    int sigev_signo;
    int sigev_notify;

    union
      {
 int _pad[((64 / sizeof (int)) - 4)];



 __pid_t _tid;

 struct
   {
     void (*_function) (__sigval_t);
     pthread_attr_t *_attribute;
   } _sigev_thread;
      } _sigev_un;
  } sigevent_t;
# 67 "/usr/include/signal.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/sigevent-consts.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/sigevent-consts.h" 3 4
enum
{
  SIGEV_SIGNAL = 0,

  SIGEV_NONE,

  SIGEV_THREAD,


  SIGEV_THREAD_ID = 4


};
# 68 "/usr/include/signal.h" 2 3 4




typedef void (*__sighandler_t) (int);




extern __sighandler_t __sysv_signal (int __sig, __sighandler_t __handler)
     __attribute__ ((__nothrow__ , __leaf__));
# 88 "/usr/include/signal.h" 3 4
extern __sighandler_t signal (int __sig, __sighandler_t __handler)
     __attribute__ ((__nothrow__ , __leaf__));
# 112 "/usr/include/signal.h" 3 4
extern int kill (__pid_t __pid, int __sig) __attribute__ ((__nothrow__ , __leaf__));






extern int killpg (__pid_t __pgrp, int __sig) __attribute__ ((__nothrow__ , __leaf__));



extern int raise (int __sig) __attribute__ ((__nothrow__ , __leaf__));



extern __sighandler_t ssignal (int __sig, __sighandler_t __handler)
     __attribute__ ((__nothrow__ , __leaf__));
extern int gsignal (int __sig) __attribute__ ((__nothrow__ , __leaf__));




extern void psignal (int __sig, const char *__s);


extern void psiginfo (const siginfo_t *__pinfo, const char *__s);
# 173 "/usr/include/signal.h" 3 4
extern int sigblock (int __mask) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__deprecated__));


extern int sigsetmask (int __mask) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__deprecated__));


extern int siggetmask (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__deprecated__));
# 193 "/usr/include/signal.h" 3 4
typedef __sighandler_t sig_t;





extern int sigemptyset (sigset_t *__set) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int sigfillset (sigset_t *__set) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int sigaddset (sigset_t *__set, int __signo) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int sigdelset (sigset_t *__set, int __signo) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int sigismember (const sigset_t *__set, int __signo)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 229 "/usr/include/signal.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/sigaction.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/sigaction.h" 3 4
struct sigaction
  {


    union
      {

 __sighandler_t sa_handler;

 void (*sa_sigaction) (int, siginfo_t *, void *);
      }
    __sigaction_handler;







    __sigset_t sa_mask;


    int sa_flags;


    void (*sa_restorer) (void);
  };
# 230 "/usr/include/signal.h" 2 3 4


extern int sigprocmask (int __how, const sigset_t *__restrict __set,
   sigset_t *__restrict __oset) __attribute__ ((__nothrow__ , __leaf__));






extern int sigsuspend (const sigset_t *__set) __attribute__ ((__nonnull__ (1)));


extern int sigaction (int __sig, const struct sigaction *__restrict __act,
        struct sigaction *__restrict __oact) __attribute__ ((__nothrow__ , __leaf__));


extern int sigpending (sigset_t *__set) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







extern int sigwait (const sigset_t *__restrict __set, int *__restrict __sig)
     __attribute__ ((__nonnull__ (1, 2)));







extern int sigwaitinfo (const sigset_t *__restrict __set,
   siginfo_t *__restrict __info) __attribute__ ((__nonnull__ (1)));







extern int sigtimedwait (const sigset_t *__restrict __set,
    siginfo_t *__restrict __info,
    const struct timespec *__restrict __timeout)
     __attribute__ ((__nonnull__ (1)));
# 292 "/usr/include/signal.h" 3 4
extern int sigqueue (__pid_t __pid, int __sig, const union sigval __val)
     __attribute__ ((__nothrow__ , __leaf__));







# 1 "/usr/include/x86_64-linux-gnu/bits/sigcontext.h" 1 3 4
# 31 "/usr/include/x86_64-linux-gnu/bits/sigcontext.h" 3 4
struct _fpx_sw_bytes
{
  __uint32_t magic1;
  __uint32_t extended_size;
  __uint64_t xstate_bv;
  __uint32_t xstate_size;
  __uint32_t __glibc_reserved1[7];
};

struct _fpreg
{
  unsigned short significand[4];
  unsigned short exponent;
};

struct _fpxreg
{
  unsigned short significand[4];
  unsigned short exponent;
  unsigned short __glibc_reserved1[3];
};

struct _xmmreg
{
  __uint32_t element[4];
};
# 123 "/usr/include/x86_64-linux-gnu/bits/sigcontext.h" 3 4
struct _fpstate
{

  __uint16_t cwd;
  __uint16_t swd;
  __uint16_t ftw;
  __uint16_t fop;
  __uint64_t rip;
  __uint64_t rdp;
  __uint32_t mxcsr;
  __uint32_t mxcr_mask;
  struct _fpxreg _st[8];
  struct _xmmreg _xmm[16];
  __uint32_t __glibc_reserved1[24];
};

struct sigcontext
{
  __uint64_t r8;
  __uint64_t r9;
  __uint64_t r10;
  __uint64_t r11;
  __uint64_t r12;
  __uint64_t r13;
  __uint64_t r14;
  __uint64_t r15;
  __uint64_t rdi;
  __uint64_t rsi;
  __uint64_t rbp;
  __uint64_t rbx;
  __uint64_t rdx;
  __uint64_t rax;
  __uint64_t rcx;
  __uint64_t rsp;
  __uint64_t rip;
  __uint64_t eflags;
  unsigned short cs;
  unsigned short gs;
  unsigned short fs;
  unsigned short __pad0;
  __uint64_t err;
  __uint64_t trapno;
  __uint64_t oldmask;
  __uint64_t cr2;
  __extension__ union
    {
      struct _fpstate * fpstate;
      __uint64_t __fpstate_word;
    };
  __uint64_t __reserved1 [8];
};



struct _xsave_hdr
{
  __uint64_t xstate_bv;
  __uint64_t __glibc_reserved1[2];
  __uint64_t __glibc_reserved2[5];
};

struct _ymmh_state
{
  __uint32_t ymmh_space[64];
};

struct _xstate
{
  struct _fpstate fpstate;
  struct _xsave_hdr xstate_hdr;
  struct _ymmh_state ymmh;
};
# 302 "/usr/include/signal.h" 2 3 4


extern int sigreturn (struct sigcontext *__scp) __attribute__ ((__nothrow__ , __leaf__));






# 1 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 1 3 4
# 312 "/usr/include/signal.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/types/stack_t.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/types/stack_t.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/types/stack_t.h" 2 3 4


typedef struct
  {
    void *ss_sp;
    int ss_flags;
    size_t ss_size;
  } stack_t;
# 314 "/usr/include/signal.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/sys/ucontext.h" 1 3 4
# 37 "/usr/include/x86_64-linux-gnu/sys/ucontext.h" 3 4
__extension__ typedef long long int greg_t;
# 46 "/usr/include/x86_64-linux-gnu/sys/ucontext.h" 3 4
typedef greg_t gregset_t[23];
# 101 "/usr/include/x86_64-linux-gnu/sys/ucontext.h" 3 4
struct _libc_fpxreg
{
  unsigned short int significand[4];
  unsigned short int exponent;
  unsigned short int __glibc_reserved1[3];
};

struct _libc_xmmreg
{
  __uint32_t element[4];
};

struct _libc_fpstate
{

  __uint16_t cwd;
  __uint16_t swd;
  __uint16_t ftw;
  __uint16_t fop;
  __uint64_t rip;
  __uint64_t rdp;
  __uint32_t mxcsr;
  __uint32_t mxcr_mask;
  struct _libc_fpxreg _st[8];
  struct _libc_xmmreg _xmm[16];
  __uint32_t __glibc_reserved1[24];
};


typedef struct _libc_fpstate *fpregset_t;


typedef struct
  {
    gregset_t gregs;

    fpregset_t fpregs;
    __extension__ unsigned long long __reserved1 [8];
} mcontext_t;


typedef struct ucontext_t
  {
    unsigned long int uc_flags;
    struct ucontext_t *uc_link;
    stack_t uc_stack;
    mcontext_t uc_mcontext;
    sigset_t uc_sigmask;
    struct _libc_fpstate __fpregs_mem;
    __extension__ unsigned long long int __ssp[4];
  } ucontext_t;
# 317 "/usr/include/signal.h" 2 3 4







extern int siginterrupt (int __sig, int __interrupt) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__deprecated__ ("Use sigaction with SA_RESTART instead")));

# 1 "/usr/include/x86_64-linux-gnu/bits/sigstack.h" 1 3 4
# 328 "/usr/include/signal.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/sigstksz.h" 1 3 4
# 329 "/usr/include/signal.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/ss_flags.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/ss_flags.h" 3 4
enum
{
  SS_ONSTACK = 1,

  SS_DISABLE

};
# 330 "/usr/include/signal.h" 2 3 4



extern int sigaltstack (const stack_t *__restrict __ss,
   stack_t *__restrict __oss) __attribute__ ((__nothrow__ , __leaf__));




# 1 "/usr/include/x86_64-linux-gnu/bits/types/struct_sigstack.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/types/struct_sigstack.h" 3 4
struct sigstack
  {
    void *ss_sp;
    int ss_onstack;
  };
# 340 "/usr/include/signal.h" 2 3 4







extern int sigstack (struct sigstack *__ss, struct sigstack *__oss)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__deprecated__));
# 376 "/usr/include/signal.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/sigthread.h" 1 3 4
# 31 "/usr/include/x86_64-linux-gnu/bits/sigthread.h" 3 4
extern int pthread_sigmask (int __how,
       const __sigset_t *__restrict __newmask,
       __sigset_t *__restrict __oldmask)__attribute__ ((__nothrow__ , __leaf__));


extern int pthread_kill (pthread_t __threadid, int __signo) __attribute__ ((__nothrow__ , __leaf__));
# 377 "/usr/include/signal.h" 2 3 4






extern int __libc_current_sigrtmin (void) __attribute__ ((__nothrow__ , __leaf__));

extern int __libc_current_sigrtmax (void) __attribute__ ((__nothrow__ , __leaf__));





# 1 "/usr/include/x86_64-linux-gnu/bits/signal_ext.h" 1 3 4
# 392 "/usr/include/signal.h" 2 3 4


# 37 "/usr/include/x86_64-linux-gnu/sys/wait.h" 2 3 4
# 49 "/usr/include/x86_64-linux-gnu/sys/wait.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 1 3 4
# 50 "/usr/include/x86_64-linux-gnu/sys/wait.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 1 3 4
# 53 "/usr/include/x86_64-linux-gnu/sys/wait.h" 2 3 4
# 74 "/usr/include/x86_64-linux-gnu/sys/wait.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/idtype_t.h" 1 3 4




typedef enum
{
  P_ALL,
  P_PID,
  P_PGID,
  P_PIDFD,

} idtype_t;
# 75 "/usr/include/x86_64-linux-gnu/sys/wait.h" 2 3 4
# 83 "/usr/include/x86_64-linux-gnu/sys/wait.h" 3 4
extern __pid_t wait (int *__stat_loc);
# 106 "/usr/include/x86_64-linux-gnu/sys/wait.h" 3 4
extern __pid_t waitpid (__pid_t __pid, int *__stat_loc, int __options);
# 127 "/usr/include/x86_64-linux-gnu/sys/wait.h" 3 4
extern int waitid (idtype_t __idtype, __id_t __id, siginfo_t *__infop,
     int __options);






struct rusage;







extern __pid_t wait3 (int *__stat_loc, int __options,
        struct rusage * __usage) __attribute__ ((__nothrow__));
# 159 "/usr/include/x86_64-linux-gnu/sys/wait.h" 3 4
extern __pid_t wait4 (__pid_t __pid, int *__stat_loc, int __options,
        struct rusage *__usage) __attribute__ ((__nothrow__));
# 173 "/usr/include/x86_64-linux-gnu/sys/wait.h" 3 4

# 13 "out.c" 2



# 1 "/usr/include/stdio.h" 1 3 4
# 28 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 29 "/usr/include/stdio.h" 2 3 4





# 1 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 1 3 4
# 35 "/usr/include/stdio.h" 2 3 4





# 1 "/usr/include/x86_64-linux-gnu/bits/types/__fpos_t.h" 1 3 4




# 1 "/usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h" 1 3 4
# 13 "/usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h" 3 4
typedef struct
{
  int __count;
  union
  {
    unsigned int __wch;
    char __wchb[4];
  } __value;
} __mbstate_t;
# 6 "/usr/include/x86_64-linux-gnu/bits/types/__fpos_t.h" 2 3 4




typedef struct _G_fpos_t
{
  __off_t __pos;
  __mbstate_t __state;
} __fpos_t;
# 41 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/__fpos64_t.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/bits/types/__fpos64_t.h" 3 4
typedef struct _G_fpos64_t
{
  __off64_t __pos;
  __mbstate_t __state;
} __fpos64_t;
# 42 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/__FILE.h" 1 3 4



struct _IO_FILE;
typedef struct _IO_FILE __FILE;
# 43 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/FILE.h" 1 3 4



struct _IO_FILE;


typedef struct _IO_FILE FILE;
# 44 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h" 1 3 4
# 35 "/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h" 3 4
struct _IO_FILE;
struct _IO_marker;
struct _IO_codecvt;
struct _IO_wide_data;




typedef void _IO_lock_t;





struct _IO_FILE
{
  int _flags;


  char *_IO_read_ptr;
  char *_IO_read_end;
  char *_IO_read_base;
  char *_IO_write_base;
  char *_IO_write_ptr;
  char *_IO_write_end;
  char *_IO_buf_base;
  char *_IO_buf_end;


  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;
  int _flags2;
  __off_t _old_offset;


  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];

  _IO_lock_t *_lock;







  __off64_t _offset;

  struct _IO_codecvt *_codecvt;
  struct _IO_wide_data *_wide_data;
  struct _IO_FILE *_freeres_list;
  void *_freeres_buf;
  size_t __pad5;
  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];
};
# 45 "/usr/include/stdio.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/types/cookie_io_functions_t.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/types/cookie_io_functions_t.h" 3 4
typedef __ssize_t cookie_read_function_t (void *__cookie, char *__buf,
                                          size_t __nbytes);







typedef __ssize_t cookie_write_function_t (void *__cookie, const char *__buf,
                                           size_t __nbytes);







typedef int cookie_seek_function_t (void *__cookie, __off64_t *__pos, int __w);


typedef int cookie_close_function_t (void *__cookie);






typedef struct _IO_cookie_io_functions_t
{
  cookie_read_function_t *read;
  cookie_write_function_t *write;
  cookie_seek_function_t *seek;
  cookie_close_function_t *close;
} cookie_io_functions_t;
# 48 "/usr/include/stdio.h" 2 3 4
# 85 "/usr/include/stdio.h" 3 4
typedef __fpos_t fpos_t;
# 129 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdio_lim.h" 1 3 4
# 130 "/usr/include/stdio.h" 2 3 4
# 149 "/usr/include/stdio.h" 3 4
extern FILE *stdin;
extern FILE *stdout;
extern FILE *stderr;






extern int remove (const char *__filename) __attribute__ ((__nothrow__ , __leaf__));

extern int rename (const char *__old, const char *__new) __attribute__ ((__nothrow__ , __leaf__));



extern int renameat (int __oldfd, const char *__old, int __newfd,
       const char *__new) __attribute__ ((__nothrow__ , __leaf__));
# 184 "/usr/include/stdio.h" 3 4
extern int fclose (FILE *__stream) __attribute__ ((__nonnull__ (1)));
# 194 "/usr/include/stdio.h" 3 4
extern FILE *tmpfile (void)
  __attribute__ ((__malloc__)) __attribute__ ((__malloc__ (fclose, 1))) ;
# 211 "/usr/include/stdio.h" 3 4
extern char *tmpnam (char[20]) __attribute__ ((__nothrow__ , __leaf__)) ;




extern char *tmpnam_r (char __s[20]) __attribute__ ((__nothrow__ , __leaf__)) ;
# 228 "/usr/include/stdio.h" 3 4
extern char *tempnam (const char *__dir, const char *__pfx)
   __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__malloc__ (__builtin_free, 1)));






extern int fflush (FILE *__stream);
# 245 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 264 "/usr/include/stdio.h" 3 4
extern FILE *fopen (const char *__restrict __filename,
      const char *__restrict __modes)
  __attribute__ ((__malloc__)) __attribute__ ((__malloc__ (fclose, 1))) ;




extern FILE *freopen (const char *__restrict __filename,
        const char *__restrict __modes,
        FILE *__restrict __stream) __attribute__ ((__nonnull__ (3)));
# 299 "/usr/include/stdio.h" 3 4
extern FILE *fdopen (int __fd, const char *__modes) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__malloc__)) __attribute__ ((__malloc__ (fclose, 1))) ;





extern FILE *fopencookie (void *__restrict __magic_cookie,
     const char *__restrict __modes,
     cookie_io_functions_t __io_funcs) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__malloc__)) __attribute__ ((__malloc__ (fclose, 1))) ;




extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__malloc__ (fclose, 1))) ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__malloc__)) __attribute__ ((__malloc__ (fclose, 1))) ;
# 334 "/usr/include/stdio.h" 3 4
extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__nonnull__ (1)));



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));




extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern void setlinebuf (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







extern int fprintf (FILE *__restrict __stream,
      const char *__restrict __format, ...) __attribute__ ((__nonnull__ (1)));




extern int printf (const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      const char *__restrict __format, ...) __attribute__ ((__nothrow__));





extern int vfprintf (FILE *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg) __attribute__ ((__nonnull__ (1)));




extern int vprintf (const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg) __attribute__ ((__nothrow__));



extern int snprintf (char *__restrict __s, size_t __maxlen,
       const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 0)));





extern int vasprintf (char **__restrict __ptr, const char *__restrict __f,
        __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 0))) ;
extern int __asprintf (char **__restrict __ptr,
         const char *__restrict __fmt, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 3))) ;
extern int asprintf (char **__restrict __ptr,
       const char *__restrict __fmt, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 3))) ;




extern int vdprintf (int __fd, const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));







extern int fscanf (FILE *__restrict __stream,
     const char *__restrict __format, ...) __attribute__ ((__nonnull__ (1)));




extern int scanf (const char *__restrict __format, ...) ;

extern int sscanf (const char *__restrict __s,
     const char *__restrict __format, ...) __attribute__ ((__nothrow__ , __leaf__));





# 1 "/usr/include/x86_64-linux-gnu/bits/floatn.h" 1 3 4
# 119 "/usr/include/x86_64-linux-gnu/bits/floatn.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/long-double.h" 1 3 4
# 25 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 2 3 4
# 120 "/usr/include/x86_64-linux-gnu/bits/floatn.h" 2 3 4
# 438 "/usr/include/stdio.h" 2 3 4
# 463 "/usr/include/stdio.h" 3 4
extern int fscanf (FILE *__restrict __stream, const char *__restrict __format, ...) __asm__ ("" "__isoc99_fscanf")

                                __attribute__ ((__nonnull__ (1)));
extern int scanf (const char *__restrict __format, ...) __asm__ ("" "__isoc99_scanf")
                              ;
extern int sscanf (const char *__restrict __s, const char *__restrict __format, ...) __asm__ ("" "__isoc99_sscanf") __attribute__ ((__nothrow__ , __leaf__))

                      ;
# 490 "/usr/include/stdio.h" 3 4
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) __attribute__ ((__nonnull__ (1)));





extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;


extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format__ (__scanf__, 2, 0)));
# 540 "/usr/include/stdio.h" 3 4
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfscanf")



     __attribute__ ((__format__ (__scanf__, 2, 0))) __attribute__ ((__nonnull__ (1)));
extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vscanf")

     __attribute__ ((__format__ (__scanf__, 1, 0))) ;
extern int vsscanf (const char *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vsscanf") __attribute__ ((__nothrow__ , __leaf__))



     __attribute__ ((__format__ (__scanf__, 2, 0)));
# 575 "/usr/include/stdio.h" 3 4
extern int fgetc (FILE *__stream) __attribute__ ((__nonnull__ (1)));
extern int getc (FILE *__stream) __attribute__ ((__nonnull__ (1)));





extern int getchar (void);






extern int getc_unlocked (FILE *__stream) __attribute__ ((__nonnull__ (1)));
extern int getchar_unlocked (void);
# 600 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked (FILE *__stream) __attribute__ ((__nonnull__ (1)));
# 611 "/usr/include/stdio.h" 3 4
extern int fputc (int __c, FILE *__stream) __attribute__ ((__nonnull__ (2)));
extern int putc (int __c, FILE *__stream) __attribute__ ((__nonnull__ (2)));





extern int putchar (int __c);
# 627 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked (int __c, FILE *__stream) __attribute__ ((__nonnull__ (2)));







extern int putc_unlocked (int __c, FILE *__stream) __attribute__ ((__nonnull__ (2)));
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream) __attribute__ ((__nonnull__ (1)));


extern int putw (int __w, FILE *__stream) __attribute__ ((__nonnull__ (2)));







extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     __attribute__ ((__access__ (__write_only__, 1, 2))) __attribute__ ((__nonnull__ (3)));
# 694 "/usr/include/stdio.h" 3 4
extern __ssize_t __getdelim (char **__restrict __lineptr,
                             size_t *__restrict __n, int __delimiter,
                             FILE *__restrict __stream) __attribute__ ((__nonnull__ (4)));
extern __ssize_t getdelim (char **__restrict __lineptr,
                           size_t *__restrict __n, int __delimiter,
                           FILE *__restrict __stream) __attribute__ ((__nonnull__ (4)));







extern __ssize_t getline (char **__restrict __lineptr,
                          size_t *__restrict __n,
                          FILE *__restrict __stream) __attribute__ ((__nonnull__ (3)));







extern int fputs (const char *__restrict __s, FILE *__restrict __stream)
  __attribute__ ((__nonnull__ (2)));





extern int puts (const char *__s);






extern int ungetc (int __c, FILE *__stream) __attribute__ ((__nonnull__ (2)));






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream)
  __attribute__ ((__nonnull__ (4)));




extern size_t fwrite (const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s) __attribute__ ((__nonnull__ (4)));
# 766 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream)
  __attribute__ ((__nonnull__ (4)));
extern size_t fwrite_unlocked (const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream)
  __attribute__ ((__nonnull__ (4)));







extern int fseek (FILE *__stream, long int __off, int __whence)
  __attribute__ ((__nonnull__ (1)));




extern long int ftell (FILE *__stream) __attribute__ ((__nonnull__ (1)));




extern void rewind (FILE *__stream) __attribute__ ((__nonnull__ (1)));
# 803 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off_t __off, int __whence)
  __attribute__ ((__nonnull__ (1)));




extern __off_t ftello (FILE *__stream) __attribute__ ((__nonnull__ (1)));
# 829 "/usr/include/stdio.h" 3 4
extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos)
  __attribute__ ((__nonnull__ (1)));




extern int fsetpos (FILE *__stream, const fpos_t *__pos) __attribute__ ((__nonnull__ (1)));
# 860 "/usr/include/stdio.h" 3 4
extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern int feof (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern int ferror (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







extern void perror (const char *__s) __attribute__ ((__cold__));




extern int fileno (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));




extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 897 "/usr/include/stdio.h" 3 4
extern int pclose (FILE *__stream) __attribute__ ((__nonnull__ (1)));





extern FILE *popen (const char *__command, const char *__modes)
  __attribute__ ((__malloc__)) __attribute__ ((__malloc__ (pclose, 1))) ;






extern char *ctermid (char *__s) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__access__ (__write_only__, 1)));
# 941 "/usr/include/stdio.h" 3 4
extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 959 "/usr/include/stdio.h" 3 4
extern int __uflow (FILE *);
extern int __overflow (FILE *, int);
# 983 "/usr/include/stdio.h" 3 4

# 17 "out.c" 2
# 1 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stdint.h" 1 3 4
# 9 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stdint.h" 3 4
# 1 "/usr/include/stdint.h" 1 3 4
# 26 "/usr/include/stdint.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 27 "/usr/include/stdint.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/wchar.h" 1 3 4
# 29 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 30 "/usr/include/stdint.h" 2 3 4







# 1 "/usr/include/x86_64-linux-gnu/bits/stdint-uintn.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/stdint-uintn.h" 3 4
typedef __uint8_t uint8_t;
typedef __uint16_t uint16_t;
typedef __uint32_t uint32_t;
typedef __uint64_t uint64_t;
# 38 "/usr/include/stdint.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/stdint-least.h" 1 3 4
# 25 "/usr/include/x86_64-linux-gnu/bits/stdint-least.h" 3 4
typedef __int_least8_t int_least8_t;
typedef __int_least16_t int_least16_t;
typedef __int_least32_t int_least32_t;
typedef __int_least64_t int_least64_t;


typedef __uint_least8_t uint_least8_t;
typedef __uint_least16_t uint_least16_t;
typedef __uint_least32_t uint_least32_t;
typedef __uint_least64_t uint_least64_t;
# 42 "/usr/include/stdint.h" 2 3 4





typedef signed char int_fast8_t;

typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;
# 60 "/usr/include/stdint.h" 3 4
typedef unsigned char uint_fast8_t;

typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
# 79 "/usr/include/stdint.h" 3 4
typedef unsigned long int uintptr_t;
# 90 "/usr/include/stdint.h" 3 4
typedef __intmax_t intmax_t;
typedef __uintmax_t uintmax_t;
# 10 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stdint.h" 2 3 4
# 18 "out.c" 2
# 1 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stdbool.h" 1 3 4
# 19 "out.c" 2
# 1 "/usr/include/inttypes.h" 1 3 4
# 34 "/usr/include/inttypes.h" 3 4
typedef int __gwchar_t;
# 327 "/usr/include/inttypes.h" 3 4





typedef struct
  {
    long int quot;
    long int rem;
  } imaxdiv_t;
# 351 "/usr/include/inttypes.h" 3 4
extern intmax_t imaxabs (intmax_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern imaxdiv_t imaxdiv (intmax_t __numer, intmax_t __denom)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern intmax_t strtoimax (const char *__restrict __nptr,
      char **__restrict __endptr, int __base) __attribute__ ((__nothrow__ , __leaf__));


extern uintmax_t strtoumax (const char *__restrict __nptr,
       char ** __restrict __endptr, int __base) __attribute__ ((__nothrow__ , __leaf__));


extern intmax_t wcstoimax (const __gwchar_t *__restrict __nptr,
      __gwchar_t **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__));


extern uintmax_t wcstoumax (const __gwchar_t *__restrict __nptr,
       __gwchar_t ** __restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__));
# 415 "/usr/include/inttypes.h" 3 4

# 20 "out.c" 2
# 1 "/usr/include/stdlib.h" 1 3 4
# 26 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 27 "/usr/include/stdlib.h" 2 3 4





# 1 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 1 3 4
# 33 "/usr/include/stdlib.h" 2 3 4


# 59 "/usr/include/stdlib.h" 3 4
typedef struct
  {
    int quot;
    int rem;
  } div_t;



typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;





__extension__ typedef struct
  {
    long long int quot;
    long long int rem;
  } lldiv_t;
# 98 "/usr/include/stdlib.h" 3 4
extern size_t __ctype_get_mb_cur_max (void) __attribute__ ((__nothrow__ , __leaf__)) ;



extern double atof (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern int atoi (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern long int atol (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;



__extension__ extern long long int atoll (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;



extern double strtod (const char *__restrict __nptr,
        char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern float strtof (const char *__restrict __nptr,
       char **__restrict __endptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern long double strtold (const char *__restrict __nptr,
       char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 177 "/usr/include/stdlib.h" 3 4
extern long int strtol (const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern unsigned long int strtoul (const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



__extension__
extern long long int strtoq (const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtouq (const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));




__extension__
extern long long int strtoll (const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtoull (const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 505 "/usr/include/stdlib.h" 3 4
extern char *l64a (long int __n) __attribute__ ((__nothrow__ , __leaf__)) ;


extern long int a64l (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;
# 521 "/usr/include/stdlib.h" 3 4
extern long int random (void) __attribute__ ((__nothrow__ , __leaf__));


extern void srandom (unsigned int __seed) __attribute__ ((__nothrow__ , __leaf__));





extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



extern char *setstate (char *__statebuf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







struct random_data
  {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
  };

extern int random_r (struct random_data *__restrict __buf,
       int32_t *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));

extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));





extern int rand (void) __attribute__ ((__nothrow__ , __leaf__));

extern void srand (unsigned int __seed) __attribute__ ((__nothrow__ , __leaf__));



extern int rand_r (unsigned int *__seed) __attribute__ ((__nothrow__ , __leaf__));







extern double drand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern double erand48 (unsigned short int __xsubi[3]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int lrand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern long int nrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int mrand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern long int jrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern void srand48 (long int __seedval) __attribute__ ((__nothrow__ , __leaf__));
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern void lcong48 (unsigned short int __param[7]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    __extension__ unsigned long long int __a;

  };


extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern __uint32_t arc4random (void)
     __attribute__ ((__nothrow__ , __leaf__)) ;


extern void arc4random_buf (void *__buf, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern __uint32_t arc4random_uniform (__uint32_t __upper_bound)
     __attribute__ ((__nothrow__ , __leaf__)) ;




extern void *malloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__))
     __attribute__ ((__alloc_size__ (1))) ;

extern void *calloc (size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__alloc_size__ (1, 2))) ;






extern void *realloc (void *__ptr, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__)) __attribute__ ((__alloc_size__ (2)));


extern void free (void *__ptr) __attribute__ ((__nothrow__ , __leaf__));







extern void *reallocarray (void *__ptr, size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__))
     __attribute__ ((__alloc_size__ (2, 3)))
    __attribute__ ((__malloc__ (__builtin_free, 1)));


extern void *reallocarray (void *__ptr, size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__ (reallocarray, 1)));



# 1 "/usr/include/alloca.h" 1 3 4
# 24 "/usr/include/alloca.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/13/include/stddef.h" 1 3 4
# 25 "/usr/include/alloca.h" 2 3 4







extern void *alloca (size_t __size) __attribute__ ((__nothrow__ , __leaf__));






# 707 "/usr/include/stdlib.h" 2 3 4





extern void *valloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__))
     __attribute__ ((__alloc_size__ (1))) ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;




extern void *aligned_alloc (size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__alloc_align__ (1)))
     __attribute__ ((__alloc_size__ (2))) ;



extern void abort (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







extern int at_quick_exit (void (*__func) (void)) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern void exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));





extern void quick_exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));





extern void _Exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));




extern char *getenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 786 "/usr/include/stdlib.h" 3 4
extern int putenv (char *__string) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int setenv (const char *__name, const char *__value, int __replace)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));


extern int unsetenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int clearenv (void) __attribute__ ((__nothrow__ , __leaf__));
# 814 "/usr/include/stdlib.h" 3 4
extern char *mktemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 827 "/usr/include/stdlib.h" 3 4
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) ;
# 849 "/usr/include/stdlib.h" 3 4
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) ;
# 870 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 923 "/usr/include/stdlib.h" 3 4
extern int system (const char *__command) ;
# 940 "/usr/include/stdlib.h" 3 4
extern char *realpath (const char *__restrict __name,
         char *__restrict __resolved) __attribute__ ((__nothrow__ , __leaf__)) ;






typedef int (*__compar_fn_t) (const void *, const void *);
# 960 "/usr/include/stdlib.h" 3 4
extern void *bsearch (const void *__key, const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;







extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));
# 980 "/usr/include/stdlib.h" 3 4
extern int abs (int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
extern long int labs (long int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;


__extension__ extern long long int llabs (long long int __x)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;






extern div_t div (int __numer, int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;


__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
# 1012 "/usr/include/stdlib.h" 3 4
extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *gcvt (double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) ;




extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) ;




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));

extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));





extern int mblen (const char *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));


extern int mbtowc (wchar_t *__restrict __pwc,
     const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));


extern int wctomb (char *__s, wchar_t __wchar) __attribute__ ((__nothrow__ , __leaf__));



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__))
    __attribute__ ((__access__ (__read_only__, 2)));

extern size_t wcstombs (char *__restrict __s,
   const wchar_t *__restrict __pwcs, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__access__ (__write_only__, 1, 3)))
  __attribute__ ((__access__ (__read_only__, 2)));






extern int rpmatch (const char *__response) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 1099 "/usr/include/stdlib.h" 3 4
extern int getsubopt (char **__restrict __optionp,
        char *const *__restrict __tokens,
        char **__restrict __valuep)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2, 3))) ;
# 1145 "/usr/include/stdlib.h" 3 4
extern int getloadavg (double __loadavg[], int __nelem)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 1155 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdlib-float.h" 1 3 4
# 1156 "/usr/include/stdlib.h" 2 3 4
# 1167 "/usr/include/stdlib.h" 3 4

# 21 "out.c" 2


# 22 "out.c"
typedef int8_t i8;
typedef int16_t i16;
typedef int32_t i32;
typedef int64_t i64;

typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;

typedef float f32;
typedef double f64;

const char* __asan_default_options() { return "detect_leaks=0"; }



volatile static const char *__oc_bt[] = {0};
volatile u64 __oc_bt_idx = 0;






void dump_backtrace() {
  if (__oc_bt_idx == 0) {
    return;
  }
  fprintf(
# 51 "out.c" 3 4
         stderr
# 51 "out.c"
               , "--------------------------------------------------------------------------------\n");
  fprintf(
# 52 "out.c" 3 4
         stderr
# 52 "out.c"
               , "Backtrace:\n");
  for (u64 i = 0; i < __oc_bt_idx; i++) {
    fprintf(
# 54 "out.c" 3 4
           stderr
# 54 "out.c"
                 , "  => %s\n", __oc_bt[i]);
  }

  fprintf(
# 57 "out.c" 3 4
         stderr
# 57 "out.c"
               , "--------------------------------------------------------------------------------\n");
}
# 68 "out.c"
void ae_assert_fail(char *dbg_msg, char *msg) {
  dump_backtrace();
  fprintf(
# 70 "out.c" 3 4
         stderr
# 70 "out.c"
               , "--------------------------------------------------------------------------------\n");
  fprintf(
# 71 "out.c" 3 4
         stderr
# 71 "out.c"
               , "%s\n", dbg_msg);
  if (msg) {
    fprintf(
# 73 "out.c" 3 4
           stderr
# 73 "out.c"
                 , "  Message: %s\n", msg);
  }
  fprintf(
# 75 "out.c" 3 4
         stderr
# 75 "out.c"
               , "--------------------------------------------------------------------------------\n");
  fflush(
# 76 "out.c" 3 4
        stdout
# 76 "out.c"
              );
  __builtin_trap();
}




typedef enum std_Endian std_Endian;
typedef struct std_fs_FileMetadata std_fs_FileMetadata;
typedef enum std_fs_EntryType std_fs_EntryType;
typedef struct std_fs_DirectoryEntry std_fs_DirectoryEntry;
typedef struct std_fs_DirectoryIterator std_fs_DirectoryIterator;
typedef struct std_sv_SV std_sv_SV;
typedef struct std_sv_SVSplitIterator std_sv_SVSplitIterator;
typedef struct std_argparse_ArgUnion std_argparse_ArgUnion;
typedef enum std_argparse_ArgType std_argparse_ArgType;
typedef struct std_argparse_Arg std_argparse_Arg;
typedef struct std_argparse_Parser std_argparse_Parser;
typedef struct std_buffer_Buffer std_buffer_Buffer;
typedef struct std_buffer_BytesReader std_buffer_BytesReader;
typedef struct std_hash_sha1_SHA1Hash std_hash_sha1_SHA1Hash;
typedef struct std_vector_Vector__0 std_vector_Vector__0;
typedef struct std_vector_Vector__1 std_vector_Vector__1;
typedef struct std_vector_Vector__2 std_vector_Vector__2;
typedef struct std_vector_Vector__3 std_vector_Vector__3;
typedef struct std_vector_Vector__4 std_vector_Vector__4;
typedef struct std_vector_Iterator__0 std_vector_Iterator__0;
typedef struct std_vector_Iterator__1 std_vector_Iterator__1;
typedef struct std_vector_Iterator__2 std_vector_Iterator__2;
typedef struct std_vector_Iterator__3 std_vector_Iterator__3;
typedef struct std_vector_Iterator__4 std_vector_Iterator__4;
typedef struct git_TreeElement git_TreeElement;
typedef struct git_Commit git_Commit;
typedef struct git_Entry git_Entry;
typedef struct git_Index git_Index;
typedef enum git_Object__kind git_Object__kind;
typedef struct git_Object git_Object;
typedef struct _ClosureTy_6 _ClosureTy_6;
typedef struct _ClosureTy_9 _ClosureTy_9;
typedef struct _ClosureTy_10 _ClosureTy_10;
typedef struct git_add_entry__Closure_0Ctx git_add_entry__Closure_0Ctx;
typedef struct git_add_entry__Closure_1Ctx git_add_entry__Closure_1Ctx;
typedef struct git_create_tree__Closure_2Ctx git_create_tree__Closure_2Ctx;


enum std_Endian {
  std_Endian_Little,
  std_Endian_Big,
};

char *std_Endian_dbg(std_Endian this) {
  switch (this) {
    case std_Endian_Little: return "Little";
    case std_Endian_Big: return "Big";
    default: return "<unknown>";
  }
}

struct std_fs_FileMetadata {
  u64 size;
  u64 atime;
  u64 atime_ns;
  u64 mtime;
  u64 mtime_ns;
  u64 ctime;
  u64 ctime_ns;
  u32 uid;
  u32 gid;
  u64 dev;
  u32 mode;
};

enum std_fs_EntryType {
  std_fs_EntryType_File,
  std_fs_EntryType_Directory,
  std_fs_EntryType_SymbolicLink,
  std_fs_EntryType_Unknown,
};

char *std_fs_EntryType_dbg(std_fs_EntryType this) {
  switch (this) {
    case std_fs_EntryType_File: return "File";
    case std_fs_EntryType_Directory: return "Directory";
    case std_fs_EntryType_SymbolicLink: return "SymbolicLink";
    case std_fs_EntryType_Unknown: return "Unknown";
    default: return "<unknown>";
  }
}

struct std_fs_DirectoryEntry {
  std_fs_EntryType type;
  char *name;
};

struct std_fs_DirectoryIterator {
  DIR *dir;
  struct dirent *dp;
  
# 173 "out.c" 3 4
 _Bool 
# 173 "out.c"
      skip_self_and_parent;
};

char *std_fs_SeekMode_dbg(i32 this) {
  switch (this) {
    case 
# 178 "out.c" 3 4
        0
# 178 "out.c"
                : return "Set";
    case 
# 179 "out.c" 3 4
        1
# 179 "out.c"
                : return "Cur";
    case 
# 180 "out.c" 3 4
        2
# 180 "out.c"
                : return "End";
    default: return "<unknown>";
  }
}

struct std_sv_SV {
  char *data;
  u32 len;
};

struct std_sv_SVSplitIterator {
  std_sv_SV sv;
  std_sv_SV delim;
};

struct std_argparse_ArgUnion {
  char *as_str;
  i64 as_int;
  
# 198 "out.c" 3 4
 _Bool 
# 198 "out.c"
      as_bool;
  f64 as_float;
};

enum std_argparse_ArgType {
  std_argparse_ArgType_String,
  std_argparse_ArgType_Int,
  std_argparse_ArgType_Bool,
  std_argparse_ArgType_Float,
};

char *std_argparse_ArgType_dbg(std_argparse_ArgType this) {
  switch (this) {
    case std_argparse_ArgType_String: return "String";
    case std_argparse_ArgType_Int: return "Int";
    case std_argparse_ArgType_Bool: return "Bool";
    case std_argparse_ArgType_Float: return "Float";
    default: return "<unknown>";
  }
}

struct std_argparse_Arg {
  std_vector_Vector__0 *flags;
  
# 221 "out.c" 3 4
 _Bool 
# 221 "out.c"
      is_positional;
  
# 222 "out.c" 3 4
 _Bool 
# 222 "out.c"
      required;
  char *help;
  std_argparse_ArgType type;
  std_argparse_ArgUnion val;
  std_argparse_ArgUnion defolt;
  
# 227 "out.c" 3 4
 _Bool 
# 227 "out.c"
      parsed;
};

struct std_argparse_Parser {
  char *description;
  std_vector_Vector__1 *args;
  char *program_name;
};

struct std_buffer_Buffer {
  u8 *data;
  u32 size;
  u32 capacity;
};

struct std_buffer_BytesReader {
  u8 *data;
  u32 size;
  u32 index;
};

struct std_hash_sha1_SHA1Hash {
  u8 data[20];
};

struct std_vector_Vector__0 {
  std_sv_SV *data;
  u32 size;
  u32 capacity;
};

struct std_vector_Vector__1 {
  std_argparse_Arg **data;
  u32 size;
  u32 capacity;
};

struct std_vector_Vector__2 {
  char **data;
  u32 size;
  u32 capacity;
};

struct std_vector_Vector__3 {
  git_Entry **data;
  u32 size;
  u32 capacity;
};

struct std_vector_Vector__4 {
  git_TreeElement *data;
  u32 size;
  u32 capacity;
};

struct std_vector_Iterator__0 {
  std_vector_Vector__0 *vec;
  u32 index;
};

struct std_vector_Iterator__1 {
  std_vector_Vector__1 *vec;
  u32 index;
};

struct std_vector_Iterator__2 {
  std_vector_Vector__2 *vec;
  u32 index;
};

struct std_vector_Iterator__3 {
  std_vector_Vector__3 *vec;
  u32 index;
};

struct std_vector_Iterator__4 {
  std_vector_Vector__4 *vec;
  u32 index;
};

struct git_TreeElement {
  char *mode;
  char *filename;
  char *hash;
};

struct git_Commit {
  char *tree_hash;
  std_vector_Vector__2 *parent_hashes;
  char *author;
  i64 author_timestamp;
  char *author_timezone;
  char *committer;
  i64 committer_timestamp;
  char *committer_timezone;
  char *message;
};

struct git_Entry {
  u32 ctime_seconds;
  u32 ctime_nanoseconds;
  u32 mtime_seconds;
  u32 mtime_nanoseconds;
  u32 dev;
  u32 ino;
  u32 mode;
  u32 uid;
  u32 gid;
  u32 size;
  char *sha1;
  u16 flags;
  
# 338 "out.c" 3 4
 _Bool 
# 338 "out.c"
      assume_valid;
  
# 339 "out.c" 3 4
 _Bool 
# 339 "out.c"
      extended;
  u16 stage;
  char *path;
};

struct git_Index {
  char *signature;
  u32 version;
  u32 num_entries;
  std_vector_Vector__3 *entries;
};

enum git_Object__kind {
  git_Object_Blob,
  git_Object_Tree,
  git_Object_Commit,
};

struct git_Object {
  git_Object__kind tag;
  union {
    struct {
      std_buffer_Buffer buf;
    } git_Object_Blob;
    struct {
      std_vector_Vector__4 *li;
    } git_Object_Tree;
    struct {
      git_Commit *commit;
    } git_Object_Commit;
  };
};

struct _ClosureTy_6 {
  void *_C;
  
# 374 "out.c" 3 4
 _Bool 
# 374 "out.c"
      (*fn)(void *__C, git_Entry *);
};
struct _ClosureTy_9 {
  void *_C;
  i8 (*fn)(void *__C, git_Entry *, git_Entry *);
};
struct _ClosureTy_10 {
  void *_C;
  i8 (*fn)(void *__C, git_TreeElement, git_TreeElement);
};
struct git_add_entry__Closure_0Ctx {
  char **path;
};
struct git_add_entry__Closure_1Ctx {
};
struct git_create_tree__Closure_2Ctx {
};

i32 main(i32 argc, char **argv);
void initialize_repo(i32 argc, char **argv);
void cat_file(i32 argc, char **argv);
void hash_object(i32 argc, char **argv);
void ls_tree(i32 argc, char **argv);
void write_tree(void);
void commit_tree(i32 argc, char **argv);
void update_index(i32 argc, char **argv);
void std_panic(char *msg) __attribute__((noreturn));

# 401 "out.c" 3 4
_Bool 
# 401 "out.c"
    str_eq(char *this, char *other);
char *std_format(char *fmt, ...);
void str_free(char **this);
u8 char_value_from_hex(char this);
char char_hex_from_value(u8 val);

# 406 "out.c" 3 4
_Bool 
# 406 "out.c"
    char_is_space(char this);
u32 u32_max(u32 this, u32 other);
char *std_shift_args(i32 *argc, char ***argv, char *where);
std_fs_FileMetadata std_fs_file_info(char *path);

# 410 "out.c" 3 4
_Bool 
# 410 "out.c"
    std_fs_file_exists(char *path);
void std_fs_write_file_bytes(char *path, void *data, u32 size);
void std_fs_write_file_str(char *path, char *data);
void std_fs_write_file(char *path, std_buffer_Buffer data);
std_buffer_Buffer std_fs_read_file(char *path);

# 415 "out.c" 3 4
_Bool 
# 415 "out.c"
    std_fs_directory_exists(char *path);
void std_fs_create_directory(char *path, 
# 416 "out.c" 3 4
                                        _Bool 
# 416 "out.c"
                                             exists_ok);
std_fs_DirectoryIterator std_fs_iterate_directory(char *path, 
# 417 "out.c" 3 4
                                                             _Bool 
# 417 "out.c"
                                                                  skip_self_and_parent);

# 418 "out.c" 3 4
_Bool 
# 418 "out.c"
    std_fs_DirectoryIterator_has_value(std_fs_DirectoryIterator *this);
void std_fs_DirectoryIterator_next(std_fs_DirectoryIterator *this);
std_fs_DirectoryEntry std_fs_DirectoryIterator_cur(std_fs_DirectoryIterator *this);

# 421 "out.c" 3 4
_Bool 
# 421 "out.c"
    std_sv_SV_is_empty(std_sv_SV *this);
std_sv_SV std_sv_SV_from_str(char *s);
std_sv_SV std_sv_SV_get(std_sv_SV this, u32 n);
char std_sv_SV_at(std_sv_SV this, u32 n);
std_sv_SV std_sv_SV_chop_left(std_sv_SV *this, u32 n);
void std_sv_SV_trim_left(std_sv_SV *this);
std_sv_SV std_sv_SV_chop_by_delim(std_sv_SV *this, char delim);
std_sv_SV std_sv_SV_chop_by_sv(std_sv_SV *this, std_sv_SV delim);
std_sv_SV std_sv_SV_chop_word(std_sv_SV *this);
f32 std_sv_SV_chop_f32(std_sv_SV *this);
i64 std_sv_SV_chop_signed(std_sv_SV *this, char *fn_name);
i64 std_sv_SV_chop_i64(std_sv_SV *this);
i32 std_sv_SV_chop_i32(std_sv_SV *this);

# 434 "out.c" 3 4
_Bool 
# 434 "out.c"
    std_sv_SV_eq(std_sv_SV this, std_sv_SV other);

# 435 "out.c" 3 4
_Bool 
# 435 "out.c"
    std_sv_SV_eq_str(std_sv_SV this, char *other);
void std_sv_SV_only_chop_left(std_sv_SV *this, u32 n);

# 437 "out.c" 3 4
_Bool 
# 437 "out.c"
    std_sv_SV_starts_with_sv(std_sv_SV this, std_sv_SV other);

# 438 "out.c" 3 4
_Bool 
# 438 "out.c"
    std_sv_SV_starts_with_str(std_sv_SV this, char *other);
std_sv_SVSplitIterator std_sv_SV_split_str(std_sv_SV this, char *delim);
char *std_sv_SV_copy_data_to_cstr(std_sv_SV this);

# 441 "out.c" 3 4
_Bool 
# 441 "out.c"
    std_sv_SVSplitIterator_has_value(std_sv_SVSplitIterator *this);
std_sv_SV std_sv_SVSplitIterator_cur(std_sv_SVSplitIterator *this);
void std_sv_SVSplitIterator_next(std_sv_SVSplitIterator *this);
char *std_mem_alloc__0(u32 count);
std_argparse_Arg *std_mem_alloc__1(u32 count);
u8 *std_mem_alloc__2(u32 count);
std_vector_Vector__0 *std_mem_alloc__3(u32 count);
std_sv_SV *std_mem_alloc__4(u32 count);
std_vector_Vector__1 *std_mem_alloc__5(u32 count);
std_argparse_Arg **std_mem_alloc__6(u32 count);
std_vector_Vector__2 *std_mem_alloc__7(u32 count);
char **std_mem_alloc__8(u32 count);
std_vector_Vector__3 *std_mem_alloc__9(u32 count);
git_Entry **std_mem_alloc__10(u32 count);
std_vector_Vector__4 *std_mem_alloc__11(u32 count);
git_TreeElement *std_mem_alloc__12(u32 count);
void std_mem_free(void *ptr);
u8 *std_mem_realloc__0(u8 *ptr, u32 old_count, u32 new_count);
std_sv_SV *std_mem_realloc__1(std_sv_SV *ptr, u32 old_count, u32 new_count);
std_argparse_Arg **std_mem_realloc__2(std_argparse_Arg **ptr, u32 old_count, u32 new_count);
char **std_mem_realloc__3(char **ptr, u32 old_count, u32 new_count);
git_Entry **std_mem_realloc__4(git_Entry **ptr, u32 old_count, u32 new_count);
git_TreeElement *std_mem_realloc__5(git_TreeElement *ptr, u32 old_count, u32 new_count);
void *std_mem_impl_my_calloc(void *state, u32 size);
void *std_mem_impl_my_realloc(void *state, void *ptr, u32 old_size, u32 size);
void std_mem_impl_my_free(void *state, void *ptr);
char *std_libc_errno_get_err(void);
void std_argparse_Arg_save_val(std_argparse_Arg *this, char *s);
std_argparse_Parser std_argparse_Parser_make(char *description);
std_argparse_Arg *std_argparse_Parser__add(std_argparse_Parser *this, char *flags, 
# 470 "out.c" 3 4
                                                                                  _Bool 
# 470 "out.c"
                                                                                       required, char *help);
char **std_argparse_Parser_add_str(std_argparse_Parser *this, char *flags, char *defolt, 
# 471 "out.c" 3 4
                                                                                        _Bool 
# 471 "out.c"
                                                                                             required, char *help);
std_argparse_Arg *std_argparse_find_arg(std_argparse_Parser *parser, char *_flag, i32 *positional_idx);
void std_argparse_Parser_parse(std_argparse_Parser *this, i32 argc, char **argv, 
# 473 "out.c" 3 4
                                                                                _Bool 
# 473 "out.c"
                                                                                     consume_first);
std_buffer_Buffer std_buffer_Buffer_make(u32 capacity);
std_buffer_Buffer std_buffer_Buffer_from_sv(std_sv_SV sv);
void std_buffer_Buffer_resize_if_necessary(std_buffer_Buffer *this, u32 new_size);
void std_buffer_Buffer_write_buf(std_buffer_Buffer *this, std_buffer_Buffer *buf);
void std_buffer_Buffer_write_buf_f(std_buffer_Buffer *this, std_buffer_Buffer *buf);
void std_buffer_Buffer_write_str(std_buffer_Buffer *this, char *s);
void std_buffer_Buffer_write_str_f(std_buffer_Buffer *this, char *s);
void std_buffer_Buffer_write_char(std_buffer_Buffer *this, char c);
void std_buffer_Buffer_write_bytes(std_buffer_Buffer *this, void *bytes, u32 size);
void std_buffer_Buffer_write_u8(std_buffer_Buffer *this, u8 value);
std_buffer_BytesReader std_buffer_Buffer_reader(std_buffer_Buffer this);
char *std_buffer_Buffer_new_str(std_buffer_Buffer this);
std_sv_SV std_buffer_Buffer_sv(std_buffer_Buffer this);
void std_buffer_Buffer_free(std_buffer_Buffer *this);
std_buffer_BytesReader std_buffer_BytesReader_make(u8 *data, u32 size);
u32 std_buffer_BytesReader_read_u32(std_buffer_BytesReader *this, std_Endian endian);
u16 std_buffer_BytesReader_read_u16(std_buffer_BytesReader *this, std_Endian endian);
std_sv_SV std_buffer_BytesReader_read_bytes_sv(std_buffer_BytesReader *this, u32 count);
u32 std_hash_utils_rotate_left(u32 value, u32 bits);
void std_hash_sha1_hash_into(std_buffer_Buffer input, u8 *output);
std_hash_sha1_SHA1Hash std_hash_sha1_SHA1Hash_from(std_buffer_Buffer data);
std_hash_sha1_SHA1Hash std_hash_sha1_SHA1Hash_parse_string_hash(char *hash_str);
char *std_hash_sha1_SHA1Hash_stringify(std_hash_sha1_SHA1Hash this);
std_buffer_Buffer std_zlib_compress(std_buffer_Buffer data);
std_buffer_Buffer std_zlib_decompress_bytes(u8 *data, u32 size, u32 *bytes_consumed);
std_buffer_Buffer std_zlib_decompress(std_buffer_Buffer data, u32 *bytes_consumed);
std_vector_Iterator__0 std_vector_Vector__0_iter(std_vector_Vector__0 *this);
std_sv_SV std_vector_Iterator__0_cur(std_vector_Iterator__0 *this);
void std_vector_Iterator__0_next(std_vector_Iterator__0 *this);

# 503 "out.c" 3 4
_Bool 
# 503 "out.c"
    std_vector_Iterator__0_has_value(std_vector_Iterator__0 *this);
std_vector_Iterator__0 std_vector_Iterator__0_make(std_vector_Vector__0 *vec);
std_sv_SV std_vector_Vector__0_at(std_vector_Vector__0 *this, u32 i);
void std_vector_Vector__0_resize(std_vector_Vector__0 *this, u32 new_capacity);
std_vector_Vector__0 *std_vector_Vector__0_new(u32 capacity);
void std_vector_Vector__0_push(std_vector_Vector__0 *this, std_sv_SV value);
std_vector_Iterator__1 std_vector_Vector__1_iter(std_vector_Vector__1 *this);
std_argparse_Arg *std_vector_Iterator__1_cur(std_vector_Iterator__1 *this);
void std_vector_Iterator__1_next(std_vector_Iterator__1 *this);

# 512 "out.c" 3 4
_Bool 
# 512 "out.c"
    std_vector_Iterator__1_has_value(std_vector_Iterator__1 *this);
std_vector_Iterator__1 std_vector_Iterator__1_make(std_vector_Vector__1 *vec);
void std_vector_Vector__1_resize(std_vector_Vector__1 *this, u32 new_capacity);
std_vector_Vector__1 *std_vector_Vector__1_new(u32 capacity);
void std_vector_Vector__1_push(std_vector_Vector__1 *this, std_argparse_Arg *value);
std_vector_Iterator__2 std_vector_Vector__2_iter(std_vector_Vector__2 *this);
char *std_vector_Iterator__2_cur(std_vector_Iterator__2 *this);
void std_vector_Iterator__2_next(std_vector_Iterator__2 *this);

# 520 "out.c" 3 4
_Bool 
# 520 "out.c"
    std_vector_Iterator__2_has_value(std_vector_Iterator__2 *this);
std_vector_Iterator__2 std_vector_Iterator__2_make(std_vector_Vector__2 *vec);
void std_vector_Vector__2_free(std_vector_Vector__2 *this);
void std_vector_Vector__2_resize(std_vector_Vector__2 *this, u32 new_capacity);
std_vector_Vector__2 *std_vector_Vector__2_new(u32 capacity);
void std_vector_Vector__2_push(std_vector_Vector__2 *this, char *value);
i32 std_vector_Vector__3_find(std_vector_Vector__3 *this, _ClosureTy_6 cb);
std_vector_Iterator__3 std_vector_Vector__3_iter(std_vector_Vector__3 *this);
git_Entry *std_vector_Iterator__3_cur(std_vector_Iterator__3 *this);
void std_vector_Iterator__3_next(std_vector_Iterator__3 *this);

# 530 "out.c" 3 4
_Bool 
# 530 "out.c"
    std_vector_Iterator__3_has_value(std_vector_Iterator__3 *this);
std_vector_Iterator__3 std_vector_Iterator__3_make(std_vector_Vector__3 *vec);
void std_vector_Vector__3_resize(std_vector_Vector__3 *this, u32 new_capacity);
std_vector_Vector__3 *std_vector_Vector__3_new(u32 capacity);
void std_vector_Vector__3_push(std_vector_Vector__3 *this, git_Entry *value);
std_vector_Iterator__4 std_vector_Vector__4_iter(std_vector_Vector__4 *this);
git_TreeElement std_vector_Iterator__4_cur(std_vector_Iterator__4 *this);
void std_vector_Iterator__4_next(std_vector_Iterator__4 *this);

# 538 "out.c" 3 4
_Bool 
# 538 "out.c"
    std_vector_Iterator__4_has_value(std_vector_Iterator__4 *this);
std_vector_Iterator__4 std_vector_Iterator__4_make(std_vector_Vector__4 *vec);
void std_vector_Vector__4_free(std_vector_Vector__4 *this);
void std_vector_Vector__4_resize(std_vector_Vector__4 *this, u32 new_capacity);
std_vector_Vector__4 *std_vector_Vector__4_new(u32 capacity);
void std_vector_Vector__4_push(std_vector_Vector__4 *this, git_TreeElement value);
i8 i32_compare(i32 this, i32 b);
i8 str_compare(char *this, char *b);
i8 char_compare(char this, char b);
void std_sort_sort_by__0(git_Entry **data, u32 size, _ClosureTy_9 cmp);
void std_sort_sort_by__1(git_TreeElement *data, u32 size, _ClosureTy_10 cmp);
void git_TreeElement_free(git_TreeElement this);
void git_Commit_free(git_Commit *this);
void git_Entry_free(git_Entry *this);
git_Index *git_Index_from_buf(std_buffer_Buffer file);
void git_Index_add_entry(git_Index *this, char *path);
void git_Index_dump(git_Index this);
void git_Object_free(git_Object this);
char *git_get_object_filename(char *hash);
std_buffer_Buffer git_decompress_object(char *path);
git_Object git_get_object(char *hash);
char *git_hash_object(git_Object object, 
# 559 "out.c" 3 4
                                        _Bool 
# 559 "out.c"
                                             write);
git_Object git_create_blob(char *path);
git_Object git_create_tree(char *path);
git_Object git_create_commit(char *tree_hash, std_vector_Vector__2 *parent_hashes, char *message);

# 563 "out.c" 3 4
_Bool 
# 563 "out.c"
    git_add_entry__Closure_0(void *__C, git_Entry *e);
i8 git_add_entry__Closure_1(void *__C, git_Entry *a, git_Entry *b);
i8 git_create_tree__Closure_2(void *__C, git_TreeElement a, git_TreeElement b);
void *std_mem_state_allocator = 
# 566 "out.c" 3 4
                               ((void *)0)
# 566 "out.c"
                                   ;
void *(*std_mem_state_alloc_fn)(void *, u32) = std_mem_impl_my_calloc;
void *(*std_mem_state_realloc_fn)(void *, void *, u32, u32) = std_mem_impl_my_realloc;
void (*std_mem_state_free_fn)(void *, void *) = std_mem_impl_my_free;

i32 main(i32 argc, char **argv) {
  std_shift_args(&argc, &argv, "here");
  char *subcommand = std_shift_args(&argc, &argv, "here");
  {
    char *__match_var_19 = subcommand;
    if (str_eq(__match_var_19, "init")) {
      initialize_repo(argc, argv);
    } else if (str_eq(__match_var_19, "cat-file")) {
      cat_file(argc, argv);
    } else if (str_eq(__match_var_19, "hash-object")) {
      hash_object(argc, argv);
    } else if (str_eq(__match_var_19, "ls-tree")) {
      ls_tree(argc, argv);
    } else if (str_eq(__match_var_19, "write-tree")) {
      write_tree();
    } else if (str_eq(__match_var_19, "commit-tree")) {
      commit_tree(argc, argv);
    } else if (str_eq(__match_var_19, "update-index")) {
      update_index(argc, argv);
    } else std_panic("Wrong subcommand, stupid!");
  }
}

void initialize_repo(i32 argc, char **argv) {
  if (argc > 0) {
    char *dir = std_shift_args(&argc, &argv, "here");
    if (std_fs_directory_exists(dir)) {
      std_panic("Error: Directory exists");
    }
    std_fs_create_directory(dir, 
# 600 "out.c" 3 4
                                0
# 600 "out.c"
                                     );
    chdir(dir);
  }
  if (std_fs_directory_exists(".git")) {
    std_panic("Error: Repo exists");
  }
  std_fs_create_directory(".git", 
# 606 "out.c" 3 4
                                 0
# 606 "out.c"
                                      );
  std_fs_create_directory(".git/hooks", 
# 607 "out.c" 3 4
                                       0
# 607 "out.c"
                                            );
  std_fs_create_directory(".git/info", 
# 608 "out.c" 3 4
                                      0
# 608 "out.c"
                                           );
  std_fs_create_directory(".git/objects", 
# 609 "out.c" 3 4
                                         0
# 609 "out.c"
                                              );
  std_fs_create_directory(".git/refs", 
# 610 "out.c" 3 4
                                      0
# 610 "out.c"
                                           );
  std_fs_create_directory(".git/refs/heads", 
# 611 "out.c" 3 4
                                            0
# 611 "out.c"
                                                 );
  std_fs_create_directory(".git/refs/tags", 
# 612 "out.c" 3 4
                                           0
# 612 "out.c"
                                                );
  std_fs_write_file_str(".git/HEAD", "ref: refs/heads/main\n");
  std_fs_write_file_str(".git/config", "");
  std_fs_write_file_str(".git/description", "Unnamed repository; edit this file 'description' to name the repository.");
}

void cat_file(i32 argc, char **argv) {
  char *hash = std_shift_args(&argc, &argv, "here");
  
# 620 "out.c" 3 4
 _Bool 
# 620 "out.c"
      pprint = 
# 620 "out.c" 3 4
               0
# 620 "out.c"
                    ;
  if (str_eq(hash, "-p")) {
    hash=std_shift_args(&argc, &argv, "here");
    pprint=
# 623 "out.c" 3 4
          1
# 623 "out.c"
              ;
  }
  git_Object contents = git_get_object(hash);
  if ( ({
    git_Object _is_20 = contents;
    
# 628 "out.c" 3 4
   _Bool 
# 628 "out.c"
        _r_21 = 
# 628 "out.c" 3 4
                1
# 628 "out.c"
                    ;
    switch (_is_20.tag) {
      {
        std_buffer_Buffer buf;
        case git_Object_Blob:
          buf = _is_20.git_Object_Blob.buf;
          goto m_22_0;
        m_22_0:
          {
            printf("%.*s", (buf).size, (buf).data);
          } break;
      }
default: _r_21 = 
# 640 "out.c" 3 4
                0
# 640 "out.c"
                     ; break;
}
    _r_21;}) ) {

    }
  }

void hash_object(i32 argc, char **argv) {
    char *file = std_shift_args(&argc, &argv, "here");
    
# 649 "out.c" 3 4
   _Bool 
# 649 "out.c"
        write = 
# 649 "out.c" 3 4
                0
# 649 "out.c"
                     ;
    if (str_eq(file, "-w")) {
      write=
# 651 "out.c" 3 4
           1
# 651 "out.c"
               ;
      file=std_shift_args(&argc, &argv, "here");
    }
    git_Object object = git_create_blob(file);
    char *hash = git_hash_object(object, write);
    printf("%s\n", hash);
  }

void ls_tree(i32 argc, char **argv) {
    char *hash = std_shift_args(&argc, &argv, "here");
    
# 661 "out.c" 3 4
   _Bool 
# 661 "out.c"
        name_only = 
# 661 "out.c" 3 4
                    0
# 661 "out.c"
                         ;
    if (str_eq(hash, "--name-only")) {
      hash=std_shift_args(&argc, &argv, "here");
      name_only=
# 664 "out.c" 3 4
               1
# 664 "out.c"
                   ;
    }
    git_Object object = git_get_object(hash);
    if ( ({
      git_Object _is_23 = object;
      
# 669 "out.c" 3 4
     _Bool 
# 669 "out.c"
          _r_24 = 
# 669 "out.c" 3 4
                  1
# 669 "out.c"
                      ;
      switch (_is_23.tag) {
        {
          std_vector_Vector__4 *li;
          case git_Object_Tree:
            li = _is_23.git_Object_Tree.li;
            goto m_25_0;
          m_25_0:
            {
              for (std_vector_Iterator__4 _i0 = std_vector_Vector__4_iter(li); std_vector_Iterator__4_has_value(&_i0); std_vector_Iterator__4_next(&_i0)) {
                git_TreeElement entry = std_vector_Iterator__4_cur(&_i0);
                {
                  if (name_only) {
                    printf("%s\n", entry.filename);
                  } else {
                    char *file_type = (str_eq(entry.mode, "40000") ? "tree" : "blob");
                    printf("%06d %s %s    %s\n", atoi(entry.mode), file_type, entry.hash, entry.filename);
                  }
                }
              }
            } break;
        }
default: _r_24 = 
# 691 "out.c" 3 4
                0
# 691 "out.c"
                     ; break;
}
      _r_24;}) ) {

      }
    }

void write_tree(void) {
      git_Object tree = git_create_tree(".");
      char *hash = git_hash_object(tree, 
# 700 "out.c" 3 4
                                        1
# 700 "out.c"
                                            );
      printf("%s\n", hash);
    }

void commit_tree(i32 argc, char **argv) {
      std_argparse_Parser parser = std_argparse_Parser_make("commit tree");
      char **tree_hash = std_argparse_Parser_add_str(&parser, "hash", "", 
# 706 "out.c" 3 4
                                                                         0
# 706 "out.c"
                                                                              , "tree hash str");
      char **parent = std_argparse_Parser_add_str(&parser, "-p", "", 
# 707 "out.c" 3 4
                                                                    0
# 707 "out.c"
                                                                         , "parent commit");
      char **message = std_argparse_Parser_add_str(&parser, "-m", "", 
# 708 "out.c" 3 4
                                                                     1
# 708 "out.c"
                                                                         , "commit message");
      std_argparse_Parser_parse(&parser, argc, argv, 
# 709 "out.c" 3 4
                                                    0
# 709 "out.c"
                                                         );
      std_vector_Vector__2 *parents = ({
        std_vector_Vector__2 *_vc26 = std_vector_Vector__2_new(8);
        _vc26;});
      if (strlen((*parent)) > 0) {
        std_vector_Vector__2_push(parents, strdup((*parent)));
      }
      git_Object commit = git_create_commit((*tree_hash), parents, (*message));
      char *hash = git_hash_object(commit, 
# 717 "out.c" 3 4
                                          1
# 717 "out.c"
                                              );
      printf("%s\n", hash);
    }

void update_index(i32 argc, char **argv) {
      std_argparse_Parser parser = std_argparse_Parser_make("update index");
      char **path = std_argparse_Parser_add_str(&parser, "--add", "", 
# 723 "out.c" 3 4
                                                                     1
# 723 "out.c"
                                                                         , "path to the file");
      std_argparse_Parser_parse(&parser, argc, argv, 
# 724 "out.c" 3 4
                                                    0
# 724 "out.c"
                                                         );
      std_buffer_Buffer file = std_fs_read_file(".git/index");
      git_Index *index = git_Index_from_buf(file);
      git_Index_dump((*index));
      git_Index_add_entry(index, (*path));
    }

void std_panic(char *msg) {
      dump_backtrace();
      fprintf(
# 733 "out.c" 3 4
             stderr
# 733 "out.c"
                   , "--------------------------------------------------------------------------------""\n");
      fprintf(
# 734 "out.c" 3 4
             stderr
# 734 "out.c"
                   , "%s""\n", msg);
      __builtin_trap();
      exit(1);
    }


# 739 "out.c" 3 4
_Bool 
# 739 "out.c"
    str_eq(char *this, char *other) {
      void *a = ((void *)this);
      void *b = ((void *)other);
      if (a==b) {
        return 
# 743 "out.c" 3 4
              1
# 743 "out.c"
                  ;
      }
      if (!((((
# 745 "out.c" 3 4
              _Bool
# 745 "out.c"
                  )a) && ((
# 745 "out.c" 3 4
                           _Bool
# 745 "out.c"
                               )b)))) {
        return 
# 746 "out.c" 3 4
              0
# 746 "out.c"
                   ;
      }
      return strcmp(this, other)==0;
    }

char *std_format(char *fmt, ...) {
      va_list args = {0};
      
# 753 "out.c" 3 4
     __builtin_va_start(
# 753 "out.c"
     args
# 753 "out.c" 3 4
     ,
# 753 "out.c"
     fmt
# 753 "out.c" 3 4
     )
# 753 "out.c"
                        ;
      u32 size = vsnprintf(
# 754 "out.c" 3 4
                          ((void *)0)
# 754 "out.c"
                              , 0, fmt, args);
      
# 755 "out.c" 3 4
     __builtin_va_end(
# 755 "out.c"
     args
# 755 "out.c" 3 4
     )
# 755 "out.c"
                 ;
      
# 756 "out.c" 3 4
     __builtin_va_start(
# 756 "out.c"
     args
# 756 "out.c" 3 4
     ,
# 756 "out.c"
     fmt
# 756 "out.c" 3 4
     )
# 756 "out.c"
                        ;
      char *s = std_mem_alloc__0(((u32)(size + 1)));
      vsnprintf(s, (size + 1), fmt, args);
      s[size]='\0';
      
# 760 "out.c" 3 4
     __builtin_va_end(
# 760 "out.c"
     args
# 760 "out.c" 3 4
     )
# 760 "out.c"
                 ;
      return s;
    }

void str_free(char **this) {
      std_mem_free((*this));
      (*this)=
# 766 "out.c" 3 4
             ((void *)0)
# 766 "out.c"
                 ;
    }

u8 char_value_from_hex(char this) {
      if (('0' <= this) && (this <= '9')) {
        return ((u8)this) - ((u8)'0');
      }
      if (('a' <= this) && (this <= 'f')) {
        return (((u8)this) - ((u8)'a')) + ((u8)10);
      }
      if (('A' <= this) && (this <= 'F')) {
        return (((u8)this) - ((u8)'A')) + ((u8)10);
      }
      std_panic(std_format("[-] Invalid hex digit: '%c' (0x%02x)", this, this));
    }

char char_hex_from_value(u8 val) {
      if(!(val < ((u8)16))) { ae_assert_fail("/home/mindful-dev/ocen/std/mod.oc:137:12: Assertion failed: `val < 16`", std_format("Invalid value for hex char: %u", val)); }
      return "0123456789abcdef"[val];
    }


# 787 "out.c" 3 4
_Bool 
# 787 "out.c"
    char_is_space(char this) {
      return 
# 788 "out.c" 3 4
            ((*__ctype_b_loc ())[(int) ((
# 788 "out.c"
            this
# 788 "out.c" 3 4
            ))] & (unsigned short int) _ISspace)
# 788 "out.c"
                         ; }

u32 u32_max(u32 this, u32 other) {
      return ((this > other) ? this : other); }

char *std_shift_args(i32 *argc, char ***argv, char *where) {
      if ((*argc)==0) {
        printf("Expected argument but got none\n");
        exit(1);
      }
      char *arg = (*argv)[0];
      (*argv)=((*argv) + 1);
      (*argc)=((*argc) - 1);
      return arg;
    }

std_fs_FileMetadata std_fs_file_info(char *path) {
      struct stat s = {0};
      i32 res = stat(path, &s);
      if (res != 0) {
        std_panic(std_format("failed to get file info: '%s': %s", path, std_libc_errno_get_err()));
      }
      return (std_fs_FileMetadata){.size=s.st_size, .atime=s.
# 810 "out.c" 3 4
                                                            st_atim.tv_sec
# 810 "out.c"
                                                                    , .atime_ns=s.st_atimensec, .mtime=s.
# 810 "out.c" 3 4
                                                                                                         st_mtim.tv_sec
# 810 "out.c"
                                                                                                                 , .mtime_ns=s.st_mtimensec, .ctime=s.
# 810 "out.c" 3 4
                                                                                                                                                      st_ctim.tv_sec
# 810 "out.c"
                                                                                                                                                              , .ctime_ns=s.st_ctimensec, .uid=s.st_uid, .gid=s.st_gid, .dev=s.st_dev, .mode=s.st_mode};
    }


# 813 "out.c" 3 4
_Bool 
# 813 "out.c"
    std_fs_file_exists(char *path) {
      FILE *file = fopen(path, "r");
      if (!(((
# 815 "out.c" 3 4
             _Bool
# 815 "out.c"
                 )file))) {
        return 
# 816 "out.c" 3 4
              0
# 816 "out.c"
                   ;
      }
      fclose(file);
      return 
# 819 "out.c" 3 4
            1
# 819 "out.c"
                ;
    }

void std_fs_write_file_bytes(char *path, void *data, u32 size) {
      FILE *file = fopen(path, "wb");
      if (!(((
# 824 "out.c" 3 4
             _Bool
# 824 "out.c"
                 )file))) {
        std_panic(std_format("[-] Failed to open file: %s", path));
      }
      i32 written = fwrite(data, 1, size, file);
      if (((u32)written) != size) {
        std_panic(std_format("[-] Failed to write to file: %s", path));
      }
      fclose(file);
    }

void std_fs_write_file_str(char *path, char *data) {
      std_fs_write_file_bytes(path, data, strlen(data));
    }

void std_fs_write_file(char *path, std_buffer_Buffer data) {
      std_fs_write_file_bytes(path, data.data, data.size);
    }

std_buffer_Buffer std_fs_read_file(char *path) {
      FILE *file = fopen(path, "r");
      if (!(((
# 844 "out.c" 3 4
             _Bool
# 844 "out.c"
                 )file))) {
        std_panic(std_format("[-] Failed to open file: %s: %s", path, std_libc_errno_get_err()));
      }
      fseek(file, ((i64)0), 
# 847 "out.c" 3 4
                           2
# 847 "out.c"
                                   );
      u32 size = ((u32)ftell(file));
      fseek(file, ((i64)0), 
# 849 "out.c" 3 4
                           0
# 849 "out.c"
                                   );
      std_buffer_Buffer data = std_buffer_Buffer_make((size + 1));
      i32 read = fread(data.data, 1, size, file);
      if (((u32)read) != size) {
        std_panic(std_format("[-] Failed to read from file: %s", path));
      }
      fclose(file);
      data.size=((u32)size);
      data.data[size]=((u8)0);
      return data;
    }


# 861 "out.c" 3 4
_Bool 
# 861 "out.c"
    std_fs_directory_exists(char *path) {
      DIR *dir = opendir(path);
      if (dir==
# 863 "out.c" 3 4
              ((void *)0)
# 863 "out.c"
                  ) {
        return 
# 864 "out.c" 3 4
              0
# 864 "out.c"
                   ;
      }
      closedir(dir);
      return 
# 867 "out.c" 3 4
            1
# 867 "out.c"
                ;
    }

void std_fs_create_directory(char *path, 
# 870 "out.c" 3 4
                                        _Bool 
# 870 "out.c"
                                             exists_ok) {
      if (exists_ok && std_fs_directory_exists(path)) {
        return;
      }
      i32 res = mkdir(path, 511);
      if (res != 0) {
        std_panic(std_format("[-] Failed to create directory: %s", path));
      }
    }

std_fs_DirectoryIterator std_fs_iterate_directory(char *path, 
# 880 "out.c" 3 4
                                                             _Bool 
# 880 "out.c"
                                                                  skip_self_and_parent) {
      DIR *dir = opendir(path);
      if (dir==
# 882 "out.c" 3 4
              ((void *)0)
# 882 "out.c"
                  ) {
        std_panic(std_format("[-] Failed to open directory: %s", path));
      }
      std_fs_DirectoryIterator iter = {0};
      iter.dir=dir;
      iter.skip_self_and_parent=skip_self_and_parent;
      std_fs_DirectoryIterator_next(&iter);
      return iter;
    }


# 892 "out.c" 3 4
_Bool 
# 892 "out.c"
    std_fs_DirectoryIterator_has_value(std_fs_DirectoryIterator *this) {
      return ((
# 893 "out.c" 3 4
              _Bool
# 893 "out.c"
                  )this->dp); }

void std_fs_DirectoryIterator_next(std_fs_DirectoryIterator *this) {
      this->dp=readdir(this->dir);
      while (((
# 897 "out.c" 3 4
              _Bool
# 897 "out.c"
                  )this->dp) && this->skip_self_and_parent) {
        {
          char *__match_var_27 = this->dp->d_name;
          if (str_eq(__match_var_27, ".") || str_eq(__match_var_27, "..")) {
            this->dp=readdir(this->dir);
          } else {
            goto _While_break_28;
          }
        }
      }
      _While_break_28:;
    }

std_fs_DirectoryEntry std_fs_DirectoryIterator_cur(std_fs_DirectoryIterator *this) {
      char *name = this->dp->d_name;
      std_fs_EntryType type = ({std_fs_EntryType __yv_29;
        switch (this->dp->d_type) {
          case 
# 914 "out.c" 3 4
              DT_DIR
# 914 "out.c"
                    : {
            __yv_29 = std_fs_EntryType_Directory;
            goto _l___yv_29;
          } break;
          case 
# 918 "out.c" 3 4
              DT_REG
# 918 "out.c"
                    : {
            __yv_29 = std_fs_EntryType_File;
            goto _l___yv_29;
          } break;
          case 
# 922 "out.c" 3 4
              DT_LNK
# 922 "out.c"
                    : {
            __yv_29 = std_fs_EntryType_SymbolicLink;
            goto _l___yv_29;
          } break;
          default: {
            __yv_29 = std_fs_EntryType_Unknown;
            goto _l___yv_29;
          } break;
        }

_l___yv_29:
      __yv_29;});
      return (std_fs_DirectoryEntry){.type=type, .name=name};
    }


# 937 "out.c" 3 4
_Bool 
# 937 "out.c"
    std_sv_SV_is_empty(std_sv_SV *this) {
      return this->len==0; }

std_sv_SV std_sv_SV_from_str(char *s) {
      return (std_sv_SV){.data=s, .len=strlen(s)}; }

std_sv_SV std_sv_SV_get(std_sv_SV this, u32 n) {
      return (std_sv_SV){.data=this.data, .len=n}; }

char std_sv_SV_at(std_sv_SV this, u32 n) {
      if(!(n < this.len)) { ae_assert_fail("/home/mindful-dev/ocen/std/sv.oc:30:12: Assertion failed: `n < .len`", "Index out of bounds in SV::at"); }
      return this.data[n];
    }

std_sv_SV std_sv_SV_chop_left(std_sv_SV *this, u32 n) {
      std_sv_SV res = std_sv_SV_get((*this), n);
      this->data=(this->data + n);
      this->len-=n;
      return res;
    }

void std_sv_SV_trim_left(std_sv_SV *this) {
      while ((this->len > 0) && char_is_space(this->data[0])) {
        this->data=(this->data + 1);
        this->len-=1;
      }
    }

std_sv_SV std_sv_SV_chop_by_delim(std_sv_SV *this, char delim) {
      u32 i = 0;
      while ((i < this->len) && (this->data[i] != delim)) {
        i+=1;
      }
      std_sv_SV res = std_sv_SV_get((*this), i);
      if (i==this->len) {
        this->data=(this->data + i);
        this->len-=i;
      } else {
        this->data=((this->data + i) + 1);
        this->len-=(i + 1);
      }
      return res;
    }

std_sv_SV std_sv_SV_chop_by_sv(std_sv_SV *this, std_sv_SV delim) {
      for (u32 i = 0; i < ((this->len - delim.len) + 1); i++) {
        if (memcmp((this->data + i), delim.data, delim.len)==0) {
          std_sv_SV res = std_sv_SV_get((*this), i);
          this->data=((this->data + i) + delim.len);
          this->len-=(i + delim.len);
          return res;
        }
      }
      std_sv_SV res = std_sv_SV_get((*this), this->len);
      this->data=(this->data + this->len);
      this->len=0;
      return res;
    }

std_sv_SV std_sv_SV_chop_word(std_sv_SV *this) {
      std_sv_SV_trim_left(this);
      u32 i = 0;
      while ((i < this->len) && !(char_is_space(this->data[i]))) {
        i+=1;
      }
      std_sv_SV res = std_sv_SV_get((*this), i);
      if (i==this->len) {
        this->data=(this->data + i);
        this->len-=i;
      } else {
        this->data=((this->data + i) + 1);
        this->len-=(i + 1);
      }
      std_sv_SV_trim_left(this);
      return res;
    }

f32 std_sv_SV_chop_f32(std_sv_SV *this) {
      char *endptr = "";
      f64 res = strtod(this->data, &endptr);
      if(!(endptr != this->data)) { ae_assert_fail("/home/mindful-dev/ocen/std/sv.oc:163:12: Assertion failed: `endptr != .data`", "Failed to parse number in SV::chop_f32"); }
      std_sv_SV_only_chop_left(this, ((u32)(endptr - this->data)));
      return ((f32)res);
    }

i64 std_sv_SV_chop_signed(std_sv_SV *this, char *fn_name) {
      char *endptr = "";
      i64 res = strtoll(this->data, &endptr, 10);
      if(!(endptr != this->data)) { ae_assert_fail("/home/mindful-dev/ocen/std/sv.oc:172:12: Assertion failed: `endptr != .data`", std_format("Failed to parse number in %s", fn_name)); }
      std_sv_SV_only_chop_left(this, ((u32)(endptr - this->data)));
      return res;
    }

i64 std_sv_SV_chop_i64(std_sv_SV *this) {
      return ((i64)std_sv_SV_chop_signed(this, "SV::chop_i64")); }

i32 std_sv_SV_chop_i32(std_sv_SV *this) {
      return ((i32)std_sv_SV_chop_signed(this, "SV::chop_i32")); }


# 1036 "out.c" 3 4
_Bool 
# 1036 "out.c"
    std_sv_SV_eq(std_sv_SV this, std_sv_SV other) {
      return (this.len==other.len && memcmp(this.data, other.data, this.len)==0); }


# 1039 "out.c" 3 4
_Bool 
# 1039 "out.c"
    std_sv_SV_eq_str(std_sv_SV this, char *other) {
      return std_sv_SV_eq(this, std_sv_SV_from_str(other)); }

void std_sv_SV_only_chop_left(std_sv_SV *this, u32 n) {
      this->data=(this->data + n);
      this->len-=n;
    }


# 1047 "out.c" 3 4
_Bool 
# 1047 "out.c"
    std_sv_SV_starts_with_sv(std_sv_SV this, std_sv_SV other) {
      if (this.len < other.len) {
        return 
# 1049 "out.c" 3 4
              0
# 1049 "out.c"
                   ;
      }
      for (u32 i = 0; i < other.len; i+=1) {
        if (this.data[i] != other.data[i]) {
          return 
# 1053 "out.c" 3 4
                0
# 1053 "out.c"
                     ;
        }
      }
      return 
# 1056 "out.c" 3 4
            1
# 1056 "out.c"
                ;
    }


# 1059 "out.c" 3 4
_Bool 
# 1059 "out.c"
    std_sv_SV_starts_with_str(std_sv_SV this, char *other) {
      return std_sv_SV_starts_with_sv(this, std_sv_SV_from_str(other)); }

std_sv_SVSplitIterator std_sv_SV_split_str(std_sv_SV this, char *delim) {
      return (std_sv_SVSplitIterator){.sv=this, .delim=std_sv_SV_from_str(delim)}; }

char *std_sv_SV_copy_data_to_cstr(std_sv_SV this) {
      char *buf = std_mem_alloc__0((this.len + 1));
      memcpy(buf, this.data, this.len);
      buf[this.len]='\0';
      return buf;
    }


# 1072 "out.c" 3 4
_Bool 
# 1072 "out.c"
    std_sv_SVSplitIterator_has_value(std_sv_SVSplitIterator *this) {
      return !(std_sv_SV_is_empty(&this->sv)); }

std_sv_SV std_sv_SVSplitIterator_cur(std_sv_SVSplitIterator *this) {
      return std_sv_SV_chop_by_sv(&this->sv, this->delim); }

void std_sv_SVSplitIterator_next(std_sv_SVSplitIterator *this) {
    }

char *std_mem_alloc__0(u32 count) {
      return ((char *)std_mem_state_alloc_fn(std_mem_state_allocator, (count * ((u32)sizeof(char)))));
    }

std_argparse_Arg *std_mem_alloc__1(u32 count) {
      return ((std_argparse_Arg *)std_mem_state_alloc_fn(std_mem_state_allocator, (count * ((u32)sizeof(std_argparse_Arg)))));
    }

u8 *std_mem_alloc__2(u32 count) {
      return ((u8 *)std_mem_state_alloc_fn(std_mem_state_allocator, (count * ((u32)sizeof(u8)))));
    }

std_vector_Vector__0 *std_mem_alloc__3(u32 count) {
      return ((std_vector_Vector__0 *)std_mem_state_alloc_fn(std_mem_state_allocator, (count * ((u32)sizeof(std_vector_Vector__0)))));
    }

std_sv_SV *std_mem_alloc__4(u32 count) {
      return ((std_sv_SV *)std_mem_state_alloc_fn(std_mem_state_allocator, (count * ((u32)sizeof(std_sv_SV)))));
    }

std_vector_Vector__1 *std_mem_alloc__5(u32 count) {
      return ((std_vector_Vector__1 *)std_mem_state_alloc_fn(std_mem_state_allocator, (count * ((u32)sizeof(std_vector_Vector__1)))));
    }

std_argparse_Arg **std_mem_alloc__6(u32 count) {
      return ((std_argparse_Arg **)std_mem_state_alloc_fn(std_mem_state_allocator, (count * ((u32)sizeof(std_argparse_Arg *)))));
    }

std_vector_Vector__2 *std_mem_alloc__7(u32 count) {
      return ((std_vector_Vector__2 *)std_mem_state_alloc_fn(std_mem_state_allocator, (count * ((u32)sizeof(std_vector_Vector__2)))));
    }

char **std_mem_alloc__8(u32 count) {
      return ((char **)std_mem_state_alloc_fn(std_mem_state_allocator, (count * ((u32)sizeof(char *)))));
    }

std_vector_Vector__3 *std_mem_alloc__9(u32 count) {
      return ((std_vector_Vector__3 *)std_mem_state_alloc_fn(std_mem_state_allocator, (count * ((u32)sizeof(std_vector_Vector__3)))));
    }

git_Entry **std_mem_alloc__10(u32 count) {
      return ((git_Entry **)std_mem_state_alloc_fn(std_mem_state_allocator, (count * ((u32)sizeof(git_Entry *)))));
    }

std_vector_Vector__4 *std_mem_alloc__11(u32 count) {
      return ((std_vector_Vector__4 *)std_mem_state_alloc_fn(std_mem_state_allocator, (count * ((u32)sizeof(std_vector_Vector__4)))));
    }

git_TreeElement *std_mem_alloc__12(u32 count) {
      return ((git_TreeElement *)std_mem_state_alloc_fn(std_mem_state_allocator, (count * ((u32)sizeof(git_TreeElement)))));
    }

void std_mem_free(void *ptr) {
      if (std_mem_state_free_fn != 
# 1134 "out.c" 3 4
                                  ((void *)0)
# 1134 "out.c"
                                      ) {
        std_mem_state_free_fn(std_mem_state_allocator, ptr);
        return;
      }
    }

u8 *std_mem_realloc__0(u8 *ptr, u32 old_count, u32 new_count) {
      u32 old_size = (old_count * ((u32)sizeof(u8)));
      u32 new_size = (new_count * ((u32)sizeof(u8)));
      if (std_mem_state_realloc_fn != 
# 1143 "out.c" 3 4
                                     ((void *)0)
# 1143 "out.c"
                                         ) {
        return std_mem_state_realloc_fn(std_mem_state_allocator, ptr, old_size, new_size);
      }
      if(!(new_size >= old_size)) { ae_assert_fail("/home/mindful-dev/ocen/std/mem.oc:63:12: Assertion failed: `new_size >= old_size`", "Cannot shrink memory in default allocator"); }
      u8 *new_ptr = std_mem_alloc__2(new_count);
      memcpy(new_ptr, ptr, old_size);
      std_mem_free(ptr);
      return new_ptr;
    }

std_sv_SV *std_mem_realloc__1(std_sv_SV *ptr, u32 old_count, u32 new_count) {
      u32 old_size = (old_count * ((u32)sizeof(std_sv_SV)));
      u32 new_size = (new_count * ((u32)sizeof(std_sv_SV)));
      if (std_mem_state_realloc_fn != 
# 1156 "out.c" 3 4
                                     ((void *)0)
# 1156 "out.c"
                                         ) {
        return std_mem_state_realloc_fn(std_mem_state_allocator, ptr, old_size, new_size);
      }
      if(!(new_size >= old_size)) { ae_assert_fail("/home/mindful-dev/ocen/std/mem.oc:63:12: Assertion failed: `new_size >= old_size`", "Cannot shrink memory in default allocator"); }
      std_sv_SV *new_ptr = std_mem_alloc__4(new_count);
      memcpy(new_ptr, ptr, old_size);
      std_mem_free(ptr);
      return new_ptr;
    }

std_argparse_Arg **std_mem_realloc__2(std_argparse_Arg **ptr, u32 old_count, u32 new_count) {
      u32 old_size = (old_count * ((u32)sizeof(std_argparse_Arg *)));
      u32 new_size = (new_count * ((u32)sizeof(std_argparse_Arg *)));
      if (std_mem_state_realloc_fn != 
# 1169 "out.c" 3 4
                                     ((void *)0)
# 1169 "out.c"
                                         ) {
        return std_mem_state_realloc_fn(std_mem_state_allocator, ptr, old_size, new_size);
      }
      if(!(new_size >= old_size)) { ae_assert_fail("/home/mindful-dev/ocen/std/mem.oc:63:12: Assertion failed: `new_size >= old_size`", "Cannot shrink memory in default allocator"); }
      std_argparse_Arg **new_ptr = std_mem_alloc__6(new_count);
      memcpy(new_ptr, ptr, old_size);
      std_mem_free(ptr);
      return new_ptr;
    }

char **std_mem_realloc__3(char **ptr, u32 old_count, u32 new_count) {
      u32 old_size = (old_count * ((u32)sizeof(char *)));
      u32 new_size = (new_count * ((u32)sizeof(char *)));
      if (std_mem_state_realloc_fn != 
# 1182 "out.c" 3 4
                                     ((void *)0)
# 1182 "out.c"
                                         ) {
        return std_mem_state_realloc_fn(std_mem_state_allocator, ptr, old_size, new_size);
      }
      if(!(new_size >= old_size)) { ae_assert_fail("/home/mindful-dev/ocen/std/mem.oc:63:12: Assertion failed: `new_size >= old_size`", "Cannot shrink memory in default allocator"); }
      char **new_ptr = std_mem_alloc__8(new_count);
      memcpy(new_ptr, ptr, old_size);
      std_mem_free(ptr);
      return new_ptr;
    }

git_Entry **std_mem_realloc__4(git_Entry **ptr, u32 old_count, u32 new_count) {
      u32 old_size = (old_count * ((u32)sizeof(git_Entry *)));
      u32 new_size = (new_count * ((u32)sizeof(git_Entry *)));
      if (std_mem_state_realloc_fn != 
# 1195 "out.c" 3 4
                                     ((void *)0)
# 1195 "out.c"
                                         ) {
        return std_mem_state_realloc_fn(std_mem_state_allocator, ptr, old_size, new_size);
      }
      if(!(new_size >= old_size)) { ae_assert_fail("/home/mindful-dev/ocen/std/mem.oc:63:12: Assertion failed: `new_size >= old_size`", "Cannot shrink memory in default allocator"); }
      git_Entry **new_ptr = std_mem_alloc__10(new_count);
      memcpy(new_ptr, ptr, old_size);
      std_mem_free(ptr);
      return new_ptr;
    }

git_TreeElement *std_mem_realloc__5(git_TreeElement *ptr, u32 old_count, u32 new_count) {
      u32 old_size = (old_count * ((u32)sizeof(git_TreeElement)));
      u32 new_size = (new_count * ((u32)sizeof(git_TreeElement)));
      if (std_mem_state_realloc_fn != 
# 1208 "out.c" 3 4
                                     ((void *)0)
# 1208 "out.c"
                                         ) {
        return std_mem_state_realloc_fn(std_mem_state_allocator, ptr, old_size, new_size);
      }
      if(!(new_size >= old_size)) { ae_assert_fail("/home/mindful-dev/ocen/std/mem.oc:63:12: Assertion failed: `new_size >= old_size`", "Cannot shrink memory in default allocator"); }
      git_TreeElement *new_ptr = std_mem_alloc__12(new_count);
      memcpy(new_ptr, ptr, old_size);
      std_mem_free(ptr);
      return new_ptr;
    }

void *std_mem_impl_my_calloc(void *state, u32 size) {
      return calloc(size, 1); }

void *std_mem_impl_my_realloc(void *state, void *ptr, u32 old_size, u32 size) {
      return realloc(ptr, size); }

void std_mem_impl_my_free(void *state, void *ptr) {
            free(ptr);
    }

char *std_libc_errno_get_err(void) {
      return ((char *)strerror(
# 1229 "out.c" 3 4
                              (*__errno_location ())
# 1229 "out.c"
                                   )); }

void std_argparse_Arg_save_val(std_argparse_Arg *this, char *s) {
      std_sv_SV sv = std_sv_SV_from_str(s);
switch ((this->type)) {
        case std_argparse_ArgType_String:
        m_30_0:
          {
            this->val.as_str=s;
          } break;
        case std_argparse_ArgType_Int:
        m_30_1:
          {
            this->val.as_int=std_sv_SV_chop_i64(&sv);
          } break;
        case std_argparse_ArgType_Bool:
        m_30_2:
          {
            this->val.as_bool=({
# 1247 "out.c" 3 4
                               _Bool 
# 1247 "out.c"
                                    __yv_31;
              {
                char *__match_var_32 = s;
                if (str_eq(__match_var_32, "true") || str_eq(__match_var_32, "1")) {
                  __yv_31 = 
# 1251 "out.c" 3 4
                           1
# 1251 "out.c"
                               ;
                  goto _l___yv_31;
                } else if (str_eq(__match_var_32, "false") || str_eq(__match_var_32, "0")) {
                  __yv_31 = 
# 1254 "out.c" 3 4
                           0
# 1254 "out.c"
                                ;
                  goto _l___yv_31;
                } else {
                  std_sv_SV flag = std_vector_Vector__0_at(this->flags, 0);
                  std_panic(std_format("Invalid boolean value: %s for arg %.*s", s, (flag).len, (flag).data));
                }
              }

_l___yv_31:
            __yv_31;});
          } break;
        case std_argparse_ArgType_Float:
        m_30_3:
          {
            this->val.as_float=((f64)std_sv_SV_chop_f32(&sv));
          } break;
      } }

std_argparse_Parser std_argparse_Parser_make(char *description) {
      return (std_argparse_Parser){.description=description, .args=({
        std_vector_Vector__1 *_vc33 = std_vector_Vector__1_new(8);
        _vc33;}), .program_name=""}; }

std_argparse_Arg *std_argparse_Parser__add(std_argparse_Parser *this, char *flags, 
# 1277 "out.c" 3 4
                                                                                  _Bool 
# 1277 "out.c"
                                                                                       required, char *help) {
      std_argparse_Arg *arg = std_mem_alloc__1(1);
      arg->flags=({
        std_vector_Vector__0 *_vc34 = std_vector_Vector__0_new(8);
        _vc34;});
      for (std_sv_SVSplitIterator _i10 = std_sv_SV_split_str(std_sv_SV_from_str(flags), "/"); std_sv_SVSplitIterator_has_value(&_i10); std_sv_SVSplitIterator_next(&_i10)) {
        std_sv_SV flag = std_sv_SVSplitIterator_cur(&_i10);
        {
          if (flag.len > 0) {
            std_vector_Vector__0_push(arg->flags, flag);
          } else {
            std_panic("Flag names must not be empty");
          }
        }
      }
      arg->required=required;
      arg->help=help;
      if(!(arg->flags->size > 0)) { ae_assert_fail("/home/mindful-dev/ocen/std/argparse.oc:80:12: Assertion failed: `arg.flags.size > 0`", "Flag names must not be empty"); }
      arg->is_positional=(arg->flags->size==1 && !(std_sv_SV_starts_with_str(std_vector_Vector__0_at(arg->flags, 0), "-")));
      if (arg->is_positional) {
        arg->required=
# 1297 "out.c" 3 4
                     1
# 1297 "out.c"
                         ;
      }
      std_vector_Vector__1_push(this->args, arg);
      return arg;
    }

char **std_argparse_Parser_add_str(std_argparse_Parser *this, char *flags, char *defolt, 
# 1303 "out.c" 3 4
                                                                                        _Bool 
# 1303 "out.c"
                                                                                             required, char *help) {
      std_argparse_Arg *arg = std_argparse_Parser__add(this, flags, required, help);
      arg->type=std_argparse_ArgType_String;
      arg->defolt.as_str=defolt;
      arg->val.as_str=defolt;
      return &arg->val.as_str;
    }

std_argparse_Arg *std_argparse_find_arg(std_argparse_Parser *parser, char *_flag, i32 *positional_idx) {
      std_sv_SV flag = std_sv_SV_from_str(_flag);
      i32 cur_positional_idx = 0;
      for (std_vector_Iterator__1 _i11 = std_vector_Vector__1_iter(parser->args); std_vector_Iterator__1_has_value(&_i11); std_vector_Iterator__1_next(&_i11)) {
        std_argparse_Arg *arg = std_vector_Iterator__1_cur(&_i11);
        {
          if (arg->is_positional) {
            if (!(std_sv_SV_starts_with_str(flag, "-"))) {
              if (cur_positional_idx==(*positional_idx)) {
                (*positional_idx)+=1;
                return arg;
              }
              cur_positional_idx+=1;
            }
          } else {
            for (std_vector_Iterator__0 _i12 = std_vector_Vector__0_iter(arg->flags); std_vector_Iterator__0_has_value(&_i12); std_vector_Iterator__0_next(&_i12)) {
              std_sv_SV f = std_vector_Iterator__0_cur(&_i12);
              {
                if (std_sv_SV_starts_with_str(flag, "-")) {
                  if (std_sv_SV_eq(f, flag)) {
                    return arg;
                  }
                  if (std_sv_SV_starts_with_sv(flag, f) && std_sv_SV_at(flag, f.len)=='=') {
                    return arg;
                  }
                }
              }
            }
          }
        }
      }
      return 
# 1342 "out.c" 3 4
            ((void *)0)
# 1342 "out.c"
                ;
    }

void std_argparse_Parser_parse(std_argparse_Parser *this, i32 argc, char **argv, 
# 1345 "out.c" 3 4
                                                                                _Bool 
# 1345 "out.c"
                                                                                     consume_first) {
      i32 positional_idx = 0;
      i32 i = 0;
      if (consume_first) {
        this->program_name=argv[0];
        i=1;
      }
      while (i < argc) {
        char *cur = argv[i];
        std_argparse_Arg *arg = std_argparse_find_arg(this, cur, &positional_idx);
        if (((
# 1355 "out.c" 3 4
             _Bool
# 1355 "out.c"
                 )arg)) {
          if (arg->is_positional) {
            std_argparse_Arg_save_val(arg, cur);
            arg->parsed=
# 1358 "out.c" 3 4
                       1
# 1358 "out.c"
                           ;
            i+=1;
            continue;
          }
          if (arg->parsed) {
            std_panic(std_format("Argument %s is already parsed", cur));
          }
          if (i >= (argc - 1)) {
            std_panic(std_format("Argument %s requires a value, but none was provided", cur));
          }
          i+=1;
          char *next = argv[i];
          std_argparse_Arg_save_val(arg, next);
          arg->parsed=
# 1371 "out.c" 3 4
                     1
# 1371 "out.c"
                         ;
          i+=1;
        } else {
          std_panic(std_format("Unknown argument: %s", cur));
        }
      }
      for (std_vector_Iterator__1 _i13 = std_vector_Vector__1_iter(this->args); std_vector_Iterator__1_has_value(&_i13); std_vector_Iterator__1_next(&_i13)) {
        std_argparse_Arg *arg = std_vector_Iterator__1_cur(&_i13);
        {
          if (arg->required && !(arg->parsed)) {
            std_sv_SV flag = std_vector_Vector__0_at(arg->flags, 0);
            if (arg->is_positional) {
              std_panic(std_format("Missing required positional argument: %.*s", (flag).len, (flag).data));
            } else {
              std_panic(std_format("Missing required flag: %.*s", (flag).len, (flag).data));
            }
          }
        }
      }
    }

std_buffer_Buffer std_buffer_Buffer_make(u32 capacity) {
      return (std_buffer_Buffer){.data=std_mem_alloc__2(capacity), .size=0, .capacity=capacity};
    }

std_buffer_Buffer std_buffer_Buffer_from_sv(std_sv_SV sv) {
      u8 *data = std_mem_alloc__2((sv.len + 1));
      memcpy(data, sv.data, sv.len);
      data[sv.len]=((u8)'\0');
      return (std_buffer_Buffer){.data=data, .size=sv.len, .capacity=sv.len};
    }

void std_buffer_Buffer_resize_if_necessary(std_buffer_Buffer *this, u32 new_size) {
      if ((new_size + 1) >= this->capacity) {
        u32 new_capacity = u32_max(((this->capacity * 3) / 2), (new_size + 1));
        this->data=std_mem_realloc__0(this->data, this->capacity, new_capacity);
        memset((this->data + this->capacity), ((u8)0), (new_capacity - this->capacity));
        this->capacity=((u32)new_capacity);
        if(!(((
# 1409 "out.c" 3 4
              _Bool
# 1409 "out.c"
                  )this->data))) { ae_assert_fail("/home/mindful-dev/ocen/std/buffer.oc:65:16: Assertion failed: `.data?`", "Out of memory!"); }
      }
    }

void std_buffer_Buffer_write_buf(std_buffer_Buffer *this, std_buffer_Buffer *buf) {
      std_buffer_Buffer_resize_if_necessary(this, (this->size + buf->size));
      memcpy((this->data + this->size), buf->data, buf->size);
      this->size+=buf->size;
    }

void std_buffer_Buffer_write_buf_f(std_buffer_Buffer *this, std_buffer_Buffer *buf) {
      std_buffer_Buffer_write_buf(this, buf);
      std_buffer_Buffer_free(buf);
    }

void std_buffer_Buffer_write_str(std_buffer_Buffer *this, char *s) {
      u32 len = ((u32)strlen(s));
      std_buffer_Buffer_resize_if_necessary(this, (this->size + len));
      memcpy((this->data + this->size), s, len);
      this->size+=len;
    }

void std_buffer_Buffer_write_str_f(std_buffer_Buffer *this, char *s) {
      std_buffer_Buffer_write_str(this, s);
      std_mem_free(s);
    }

void std_buffer_Buffer_write_char(std_buffer_Buffer *this, char c) {
            std_buffer_Buffer_write_u8(this, ((u8)c));
    }

void std_buffer_Buffer_write_bytes(std_buffer_Buffer *this, void *bytes, u32 size) {
      std_buffer_Buffer_resize_if_necessary(this, (this->size + size));
      memcpy((this->data + this->size), bytes, size);
      this->size+=size;
    }

void std_buffer_Buffer_write_u8(std_buffer_Buffer *this, u8 value) {
      std_buffer_Buffer_resize_if_necessary(this, (this->size + 1));
      this->data[this->size]=value;
      this->size+=1;
    }

std_buffer_BytesReader std_buffer_Buffer_reader(std_buffer_Buffer this) {
      return std_buffer_BytesReader_make(this.data, this.size); }

char *std_buffer_Buffer_new_str(std_buffer_Buffer this) {
      return strdup(((char *)this.data)); }

std_sv_SV std_buffer_Buffer_sv(std_buffer_Buffer this) {
      return (std_sv_SV){.data=((char *)this.data), .len=this.size}; }

void std_buffer_Buffer_free(std_buffer_Buffer *this) {
      std_mem_free(this->data);
    }

std_buffer_BytesReader std_buffer_BytesReader_make(u8 *data, u32 size) {
      return (std_buffer_BytesReader){.data=data, .size=size, .index=0};
    }

u32 std_buffer_BytesReader_read_u32(std_buffer_BytesReader *this, std_Endian endian) {
      u32 value = 0;
      for (u32 i = 0; i < 4; i+=1) {
        u32 shift = (endian==std_Endian_Big ? i : (3 - i));
        value=(value | (((u32)this->data[(this->index + i)]) << (24 - (shift * 8))));
      }
      this->index+=4;
      return value;
    }

u16 std_buffer_BytesReader_read_u16(std_buffer_BytesReader *this, std_Endian endian) {
      u16 value = ((u16)0);
      for (u32 i = 0; i < 2; i+=1) {
        u32 shift = (endian==std_Endian_Big ? i : (1 - i));
        value=(value | (((u16)this->data[(this->index + i)]) << (((u16)8) - (((u16)shift) * ((u16)8)))));
      }
      this->index+=2;
      return ((u16)value);
    }

std_sv_SV std_buffer_BytesReader_read_bytes_sv(std_buffer_BytesReader *this, u32 count) {
      std_sv_SV sv = (std_sv_SV){.data=((char *)(this->data + this->index)), .len=count};
      this->index+=count;
      return sv;
    }

u32 std_hash_utils_rotate_left(u32 value, u32 bits) {
      return (value << bits) | (value >> (32 - bits));
    }

void std_hash_sha1_hash_into(std_buffer_Buffer input, u8 *output) {
      u8 *data = input.data;
      u64 size = ((u64)input.size);
      u32 H[5] = {1732584193, 4023233417, 2562383102, 271733878, 3285377520};
      u64 loopcount = (((size + ((u64)8)) / ((u64)64)) + ((u64)1));
      u64 tailbytes = ((loopcount * ((u64)64)) - size);
      u8 datatail[128] = {0};
      memset(datatail, ((u8)0), 128);
      datatail[0]=((u8)128);
      for (u64 i = ((u64)0); i < ((u64)8); i+=((u64)1)) {
        datatail[((tailbytes - ((u64)1)) - i)]=((u8)(((size * ((u64)8)) >> (((u64)i) * ((u64)8))) & ((u64)255)));
      }
      u32 W[80] = {0};
      u64 didx = ((u64)0);
      for (u64 lidx = ((u64)0); lidx < loopcount; lidx+=((u64)1)) {
        memset(W, ((u8)0), 320);
        for (u32 widx = 0; widx < 16; widx+=1) {
          i32 wcount = 24;
          while ((didx < size) && (wcount >= 0)) {
            W[widx]+=(((u32)data[didx]) << ((u32)wcount));
            wcount-=8;
            didx+=((u64)1);
          }
          while (wcount >= 0) {
            W[widx]+=(((u32)datatail[(didx - size)]) << ((u32)wcount));
            wcount-=8;
            didx+=((u64)1);
          }
        }
        for (u32 widx = 16; widx < 32; widx+=1) {
          W[widx]=std_hash_utils_rotate_left((((W[(widx - 3)] ^ W[(widx - 8)]) ^ W[(widx - 14)]) ^ W[(widx - 16)]), 1);
        }
        for (u32 widx = 32; widx < 80; widx+=1) {
          W[widx]=std_hash_utils_rotate_left((((W[(widx - 6)] ^ W[(widx - 16)]) ^ W[(widx - 28)]) ^ W[(widx - 32)]), 2);
        }
        u32 T[5] = {0};
        memcpy(T, H, (((u32)sizeof(u32)) * 5));
        for (u32 idx = 0; idx <= 79; idx+=1) {
          u32 factor = ({u32 __yv_35;
            switch ((idx / 20)) {
              case 0: {
                __yv_35 = (1518500249 + ((T[1] & T[2]) | (~T[1] & T[3])));
                goto _l___yv_35;
              } break;
              case 1: {
                __yv_35 = (1859775393 + ((T[1] ^ T[2]) ^ T[3]));
                goto _l___yv_35;
              } break;
              case 2: {
                __yv_35 = (2400959708 + (((T[1] & T[2]) | (T[1] & T[3])) | (T[2] & T[3])));
                goto _l___yv_35;
              } break;
              case 3: {
                __yv_35 = (3395469782 + ((T[1] ^ T[2]) ^ T[3]));
                goto _l___yv_35;
              } break;
              default: {
                __yv_35 = 0;
                goto _l___yv_35;
              } break;
            }

_l___yv_35:
          __yv_35;});
          u32 temp = (((std_hash_utils_rotate_left(T[0], 5) + T[4]) + factor) + W[idx]);
          T[4]=T[3];
          T[3]=T[2];
          T[2]=std_hash_utils_rotate_left(T[1], 30);
          T[1]=T[0];
          T[0]=temp;
        }
        for (u32 i = 0; i < 5; i+=1) {
          H[i]+=T[i];
        }
      }
      for (u32 idx = 0; idx < 5; idx+=1) {
        output[((idx * 4) + 0)]=((u8)(H[idx] >> 24));
        output[((idx * 4) + 1)]=((u8)(H[idx] >> 16));
        output[((idx * 4) + 2)]=((u8)(H[idx] >> 8));
        output[((idx * 4) + 3)]=((u8)H[idx]);
      }
    }

std_hash_sha1_SHA1Hash std_hash_sha1_SHA1Hash_from(std_buffer_Buffer data) {
      std_hash_sha1_SHA1Hash sha = {0};
      std_hash_sha1_hash_into(data, sha.data);
      return sha;
    }

std_hash_sha1_SHA1Hash std_hash_sha1_SHA1Hash_parse_string_hash(char *hash_str) {
      if(!(strlen(hash_str)==40)) { ae_assert_fail("/home/mindful-dev/ocen/std/hash/sha1.oc:114:12: Assertion failed: `hash_str.len() == 40`", 
# 1589 "out.c" 3 4
                                                                                                                                              ((void *)0)
# 1589 "out.c"
                                                                                                                                                  ); }
      std_hash_sha1_SHA1Hash hash = {0};
      for (u32 i = 0; i < 20; i+=1) {
        hash.data[i]=((char_value_from_hex(hash_str[(i * 2)]) << ((u8)4)) | char_value_from_hex(hash_str[((i * 2) + 1)]));
      }
      return hash;
    }

char *std_hash_sha1_SHA1Hash_stringify(std_hash_sha1_SHA1Hash this) {
      char *result = std_mem_alloc__0(41);
      for (u32 i = 0; i < 20; i+=1) {
        result[(i * 2)]=char_hex_from_value((this.data[i] >> ((u8)4)));
        result[((i * 2) + 1)]=char_hex_from_value((this.data[i] & ((u8)15)));
      }
      result[40]='\0';
      return result;
    }

std_buffer_Buffer std_zlib_compress(std_buffer_Buffer data) {
      uLongf capacity = compressBound(((u64)data.size));
      std_buffer_Buffer dest = std_buffer_Buffer_make(((u32)capacity));
      uLongf dest_len = capacity;
      i32 result = compress(dest.data, &dest_len, data.data, ((u64)data.size));
      if (result != 
# 1612 "out.c" 3 4
                   0
# 1612 "out.c"
                       ) {
        std_panic("zlib: failed to compress data");
      }
      dest.size=((u32)dest_len);
      return dest;
    }

std_buffer_Buffer std_zlib_decompress_bytes(u8 *data, u32 size, u32 *bytes_consumed) {
      z_stream stream = {0};
      stream.avail_in=size;
      stream.next_in=data;
      if (
# 1623 "out.c" 3 4
         inflateInit_((
# 1623 "out.c"
         &stream
# 1623 "out.c" 3 4
         ), "1.3", (int)sizeof(z_stream)) 
# 1623 "out.c"
                              != 
# 1623 "out.c" 3 4
                                 0
# 1623 "out.c"
                                     ) {
        std_panic("Failed to initialize zlib stream");
      }
      std_buffer_Buffer res = std_buffer_Buffer_make((size * 2));
      stream.avail_out=res.capacity;
      stream.next_out=res.data;
      
# 1629 "out.c" 3 4
     _Bool 
# 1629 "out.c"
          done = 
# 1629 "out.c" 3 4
                 0
# 1629 "out.c"
                      ;
      while (!(done)) {
        if (stream.avail_out==0) {
          u32 new_size = (res.capacity * 2);
          std_buffer_Buffer_resize_if_necessary(&res, new_size);
          stream.avail_out=(new_size - stream.total_out);
          stream.next_out=(res.data + stream.total_out);
        }
        i32 result = inflate(&stream, 
# 1637 "out.c" 3 4
                                     0
# 1637 "out.c"
                                               );
        switch (result) {
          case 
# 1639 "out.c" 3 4
              0
# 1639 "out.c"
                  : {
          } break;
          case 
# 1641 "out.c" 3 4
              1
# 1641 "out.c"
                          : {
            res.size=stream.total_out;
            done=
# 1643 "out.c" 3 4
                1
# 1643 "out.c"
                    ;
          } break;
          default: std_panic("zlib: failed to decompress data"); break;
        }
      }
      if (((
# 1648 "out.c" 3 4
           _Bool
# 1648 "out.c"
               )bytes_consumed)) {
        (*bytes_consumed)=((u32)(stream.next_in - data));
      } else {
        if (((u32)(stream.next_in - data)) != size) {
          std_panic("zlib: not all bytes were consumed, use `bytes_consumed` to get the number of bytes consumed");
        }
      }
      inflateEnd(&stream);
      return res;
    }

std_buffer_Buffer std_zlib_decompress(std_buffer_Buffer data, u32 *bytes_consumed) {
      return std_zlib_decompress_bytes(data.data, data.size, bytes_consumed);
    }

std_vector_Iterator__0 std_vector_Vector__0_iter(std_vector_Vector__0 *this) {
      return std_vector_Iterator__0_make(this); }

std_sv_SV std_vector_Iterator__0_cur(std_vector_Iterator__0 *this) {
      if(!(this->index < this->vec->size)) { ae_assert_fail("/home/mindful-dev/ocen/std/vector.oc:168:12: Assertion failed: `.index < .vec.size`", "Out of bounds in Iterator::current"); }
      return this->vec->data[this->index];
    }

void std_vector_Iterator__0_next(std_vector_Iterator__0 *this) {
      if(!(this->index < this->vec->size)) { ae_assert_fail("/home/mindful-dev/ocen/std/vector.oc:163:12: Assertion failed: `.index < .vec.size`", "Out of bounds in Iterator::next"); }
      this->index+=1;
    }


# 1676 "out.c" 3 4
_Bool 
# 1676 "out.c"
    std_vector_Iterator__0_has_value(std_vector_Iterator__0 *this) {
      return (this->index < this->vec->size); }

std_vector_Iterator__0 std_vector_Iterator__0_make(std_vector_Vector__0 *vec) {
      return (std_vector_Iterator__0){.vec=vec, .index=0}; }

std_sv_SV std_vector_Vector__0_at(std_vector_Vector__0 *this, u32 i) {
      if(!(i < this->size)) { ae_assert_fail("/home/mindful-dev/ocen/std/vector.oc:122:12: Assertion failed: `i < .size`", "Out of bounds in Vector::at"); }
      return this->data[i];
    }

void std_vector_Vector__0_resize(std_vector_Vector__0 *this, u32 new_capacity) {
      if (this->capacity >= new_capacity) {
        return;
      }
      this->data=std_mem_realloc__1(this->data, this->capacity, new_capacity);
      this->capacity=new_capacity;
    }

std_vector_Vector__0 *std_vector_Vector__0_new(u32 capacity) {
      std_vector_Vector__0 *list = std_mem_alloc__3(1);
      list->capacity=capacity;
      list->data=std_mem_alloc__4(capacity);
      list->size=0;
      return list;
    }

void std_vector_Vector__0_push(std_vector_Vector__0 *this, std_sv_SV value) {
      if (this->size==this->capacity) {
        std_vector_Vector__0_resize(this, (this->capacity * 2));
      }
      this->data[this->size]=value;
      this->size+=1;
    }

std_vector_Iterator__1 std_vector_Vector__1_iter(std_vector_Vector__1 *this) {
      return std_vector_Iterator__1_make(this); }

std_argparse_Arg *std_vector_Iterator__1_cur(std_vector_Iterator__1 *this) {
      if(!(this->index < this->vec->size)) { ae_assert_fail("/home/mindful-dev/ocen/std/vector.oc:168:12: Assertion failed: `.index < .vec.size`", "Out of bounds in Iterator::current"); }
      return this->vec->data[this->index];
    }

void std_vector_Iterator__1_next(std_vector_Iterator__1 *this) {
      if(!(this->index < this->vec->size)) { ae_assert_fail("/home/mindful-dev/ocen/std/vector.oc:163:12: Assertion failed: `.index < .vec.size`", "Out of bounds in Iterator::next"); }
      this->index+=1;
    }


# 1724 "out.c" 3 4
_Bool 
# 1724 "out.c"
    std_vector_Iterator__1_has_value(std_vector_Iterator__1 *this) {
      return (this->index < this->vec->size); }

std_vector_Iterator__1 std_vector_Iterator__1_make(std_vector_Vector__1 *vec) {
      return (std_vector_Iterator__1){.vec=vec, .index=0}; }

void std_vector_Vector__1_resize(std_vector_Vector__1 *this, u32 new_capacity) {
      if (this->capacity >= new_capacity) {
        return;
      }
      this->data=std_mem_realloc__2(this->data, this->capacity, new_capacity);
      this->capacity=new_capacity;
    }

std_vector_Vector__1 *std_vector_Vector__1_new(u32 capacity) {
      std_vector_Vector__1 *list = std_mem_alloc__5(1);
      list->capacity=capacity;
      list->data=std_mem_alloc__6(capacity);
      list->size=0;
      return list;
    }

void std_vector_Vector__1_push(std_vector_Vector__1 *this, std_argparse_Arg *value) {
      if (this->size==this->capacity) {
        std_vector_Vector__1_resize(this, (this->capacity * 2));
      }
      this->data[this->size]=value;
      this->size+=1;
    }

std_vector_Iterator__2 std_vector_Vector__2_iter(std_vector_Vector__2 *this) {
      return std_vector_Iterator__2_make(this); }

char *std_vector_Iterator__2_cur(std_vector_Iterator__2 *this) {
      if(!(this->index < this->vec->size)) { ae_assert_fail("/home/mindful-dev/ocen/std/vector.oc:168:12: Assertion failed: `.index < .vec.size`", "Out of bounds in Iterator::current"); }
      return this->vec->data[this->index];
    }

void std_vector_Iterator__2_next(std_vector_Iterator__2 *this) {
      if(!(this->index < this->vec->size)) { ae_assert_fail("/home/mindful-dev/ocen/std/vector.oc:163:12: Assertion failed: `.index < .vec.size`", "Out of bounds in Iterator::next"); }
      this->index+=1;
    }


# 1767 "out.c" 3 4
_Bool 
# 1767 "out.c"
    std_vector_Iterator__2_has_value(std_vector_Iterator__2 *this) {
      return (this->index < this->vec->size); }

std_vector_Iterator__2 std_vector_Iterator__2_make(std_vector_Vector__2 *vec) {
      return (std_vector_Iterator__2){.vec=vec, .index=0}; }

void std_vector_Vector__2_free(std_vector_Vector__2 *this) {
      std_mem_free(this->data);
      std_mem_free(this);
    }

void std_vector_Vector__2_resize(std_vector_Vector__2 *this, u32 new_capacity) {
      if (this->capacity >= new_capacity) {
        return;
      }
      this->data=std_mem_realloc__3(this->data, this->capacity, new_capacity);
      this->capacity=new_capacity;
    }

std_vector_Vector__2 *std_vector_Vector__2_new(u32 capacity) {
      std_vector_Vector__2 *list = std_mem_alloc__7(1);
      list->capacity=capacity;
      list->data=std_mem_alloc__8(capacity);
      list->size=0;
      return list;
    }

void std_vector_Vector__2_push(std_vector_Vector__2 *this, char *value) {
      if (this->size==this->capacity) {
        std_vector_Vector__2_resize(this, (this->capacity * 2));
      }
      this->data[this->size]=value;
      this->size+=1;
    }

i32 std_vector_Vector__3_find(std_vector_Vector__3 *this, _ClosureTy_6 cb) {
      for (u32 i = 0; i < this->size; i+=1) {
        if (cb.fn(cb._C, this->data[i])) {
          return ((i32)i);
        }
      }
      return -1;
    }

std_vector_Iterator__3 std_vector_Vector__3_iter(std_vector_Vector__3 *this) {
      return std_vector_Iterator__3_make(this); }

git_Entry *std_vector_Iterator__3_cur(std_vector_Iterator__3 *this) {
      if(!(this->index < this->vec->size)) { ae_assert_fail("/home/mindful-dev/ocen/std/vector.oc:168:12: Assertion failed: `.index < .vec.size`", "Out of bounds in Iterator::current"); }
      return this->vec->data[this->index];
    }

void std_vector_Iterator__3_next(std_vector_Iterator__3 *this) {
      if(!(this->index < this->vec->size)) { ae_assert_fail("/home/mindful-dev/ocen/std/vector.oc:163:12: Assertion failed: `.index < .vec.size`", "Out of bounds in Iterator::next"); }
      this->index+=1;
    }


# 1824 "out.c" 3 4
_Bool 
# 1824 "out.c"
    std_vector_Iterator__3_has_value(std_vector_Iterator__3 *this) {
      return (this->index < this->vec->size); }

std_vector_Iterator__3 std_vector_Iterator__3_make(std_vector_Vector__3 *vec) {
      return (std_vector_Iterator__3){.vec=vec, .index=0}; }

void std_vector_Vector__3_resize(std_vector_Vector__3 *this, u32 new_capacity) {
      if (this->capacity >= new_capacity) {
        return;
      }
      this->data=std_mem_realloc__4(this->data, this->capacity, new_capacity);
      this->capacity=new_capacity;
    }

std_vector_Vector__3 *std_vector_Vector__3_new(u32 capacity) {
      std_vector_Vector__3 *list = std_mem_alloc__9(1);
      list->capacity=capacity;
      list->data=std_mem_alloc__10(capacity);
      list->size=0;
      return list;
    }

void std_vector_Vector__3_push(std_vector_Vector__3 *this, git_Entry *value) {
      if (this->size==this->capacity) {
        std_vector_Vector__3_resize(this, (this->capacity * 2));
      }
      this->data[this->size]=value;
      this->size+=1;
    }

std_vector_Iterator__4 std_vector_Vector__4_iter(std_vector_Vector__4 *this) {
      return std_vector_Iterator__4_make(this); }

git_TreeElement std_vector_Iterator__4_cur(std_vector_Iterator__4 *this) {
      if(!(this->index < this->vec->size)) { ae_assert_fail("/home/mindful-dev/ocen/std/vector.oc:168:12: Assertion failed: `.index < .vec.size`", "Out of bounds in Iterator::current"); }
      return this->vec->data[this->index];
    }

void std_vector_Iterator__4_next(std_vector_Iterator__4 *this) {
      if(!(this->index < this->vec->size)) { ae_assert_fail("/home/mindful-dev/ocen/std/vector.oc:163:12: Assertion failed: `.index < .vec.size`", "Out of bounds in Iterator::next"); }
      this->index+=1;
    }


# 1867 "out.c" 3 4
_Bool 
# 1867 "out.c"
    std_vector_Iterator__4_has_value(std_vector_Iterator__4 *this) {
      return (this->index < this->vec->size); }

std_vector_Iterator__4 std_vector_Iterator__4_make(std_vector_Vector__4 *vec) {
      return (std_vector_Iterator__4){.vec=vec, .index=0}; }

void std_vector_Vector__4_free(std_vector_Vector__4 *this) {
      std_mem_free(this->data);
      std_mem_free(this);
    }

void std_vector_Vector__4_resize(std_vector_Vector__4 *this, u32 new_capacity) {
      if (this->capacity >= new_capacity) {
        return;
      }
      this->data=std_mem_realloc__5(this->data, this->capacity, new_capacity);
      this->capacity=new_capacity;
    }

std_vector_Vector__4 *std_vector_Vector__4_new(u32 capacity) {
      std_vector_Vector__4 *list = std_mem_alloc__11(1);
      list->capacity=capacity;
      list->data=std_mem_alloc__12(capacity);
      list->size=0;
      return list;
    }

void std_vector_Vector__4_push(std_vector_Vector__4 *this, git_TreeElement value) {
      if (this->size==this->capacity) {
        std_vector_Vector__4_resize(this, (this->capacity * 2));
      }
      this->data[this->size]=value;
      this->size+=1;
    }

i8 i32_compare(i32 this, i32 b) {
      return (((i8)(this > b)) - ((i8)(this < b))); }

i8 str_compare(char *this, char *b) {
      return i32_compare(strcmp(this, b), 0); }

i8 char_compare(char this, char b) {
      return (((i8)(this > b)) - ((i8)(this < b))); }

void std_sort_sort_by__0(git_Entry **data, u32 size, _ClosureTy_9 cmp) {
      if (size <= 1) {
        return;
      }
      git_Entry *pivot = data[(size / 2)];
      u32 i = 0;
      u32 j = (size - 1);
      while (i <= j) {
        while (cmp.fn(cmp._C, data[i], pivot) < ((i8)0)) {
          i+=1;
        }
        while (cmp.fn(cmp._C, data[j], pivot) > ((i8)0)) {
          j-=1;
        }
        if (i <= j) {
          git_Entry *tmp = data[i];
          data[i]=data[j];
          data[j]=tmp;
          i+=1;
          j-=1;
        }
      }
      std_sort_sort_by__0(data, (j + 1), cmp);
      std_sort_sort_by__0((data + i), (size - i), cmp);
    }

void std_sort_sort_by__1(git_TreeElement *data, u32 size, _ClosureTy_10 cmp) {
      if (size <= 1) {
        return;
      }
      git_TreeElement pivot = data[(size / 2)];
      u32 i = 0;
      u32 j = (size - 1);
      while (i <= j) {
        while (cmp.fn(cmp._C, data[i], pivot) < ((i8)0)) {
          i+=1;
        }
        while (cmp.fn(cmp._C, data[j], pivot) > ((i8)0)) {
          j-=1;
        }
        if (i <= j) {
          git_TreeElement tmp = data[i];
          data[i]=data[j];
          data[j]=tmp;
          i+=1;
          j-=1;
        }
      }
      std_sort_sort_by__1(data, (j + 1), cmp);
      std_sort_sort_by__1((data + i), (size - i), cmp);
    }

void git_TreeElement_free(git_TreeElement this) {
      str_free(&this.filename);
      str_free(&this.mode);
      str_free(&this.hash);
    }

void git_Commit_free(git_Commit *this) {
      str_free(&this->tree_hash);
      for (std_vector_Iterator__2 _i2 = std_vector_Vector__2_iter(this->parent_hashes); std_vector_Iterator__2_has_value(&_i2); std_vector_Iterator__2_next(&_i2)) {
        char *parent = std_vector_Iterator__2_cur(&_i2);
        {
          str_free(&parent);
        }
      }
      std_vector_Vector__2_free(this->parent_hashes);
      str_free(&this->author);
      str_free(&this->author_timezone);
      str_free(&this->committer);
      str_free(&this->committer_timezone);
      str_free(&this->message);
      std_mem_free(this);
    }

void git_Entry_free(git_Entry *this) {
      str_free(&this->sha1);
      str_free(&this->path);
      std_mem_free(this);
    }

git_Index *git_Index_from_buf(std_buffer_Buffer file) {
      std_buffer_BytesReader reader = std_buffer_Buffer_reader(file);
      std_sv_SV signature = std_buffer_BytesReader_read_bytes_sv(&reader, 4);
      u32 version = std_buffer_BytesReader_read_u32(&reader, std_Endian_Big);
      u32 num_entries = std_buffer_BytesReader_read_u32(&reader, std_Endian_Big);
      std_vector_Vector__3 *entries = ({
        std_vector_Vector__3 *_vc36 = std_vector_Vector__3_new(8);
        _vc36;});
      for (u32 i = 0; i < ((u32)num_entries); i+=1) {
        u32 ctime_seconds = std_buffer_BytesReader_read_u32(&reader, std_Endian_Big);
        u32 ctime_nanoseconds = std_buffer_BytesReader_read_u32(&reader, std_Endian_Big);
        u32 mtime_seconds = std_buffer_BytesReader_read_u32(&reader, std_Endian_Big);
        u32 mtime_nanoseconds = std_buffer_BytesReader_read_u32(&reader, std_Endian_Big);
        u32 dev = std_buffer_BytesReader_read_u32(&reader, std_Endian_Big);
        u32 ino = std_buffer_BytesReader_read_u32(&reader, std_Endian_Big);
        u32 mode = std_buffer_BytesReader_read_u32(&reader, std_Endian_Big);
        u32 uid = std_buffer_BytesReader_read_u32(&reader, std_Endian_Big);
        u32 gid = std_buffer_BytesReader_read_u32(&reader, std_Endian_Big);
        u32 size = std_buffer_BytesReader_read_u32(&reader, std_Endian_Big);
        std_sv_SV sha1_sv = std_buffer_BytesReader_read_bytes_sv(&reader, 20);
        std_hash_sha1_SHA1Hash sha1 = {0};
        memcpy(sha1.data, sha1_sv.data, 20);
        char *hash_str = std_hash_sha1_SHA1Hash_stringify(sha1);
        u16 flags = std_buffer_BytesReader_read_u16(&reader, std_Endian_Big);
        
# 2016 "out.c" 3 4
       _Bool 
# 2016 "out.c"
            assume_valid = (((flags >> ((u16)15)) & ((u16)1)) != ((u16)0));
        
# 2017 "out.c" 3 4
       _Bool 
# 2017 "out.c"
            extended = (((flags >> ((u16)14)) & ((u16)1)) != ((u16)0));
        u16 stage = ((flags >> ((u16)12)) & ((u16)3));
        u16 name_length = (flags & ((u16)4095));
        char *path = std_sv_SV_copy_data_to_cstr(std_buffer_BytesReader_read_bytes_sv(&reader, ((u32)name_length)));
        u32 total_entry_size = (62 + ((u32)name_length));
        u32 padding = (8 - (total_entry_size % 8));
        std_buffer_BytesReader_read_bytes_sv(&reader, padding);
        git_Entry *entry = ({git_Entry *_new_37 = std_mem_state_alloc_fn(std_mem_state_allocator, sizeof(git_Entry)); *_new_37 = (git_Entry){.ctime_seconds=ctime_seconds, .ctime_nanoseconds=ctime_nanoseconds, .mtime_seconds=mtime_seconds, .mtime_nanoseconds=mtime_nanoseconds, .dev=dev, .ino=ino, .mode=mode, .uid=uid, .gid=gid, .size=size, .sha1=hash_str, .flags=flags, .assume_valid=assume_valid, .extended=extended, .stage=stage, .path=path}; _new_37; });
        std_vector_Vector__3_push(entries, entry);
      }
      return ({git_Index *_new_38 = std_mem_state_alloc_fn(std_mem_state_allocator, sizeof(git_Index)); *_new_38 = (git_Index){.signature=std_sv_SV_copy_data_to_cstr(signature), .version=version, .num_entries=num_entries, .entries=entries}; _new_38; });
    }

void git_Index_add_entry(git_Index *this, char *path) {
      std_buffer_Buffer file = std_fs_read_file(path);
      std_fs_FileMetadata stats = std_fs_file_info(path);
      char *hash_str = std_hash_sha1_SHA1Hash_stringify(std_hash_sha1_SHA1Hash_from(file));
      git_Entry *new_entry = ({git_Entry *_new_39 = std_mem_state_alloc_fn(std_mem_state_allocator, sizeof(git_Entry)); *_new_39 = (git_Entry){.ctime_seconds=((u32)stats.ctime), .ctime_nanoseconds=((u32)stats.ctime_ns), .mtime_seconds=((u32)stats.mtime), .mtime_nanoseconds=((u32)stats.mtime_ns), .dev=((u32)stats.dev), .ino=42069, .mode=stats.mode, .uid=stats.uid, .gid=stats.gid, .size=((u32)stats.size), .sha1=hash_str, .flags=((u16)strlen(path)), .assume_valid=
# 2034 "out.c" 3 4
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                0
# 2034 "out.c"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     , .extended=
# 2034 "out.c" 3 4
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 0
# 2034 "out.c"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      , .stage=((u16)0), .path=path}; _new_39; });
      i32 existing = std_vector_Vector__3_find(this->entries, ({git_add_entry__Closure_0Ctx *_C40 = 
# 2035 "out.c" 3 4
                                                                                                   __builtin_alloca (
# 2035 "out.c"
                                                                                                   sizeof(git_add_entry__Closure_0Ctx)
# 2035 "out.c" 3 4
                                                                                                   )
# 2035 "out.c"
                                                                                                                                              ;_C40->path = &path;_ClosureTy_6 _ci41 = {._C=_C40, .fn=&git_add_entry__Closure_0};_ci41;}));
      if (existing >= 0) {
        git_Entry_free(this->entries->data[existing]);
        this->entries->data[existing]=new_entry;
      } else {
        std_vector_Vector__3_push(this->entries, new_entry);
        std_sort_sort_by__0(this->entries->data, this->entries->size, ({git_add_entry__Closure_1Ctx *_C42 = 
# 2041 "out.c" 3 4
                                                                                                           __builtin_alloca (
# 2041 "out.c"
                                                                                                           sizeof(git_add_entry__Closure_1Ctx)
# 2041 "out.c" 3 4
                                                                                                           )
# 2041 "out.c"
                                                                                                                                                      ;_ClosureTy_9 _ci43 = {._C=_C42, .fn=&git_add_entry__Closure_1};_ci43;}));
      }
      git_Index_dump((*this));
    }

void git_Index_dump(git_Index this) {
      printf("signature: %s\n", this.signature);
      printf("version: %u\n", this.version);
      printf("num_entries: %u\n", this.num_entries);
      for (std_vector_Iterator__3 _i5 = std_vector_Vector__3_iter(this.entries); std_vector_Iterator__3_has_value(&_i5); std_vector_Iterator__3_next(&_i5)) {
        git_Entry *entry = std_vector_Iterator__3_cur(&_i5);
        {
          printf("\n\tpath: %s\n", entry->path);
          printf("\tctime_seconds: %u\n", entry->ctime_seconds);
          printf("\tctime_nanoseconds: %u\n", entry->ctime_nanoseconds);
          printf("\tmtime_seconds: %u\n", entry->mtime_seconds);
          printf("\tmtime_nanoseconds: %u\n", entry->mtime_nanoseconds);
          printf("\tdev: %u\n", entry->dev);
          printf("\tino: %u\n", entry->ino);
          printf("\tmode: %u\n", entry->mode);
          printf("\tuid: %u\n", entry->uid);
          printf("\tgid: %u\n", entry->gid);
          printf("\tsize: %u\n", entry->size);
          printf("\tsha1: %s\n", entry->sha1);
          printf("\tflags: %u\n", entry->flags);
        }
      }
    }

void git_Object_free(git_Object this) {
      git_Object _m44 = this;
      switch (_m44.tag) {
        {
          std_buffer_Buffer buf;
          case git_Object_Blob:
            buf = _m44.git_Object_Blob.buf;
            goto m_45_0;
          m_45_0:
            {
              std_buffer_Buffer_free(&buf);
            } break;
        }
        {
          git_Commit *commit;
          case git_Object_Commit:
            commit = _m44.git_Object_Commit.commit;
            goto m_45_1;
          m_45_1:
            {
              git_Commit_free(commit);
            } break;
        }
        {
          std_vector_Vector__4 *li;
          case git_Object_Tree:
            li = _m44.git_Object_Tree.li;
            goto m_45_2;
          m_45_2:
            {
              for (std_vector_Iterator__4 _i6 = std_vector_Vector__4_iter(li); std_vector_Iterator__4_has_value(&_i6); std_vector_Iterator__4_next(&_i6)) {
                git_TreeElement element = std_vector_Iterator__4_cur(&_i6);
                {
                  git_TreeElement_free(element);
                }
              }
              std_vector_Vector__4_free(li);
            } break;
        }
      } }

char *git_get_object_filename(char *hash) {
      return std_format(".git/objects/%c%c/%s", hash[0], hash[1], (hash + 2));
    }

std_buffer_Buffer git_decompress_object(char *path) {
      std_buffer_Buffer file = std_fs_read_file(path);
      std_buffer_Buffer contents = std_zlib_decompress(file, 
# 2117 "out.c" 3 4
                                                            ((void *)0)
# 2117 "out.c"
                                                                );
      std_buffer_Buffer_free(&file);
      return contents;
    }

git_Object git_get_object(char *hash) {
      char *path = git_get_object_filename(hash);
      std_buffer_Buffer contents = git_decompress_object(path);
      str_free(&path);
      std_sv_SV sv = std_buffer_Buffer_sv(contents);
      std_sv_SV header = std_sv_SV_chop_word(&sv);
      i32 length = std_sv_SV_chop_i32(&sv);
      std_sv_SV_chop_left(&sv, 1);
      {
        std_sv_SV __match_var_46 = header;
        if (std_sv_SV_eq_str(__match_var_46, "blob")) {
          std_buffer_Buffer data = std_buffer_Buffer_from_sv(sv);

          std_buffer_Buffer_free(&contents);
          return (git_Object){.tag=git_Object_Blob,.git_Object_Blob={data, }};
        } else if (std_sv_SV_eq_str(__match_var_46, "tree")) {
          std_vector_Vector__4 *li = ({
            std_vector_Vector__4 *_vc47 = std_vector_Vector__4_new(8);
            _vc47;});
          while (sv.len > 0) {
            char *mode = std_sv_SV_copy_data_to_cstr(std_sv_SV_chop_word(&sv));
            char *filename = std_sv_SV_copy_data_to_cstr(std_sv_SV_chop_by_delim(&sv, '\0'));
            std_sv_SV hash_bytes = std_sv_SV_chop_left(&sv, 20);
            std_hash_sha1_SHA1Hash sha1 = {0};
            memcpy(sha1.data, hash_bytes.data, 20);
            char *hash_str = std_hash_sha1_SHA1Hash_stringify(sha1);
            git_TreeElement tree_entry = (git_TreeElement){.mode=mode, .filename=filename, .hash=hash_str};
            std_vector_Vector__4_push(li, tree_entry);
          }

          std_buffer_Buffer_free(&contents);
          return (git_Object){.tag=git_Object_Tree,.git_Object_Tree={li, }};
        } else std_panic(std_format("Not yet implemented for %.*s", (header).len, (header).data));
      }
    }

char *git_hash_object(git_Object object, 
# 2158 "out.c" 3 4
                                        _Bool 
# 2158 "out.c"
                                             write) {
      std_buffer_Buffer out = std_buffer_Buffer_make(16);
      git_Object _m48 = object;
      switch (_m48.tag) {
        {
          std_buffer_Buffer buf;
          case git_Object_Blob:
            buf = _m48.git_Object_Blob.buf;
            goto m_49_0;
          m_49_0:
            {
              std_buffer_Buffer_write_str_f(&out, std_format("blob %u", buf.size));
              std_buffer_Buffer_write_char(&out, '\0');
              std_buffer_Buffer_write_buf(&out, &buf);
            } break;
        }
        {
          std_vector_Vector__4 *li;
          case git_Object_Tree:
            li = _m48.git_Object_Tree.li;
            goto m_49_1;
          m_49_1:
            {
              std_buffer_Buffer data = std_buffer_Buffer_make(16);
              for (std_vector_Iterator__4 _i7 = std_vector_Vector__4_iter(li); std_vector_Iterator__4_has_value(&_i7); std_vector_Iterator__4_next(&_i7)) {
                git_TreeElement entry = std_vector_Iterator__4_cur(&_i7);
                {
                  std_buffer_Buffer_write_str_f(&data, std_format("%s %s", entry.mode, entry.filename));
                  std_buffer_Buffer_write_char(&data, '\0');
                  std_hash_sha1_SHA1Hash sha1 = std_hash_sha1_SHA1Hash_parse_string_hash(entry.hash);
                  std_buffer_Buffer_write_bytes(&data, sha1.data, 20);
                }
              }
              std_buffer_Buffer_write_str_f(&out, std_format("tree %u", data.size));
              std_buffer_Buffer_write_char(&out, '\0');
              std_buffer_Buffer_write_buf_f(&out, &data);
            } break;
        }
        {
          git_Commit *commit;
          case git_Object_Commit:
            commit = _m48.git_Object_Commit.commit;
            goto m_49_2;
          m_49_2:
            {
              std_buffer_Buffer data = std_buffer_Buffer_make(16);
              std_buffer_Buffer_write_str_f(&data, std_format("tree %s\n", commit->tree_hash));
              for (std_vector_Iterator__2 _i8 = std_vector_Vector__2_iter(commit->parent_hashes); std_vector_Iterator__2_has_value(&_i8); std_vector_Iterator__2_next(&_i8)) {
                char *parent = std_vector_Iterator__2_cur(&_i8);
                {
                  std_buffer_Buffer_write_str_f(&data, std_format("parent %s\n", parent));
                }
              }
              std_buffer_Buffer_write_str_f(&data, std_format("author %s %" 
# 2211 "out.c" 3 4
                                                                           "l" "d" 
# 2211 "out.c"
                                                                                  " %s\n", commit->author, commit->author_timestamp, commit->author_timezone));
              std_buffer_Buffer_write_str_f(&data, std_format("committer %s %" 
# 2212 "out.c" 3 4
                                                                              "l" "d" 
# 2212 "out.c"
                                                                                     " %s\n\n", commit->committer, commit->committer_timestamp, commit->committer_timezone));
              std_buffer_Buffer_write_str(&data, commit->message);
              std_buffer_Buffer_write_str_f(&out, std_format("commit %u", data.size));
              std_buffer_Buffer_write_char(&out, '\0');
              std_buffer_Buffer_write_buf_f(&out, &data);
            } break;
        }
      } std_hash_sha1_SHA1Hash hash = std_hash_sha1_SHA1Hash_from(out);
      char *hash_str = std_hash_sha1_SHA1Hash_stringify(hash);
      char *path = git_get_object_filename(hash_str);
      if (write) {
        std_fs_create_directory(std_format(".git/objects/%c%c", hash_str[0], hash_str[1]), 
# 2223 "out.c" 3 4
                                                                                          1
# 2223 "out.c"
                                                                                              );
        std_buffer_Buffer compressed_file = std_zlib_compress(out);
        if (!(std_fs_file_exists(path))) {
          std_fs_write_file(path, compressed_file);
        }
        str_free(&path);
        std_buffer_Buffer_free(&compressed_file);
      }
      return hash_str;
    }

git_Object git_create_blob(char *path) {
      std_buffer_Buffer file = std_fs_read_file(path);
      return (git_Object){.tag=git_Object_Blob,.git_Object_Blob={file, }};
    }

git_Object git_create_tree(char *path) {
      std_vector_Vector__4 *tree_li = ({
        std_vector_Vector__4 *_vc50 = std_vector_Vector__4_new(8);
        _vc50;});
      for (std_fs_DirectoryIterator _i9 = std_fs_iterate_directory(path, 
# 2243 "out.c" 3 4
                                                                        1
# 2243 "out.c"
                                                                            ); std_fs_DirectoryIterator_has_value(&_i9); std_fs_DirectoryIterator_next(&_i9)) {
        std_fs_DirectoryEntry entry = std_fs_DirectoryIterator_cur(&_i9);
        {
          if (str_eq(entry.name, ".git")) {
            continue;
          }
switch ((entry.type)) {
            case std_fs_EntryType_File:
            m_51_0:
              {
                char *mode = strdup("100644");
                char *name = strdup(entry.name);
                git_Object blob = git_create_blob(std_format("%s/%s", path, entry.name));
                char *hash = git_hash_object(blob, 
# 2256 "out.c" 3 4
                                                  1
# 2256 "out.c"
                                                      );
                git_Object_free(blob);
                std_vector_Vector__4_push(tree_li, (git_TreeElement){.mode=mode, .filename=name, .hash=hash});
              } break;
            case std_fs_EntryType_Directory:
            m_51_1:
              {
                char *mode = strdup("40000");
                char *name = strdup(entry.name);
                git_Object tree = git_create_tree(std_format("%s/%s", path, entry.name));
                char *hash = git_hash_object(tree, 
# 2266 "out.c" 3 4
                                                  1
# 2266 "out.c"
                                                      );
                git_Object_free(tree);
                std_vector_Vector__4_push(tree_li, (git_TreeElement){.mode=mode, .filename=name, .hash=hash});
              } break;
            default:
              {
              } break;
          } }
      }
      std_sort_sort_by__1(tree_li->data, tree_li->size, ({git_create_tree__Closure_2Ctx *_C52 = 
# 2275 "out.c" 3 4
                                                                                               __builtin_alloca (
# 2275 "out.c"
                                                                                               sizeof(git_create_tree__Closure_2Ctx)
# 2275 "out.c" 3 4
                                                                                               )
# 2275 "out.c"
                                                                                                                                            ;_ClosureTy_10 _ci53 = {._C=_C52, .fn=&git_create_tree__Closure_2};_ci53;}));
      return (git_Object){.tag=git_Object_Tree,.git_Object_Tree={tree_li, }};
    }

git_Object git_create_commit(char *tree_hash, std_vector_Vector__2 *parent_hashes, char *message) {
      char *user = "Unknown User <unknown@example.com>";
      std_buffer_Buffer timezone = std_buffer_Buffer_make(6);
      time_t t = time(
# 2282 "out.c" 3 4
                     ((void *)0)
# 2282 "out.c"
                         );
      struct tm *timeinfo = localtime(&t);
      timezone.size+=strftime(((char *)timezone.data), 6, "%z", timeinfo);
      i64 timestamp = ((i64)t);
      git_Commit *commit = ({git_Commit *_new_54 = std_mem_state_alloc_fn(std_mem_state_allocator, sizeof(git_Commit)); *_new_54 = (git_Commit){.tree_hash=strdup(tree_hash), .parent_hashes=parent_hashes, .author=strdup(user), .author_timestamp=timestamp, .author_timezone=std_buffer_Buffer_new_str(timezone), .committer=strdup(user), .committer_timestamp=timestamp, .committer_timezone=std_buffer_Buffer_new_str(timezone), .message=strdup(message)}; _new_54; });

      std_buffer_Buffer_free(&timezone);
      return (git_Object){.tag=git_Object_Commit,.git_Object_Commit={commit, }};
    }


# 2292 "out.c" 3 4
_Bool 
# 2292 "out.c"
    git_add_entry__Closure_0(void *__C, git_Entry *e) {
  git_add_entry__Closure_0Ctx *_C = (git_add_entry__Closure_0Ctx *)__C;
{
      return str_eq(e->path, (*_C->path)); }
}

i8 git_add_entry__Closure_1(void *__C, git_Entry *a, git_Entry *b) {
  git_add_entry__Closure_1Ctx *_C = (git_add_entry__Closure_1Ctx *)__C;
{
      return str_compare(a->path, b->path); }
}

i8 git_create_tree__Closure_2(void *__C, git_TreeElement a, git_TreeElement b) {
  git_create_tree__Closure_2Ctx *_C = (git_create_tree__Closure_2Ctx *)__C;
{
      if (str_eq(a.mode, b.mode)) {
        return str_compare(a.filename, b.filename);
      } else {
        return -char_compare(a.mode[0], b.mode[0]);
      }
    }
}
