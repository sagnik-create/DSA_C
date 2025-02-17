#include <stdio.h>
#include <stdlib.h>

// Structure for an item
typedef struct {
    int weight;
    int value;
    double ratio;
    int index;
} Item;

// Comparator function to sort items by value/weight ratio in descending order
int compare(const void *a, const void *b) {
    double r1 = ((Item*)a)->ratio;
    double r2 = ((Item*)b)->ratio;
    return (r2 > r1) - (r2 < r1); // Descending order
}

// Function to solve the fractional knapsack problem
void fractionalKnapsack(Item items[], int n, int capacity) {
    // Sort items based on value/weight ratio
    qsort(items, n, sizeof(Item), compare);

    double totalValue = 0.0;
    int currentWeight = 0;

    printf("Items taken:\n");

    for (int i = 0; i < n; i++) {
        if (currentWeight + items[i].weight <= capacity) {
            // Take the full item
            currentWeight += items[i].weight;
            totalValue += items[i].value;
            printf("Item %d: 100%%\n", items[i].index);
        } else {
            // Take fraction of item
            int remainingWeight = capacity - currentWeight;
            double fraction = (double)remainingWeight / items[i].weight;
            totalValue += items[i].value * fraction;
            printf("Item %d: %.2f%%\n", items[i].index, fraction * 100);
            break; // Bag is full
        }
    }

    printf("Total value in knapsack: %.2f\n", totalValue);
}

int main() {
    int capacity = 60;
    Item items[] = {
        {5, 30, 0, 1},
        {10, 40, 0, 2},
        {15, 45, 0, 3},
        {22, 77, 0, 4},
        {25, 90, 0, 5}
    };
    
    int n = sizeof(items) / sizeof(items[0]);

    // Calculate value-to-weight ratio for each item
    for (int i = 0; i < n; i++) {
        items[i].ratio = (double)items[i].value / items[i].weight;
    }

    // Solve the problem
    fractionalKnapsack(items, n, capacity);

    return 0;
}
