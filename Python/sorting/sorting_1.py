# selction sort 

list1 = [2,6,4,8,1,3,5,2]

base,current = 0,1


for x in range(base,len(list1)):
    mini = list1[base]
    print(mini)
    print(list1)
    print(current, "current")
    while current<len(list1):
        mini = min(mini, list1[current])
        if mini == list1[current]:
            curval = current
             
           
        current +=1
    # print(current, "current2")
    if list1[base]>list1[curval]:
        print(curval, "curval")
        temp = list1[base]
        print(temp, 'temp1')
        list1[base]=mini
        print(temp,'temp2')
        list1[curval] = temp
    base+=1
    current = base+1



        

print(list1)