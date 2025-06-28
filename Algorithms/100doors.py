  




def toogleByGap(List, Gap):
    for i in range(0, len(List), Gap):
        List[i] = not(List[i])
    print(List)



def main():
    doors = [False]*100
    print("Initial state: ", doors)
    for i in range(100):

        for j in range(i, 100, i+1):
            doors[j] = not(doors[j])

    print("Final state: ", doors)

    print("Doors Which are open")
    for i in range (100):
        if(doors[i]==True):
            print(i , end=", ")
    





if __name__ == "__main__":
    main()