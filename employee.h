#include <stdio.h> 

#include <stddef.h> 

typedef struct { //struct has 8 bytes for each of the types since double is 8 bytes aka "Padding"

    long number; 

    char *name; 

    char *phone; 

    double salary; 

} Employee, *PtrToEmployee; 

typedef const Employee *PtrToConstEmployee; 