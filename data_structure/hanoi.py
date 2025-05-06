def hanoi(n, start, via, end):
    if n == 1:
        print(f"Move disk 1 from {start} to {end}")
        return
    hanoi(n-1, start, end, via)
    print(f"Move disk {n} from {start} to {via}")
    hanoi(n-1, via, start, end)

hanoi(4, 'A', 'B', 'C')