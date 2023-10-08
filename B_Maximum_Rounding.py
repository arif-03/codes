def maximum_rounding(x):
  """Returns the maximum possible value of x after performing the rounding operations as many times as possible."""

  current_number = x
  while True:
    # Find the least position k where the digit is less than 9.
    k = 0
    while k < len(current_number) and current_number[k] == 9:
      k += 1

    # If k is equal to the length of current_number, then we have reached the end of the number and cannot perform any more rounding operations.
    if k == len(current_number):
      break

    # If the digit at the (k-1)th position is greater than or equal to 5, then we increase the digit at the kth position by 1.
    if current_number[k - 1] >= 5:
      current_number[k] += 1

    # Otherwise, we leave the digit at the kth position unchanged.
    else:
      current_number[k] = current_number[k]

    # Replace all digits at positions less than k with zeros.
    for i in range(k):
      current_number[i] = 0

  return current_number

def main():
  """Reads input and prints output."""

  t = int(input())
  for _ in range(t):
    x = input()
    print(maximum_rounding(x))

if __name__ == "__main__":
  main()
