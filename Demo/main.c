//
//  main.c
//  Demo
//
//  Created by Felicio-Nicola Mununga on 04/12/15.
//  Copyright (c) 2015 Felicio-Nicola Mununga. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char * string;
    
    getline(&string, 0, stdin);
    printf("%s\n", string);
    
    return 0;
}
