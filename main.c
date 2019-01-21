//
//  main.c
//  sugar
//
//  Created by YEJI on 21/01/2019.
//  Copyright © 2019 YEJI. All rights reserved.
//

#include <stdio.h>

int getMin(int num){
    int result = -1;    //결과값을 -1로 초기화해준다.
    
    if(num%5 == 0){     //5로 나누어떨어지는 경우가 최소한의 경우
        result = num/5;
    }else{              //그 외
        for(int i = num/5 ; i>=0; i--){ //하나씩 줄여나가며 3키로짜리에 넣을 수 있는경우를 찾는다.
            if((num-i*5)%3 == 0){
                return i + (num-i*5)/3;
            }
        }
    }
    return result;      //둘 다 적용되지 않는다면 실패
}

int main(int argc, const char * argv[]) {
    int N;
    scanf("%d", &N);
    
    printf("%d\n" , (int) getMin(N));
    return 0;
}
