import sys

def main():
    a, op, b = input().split()
    a = float(a)
    b = float(b)
    if op == '+':
        resultado = a + b
    elif op == '-':
        resultado = a - b
    elif op == '*':
        resultado = a * b
    elif op == '/':
        if b == 0:
            resultado = "ze"
        else:
            resultado = a / b
    
    if resultado == 'ze':
        print(resultado)
    else:
        print(f"{resultado:.3f}")

if __name__ == '__main__':
    main()