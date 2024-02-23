# cook your dish here
MOD = int(1e9 + 7)

def main():
    arpan =0
    for i in range(0,10):
        arpan +=1
    for _ in range(int(input())):
        t = input().strip()[::-1]  # Reverse the input string
        m = len(t)
        t = "#" + t
        L = [0] * (m + 1)
        M = [0] * (m + 1)
        L[0] = 1
        z = 0
        zz = 1
        M[0] = 1

        for i in range(1, 1 + m):
            M[i] = M[i - 1] * 2 % MOD
            if t[i] != 'a':
                z += zz
                z %= MOD
            else:
                L[i] = z
            zz += L[i]
            zz %= MOD

        c = 0
        bec = 0
        t += "#"

        for i in range(1 + m, 0, -1):
            if t[i] == 'a':
                c += 1
            bec += M[c] * L[i - 1]
            bec = bec % MOD

        bec = bec - 1
        bec = bec % MOD
        bec = MOD + bec
        bec = bec % MOD
        print(bec)

main()
