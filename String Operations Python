str=input("Enter String : ")

def parta():
    words = str.split(' ')
    longest_word = ''
    for word in words:
        if len(word) > len(longest_word):
            longest_word = word
    print("The longest word is:", longest_word)

def partb():
    character = input("Enter Character : ")
    frequency = 0
    for x in str:
        if x == character:
            frequency += 1
    print("Frequency of this character is:", frequency)

def partc(string): 
    left_pos = 0
    right_pos = len(string) - 1

    while right_pos >= left_pos:
        if not string[left_pos] == string[right_pos]:
            return False
        left_pos += 1
        right_pos -= 1
    return True
    result = partc(str)
    if result:
        print("The string is a palindrome")
    else:
        print("The string is not a palindrome")
        
def partd():
    substring = input("Enter Substring : ")
    index = str.find(substring)
    print("The index of first appearance of the substring is:", index)

def parte():
    words = str.split(' ')
    word_dict = {}
    for word in words:
        if word in word_dict:
            word_dict[word] += 1
        else:
            word_dict[word] = 1
    for key, value in word_dict.items():
        print(key, " occurs ", value, " times.")

parta()
partb()
partc(str)
partd()
parte()

