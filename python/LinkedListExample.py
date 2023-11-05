import collections
# bukan hanya linked-list ^
# linked list juga bukan ini saja

myList = collections.deque()

myList.append('first')
myList.append(2)
myList.append('forth')

print("Elemen pada list : " + str(myList))

myList.insert(2, 'third')
myList.appendleft('zero')
print("Elemen pada list : " + str(myList))
myList.pop()
myList.popleft()
myList.remove(2)
# myList.remove(3) # bakal error
print("Elemen pada list : " + str(myList))
