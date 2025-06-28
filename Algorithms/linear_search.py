

def search(array, number):
    present = False
    for num, pos in enumerate(array):
        if(num==number):
            present = True
    
    return present
    
def main():
    list = {1, 23,45,23,76,98,76,39}
    number = 23

    print(f"Does the number {number} present in list {list} ?: {search(list, number)}")



if __name__ == "__main__":
    main()