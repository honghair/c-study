//
//  main.c
//  variable
//
//  Created by redboy on 06/11/2018.
//  Copyright © 2018 children. All rights reserved.
//

#include <stdio.h>

int globalVar;
int static var;
int calc(int);

extern int fileVar;
extern int filestaticvar;

int main(int argc, const char *argv[])
{
    printf("[global var is: %d\n", var);
    calc(3);
    printf("[afert +1 var is: %d\n", var);

    printf("[external var is: %d\n", fileVar);
//    printf("[external static var is: %d\n",filestaticvar);

    return 0;
}

int calc(int n)
{
    int i;
    for (i = 1; i <= n; i++) {
        var = var + 1;
    }
    return var;
}
