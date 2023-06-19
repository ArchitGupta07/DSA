matrix = [[1,1,1],[1,0,1],[1,1,1]]

row = [1 for i in range(len(matrix))]
col = [1 for i in range(len(matrix[0]))]

for i in range(len(matrix)):
    for j in range(len(matrix[0])):
        if matrix[i][j]==0:
            row[i]=0
            col[j]=0


for i in range(len(matrix)):
    for j in range(len(matrix[0])):
        matrix[i][j] = matrix[i][j]*row[i]*col[j]

print(row)
print(col)
print(matrix)



# -----------------Pascal's Triangle ----------------------


numRows = 3
output = []
for i in range(numRows):
    if(i == 0):
        # Create a list to store the prev triangle value for further addition...
        # Inserting for the first row & store the prev array to the output array...
        prev = [1]
        output.append(prev)
    else:
        curr = [1]
        j = 1
        # Calculate for each of the next values...
        while(j < i):
            # Inserting the addition of the prev arry two values...
            print(prev[j], 'Archit')
            curr.append(prev[j-1] + prev[j])
            j+=1
        # Store the number 1...
        curr.append(1)
        # Store the value in the Output array...
        output.append(curr)
        # Set prev is equal to curr...
        prev = curr

print(output)