//
//  main.c
//  sugar
//
//  Created by YEJI on 21/01/2019.
//  Copyright © 2019 YEJI. All rights reserved.
//

#include <stdio.h>

int getMin(int num){
    int result = 0;
    
    if(num%5 == 0){         //5묶음으로 떨어질 경우
        result = num/5;
    }else if(num%5 == 3){   //나머지가 3일 경우
        int point = num/5;  //5묶음의 개수
        result = point + (num - point*5)/3; //5묶음의 개수 + 3묶음의 개수
    }else{                  //그 외
        if(num%3 == 0){
            result = num/3;
        }else{
            result = -1;
        }
    }
    
    
    return result;
}

int main(int argc, const char * argv[]) {
    int N = 0;
    scanf("%d", &N);
    
    printf("%d\n" , (int) getMin(N));
    return 0;
}
