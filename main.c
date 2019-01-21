//
//  main.c
//  sugar
//
//  Created by YEJI on 21/01/2019.
//  Copyright © 2019 YEJI. All rights reserved.
//

#include <stdio.h>

int getMin(int num){
    int result = -1;
    
    if(num%5 == 0){
        result = num/5;
    }else{
        for(int i = num/5 ; i>=0; i--){
            if((num-i*5)%3 == 0){
                return i + (num-i*5)/3;
            }
        }
    }
    return result;
}

int main(int argc, const char * argv[]) {
    int N;
    scanf("%d", &N);
    
    printf("%d\n" , (int) getMin(N));
    return 0;
}
