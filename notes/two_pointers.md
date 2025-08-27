# Two Pointers Pattern

## Idea
Use two pointers to traverse an array efficiently instead of brute force.  
Reduces time complexity from O(n²) → O(n) in many problems.

## Main Sub-Patterns

1. Opposite Direction
   - Pointers start at opposite ends (left & right)
   - Move toward each other based on conditions
   - Use Cases: Pair Sum, Triplet Sum

2. Same Direction
   - Both pointers move forward (fast-slow or lagging style)
   - Use Cases: Remove Duplicates, Sliding Window

3. Partitions
   - Pointers divide array into regions and swap elements
   - Use Cases: Dutch National Flag problem (0s,1s,2s)

## Key Notes / Tricks

- Array must be sorted for opposite-direction problems
- Loop bounds:
  - Pairs: i < n - 1
  - Triplets: i < n - 2
- found = false → to check if solution exists
- Fix first element in triplet problems → simplifies logic
- Opposite-direction → sums/comparisons
- Same-direction → compressing arrays or moving elements
- Partition → segregate values efficiently

## Complexity

- Time: O(n) for simple 2-pointer loops, O(n²) for triplets
- Space: O(1) → only pointers are used

## Examples

- Pair Sum: Find two numbers that sum to target in a sorted array
- Triplet Sum: Find three numbers that sum to target in a sorted array
- Remove Duplicates: Move unique elements to the front
- Dutch National Flag: Partition array into 0s,1s,2s

## Notes from Today's Learning

- int n = sizeof(arr)/sizeof(arr[0]) → calculate array size
- n-2 in triplet loop → ensures enough elements left
- Fix first element → simplifies 2-pointer logic
- found = false → tracks if solution exists
- Why not fix middle/last element? → complicates pointers, first element easiest
