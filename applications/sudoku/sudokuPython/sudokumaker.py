import random as rand 
import sudokusolver

# A Utility Function to print the Grid 
def print_grid(arr): 
    for i in range(9): 
        for j in range(9): 
            print(arr[i][j],end=' ') 
        print() 

        
# Function to Find the entry in the Grid that is still not used 
# Searches the grid to find an entry that is still unassigned. If 
# found, the reference parameters row, col will be set the location 
# that is unassigned, and true is returned. If no unassigned entries 
# remain, false is returned. 
# 'l' is a list variable that has been passed from the solve_sudoku function 
# to keep track of incrementation of Rows and Columns 
def find_empty_location(arr,l): 
    for row in range(9): 
        for col in range(9): 
            if(arr[row][col]==0): 
                l[0]=row 
                l[1]=col 
                return True
    return False

# Returns a boolean which indicates whether any assigned entry 
# in the specified row matches the given number. 
def used_in_row(arr,row,num): 
    for i in range(9): 
        if(arr[row][i] == num): 
            return True
    return False

# Returns a boolean which indicates whether any assigned entry 
# in the specified column matches the given number. 
def used_in_col(arr,col,num): 
    for i in range(9): 
        if(arr[i][col] == num): 
            return True
    return False

# Returns a boolean which indicates whether any assigned entry 
# within the specified 3x3 box matches the given number 
def used_in_box(arr,row,col,num): 
    for i in range(3): 
        for j in range(3): 
            if(arr[i+row][j+col] == num): 
                return True
    return False

# Checks whether it will be legal to assign num to the given row,col 
# Returns a boolean which indicates whether it will be legal to assign 
# num to the given row,col location. 
def check_location_is_safe(arr,row,col,num): 
    
    # Check if 'num' is not already placed in current row, 
    # current column and current 3x3 box 
    return not used_in_row(arr,row,num) and not used_in_col(arr,col,num) and not used_in_box(arr,row - row%3,col - col%3,num) 


# Driver main function to test above functions 
if __name__=="__main__": 
    
    # creating a 2D array for the grid 
    grid = [[0 for x in range(9)] for y in range(9)]
    c=0
    while c <=4:
        i = rand.randint(0, 8)
        j = rand.randint(0, 8)
        num = rand.randint(1, 9)
        if (check_location_is_safe(grid, i, j, num)):
                grid[i][j] = num
                c+=1
    #print_grid(grid)
    sudokusolver.main(grid)

                               
