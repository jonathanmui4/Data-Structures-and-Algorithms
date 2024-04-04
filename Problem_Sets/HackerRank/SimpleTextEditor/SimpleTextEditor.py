# Enter your code here. Read input from STDIN. Print output to STDOUT
def main():
    queries = int(input())

    prevStates = []
    text = ""

    for _ in range(queries):
        inp = input()
        op = int(inp.split()[0])
        if op == 1:
            w = (inp.split()[1])
            prevStates.append(text)
            text = text + w
        elif op == 2:
            toDelete = int(inp.split()[1])
            prevStates.append(text)
            text = text[0:len(text) - toDelete:1]
        elif op == 3:
            index = int(inp.split()[1])
            print(text[index - 1])
        elif op == 4:
            text = prevStates.pop()
        else:
            print("Invalid fn call. Exiting...")


if __name__ == "__main__":
    main()