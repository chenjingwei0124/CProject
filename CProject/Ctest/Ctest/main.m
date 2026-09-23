//
//  main.m
//  Ctest
//
//  Created by 陈警卫 on 2026/9/22.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[]) {
    @autoreleasepool {

        int a = 10;
        Byte z = 0b1111111;
        unsigned int c = 0b11110000;

        printf("%ld \n", (long)a);

        printf("%lX \n", (long)z);

        printf("%lX \n", (long)c);

        printf("Hello World \n");

    }
    return EXIT_SUCCESS;
}
