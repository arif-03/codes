
with open("/home/arif/Documents/setA.txt", "r") as a:
    list1= list(map(int, a.readlines()))
    with open ("/home/arif/Documents/setB.txt", "r") as z:
        list2= list(map(int ,z.readlines()))
        output = [(a,b) for a in list1 for b in list2 if a>b]
        print("Relation R = ",output)

        mt=[[0 for i in range(4)] for j in range(4)]
for a,b in output:
    mt[a-1][b-1]=1
for x in mt:
    for e in x:
        print(e,end=' ')
    print()