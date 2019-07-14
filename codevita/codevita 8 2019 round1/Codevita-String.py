all_counts=[]
def count_letters(letter,letter_count):
    if letter in letter_count:
        letter_count[letter]+=1
        all_counts.append(letter_count[letter])
    else:
        letter_count[letter]=1
        all_counts.append(1)
def calculate(str1):
    letter_count={}
    for i in range(len(str1)):
        count_letters(str1[i],letter_count)
    print(all_counts)
    testcases=int(input())
    for i in range(testcases):
        searchelement = int(input())
        print(all_counts[searchelement-1]-1)

sizeOfString=int(input())
str1=input()
calculate(str1)
