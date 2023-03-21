def fibonacci_sequence(n):
    sequence = [1, 2]
    for i in range(2, n):
        sequence.append(sequence[i-1] + sequence[i-2])
    return sequence

fibonacci_numbers = fibonacci_sequence(50)
print(", ".join(str(x) for x in fibonacci_numbers))

