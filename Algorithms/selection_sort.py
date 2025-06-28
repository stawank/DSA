
import sys

def find_min(list):
    min_number = sys.float_info.max
    min_index = 0
    for num, number in enumerate(list):
        if(number< min_number):
            min_number = number
            min_index = num
        else:
            continue
        
    return min_number , min_index

def selection_sort(list):
    print(f"List before sorting: {list}")
    min_index = 0
    print(f"length of input list: {len(list)}")
    for i in range (len(list)):
        
        min_index = i
        temp_list = list[i:]
        min_number, index = find_min(temp_list)
        list[min_index] , list[index+i] = list[index+i], list[min_index]
    
    print(f"List after sorting: {list}")
        
         



def main():
    list = [34, 7, 23, -4, 0, 56, 12, 89, 3]
    print(f"minimum number in {list} is: {find_min(list)}")
    selection_sort(list)




if __name__=="__main__":
    main()