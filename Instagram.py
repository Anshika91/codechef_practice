# cook your dish here
num_tests = int(input())

for i in range(num_tests):
  following, followers = map(int, input().split())
  if following >10 * followers:
    print("yes")
  else:
    print("no")
