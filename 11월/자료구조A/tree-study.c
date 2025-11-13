#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node * l;
    struct Node * r;
};

int main(void){
    int N;
    scanf("%d", &N);
    for(int i = 1; i <= N; i++){
        struct Node * cur = (struct Node *)malloc(sizeof(struct Node));
    }
}
/*
    
    I think the biggest crisis in 2025 is the climate crisis.
    The Earth is getting hotter, and disasters like flood and wildfires are happening more often.
    These problems hurt people, animals, and nature.
    But we can change this as long as we act together.
    we can save energy, recycle more, and use less plastic.
    As long as everyone tries, small actions can make a big difference.
    Governments should also help
    They need to use clean energy like solar and wind power,
    and protect the environment with strong laws.
    As long as people and governments work together, we can protect our planet.
    The climate crisis is serious, but I still have hope.
    we can make a better future as long as we never give up.
    Thank you.
*/

