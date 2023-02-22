#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#define NO_LONGLONG
volatile uint32_t csmith_sink_ = 0;

static long __undefined;

//define global variables
int global1 = 1;
int global2 = 2;

static int8_t  func_1(void);
static int32_t  func_3(const int16_t  p_4, int16_t  p_5, int16_t  p_6, int16_t  p_7, const int32_t  p_8);


static int8_t  func_1(void)
{ 
    int32_t l_2 = 5;
    uint8_t l_9 = 0xF1;
    uint8_t l_23 = 0xB5;
    l_2 = l_2;
    l_23 = func_3(((((l_2 & 0x41) ^ l_2) <= l_2) || 0xCF95751C), l_2, l_2, l_9, l_2);
    l_2 = l_9;
    l_2 = (0xF5AEE0CD & l_9);
    return l_2;
}



static int32_t  func_3(const int16_t  p_4, int16_t  p_5, int16_t  p_6, int16_t  p_7, const int32_t  p_8)
{ 
    uint32_t l_21 = 0x76DF7E44;
    int32_t l_22 = 0x43B8A277;
    l_22 = (~((int8_t)((int8_t)((uint16_t)((int32_t)((uint32_t)l_21 % (uint32_t)p_5) / (int32_t)l_21) / (uint16_t)l_21) >> (int8_t)0) << (int8_t)1));
    return l_22;
}





int main() {
    //inject delay function
    func_1();

    int *arr;
    int size, i;
    size = 5;

    arr = (int*) malloc(size * sizeof(int));
    
    printf("Enter %d elements:\n", size);
    
    for(i = 0; i < size; i++) {
        arr[i] = i;
    }
    
    printf("The elements of the array are:\n");
    
    for(i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    free(arr);
    
    return 0;
}