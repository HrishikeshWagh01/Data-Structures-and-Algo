def binary_search(arr,low,high,x):
   
    while(low <= high):
 
        mid = (high + low) // 2
        if(arr[mid]==x):
            low = mid + 1

        elif(arr[mid] > x):
            high = mid - 1

        else:
            low = mid + 1
    return -1

arr = [ 2, 3, 4, 10, 40 ]
key = int(input("Enter a Element : "))
result = binary_search(arr,0,len(arr)-1,key)
 
if result != -1:
    print("Element is present at index", str(result))
else:
    print("Element is not present in array")