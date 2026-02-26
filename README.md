*This project has been created as part of the 42 curriculum by yael-kha.*

# push_swap

## Description

**push_swap** is a sorting algorithm project from the 42 curriculum. The goal is to sort a stack of integers using two stacks (`a` and `b`) and a limited set of operations, while minimizing the total number of operations used.

The program takes a list of integers as arguments, and outputs the shortest sequence of instructions it found to sort stack `a` in ascending order.

Available operations:
| Instruction | Description |
|-------------|-------------|
| `sa` / `sb` | Swap the top 2 elements of stack a / b |
| `ss` | `sa` and `sb` simultaneously |
| `pa` / `pb` | Push top of b to a / top of a to b |
| `ra` / `rb` | Rotate stack a / b upward (first becomes last) |
| `rr` | `ra` and `rb` simultaneously |
| `rra` / `rrb` | Reverse rotate stack a / b (last becomes first) |
| `rrr` | `rra` and `rrb` simultaneously |

### Algorithm

- **2–3 elements**: hardcoded optimal sequences
- **4–5 elements**: push the smallest element(s) to b, sort the rest, push back
- **6+ elements**: radix sort (bitwise), operating on rank indices to minimize operations

### Benchmarks

| Input size | Target (100%) | Minimum (80%) |
|------------|---------------|---------------|
| 100 numbers | < 700 ops | < 1100 ops |
| 500 numbers | ≤ 5500 ops | < 8500 ops |

---

## Instructions

### Compilation

```bash
make        # build push_swap
make clean  # remove object files
make fclean # remove object files and binary
make re     # full recompile
```

### Usage

```bash
./push_swap 3 1 2 5 4
./push_swap "3 1 2 5 4"
```

### Testing

Count operations:
```bash
ARG="3 1 2 5 4"; ./push_swap $ARG | wc -l
```

Verify correctness with the provided checker:
```bash
ARG="4 67 3 87 23"; ./push_swap $ARG | ./checker_OS $ARG
```

### Error cases

The program prints `Error` to stderr for:
- Non-integer arguments
- Values exceeding int range (`> 2147483647` or `< -2147483648`)
- Duplicate values
- Empty or whitespace-only arguments

---

## Resources

### References

- [Radix sort — Wikipedia](https://en.wikipedia.org/wiki/Radix_sort)
- [Push_swap — The least amount of moves with two stacks](https://medium.com/@jamierobertdawson/push-swap-the-least-amount-of-moves-with-two-stacks-d1e76a71789a)
- [Visualizer for push_swap](https://github.com/o-reo/push_swap_visualizer)

### AI Usage

Claude (claude.ai) was used during this project for the following tasks:

- **Understanding the algorithm**: clarifying how radix sort works on rank indices, and how to approach sorting small stacks (2–5 elements) optimally
- **Sorting logic**: helping reason through the correct sequences of operations for sort_three, and the strategy of pushing the smallest elements to b before sorting the remainder