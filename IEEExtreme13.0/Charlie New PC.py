from itertools import product

def anycomb1(item1):
    return (comb for comb in product(item1))

def anycomb2(item1, item2):
    return (comb for comb in product(item1, item2))

def anycomb3(item1, item2, item3):
    return (comb for comb in product(item1, item2, item3))

def anycomb4(item1, item2, item3, item4):
    return (comb for comb in product(item1, item2, item3, item4))

def anycomb5(item1, item2, item3, item4, item5):
    return (comb for comb in product(item1, item2, item3, item4, item5))

def anycomb6(item1, item2, item3, item4, item5, item6):
    return (comb for comb in product(item1, item2, item3, item4, item5, item6))

def anycomb7(item1, item2, item3, item4, item5, item6, item7):
    return (comb for comb in product(item1, item2, item3, item4, item5, item6, item7))

def anycomb8(item1, item2, item3, item4, item5, item6, item7, item8):
    return (comb for comb in product(item1, item2, item3, item4, item5, item6, item7, item8))

def anycomb9(item1, item2, item3, item4, item5, item6, item7, item8, item9):
    return (comb for comb in product(item1, item2, item3, item4, item5, item6, item7, item8, item9))

def anycomb10(item1, item2, item3, item4, item5, item6, item7, item8, item9, item10):
    return (comb for comb in product(item1, item2, item3, item4, item5, item6, item7, item8, item9, item10))

def totalvalue(comb):
    totwt = totval = 0
    for wt in comb:
        totwt += wt
    return (totwt) if totwt <= max_cost else 0

n = int(input())

for test in range(n):
    max_cost = int(input())
    components = int(input())
    opt4each = input()
    opts = []
    for i in range(components):
        temp_opts = input().split(' ')
        temp_opts.append(str(3000000000))
        temp_opts = tuple(list(map(int, temp_opts)))
        opts.append(temp_opts)


    if(components == 1):
        bagged = max(anycomb1(opts[0]), key=totalvalue)
    elif(components == 2):
        bagged = max(anycomb2(opts[0], opts[1]), key=totalvalue)
    elif(components == 3):
        bagged = max(anycomb3(opts[0], opts[1], opts[2]), key=totalvalue)
    elif(components == 4):
        bagged = max(anycomb4(opts[0], opts[1], opts[2], opts[3]), key=totalvalue)
    elif(components == 5):
        bagged = max(anycomb5(opts[0], opts[1], opts[2], opts[3], opts[4]), key=totalvalue)
    elif(components == 6):
        bagged = max(anycomb6(opts[0], opts[1], opts[2], opts[3], opts[4], opts[5]), key=totalvalue)
    elif(components == 7):
        bagged = max(anycomb7(opts[0], opts[1], opts[2], opts[3], opts[4], opts[5], opts[6]), key=totalvalue)
    elif(components == 8):
        bagged = max(anycomb8(opts[0], opts[1], opts[2], opts[3], opts[4], opts[5], opts[6], opts[7]), key=totalvalue)
    elif(components == 9):
        bagged = max(anycomb9(opts[0], opts[1], opts[2], opts[3], opts[4], opts[5], opts[6], opts[7], opts[8]), key=totalvalue)
    elif(components == 10):
        bagged = max(anycomb10(opts[0], opts[1], opts[2], opts[3], opts[4], opts[5], opts[6], opts[7], opts[8], opts[9]), key=totalvalue)
    wt = totalvalue(bagged)
    print(wt)
