# cook your dish here
# Read the number of testcases
t = int(input())

# Process each testcase
for _ in range(t):
  # Read the skills of the teams and the maximum skill difference
  x, y, d = map(int, input().split())

  # Calculate the skill difference
  diff = abs(x - y)

  # Determine whether Chef will find the game interesting
  if diff <= d:
    print("Yes")
  else:
    print("No")

